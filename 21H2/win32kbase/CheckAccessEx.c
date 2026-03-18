/*
 * XREFs of CheckAccessEx @ 0x1C002FB20
 * Callers:
 *     NtUserSetKeyboardState @ 0x1C0005830 (NtUserSetKeyboardState.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0007E58 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002DC7C (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     NtUserChangeDisplaySettings @ 0x1C00647B0 (NtUserChangeDisplaySettings.c)
 *     NtUserSetSysColors @ 0x1C00B8210 (NtUserSetSysColors.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C00E7AFE (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01580E0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1C0158800 (NtUserEnableTouchPad.c)
 *     NtUserSetDisplayConfig @ 0x1C0160660 (NtUserSetDisplayConfig.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0162240 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     <none>
 */

bool __fastcall CheckAccessEx(int *a1, int *a2, char a3)
{
  int v4; // eax
  int v5; // r9d
  int v6; // r10d
  int v7; // r8d
  bool result; // al

  result = !UIPrivelegeIsolation::fEnforce
        || (v4 = *a1, v5 = *a2, *a1 > (unsigned int)*a2)
        || v4 == v5 && ((v6 = a2[1], v7 = a1[1], v6 == -1) || v7 == v6 || v7 == -1)
        || a3
        && v4 == v5
        && (unsigned __int8)SeIsParentOfChildAppContainer(
                              (unsigned int)gSessionId,
                              (unsigned int)a1[1],
                              (unsigned int)a2[1]);
  return result;
}
