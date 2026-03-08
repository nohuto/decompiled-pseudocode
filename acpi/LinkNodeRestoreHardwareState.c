/*
 * XREFs of LinkNodeRestoreHardwareState @ 0x1C005D7D8
 * Callers:
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C001FAA0 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C005D940 (LinkNodepRestoreIrqRoutingWorker.c)
 */

__int64 __fastcall LinkNodeRestoreHardwareState(__int64 a1, __int64 a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rbx

  if ( (*(unsigned __int8 (**)(void))(PmHalDispatchTable + 32))() )
    return 0LL;
  if ( (__int64 *)LinkNodeListHead == &LinkNodeListHead )
  {
    (*(void (**)(void))(PmHalDispatchTable + 40))();
    return 0LL;
  }
  Pool2 = ExAllocatePool2(64LL, 48LL, 1097884481LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 28) = -1;
  *(_QWORD *)(Pool2 + 40) = a2;
  *(_QWORD *)(Pool2 + 32) = ACPIDeviceCompleteGenericPhase;
  *(_QWORD *)Pool2 = LinkNodeListHead - 56;
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 16));
  return LinkNodepRestoreIrqRoutingWorker(*(_QWORD *)(*(_QWORD *)v5 + 600LL), 0LL, 0LL, v5);
}
