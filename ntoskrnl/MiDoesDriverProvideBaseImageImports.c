/*
 * XREFs of MiDoesDriverProvideBaseImageImports @ 0x140B3C350
 * Callers:
 *     MiImportOptimizationCompatibleWithDriverRelocation @ 0x140B3C2F8 (MiImportOptimizationCompatibleWithDriverRelocation.c)
 * Callees:
 *     MiDoesDriverProvideImportsForDriver @ 0x140B3C3A0 (MiDoesDriverProvideImportsForDriver.c)
 */

__int64 __fastcall MiDoesDriverProvideBaseImageImports(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)MiDoesDriverProvideImportsForDriver(a1, qword_140D81720) )
    return 1LL;
  LOBYTE(v2) = (unsigned int)MiDoesDriverProvideImportsForDriver(a1, MxHalDataTableEntry) != 0;
  return v2;
}
