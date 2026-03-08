/*
 * XREFs of CmpGetAcpiBiosVersion @ 0x140B951E0
 * Callers:
 *     CmpSetSystemBiosInformation @ 0x140B9565C (CmpSetSystemBiosInformation.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 *     sprintf_s @ 0x1403D9BA0 (sprintf_s.c)
 */

char __fastcall CmpGetAcpiBiosVersion(__int64 a1, char *a2)
{
  __int64 Table; // rax
  unsigned int v5; // edx
  char *v6; // rcx

  Table = HalpAcpiGetTable(a1, 1413763922, 0, 0);
  if ( Table || (Table = HalpAcpiGetTable(a1, 1413763928, 0, 0)) != 0 )
  {
    v5 = 0;
    v6 = (char *)(Table + 10);
    do
    {
      if ( !*v6 )
        break;
      *a2 = *v6;
      ++v5;
      ++a2;
      ++v6;
    }
    while ( v5 < 6 );
    sprintf_s(a2, 128 - v5, " - %x", *(_DWORD *)(Table + 24));
    LOBYTE(Table) = 1;
  }
  return Table;
}
