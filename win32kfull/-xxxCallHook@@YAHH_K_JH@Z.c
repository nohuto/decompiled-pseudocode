__int64 __fastcall xxxCallHook(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  unsigned int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 Valid; // rcx

  v5 = a4;
  v7 = a1;
  if ( !gbInDestroyHandleTableObjects )
  {
    v8 = SGDGetUserSessionState(a1);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v8 + 8)) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL(v9)
       || !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainHookLock)
       && !tagDomLock::IsLockedShared((PERESOURCE *)gDomainHookLock)) )
    {
      __int2c();
    }
  }
  if ( (unsigned int)IsPointerInputHookCall((unsigned int)v5, a3) )
    return xxxPointerCallHook(v7, a2, a3, (unsigned int)v5, dword_1C031A904[v5]);
  v11 = SGDGetUserSessionState(v10);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v12 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v12 = *ThreadWin32Thread;
  if ( !gbInDestroyHandleTableObjects )
  {
    v15 = SGDGetUserSessionState(v14);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v15 + 8)) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL(v16)
       || !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainHookLock)
       && !tagDomLock::IsLockedShared((PERESOURCE *)gDomainHookLock)) )
    {
      __int2c();
    }
  }
  Valid = *(_QWORD *)(v12 + 8 * v5 + 928);
  if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(v12 + 464) + 8 * v5 + 48)) != 0)
    && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
  {
    Valid = PhkNextValid(Valid);
  }
  return xxxCallHook2((struct tagHOOK *)Valid, v7, a2, a3, 0LL, 0);
}
