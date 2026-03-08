/*
 * XREFs of PspGetNextSilo @ 0x1406FB574
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x1402948E0 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140785F3C (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x140848CF0 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x1409A95C0 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x1409A97C0 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x1409B05A4 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1070 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x140294E20 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x1406FB6B8 (PspGetNextJob.c)
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
    if ( (*(_DWORD *)(NextJob + 1536) & 0x40000000) != 0 && (!a2 || PsIsServerSilo(NextJob)) )
      break;
    a1 = v4;
  }
  return v4;
}
