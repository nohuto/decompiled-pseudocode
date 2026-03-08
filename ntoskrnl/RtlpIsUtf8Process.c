/*
 * XREFs of RtlpIsUtf8Process @ 0x1406EA7A0
 * Callers:
 *     RtlAnsiCharToUnicodeChar @ 0x1406EA670 (RtlAnsiCharToUnicodeChar.c)
 *     RtlUpperString @ 0x1407565B0 (RtlUpperString.c)
 *     RtlUpperChar @ 0x14075DD40 (RtlUpperChar.c)
 *     RtlGenerate8dot3Name @ 0x1407684A0 (RtlGenerate8dot3Name.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x14079FA50 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlpDidUnicodeToOemWork @ 0x14079FF20 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x14079FFE0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1407A00A0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeToMultiByteSize @ 0x1407A35C0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x1407A3650 (RtlUnicodeToMultiByteN.c)
 *     RtlMultiByteToUnicodeSize @ 0x1407A3AB0 (RtlMultiByteToUnicodeSize.c)
 *     RtlpGetCodePageData @ 0x1407A3BA4 (RtlpGetCodePageData.c)
 *     CompareNamesCaseSensitive @ 0x1409B7868 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1409B7A14 (ComputeNameLength.c)
 *     RtlIsValidOemCharacter @ 0x1409BC230 (RtlIsValidOemCharacter.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

char RtlpIsUtf8Process()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v1; // dl
  unsigned __int64 v2; // rcx
  char result; // al
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF
  char v5; // [rsp+20h] [rbp-18h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  _InterlockedOr(v4, 0);
  if ( LOWORD(CurrentServerSiloGlobals[66].Blink) != 0xFDE9 && LOWORD(CurrentServerSiloGlobals[70].Blink) != 0xFDE9 )
  {
    v5 = 0;
    v2 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24];
    if ( !v2 )
      return v5;
    if ( v1 )
    {
      if ( *(_WORD *)(v2 + 846) == 0xFDE9 )
      {
        result = 1;
        goto LABEL_8;
      }
    }
    else if ( *(_WORD *)(v2 + 844) == 0xFDE9 )
    {
      result = 1;
      goto LABEL_8;
    }
    result = 0;
LABEL_8:
    v5 = result;
    return result;
  }
  return 1;
}
