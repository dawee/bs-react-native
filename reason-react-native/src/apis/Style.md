---
id: apis/Style
title: Style
wip: true
---

```reason
type size;

external pt: float => size = "%identity";

let pct: float => size;

type margin = size;

[@bs.inline "auto"]
let auto: margin;

type offset;
[@bs.obj] external offset: (~height: float, ~width: float) => offset = "";

type t;

[@bs.obj]
// Layout Props (https://facebook.github.io/react-native/docs/layout-props#props)
// View Style Props https://facebook.github.io/react-native/docs/view-style-props#props
external style:
  (
    ~alignContent: [@bs.string] [
                     | [@bs.as "flex-start"] `flexStart
                     | [@bs.as "flex-end"] `flexEnd
                     | `center
                     | `stretch
                     | [@bs.as "space-around"] `spaceAround
                     | [@bs.as "space-between"] `spaceBetween
                   ]
                     =?,
    ~alignItems: [@bs.string] [
                   | [@bs.as "flex-start"] `flexStart
                   | [@bs.as "flex-end"] `flexEnd
                   | `center
                   | `stretch
                   | `baseline
                 ]
                   =?,
    ~alignSelf: [@bs.string] [
                  | [@bs.as "flex-start"] `flexStart
                  | [@bs.as "flex-end"] `flexEnd
                  | `center
                  | `stretch
                  | `baseline
                ]
                  =?,
    ~aspectRatio: float=?,
    ~backfaceVisibility: [@bs.string] [ | `visible | `hidden]=?,
    ~backgroundColor: Color.t=?,
    ~borderBottomColor: Color.t=?,
    ~borderBottomEndRadius: float=?,
    ~borderBottomLeftRadius: float=?,
    ~borderBottomRightRadius: float=?,
    ~borderBottomStartRadius: float=?,
    ~borderBottomWidth: float=?,
    ~borderColor: Color.t=?,
    ~borderEndColor: Color.t=?,
    ~borderEndWidth: float=?,
    ~borderLeftColor: Color.t=?,
    ~borderLeftWidth: float=?,
    ~borderRadius: float=?,
    ~borderRightColor: Color.t=?,
    ~borderRightWidth: float=?,
    ~borderStartColor: Color.t=?,
    ~borderStartWidth: float=?,
    ~borderStyle: [@bs.string] [ | `solid | `dotted | `dashed]=?,
    ~borderTopColor: Color.t=?,
    ~borderTopEndRadius: float=?,
    ~borderTopLeftRadius: float=?,
    ~borderTopRightRadius: float=?,
    ~borderTopStartRadius: float=?,
    ~borderTopWidth: float=?,
    ~borderWidth: float=?,
    ~bottom: size=?,
    ~direction: [@bs.string] [ | [@bs.as "inherit"] `inherit_ | `ltr | `ltr]=?,
    ~display: [@bs.string] [ | `none | `flex]=?,
    ~elevation: float=?,
    ~_end: float=?,
    ~flex: float=?,
    ~flexBasis: size=?,
    ~flexDirection: [@bs.string] [
                      | `row
                      | [@bs.as "row-reverse"] `rowReverse
                      | `column
                      | [@bs.as "column-reverse"] `columnReverse
                    ]
                      =?,
    ~flexGrow: float=?,
    ~flexShrink: float=?,
    ~flexWrap: [@bs.string] [ | `wrap | `nowrap]=?,
    ~height: size=?,
    ~justifyContent: [@bs.string] [
                       | [@bs.as "flex-start"] `flexStart
                       | [@bs.as "flex-end"] `flexEnd
                       | `center
                       | [@bs.as "space-around"] `spaceAround
                       | [@bs.as "space-between"] `spaceBetween
                       | [@bs.as "space-evenly"] `spaceEvenly
                     ]
                       =?,
    ~left: size=?,
    ~margin: size=?,
    ~marginBottom: size=?,
    ~marginEnd: size=?,
    ~marginHorizontal: size=?,
    ~marginLeft: size=?,
    ~marginRight: size=?,
    ~marginStart: size=?,
    ~marginTop: size=?,
    ~marginVertical: size=?,
    ~maxHeight: size=?,
    ~maxWidth: size=?,
    ~minHeight: size=?,
    ~minWidth: size=?,
    ~opacity: float=?,
    ~overflow: [@bs.string] [ | `visible | `hidden | `scroll]=?,
    ~padding: size=?,
    ~paddingBottom: size=?,
    ~paddingEnd: size=?,
    ~paddingHorizontal: size=?,
    ~paddingLeft: size=?,
    ~paddingRight: size=?,
    ~paddingStart: size=?,
    ~paddingTop: size=?,
    ~paddingVertical: size=?,
    ~position: [@bs.string] [ | `absolute | `relative]=?,
    ~right: size=?,
    ~start: size=?,
    ~top: size=?,
    ~width: size=?,
    ~zIndex: int=?,
    // Shadow Props (https://facebook.github.io/react-native/docs/shadow-props)
    ~shadowColor: Color.t=?,
    ~shadowOffset: offset=?,
    ~shadowOpacity: float=?,
    ~shadowRadius: float=?,
    // Transform Props (https://facebook.github.io/react-native/docs/transforms#props)
    ~transform: array(Transform.t)=?, // all other transform props are deprecated
    // Text Style Props (https://facebook.github.io/react-native/docs/text-style-props)
    ~color: Color.t=?,
    ~fontFamily: string=?,
    ~fontSize: float=?,
    ~fontStyle: [@bs.string] [ | `normal | `italic]=?,
    ~fontVariant: array(FontVariant.t)=?,
    ~fontWeight: [@bs.string] [
                   | `normal
                   | `bold
                   | [@bs.as "100"] `_100
                   | [@bs.as "200"] `_200
                   | [@bs.as "300"] `_300
                   | [@bs.as "400"] `_400
                   | [@bs.as "500"] `_500
                   | [@bs.as "600"] `_600
                   | [@bs.as "700"] `_700
                   | [@bs.as "800"] `_800
                   | [@bs.as "900"] `_900
                 ]
                   =?,
    ~includeFontPadding: bool=?,
    ~letterSpacing: float=?,
    ~lineHeight: float=?,
    ~textAlign: [@bs.string] [ | `auto | `left | `right | `center | `justify]=?,
    ~textAlignVertical: [@bs.string] [ | `auto | `top | `bottom | `center]=?,
    ~textDecorationColor: Color.t=?,
    ~textDecorationLine: [@bs.string] [
                           | `none
                           | `underline
                           | [@bs.as "line-through"] `lineThrough
                           | [@bs.as "underline line-through"]
                             `underlineLineThrough
                         ]
                           =?,
    ~textDecorationStyle: [@bs.string] [
                            | `solid
                            | `double
                            | `dotted
                            | `dashed
                          ]
                            =?,
    ~textShadowColor: Color.t=?,
    ~textShadowOffset: offset=?,
    ~textShadowRadius: float=?,
    ~textTransform: [@bs.string] [
                      | `none
                      | `uppercase
                      | `lowercase
                      | `capitalize
                    ]
                      =?,
    ~writingDirection: [@bs.string] [ | `auto | `ltr | `ltr]=?,
    // Image Style Props (https://facebook.github.io/react-native/docs/image-style-props)
    ~resizeMode: [@bs.string] [
                   | `cover
                   | `contain
                   | `stretch
                   | `repeat
                   | `center
                 ]
                   =?,
    ~overlayColor: Color.t=?,
    ~tintColor: Color.t=?,
    unit
  ) =>
  t =
  "";

/*
 <View style=array([|
   styles##thing,
   styles##whatever,
 |])>
   */
external array: array(t) => t = "%identity";

/*
 <View style=arrayOption([|
   Some(styles##thing),
   Some(styles##whatever),
   optionalStyle,
   cond ? Some({something:"dynamic"}) : None
 |])>
 */
external arrayOption: array(option(t)) => t = "%identity";

/* list works too since RN accept recursive array of styles (list are just recursive arrays)*/
/*
 <View style=list([
   styles##thing,
   styles##whatever,
 ])>
   */
external list: list(t) => t = "%identity";

/*
 <View style=listOption([
   Some(styles##thing),
   Some(styles##whatever),
   optionalStyle,
   cond ? Some({something:"dynamic"}) : None
 ])>
 */
external listOption: list(option(t)) => t = "%identity";

```
