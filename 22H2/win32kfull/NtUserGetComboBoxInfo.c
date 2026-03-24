/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1C01529A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxGetComboBoxInfo @ 0x1C0152BE4 (xxxGetComboBoxInfo.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, ULONG64 a2)
{
  int v4; // r15d
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  int ComboBoxInfo; // edi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  int v14; // ebx
  __int128 v16; // [rsp+40h] [rbp-98h] BYREF
  __int64 v17; // [rsp+50h] [rbp-88h]
  int v18[16]; // [rsp+70h] [rbp-68h] BYREF

  memset(v18, 0, sizeof(v18));
  v16 = 0LL;
  v17 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v6;
    HMLockObject(v6);
    if ( PsGetCurrentProcessWow64Process(v7) )
      v8 = 0LL;
    else
      v8 = 3LL;
    if ( (v8 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[63] = v9[63];
    v18[0] = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v6, (int)v18);
    v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
    if ( (*(_BYTE *)(v11 + 224) & 1) == 0 )
    {
      v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v11 + 224) & 0x20) == 0 )
      {
        v12 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
        if ( (((unsigned __int16)(v12 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v11) >> 8)) & 0x1FF) != 0 )
          goto LABEL_26;
        v13 = *(unsigned int *)(*(_QWORD *)(v6 + 40) + 288LL);
        v14 = (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL) & 0xF) == 2 && (v13 & 0x20000000) != 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v13) & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext(v11) & 0x20000000) == 0 )
        {
          v4 = 0;
        }
        if ( v14 != v4 )
        {
LABEL_26:
          TransformRectBetweenCoordinateSpaces(&v18[5], &v18[5], 0LL, v6);
          TransformRectBetweenCoordinateSpaces(&v18[1], &v18[1], 0LL, v6);
        }
      }
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = *(_OWORD *)v18;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)&v18[4];
      *(_OWORD *)(a2 + 32) = *(_OWORD *)&v18[8];
      *(_OWORD *)(a2 + 48) = *(_OWORD *)&v18[12];
    }
    ThreadUnlock1(v11);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return ComboBoxInfo;
}
