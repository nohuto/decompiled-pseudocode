/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1C01D0BC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     xxxGetComboBoxInfo @ 0x1C02307E0 (xxxGetComboBoxInfo.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  ULONG_PTR v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  int ComboBoxInfo; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int128 v21; // [rsp+40h] [rbp-88h] BYREF
  __int64 v22; // [rsp+50h] [rbp-78h]
  __int128 v23; // [rsp+70h] [rbp-58h] BYREF
  _OWORD v24[3]; // [rsp+80h] [rbp-48h] BYREF

  memset_0(&v23, 0, 0x40uLL);
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v21;
    *((_QWORD *)&v21 + 1) = v6;
    HMLockObject(v6);
    if ( PsGetCurrentProcessWow64Process(v11, v10, v12) )
      v13 = 0LL;
    else
      v13 = 3LL;
    if ( (v13 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = *v14;
    v14[63] = v14[63];
    LODWORD(v23) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v6);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v6, CurrentThreadDpiAwarenessContext) )
    {
      TransformRectBetweenCoordinateSpaces((char *)v24 + 4, (char *)v24 + 4, 0LL, v6);
      TransformRectBetweenCoordinateSpaces((char *)&v23 + 4, (char *)&v23 + 4, 0LL, v6);
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = v23;
      *(_OWORD *)(a2 + 16) = v24[0];
      *(_OWORD *)(a2 + 32) = v24[1];
      *(_OWORD *)(a2 + 48) = v24[2];
    }
    ThreadUnlock1(v18, v17, v19);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return ComboBoxInfo;
}
