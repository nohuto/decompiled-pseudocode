void __fastcall AlpcpDestroyPort(__int64 *a1)
{
  __int64 *v2; // rdx
  __int64 **v3; // rax
  void *v4; // rdx

  if ( *a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
    v2 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v3 = (__int64 **)a1[1], *v3 != a1) )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = (__int64)v3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
    KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  }
  if ( (a1[52] & 0x200) != 0 )
  {
    v4 = (void *)a1[31];
    if ( v4 )
      ExFreeToNPagedLookasideList(&AlpcpNPLookasides, v4);
  }
}
