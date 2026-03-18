/*
 * XREFs of RIMIsRunningOnDesktop @ 0x1C004FEC0
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C000465C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     UseVelocityToEnableIV @ 0x1C004FE94 (UseVelocityToEnableIV.c)
 *     RIMApiSetCheckForLegacyTouchPad @ 0x1C006D074 (RIMApiSetCheckForLegacyTouchPad.c)
 *     UpdateMouseConnectionState @ 0x1C006E868 (UpdateMouseConnectionState.c)
 *     RIMOpenDev @ 0x1C007A138 (RIMOpenDev.c)
 *     ShouldEnableInputVirtualization @ 0x1C00837F0 (ShouldEnableInputVirtualization.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0187070 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C018CC18 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1C0192B68 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0194488 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1C01B37DC (RIMApiSetValidateDeviceSignature.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIsRunningOnDesktop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 28) == 3;
}
