/*
 * XREFs of HalpDpInitDiscard @ 0x140B67570
 * Callers:
 *     HalpDpInitSystem @ 0x140A8E2D0 (HalpDpInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalpDpInitDiscard(__int64 a1)
{
  __int64 Table; // rdi
  __int64 v3; // r10
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx

  Table = HalpAcpiGetTable(a1, 1413567059, 0, 0);
  v3 = HalpAcpiGetTable(a1, 1413698381, 0, 0);
  if ( Table )
  {
    v5 = Table + 48;
    v6 = Table + *(unsigned int *)(Table + 4);
    if ( Table + 50 <= v6 )
    {
      do
      {
        v7 = *(unsigned __int8 *)(v5 + 1);
        if ( (unsigned __int8)v7 < 2u )
          break;
        v8 = v5 + v7;
        if ( v5 + v7 > v6 )
          break;
        if ( *(_BYTE *)v5 == 1 && (unsigned __int8)v7 >= 0x28u )
        {
          v9 = *(_QWORD *)(v5 + 16);
          if ( (*(_BYTE *)(v5 + 28) & 3) == 3 && v9 && v9 + *(_QWORD *)(v5 + 8) - 1LL > HalpMaxHotPlugMemoryAddress )
            HalpMaxHotPlugMemoryAddress = v9 + *(_QWORD *)(v5 + 8) - 1LL;
        }
        v5 = v8;
      }
      while ( v8 + 2 <= v6 );
    }
    if ( v3 && *(_QWORD *)(v3 + 48) > HalpMaxHotPlugMemoryAddress )
      HalpMaxHotPlugMemoryAddress = *(_QWORD *)(v3 + 48);
  }
  result = HalpMaxHotPlugMemoryAddress;
  if ( HalpMaxHotPlugMemoryAddress > (unsigned __int64)HalpMaximumPhysicalMemoryAddress )
    HalpMaximumPhysicalMemoryAddress = HalpMaxHotPlugMemoryAddress;
  return result;
}
