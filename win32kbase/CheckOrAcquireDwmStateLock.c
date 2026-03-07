char __fastcall CheckOrAcquireDwmStateLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rax

  v4 = 0;
  if ( !IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
  {
    v6 = SGDGetSessionState(v5);
    if ( !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 72LL)) )
    {
      GreLockDwmState();
      return 1;
    }
  }
  return v4;
}
