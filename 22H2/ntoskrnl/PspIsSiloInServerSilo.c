/*
 * XREFs of PspIsSiloInServerSilo @ 0x140580F00
 * Callers:
 *     NtQueryInformationJobObject @ 0x140616CE0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140361880 (PsGetEffectiveServerSilo.c)
 */

bool __fastcall PspIsSiloInServerSilo(__int64 a1)
{
  return PsGetEffectiveServerSilo(a1) != 0;
}
