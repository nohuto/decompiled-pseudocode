/*
 * XREFs of MiWalkEntireImagePageNeedsProcessing @ 0x140653AF8
 * Callers:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 * Callees:
 *     MiDoesPageRequireRetpolineImportFixups @ 0x140209788 (MiDoesPageRequireRetpolineImportFixups.c)
 *     MiPageHasRelocations @ 0x14069F28C (MiPageHasRelocations.c)
 */

__int64 __fastcall MiWalkEntireImagePageNeedsProcessing(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ebx
  int v7; // eax

  v4 = a2;
  if ( (a3 & 1) != 0 )
    return 1LL;
  v6 = 0;
  if ( (a3 & 0xA) != 0 )
  {
    if ( (unsigned int)MiPageHasRelocations(*(_QWORD *)(a1 + 32), a2, 1LL) )
      return 1LL;
  }
  if ( (a3 & 0x10) == 0 )
    return 0LL;
  LOBYTE(v7) = MiDoesPageRequireRetpolineImportFixups(a1, v4);
  LOBYTE(v6) = v7 != 0;
  return v6;
}
