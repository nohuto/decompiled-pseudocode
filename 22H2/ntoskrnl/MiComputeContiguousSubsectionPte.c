/*
 * XREFs of MiComputeContiguousSubsectionPte @ 0x14029C7FC
 * Callers:
 *     MiAdvanceVadView @ 0x14030BABC (MiAdvanceVadView.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeContiguousSubsectionPte(__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) )
    a2 = *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) - 1;
  return *(_QWORD *)(a1 + 8) + 8 * a2;
}
