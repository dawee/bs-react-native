[@bs.module "react-native"]
external view: ReasonReact.reactClass = "TouchableWithoutFeedback";

let make =
    (
      ~accessible=?,
      ~accessibilityLabel=?,
      ~accessibilityComponentType=?,
      ~accessibilityTraits=?,
      ~accessibilityRole=?,
      ~accessibilityStates=?,
      ~accessibilityHint=?,
      ~accessibilityIgnoresInvertColors=?,
      ~delayLongPress=?,
      ~delayPressIn=?,
      ~delayPressOut=?,
      ~disabled=?,
      ~hitSlop=?,
      ~onLayout=?,
      ~onLongPress=?,
      ~onPress=?,
      ~onPressIn=?,
      ~onPressOut=?,
      ~pressRetentionOffset=?,
      ~style=?,
      ~testID=?,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=view,
    ~props={
      "accessible": accessible,
      "accessibilityLabel": accessibilityLabel,
      "delayLongPress": delayLongPress,
      "delayPressIn": delayPressIn,
      "delayPressOut": delayPressOut,
      "disabled": disabled,
      "hitSlop": hitSlop,
      "onLayout": onLayout,
      "onLongPress": onLongPress,
      "onPress": onPress,
      "onPressIn": onPressIn,
      "onPressOut": onPressOut,
      "pressRetentionOffset": pressRetentionOffset,
      "style": style,
      "accessibilityComponentType":
        Belt.Option.map(
          accessibilityComponentType,
          Types.accessibilityComponentTypeToJs,
        ),
      "accessibilityTraits":
        Belt.Option.map(accessibilityTraits, x =>
          x |> List.map(Types.accessibilityTraitToJs) |> Array.of_list
        ),
      "accessibilityRole":
        Belt.Option.map(accessibilityRole, Types.accessibilityRoleToJs),
      "accessibilityStates":
        Belt.Option.map(accessibilityStates, x =>
          x |> List.map(Types.accessibilityStateToJs) |> Array.of_list
        ),
      "accessibilityHint": accessibilityHint,
      "accessibilityIgnoresInvertColors": accessibilityIgnoresInvertColors,
      "testID": testID,
    },
  );
