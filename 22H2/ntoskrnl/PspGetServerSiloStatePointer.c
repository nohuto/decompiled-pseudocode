/*
 * XREFs of PspGetServerSiloStatePointer @ 0x140580EE8
 * Callers:
 *     PsStartSiloMonitor @ 0x1407C4430 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x14090B530 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x14090B780 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x14090B82C (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x14090B934 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1272) + 1112LL;
}
