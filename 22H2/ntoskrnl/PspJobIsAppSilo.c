/*
 * XREFs of PspJobIsAppSilo @ 0x140580F1C
 * Callers:
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x140361920 (PsIsServerSilo.c)
 */

bool __fastcall PspJobIsAppSilo(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1320) & 0x40000000) != 0 )
    return !PsIsServerSilo(a1);
  return v1;
}
