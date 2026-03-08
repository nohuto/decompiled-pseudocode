/*
 * XREFs of KiSetSystemPriorityThread @ 0x1402E9F30
 * Callers:
 *     MiZeroInParallel @ 0x140242EB8 (MiZeroInParallel.c)
 *     KeDisconnectInterrupt @ 0x14028E38C (KeDisconnectInterrupt.c)
 *     KeConnectInterrupt @ 0x14028FA54 (KeConnectInterrupt.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmTryAcquireLock @ 0x1402D2BC8 (PpmTryAcquireLock.c)
 *     KeSetSystemPriorityThread @ 0x140574720 (KeSetSystemPriorityThread.c)
 *     MiDemoteSlabEntries @ 0x1406541E4 (MiDemoteSlabEntries.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall KiSetSystemPriorityThread(ULONG_PTR BugCheckParameter1, int a2, int a3)
{
  char v3; // di
  unsigned __int8 CurrentIrql; // si
  char v7; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = 31;
  if ( a2 <= 31 )
    v3 = a2;
  v11 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v10) = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  if ( a3 )
    *(_BYTE *)(BugCheckParameter1 + 795) = v3;
  v7 = *(_BYTE *)(v3 + BugCheckParameter1 + 824);
  if ( v7 == -1 )
    KeBugCheckEx(0x157u, BugCheckParameter1, v3, 1uLL, 0LL);
  *(_BYTE *)(v3 + BugCheckParameter1 + 824) = v7 + 1;
  *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v3;
  if ( *(char *)(BugCheckParameter1 + 195) < v3 )
    KiSetPriorityThread(BugCheckParameter1, (unsigned __int64)&v11, v3);
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), (__int64)&v11, CurrentIrql);
}
