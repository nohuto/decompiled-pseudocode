/*
 * XREFs of MiVaIsUltra @ 0x14033E4C0
 * Callers:
 *     MiZeroPageWorkMapping @ 0x1402EDC7C (MiZeroPageWorkMapping.c)
 *     MiTranslatePageForCopy @ 0x14030C534 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x14033DEB0 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140C4EBF8 && a1 >= qword_140C4EBF8 && a1 < qword_140C4EBF8 + (BitMapHeader.SizeOfBitMap << 30);
}
