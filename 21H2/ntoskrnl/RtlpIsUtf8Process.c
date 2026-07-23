/*
 * XREFs of RtlpIsUtf8Process @ 0x1406DDCE0
 * Callers:
 *     RtlpDidUnicodeToOemWork @ 0x1405F40A8 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1405F4130 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUnicodeToOemN @ 0x1405F4200 (RtlUnicodeToOemN.c)
 *     RtlMultiByteToUnicodeN @ 0x1406638C0 (RtlMultiByteToUnicodeN.c)
 *     RtlMultiByteToUnicodeSize @ 0x140663990 (RtlMultiByteToUnicodeSize.c)
 *     RtlUpperChar @ 0x1406DCD40 (RtlUpperChar.c)
 *     RtlUnicodeToMultiByteSize @ 0x1406DD3E0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x1406DD600 (RtlUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1406DD6A0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpperString @ 0x1406DDB90 (RtlUpperString.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1406DDC10 (RtlAnsiCharToUnicodeChar.c)
 *     RtlOemToUnicodeN @ 0x140761000 (RtlOemToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x140916630 (RtlIsValidOemCharacter.c)
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
