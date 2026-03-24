/*
 * XREFs of RtlpIsUtf8Process @ 0x1405EE580
 * Callers:
 *     RtlUpperChar @ 0x1405ED5E0 (RtlUpperChar.c)
 *     RtlUnicodeToMultiByteSize @ 0x1405EDC80 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x1405EDEA0 (RtlUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1405EDF40 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpperString @ 0x1405EE430 (RtlUpperString.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1405EE4B0 (RtlAnsiCharToUnicodeChar.c)
 *     RtlpDidUnicodeToOemWork @ 0x140678F78 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x140679000 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUnicodeToOemN @ 0x1406790D0 (RtlUnicodeToOemN.c)
 *     RtlMultiByteToUnicodeN @ 0x1406F6A10 (RtlMultiByteToUnicodeN.c)
 *     RtlMultiByteToUnicodeSize @ 0x1406F6AE0 (RtlMultiByteToUnicodeSize.c)
 *     RtlOemToUnicodeN @ 0x140760460 (RtlOemToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x140916520 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpIsUtf8Process(char a1)
{
  int v1; // eax
  unsigned __int64 v2; // rdx

  if ( a1 )
    v1 = (unsigned __int8)NlsOemCodePageIsUTF8;
  else
    v1 = (unsigned __int8)NlsActiveCodePageIsUTF8;
  if ( v1 )
    return 1;
  v2 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[4];
  if ( !v2 )
    return 0;
  if ( a1 )
    return !*(_QWORD *)(v2 + 168);
  else
    return !*(_QWORD *)(v2 + 160);
}
