/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C01F8790
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _GetAltTabInfo @ 0x1C01F3784 (_GetAltTabInfo.c)
 *     GetLogicalDpiFromMonitor @ 0x1C01F6638 (GetLogicalDpiFromMonitor.c)
 */

__int64 __fastcall NtUserGetAltTabInfo(__int64 a1, int a2, ULONG64 a3, volatile void *a4, ULONG a5, int a6)
{
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  _BYTE *v16; // rdx
  SIZE_T v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r10
  INT LogicalDpiFromMonitor; // ebx
  INT v27; // r9d
  INT v28; // edi
  int AltTabInfo; // [rsp+30h] [rbp-A8h]
  __int128 v31; // [rsp+68h] [rbp-70h] BYREF
  INT a[4]; // [rsp+78h] [rbp-60h]
  __int64 v33; // [rsp+88h] [rbp-50h] BYREF

  v31 = 0LL;
  *(_OWORD *)a = 0LL;
  v33 = 0LL;
  v10 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
      AltTabInfo = 0;
      goto LABEL_36;
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 || (struct tagWND *)v14 == gspwndAltTab )
  {
    if ( PsGetCurrentProcessWow64Process(v12) )
      v15 = 0LL;
    else
      v15 = 3LL;
    if ( (v15 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v16 = (_BYTE *)MmUserProbeAddress;
    *v16 = *v16;
    v16[39] = v16[39];
    v17 = a5;
    if ( !a6 )
      v17 = 2LL * a5;
    ProbeForWrite(a4, v17, 2u);
    if ( *(_DWORD *)a3 == 40 )
    {
      LODWORD(v31) = 40;
      AltTabInfo = GetAltTabInfo(a2, (__int64)&v31, (__int64)a4, a5, a6);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v20);
      if ( v14 )
      {
        v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v12 + 224) & 1) == 0 )
        {
          v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
          if ( (*(_BYTE *)(v12 + 224) & 0x20) == 0 )
          {
            v22 = *(_QWORD *)(v14 + 40);
            v23 = *(_DWORD *)(v22 + 288);
            if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v23 >> 8)) & 0x1FF) != 0 )
              goto LABEL_31;
            v12 = (v23 & 0xF) == 2 && (v23 & 0x20000000) != 0;
            if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 || (CurrentThreadDpiAwarenessContext & 0x20000000) == 0 )
              v10 = 0;
            if ( (_DWORD)v12 != v10 )
            {
LABEL_31:
              v24 = ValidateHmonitorNoRip(*(_QWORD *)(v22 + 256));
              if ( v24 )
              {
                GetLogicalDpiFromMonitor(v24, CurrentThreadDpiAwarenessContext);
                LogicalDpiFromMonitor = (unsigned __int16)GetLogicalDpiFromMonitor(
                                                            v25,
                                                            *(_DWORD *)(*(_QWORD *)(v14 + 40) + 288LL));
                v28 = v27;
                a[2] = EngMulDiv(a[2], v27, LogicalDpiFromMonitor);
                a[3] = EngMulDiv(a[3], v28, LogicalDpiFromMonitor);
              }
              TransformPointBetweenCoordinateSpaces(&v33, &v33, 0LL, v14);
            }
          }
        }
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = v31;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)a;
        *(_QWORD *)(a3 + 32) = v33;
      }
    }
    else
    {
      UserSetLastError(87LL, v18, v19);
      AltTabInfo = 0;
    }
  }
  else
  {
    AltTabInfo = 0;
    UserSetLastError(1400LL, v11, v13);
  }
LABEL_36:
  UserSessionSwitchLeaveCrit(v12);
  return AltTabInfo;
}
