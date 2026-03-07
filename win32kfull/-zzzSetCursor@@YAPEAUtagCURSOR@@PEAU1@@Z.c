struct tagCURSOR *__fastcall zzzSetCursor(struct tagCURSOR *a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rbx
  struct tagCURSOR *v5; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v2 + 1272) & 0x8000000) != 0 )
    v2 = *(_QWORD *)(v2 + 1520);
  v4 = *(_QWORD *)(v2 + 432);
  v5 = *(struct tagCURSOR **)(v4 + 384);
  if ( v5 != a1 )
  {
    v5 = (struct tagCURSOR *)LockQCursor(v4, a1);
    if ( gpqCursor )
    {
      if ( v4 != gpqCursor )
        return v5;
    }
    else
    {
      MEMORY[0] = v4;
    }
    v12[2] = 0LL;
    v8 = gptiCurrent;
    v12[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v12;
    v12[1] = v5;
    if ( v5 )
      HMLockObject(v5);
    zzzUpdateCursorImage(v8, v5, v7);
    return (struct tagCURSOR *)ThreadUnlock1(v10, v9, v11);
  }
  return v5;
}
