/*
 * XREFs of PspGetServerSiloStatePointer @ 0x140580FA8
 * Callers:
 *     PsStartSiloMonitor @ 0x1407C3C70 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x14090B4E0 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x14090B730 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x14090B7DC (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x14090B8E4 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1272) + 1112LL;
}
