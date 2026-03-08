/*
 * XREFs of RIMIsRunningOnDesktop @ 0x1C007B004
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C0003708 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMApiSetCheckForLegacyTouchPad @ 0x1C003017C (RIMApiSetCheckForLegacyTouchPad.c)
 *     UpdateMouseConnectionState @ 0x1C0031898 (UpdateMouseConnectionState.c)
 *     IsMouseIVEnabled @ 0x1C007AFD0 (IsMouseIVEnabled.c)
 *     RIMOpenDev @ 0x1C0089058 (RIMOpenDev.c)
 *     UseVelocityToEnableIV @ 0x1C008BA44 (UseVelocityToEnableIV.c)
 *     ShouldEnableInputVirtualization @ 0x1C00982F4 (ShouldEnableInputVirtualization.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01BA8B0 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1C01C0898 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1C01E1A0C (RIMApiSetValidateDeviceSignature.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIsRunningOnDesktop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 28) == 3;
}
