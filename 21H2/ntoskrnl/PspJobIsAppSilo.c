/*
 * XREFs of PspJobIsAppSilo @ 0x1405E00B8
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020A400 (PsIsServerSilo.c)
 */

bool __fastcall PspJobIsAppSilo(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1512) & 0x40000000) != 0 )
    return !PsIsServerSilo(a1);
  return v1;
}
