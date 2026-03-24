/*
 * XREFs of CheckAccessEx @ 0x1C0044418
 * Callers:
 *     NtUserSetSysColors @ 0x1C000D5C0 (NtUserSetSysColors.c)
 *     NtUserChangeDisplaySettings @ 0x1C0018E30 (NtUserChangeDisplaySettings.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C00442C4 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00ADF68 (_anonymous_namespace_--ValidateUIPI.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C012DCB0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1C012E0C0 (NtUserEnableTouchPad.c)
 *     NtUserSetDisplayConfig @ 0x1C0133700 (NtUserSetDisplayConfig.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C01347E0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0182BC4 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
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
