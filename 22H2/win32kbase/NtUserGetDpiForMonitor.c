/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C0010BE0
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0010A40 (DrvGetCurrentDpiInfoFromHDev.c)
 *     HMValidateSharedHandle @ 0x1C0010E18 (HMValidateSharedHandle.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002BEF4 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnterSharedCrit @ 0x1C00372A0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     EngMulDiv @ 0x1C00718C0 (EngMulDiv.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     UserSetLastStatus @ 0x1C01D1D38 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, int a2, INT *a3, INT *a4)
{
  INT v6; // esi
  INT v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  int v11; // r15d
  int CurrentThreadDpiAwarenessContext; // ecx
  unsigned __int16 v13; // cx
  _DWORD *v14; // rdx
  ULONG64 v15; // rcx
  _DWORD *v16; // rdx
  INT v18; // edi
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  INT v22; // edx
  INT v23; // ebx
  __int64 v24; // rcx
  INT v25; // edx
  INT v26; // ebx
  INT v27; // eax
  INT v28[28]; // [rsp+30h] [rbp-98h] BYREF

  v6 = 0;
  v7 = 0;
  EnterSharedCrit(0LL, 1LL);
  v8 = HMValidateSharedHandle(a1);
  v9 = v8;
  if ( !v8 || (v10 = *(_QWORD *)(v8 + 232)) == 0 )
  {
    v11 = 0;
    UserSetLastError(6LL);
    goto LABEL_15;
  }
  if ( a2 )
  {
    v18 = 96;
    memset(v28, 0, 0x60uLL);
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v10, (__int64)v28);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v11 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_15;
    }
    v11 = 1;
    if ( a2 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
      {
        v6 = v28[10];
        v7 = v28[11];
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
        {
          v22 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v21) + 284);
          v18 = v22;
        }
        else
        {
          v22 = 96;
        }
        v23 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 64LL);
        v6 = EngMulDiv(v28[10], v22, v23);
        v7 = EngMulDiv(v28[11], v18, v23);
      }
      if ( (v28[23] & 1) != 0 || (v28[23] & 2) != 0 || !v6 )
      {
        v7 = 0;
        v6 = 0;
        UserSetLastError(50LL);
        v11 = 0;
      }
      goto LABEL_24;
    }
    if ( a2 == 1 )
    {
      if ( !v28[14] || (v28[23] & 2) != 0 )
      {
        v7 = 96;
        v6 = 96;
      }
      else
      {
        v6 = EngMulDiv(v28[14], 96, 100);
        v7 = EngMulDiv(v28[15], 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v25 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v24) + 284);
        v18 = v25;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
          goto LABEL_24;
        v25 = 96;
      }
      v26 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 64LL);
      v6 = EngMulDiv(v6, v25, v26);
      v7 = EngMulDiv(v7, v18, v26);
    }
LABEL_24:
    if ( SLOBYTE(v28[23]) < 0 )
    {
      v27 = v7;
      v7 = v6;
      v6 = v27;
    }
    goto LABEL_10;
  }
  v11 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0 )
      v13 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 68LL);
    else
      v13 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 64LL);
    v6 = v13;
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
  {
    v6 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v20) + 284);
  }
  else
  {
    v6 = 96;
  }
  v7 = v6;
LABEL_10:
  v14 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v14 = (_DWORD *)MmUserProbeAddress;
  *v14 = *v14;
  v15 = MmUserProbeAddress;
  v16 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v16 = (_DWORD *)MmUserProbeAddress;
  *v16 = *v16;
  *a3 = v6;
  *a4 = v7;
LABEL_15:
  UserSessionSwitchLeaveCrit(v15);
  return v11;
}
