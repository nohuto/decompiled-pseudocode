_BOOL8 __fastcall GreIsCurrentProcessSystemCritical(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  BOOL v8; // esi

  if ( !*(_QWORD *)(SGDGetSessionState(a1) + 40) )
    return 0LL;
  v2 = *(_QWORD *)(SGDGetSessionState(v1) + 32) + 23520LL;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(v2);
  v4 = *(_QWORD *)(SGDGetSessionState(v3) + 32);
  v8 = *(_QWORD *)(v4 + 23496) == PsGetCurrentProcess(v6, v5, v7);
  if ( v2 )
  {
    GreReleasePushLockShared(v2);
    KeLeaveCriticalRegion();
  }
  return v8;
}
