/*
 * XREFs of PspGetNextSilo @ 0x140617AF0
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x1402C28C0 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140797FD0 (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x1407C3C70 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x140905A30 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x140905BF4 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x14090A9F4 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x14090B4E0 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x140362250 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x140617C40 (PspGetNextJob.c)
 */

void *__fastcall PspGetNextSilo(void *a1, char a2)
{
  __int64 NextJob; // rax
  void *v4; // r8

  while ( 1 )
  {
    NextJob = PspGetNextJob(a1);
    v4 = (void *)NextJob;
    if ( !NextJob )
      return 0LL;
    if ( (*(_DWORD *)(NextJob + 1320) & 0x40000000) != 0 && (!a2 || PsIsServerSilo(NextJob)) )
      break;
    a1 = v4;
  }
  return v4;
}
