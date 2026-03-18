/*
 * XREFs of PspIsSiloInServerSilo @ 0x1405E009C
 * Callers:
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 */

bool __fastcall PspIsSiloInServerSilo(__int64 a1)
{
  return PsGetEffectiveServerSilo(a1) != 0;
}
