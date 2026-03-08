/*
 * XREFs of MiImportOptimizationCompatibleWithDriverRelocation @ 0x140B3C2F8
 * Callers:
 *     MiHandleBootImage @ 0x140B3BA98 (MiHandleBootImage.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1402F4538 (RtlIsImageFullyRetpolined.c)
 *     MiDoesDriverProvideBaseImageImports @ 0x140B3C350 (MiDoesDriverProvideBaseImageImports.c)
 */

__int64 __fastcall MiImportOptimizationCompatibleWithDriverRelocation(__int64 a1)
{
  unsigned int v2; // ebx

  if ( (KiSpeculationFeatures & 0x40000000000LL) == 0 )
    return 1LL;
  v2 = 0;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 && !(unsigned int)RtlIsImageFullyRetpolined(*(_QWORD *)(a1 + 48)) )
    return 1LL;
  LOBYTE(v2) = (unsigned int)MiDoesDriverProvideBaseImageImports(a1) == 0;
  return v2;
}
