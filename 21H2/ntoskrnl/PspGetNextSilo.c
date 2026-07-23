/*
 * XREFs of PspGetNextSilo @ 0x140681750
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140240D60 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1407981D0 (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x1407C4190 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x140905B90 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x140905D54 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x14090B640 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x1402F70B0 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x1406818A0 (PspGetNextJob.c)
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
