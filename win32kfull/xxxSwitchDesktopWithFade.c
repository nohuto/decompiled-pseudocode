// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSwitchDesktopWithFade(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  int v5; // r13d
  __int64 v6; // rbx
  unsigned int v9; // esi
  int v10; // r15d
  HANDLE CurrentProcessId; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx
  unsigned int v15; // r14d
  int v17; // eax
  __int64 ThreadWin32Thread; // rax
  int v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+28h] [rbp-28h] BYREF
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  unsigned int v24; // [rsp+90h] [rbp+40h] BYREF

  v5 = 0;
  v24 = 0;
  v6 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v22 = 0LL;
  v9 = 0;
  v10 = 0;
  v21 = 0LL;
  CurrentProcessId = PsGetCurrentProcessId();
  v12 = gpidLogon;
  if ( CurrentProcessId != (HANDLE)gpidLogon )
    return 3221225506LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( a2 )
  {
    if ( grpdeskRitInput )
    {
      v12 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v12 + 64) & 1) != 0 )
      {
        v12 = **(_QWORD **)(grpdeskRitInput + 8LL);
        if ( (*(_DWORD *)(v12 + 64) & 1) != 0 )
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
    v17 = PrepareGammaRampData(&v24, &v20, &v19);
    v6 = v20;
    if ( v17 >= 0 )
      PushW32ThreadLock(v20, &v21, (__int64)RestoreGammaRamp);
    v9 = v24;
  }
  if ( !v19 )
  {
LABEL_8:
    v13 = a4 >> 1;
  }
  else
  {
    v13 = a4 >> 1;
    UserSessionSwitchLeaveCrit(v12);
    FadeDesktop(v9, v6, v13, 0LL);
    v5 = 1;
    EnterCrit(1LL, 0LL);
  }
  v15 = xxxSwitchDesktop(a1, a2, 0, a5);
  if ( v5 )
  {
    UserSessionSwitchLeaveCrit(v14);
    FadeDesktop(v9, v6, v13, 1LL);
    EnterCrit(1LL, 0LL);
  }
  if ( v6 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v21;
    RestoreGammaRamp(v20);
  }
  if ( v10 )
    gfIsFadingInProgress = 0;
  return v15;
}
