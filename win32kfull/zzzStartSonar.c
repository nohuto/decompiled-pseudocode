HDC __fastcall zzzStartSonar(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  HDC result; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v9; // [rsp+38h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(gpsi + 4960LL);
  *(_QWORD *)(SGDGetUserSessionState(a1) + 15968) = v1;
  if ( gfade[12] )
  {
    StopFade();
    *(_DWORD *)(SGDGetUserSessionState(v3) + 15964) = -1;
  }
  v4 = SGDGetUserSessionState(v2);
  v9.left = *(_DWORD *)(v4 + 15968) - 100;
  v9.right = *(_DWORD *)(v4 + 15968) + 100;
  v9.top = *(_DWORD *)(v4 + 15972) - 100;
  v9.bottom = *(_DWORD *)(v4 + 15972) + 100;
  *(_DWORD *)(SGDGetUserSessionState((unsigned int)v9.top) + 15964) = 100;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v5);
  result = CreateFadeInternal(0LL, &v9, 0x3E8u, 192, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar(result);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v8);
    zzzStartFade();
    zzzAnimateFade();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v8);
    return (HDC)1;
  }
  return result;
}
