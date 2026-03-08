/*
 * XREFs of ACPIBuildPowerResourceRequest @ 0x1C000E0EC
 * Callers:
 *     OSNotifyCreatePowerResource @ 0x1C0032A14 (OSNotifyCreatePowerResource.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 */

__int64 __fastcall ACPIBuildPowerResourceRequest(__int64 a1)
{
  PVOID v2; // rax
  __int64 v3; // rbx
  __int64 *v5; // rax

  v2 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  v3 = (__int64)v2;
  if ( !v2 )
    return 3221225626LL;
  memset(v2, 0, 0x88uLL);
  *(_DWORD *)(v3 + 16) = 1599293264;
  *(_QWORD *)(v3 + 128) = &AcpiBuildPowerResourceList;
  *(_DWORD *)(v3 + 24) = 3;
  *(_QWORD *)(v3 + 40) = a1;
  *(_DWORD *)(v3 + 20) = 4096;
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  if ( AcpiTableLoadDelta )
    *(_DWORD *)(v3 + 20) |= 0x40u;
  v5 = (__int64 *)qword_1C006F4B8;
  if ( *(__int64 **)qword_1C006F4B8 != &AcpiBuildQueueList )
    __fastfail(3u);
  *(_QWORD *)v3 = &AcpiBuildQueueList;
  *(_QWORD *)(v3 + 8) = v5;
  *v5 = v3;
  qword_1C006F4B8 = v3;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  return 259LL;
}
