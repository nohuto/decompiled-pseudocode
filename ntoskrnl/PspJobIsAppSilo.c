/*
 * XREFs of PspJobIsAppSilo @ 0x1405A14F8
 * Callers:
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x140294E20 (PsIsServerSilo.c)
 */

bool __fastcall PspJobIsAppSilo(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1536) & 0x40000000) != 0 )
    return !PsIsServerSilo(a1);
  return v1;
}
