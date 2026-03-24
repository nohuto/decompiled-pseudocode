/*
 * XREFs of KzSetIrqlUnsafe @ 0x140512B80
 * Callers:
 *     KiChainedDispatch @ 0x1403FEC40 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1403FF030 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403FF210 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FF360 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403FF4B0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x1403FF5C0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403FF9B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FFDA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400190 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140400580 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404011C0 (KxIsrLinkage.c)
 *     KiIdleLoop @ 0x140401FD0 (KiIdleLoop.c)
 *     KiApcInterrupt @ 0x140402570 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140403B30 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140403F30 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x140404320 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140404480 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1404045E0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140404D10 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405370 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140405A40 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x14040A440 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14040E1C0 (KiMcheckAbort.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int8 __fastcall KzSetIrqlUnsafe(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v3; // cl
  struct _KPRCB *v4; // rax
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > a1 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && a1 <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (a1 + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v1);
  }
  else
  {
    v3 = KeGetCurrentIrql();
    __writecr8(v1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v3 <= 0xFu && (unsigned __int8)(v1 - 2) <= 0xDu )
    {
      v4 = KeGetCurrentPrcb();
      *((_DWORD *)v4->SchedulerAssist + 5) |= ((1LL << ((unsigned __int8)v1 + 1)) - 1) & ~((1LL << (v3 + 1)) - 1) & 0xFFFFFFFC;
    }
  }
  return CurrentIrql;
}
