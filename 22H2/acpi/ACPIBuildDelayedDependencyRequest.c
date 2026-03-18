/*
 * XREFs of ACPIBuildDelayedDependencyRequest @ 0x1C000BD28
 * Callers:
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000F930 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00124A0 (ACPIBuildProcessThermalZoneCheckType.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 */

__int64 __fastcall ACPIBuildDelayedDependencyRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  PVOID v5; // rax
  __int64 v6; // rbx
  __int64 *v8; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v5 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  v6 = (__int64)v5;
  if ( !v5 )
    return 3221225626LL;
  memset(v5, 0, 0x88uLL);
  *(_QWORD *)(v6 + 40) = v2;
  *(_QWORD *)(v6 + 128) = &AcpiBuildDelayedDependencyList;
  *(_DWORD *)(v6 + 20) = 4096;
  *(_DWORD *)(v6 + 16) = 1599293264;
  *(_DWORD *)(v6 + 24) = 3;
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  *(_DWORD *)(a1 + 20) |= 0x1000u;
  *(_QWORD *)(a1 + 128) = a2;
  *(_QWORD *)(v6 + 80) = a1;
  v8 = (__int64 *)qword_1C006F4B8;
  if ( *(__int64 **)qword_1C006F4B8 != &AcpiBuildQueueList )
    __fastfail(3u);
  AcpiBuildDpcFlags |= 2u;
  *(_QWORD *)v6 = &AcpiBuildQueueList;
  *(_QWORD *)(v6 + 8) = v8;
  *v8 = v6;
  qword_1C006F4B8 = v6;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  return 259LL;
}
