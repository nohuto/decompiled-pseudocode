/*
 * XREFs of xxxSwitchDesktopWithFade @ 0x1C00B444C
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C00B4300 (NtUserSwitchDesktop.c)
 * Callees:
 *     PrepareGammaRampData @ 0x1C003ED50 (PrepareGammaRampData.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     RestoreGammaRamp @ 0x1C00B45D0 (RestoreGammaRamp.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     FadeDesktop @ 0x1C01BE950 (FadeDesktop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSwitchDesktopWithFade(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  int v5; // r13d
  unsigned int *v6; // rbx
  unsigned int v9; // esi
  int v10; // r15d
  HANDLE CurrentProcessId; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r14d
  int v23; // eax
  __int64 ThreadWin32Thread; // rax
  int v25; // [rsp+20h] [rbp-30h] BYREF
  unsigned int *v26; // [rsp+28h] [rbp-28h] BYREF
  __int128 v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h]
  unsigned int v30; // [rsp+90h] [rbp+40h] BYREF

  v5 = 0;
  v30 = 0;
  v6 = 0LL;
  v25 = 0;
  v26 = 0LL;
  v28 = 0LL;
  v9 = 0;
  v10 = 0;
  v27 = 0LL;
  CurrentProcessId = PsGetCurrentProcessId();
  v13 = gpidLogon;
  if ( CurrentProcessId != (HANDLE)gpidLogon )
    return 3221225506LL;
  v14 = grpdeskRitInput;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  v15 = 1LL;
  if ( a2 )
  {
    if ( grpdeskRitInput )
    {
      v13 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v13 + 64) & 1) != 0 )
      {
        v13 = **(_QWORD **)(grpdeskRitInput + 8LL);
        if ( (*(_DWORD *)(v13 + 64) & 1) != 0 )
        {
          if ( a5 )
            goto LABEL_8;
        }
      }
    }
  }
  if ( !gfIsFadingInProgress )
  {
    gfIsFadingInProgress = 1;
    v10 = 1;
    v23 = PrepareGammaRampData(&v30, &v26, &v25);
    v6 = v26;
    if ( v23 >= 0 )
      PushW32ThreadLock((__int64)v26, &v27, (__int64)RestoreGammaRamp);
    v9 = v30;
  }
  if ( !v25 )
  {
LABEL_8:
    v16 = a4 >> 1;
  }
  else
  {
    v16 = a4 >> 1;
    UserSessionSwitchLeaveCrit(v13, v14, v15, v12);
    FadeDesktop(v9, v6, v16, 0LL);
    v5 = 1;
    EnterCrit(1LL, 0LL);
  }
  v21 = xxxSwitchDesktop(a1, a2, 0);
  if ( v5 )
  {
    UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
    FadeDesktop(v9, v6, v16, 1LL);
    EnterCrit(1LL, 0LL);
  }
  if ( v6 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v27;
    RestoreGammaRamp(v26);
  }
  if ( v10 )
    gfIsFadingInProgress = 0;
  return v21;
}
