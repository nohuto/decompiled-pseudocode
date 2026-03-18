/*
 * XREFs of PspGetNextSilo @ 0x14068A6A0
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14020B000 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406D520C (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x140852D60 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x1409AB6D0 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x1409AB8A0 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1B50 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020A400 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x14068A6EC (PspGetNextJob.c)
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
    if ( (*(_DWORD *)(NextJob + 1512) & 0x40000000) != 0 && (!a2 || PsIsServerSilo(NextJob)) )
      break;
    a1 = v4;
  }
  return v4;
}
