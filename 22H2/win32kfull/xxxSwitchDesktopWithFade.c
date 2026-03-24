/*
 * XREFs of xxxSwitchDesktopWithFade @ 0x1C011D7D0
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C00283B0 (NtUserSwitchDesktop.c)
 * Callees:
 *     FadeDesktop @ 0x1C00285C0 (FadeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     RestoreGammaRamp @ 0x1C011D9E0 (RestoreGammaRamp.c)
 *     PrepareGammaRampData @ 0x1C011DA70 (PrepareGammaRampData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSwitchDesktopWithFade(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  int v5; // esi
  unsigned int *v6; // rbx
  unsigned int v9; // r14d
  int v10; // r13d
  unsigned int v11; // edi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 ThreadWin32Thread; // rax
  int v17; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v18; // [rsp+38h] [rbp-28h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  unsigned int v22; // [rsp+A0h] [rbp+40h] BYREF

  v5 = 0;
  v22 = 0;
  v6 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v20 = 0LL;
  v9 = 0;
  v10 = 0;
  v19 = 0LL;
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 3221225506LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (!a2
     || !grpdeskRitInput
     || (*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1) == 0
     || (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0
     || !a5)
    && !gfIsFadingInProgress )
  {
    gfIsFadingInProgress = 1;
    v10 = 1;
    v13 = PrepareGammaRampData(&v22, &v18, &v17);
    v6 = v18;
    if ( v13 >= 0 )
      PushW32ThreadLock((__int64)v18, &v19, (__int64)RestoreGammaRamp);
    if ( v17 )
    {
      v5 = 1;
      if ( gdwInAtomicOperation )
      {
        v14 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v14);
      v9 = v22;
      FadeDesktop(v22, v6, a4 >> 1, 0);
      EnterCrit(0LL, 1LL);
    }
    else
    {
      v9 = v22;
    }
  }
  v11 = xxxSwitchDesktop(a1, a2, 0);
  if ( v5 )
  {
    v15 = gdwInAtomicOperation;
    if ( gdwInAtomicOperation )
    {
      v15 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v15);
    FadeDesktop(v9, v6, a4 >> 1, 1);
    EnterCrit(0LL, 1LL);
  }
  if ( v6 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v19;
    RestoreGammaRamp(v18);
  }
  if ( v10 )
    gfIsFadingInProgress = 0;
  return v11;
}
