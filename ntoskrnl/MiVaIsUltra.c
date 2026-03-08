/*
 * XREFs of MiVaIsUltra @ 0x14036448C
 * Callers:
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiZeroPageWorkMapping @ 0x1402FD0C4 (MiZeroPageWorkMapping.c)
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( qword_140C68178 )
  {
    if ( a1 >= qword_140C68178 )
      return a1 < qword_140C68178 + (qword_140C68188 << 30);
  }
  return result;
}
