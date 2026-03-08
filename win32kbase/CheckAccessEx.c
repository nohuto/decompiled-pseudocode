/*
 * XREFs of CheckAccessEx @ 0x1C0016FB0
 * Callers:
 *     NtUserSetKeyboardState @ 0x1C0009040 (NtUserSetKeyboardState.c)
 *     NtUserSetSysColors @ 0x1C0017020 (NtUserSetSysColors.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C00F1DF6 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     NtUserChangeDisplaySettings @ 0x1C016D440 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C016E700 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1C016ECE0 (NtUserEnableTouchPad.c)
 *     NtUserSetDisplayConfig @ 0x1C0176190 (NtUserSetDisplayConfig.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0177910 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01FDB10 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0231A3C (_anonymous_namespace_--ValidateUIPI.c)
 * Callees:
 *     <none>
 */

bool __fastcall CheckAccessEx(int *a1, unsigned int *a2, __int64 a3)
{
  char v3; // r11
  int v4; // eax
  __int64 v5; // r9
  unsigned int v6; // r10d
  unsigned int v8; // ebx
  unsigned int v9; // edi
  unsigned int *v10; // rax

  v3 = a3;
  if ( !UIPrivelegeIsolation::fEnforce )
    return 1;
  v4 = *a1;
  v5 = *a2;
  if ( *a1 > (unsigned int)v5 )
    return 1;
  if ( v4 == (_DWORD)v5 )
  {
    a3 = (unsigned int)a1[1];
    v6 = a2[1];
    if ( (_DWORD)a3 == v6 || v6 == -1 || (_DWORD)a3 == -1 )
      return 1;
  }
  if ( !v3 || v4 != (_DWORD)v5 )
    return 0;
  v8 = a2[1];
  v9 = a1[1];
  v10 = (unsigned int *)SGDGetUserSessionState(a1, a2, a3, v5);
  return (unsigned __int8)SeIsParentOfChildAppContainer(*v10, v9, v8) != 0;
}
