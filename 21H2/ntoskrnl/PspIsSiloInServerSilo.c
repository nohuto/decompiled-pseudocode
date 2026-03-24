/*
 * XREFs of PspIsSiloInServerSilo @ 0x140580FC0
 * Callers:
 *     NtQueryInformationJobObject @ 0x140616880 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1403621B0 (PsGetEffectiveServerSilo.c)
 */

bool __fastcall PspIsSiloInServerSilo(__int64 a1)
{
  return PsGetEffectiveServerSilo(a1) != 0;
}
