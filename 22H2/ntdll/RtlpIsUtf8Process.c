/*
 * XREFs of RtlpIsUtf8Process @ 0x18006277C
 * Callers:
 *     RtlpDidUnicodeToOemWork @ 0x180062424 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800624D0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUnicodeToOemN @ 0x180062530 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x1800625D0 (RtlOemToUnicodeN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x180062680 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800E4FA0 (RtlConsoleMultiByteToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x1800FCCFC (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsUtf8Process(char a1)
{
  int v1; // eax

  v1 = (unsigned __int8)NlsOemCodePageIsUTF8;
  if ( !a1 )
    v1 = (unsigned __int8)NlsActiveCodePageIsUTF8;
  return v1 != 0;
}
