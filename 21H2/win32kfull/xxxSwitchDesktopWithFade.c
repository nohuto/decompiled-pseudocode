/*
 * XREFs of xxxSwitchDesktopWithFade @ 0x1C01137BC
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C0113670 (NtUserSwitchDesktop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     RestoreGammaRamp @ 0x1C0113940 (RestoreGammaRamp.c)
 *     PrepareGammaRampData @ 0x1C01139A0 (PrepareGammaRampData.c)
 *     FadeDesktop @ 0x1C01E3E90 (FadeDesktop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSwitchDesktopWithFade(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  int v5; // r15d
  unsigned int v6; // r14d
  __int64 v7; // rdi
  int v8; // r13d
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // esi
  int v15; // eax
  __int64 v16; // rcx
  __int64 ThreadWin32Thread; // rax
  int v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h] BYREF
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  unsigned int v23; // [rsp+90h] [rbp+40h] BYREF

  v5 = 0;
  v23 = 0;
  v6 = 0;
  v19 = 0LL;
  v7 = 0LL;
  v18 = 0;
  v8 = 0;
  v21 = 0LL;
  v20 = 0LL;
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
    v8 = 1;
    v15 = PrepareGammaRampData(&v23, &v19, &v18);
    v7 = v19;
    if ( v15 >= 0 )
      PushW32ThreadLock(v19, &v20, (__int64)RestoreGammaRamp);
    if ( v18 )
    {
      v5 = 1;
      UserSessionSwitchLeaveCrit(v16);
      v6 = v23;
      v11 = a4 >> 1;
      FadeDesktop(v23, v7, v11, 0LL);
      EnterCrit(1LL, 0LL);
      goto LABEL_9;
    }
    v6 = v23;
  }
  v11 = a4 >> 1;
LABEL_9:
  v13 = xxxSwitchDesktop(a1, a2, 0);
  if ( v5 )
  {
    UserSessionSwitchLeaveCrit(v12);
    FadeDesktop(v6, v7, v11, 1LL);
    EnterCrit(1LL, 0LL);
  }
  if ( v7 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v20;
    RestoreGammaRamp(v19);
  }
  if ( v8 )
    gfIsFadingInProgress = 0;
  return v13;
}
