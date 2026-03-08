/*
 * XREFs of AlpcpDestroyPort @ 0x140717B30
 * Callers:
 *     AlpcpDeletePort @ 0x140714C40 (AlpcpDeletePort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 */

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
