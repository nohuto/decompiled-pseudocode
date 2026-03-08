/*
 * XREFs of PspGetServerSiloStatePointer @ 0x1405A14C4
 * Callers:
 *     PsStartSiloMonitor @ 0x140848CF0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1070 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x1409B12C8 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x1409B1374 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1409B147C (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1488) + 1304LL;
}
