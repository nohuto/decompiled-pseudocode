/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1C0141BC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxGetComboBoxInfo @ 0x1C0141DCC (xxxGetComboBoxInfo.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  ULONG_PTR v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  _BYTE *v8; // rdx
  int ComboBoxInfo; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v16; // [rsp+40h] [rbp-98h] BYREF
  __int64 v17; // [rsp+50h] [rbp-88h]
  _OWORD v18[4]; // [rsp+70h] [rbp-68h] BYREF

  memset(v18, 0, sizeof(v18));
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v5;
    HMLockObject(v5);
    if ( PsGetCurrentProcessWow64Process(v6) )
      v7 = 0LL;
    else
      v7 = 3LL;
    if ( (v7 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[63] = v8[63];
    LODWORD(v18[0]) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v5);
    v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
    if ( (*(_BYTE *)(v11 + 224) & 1) == 0 )
    {
      v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v11 + 224) & 0x20) == 0 )
      {
        v13 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 288LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11, v10);
        v11 = 511LL;
        if ( (((unsigned __int16)(v13 >> 8) ^ (unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8)) & 0x1FF) != 0 )
        {
          TransformRectBetweenCoordinateSpaces((char *)&v18[1] + 4, (char *)&v18[1] + 4, 0LL, v5);
          TransformRectBetweenCoordinateSpaces((char *)v18 + 4, (char *)v18 + 4, 0LL, v5);
        }
      }
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = v18[0];
      *(_OWORD *)(a2 + 16) = v18[1];
      *(_OWORD *)(a2 + 32) = v18[2];
      *(_OWORD *)(a2 + 48) = v18[3];
    }
    ThreadUnlock1(v11, v10, v12);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return ComboBoxInfo;
}
