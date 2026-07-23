/*
 * XREFs of PspGetServerSiloStatePointer @ 0x1405811E8
 * Callers:
 *     PsStartSiloMonitor @ 0x1407C4190 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x14090B640 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x14090B890 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x14090B93C (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x14090BA44 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1272) + 1112LL;
}
