/*
 * XREFs of RtlpIsUtf8Process @ 0x1407CDA20
 * Callers:
 *     RtlUnicodeToMultiByteN @ 0x1406A04A0 (RtlUnicodeToMultiByteN.c)
 *     RtlUpperString @ 0x1406A56F0 (RtlUpperString.c)
 *     RtlGenerate8dot3Name @ 0x1406A9EA0 (RtlGenerate8dot3Name.c)
 *     RtlUpperChar @ 0x1406B00C0 (RtlUpperChar.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x1407594E0 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlpDidUnicodeToOemWork @ 0x140759798 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1407598D0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140759990 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeToMultiByteSize @ 0x140759DB0 (RtlUnicodeToMultiByteSize.c)
 *     RtlpGetCodePageData @ 0x14075A7E4 (RtlpGetCodePageData.c)
 *     RtlMultiByteToUnicodeSize @ 0x14075A850 (RtlMultiByteToUnicodeSize.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1407CD880 (RtlAnsiCharToUnicodeChar.c)
 *     CompareNamesCaseSensitive @ 0x1409B7678 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1409B7820 (ComputeNameLength.c)
 *     RtlIsValidOemCharacter @ 0x1409BBB30 (RtlIsValidOemCharacter.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

bool RtlpIsUtf8Process()
{
  _WORD *CurrentServerSiloGlobals; // rax
  char v1; // dl
  unsigned __int64 v2; // rax
  bool result; // al
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF
  bool v5; // [rsp+20h] [rbp-18h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  _InterlockedOr(v4, 0);
  if ( CurrentServerSiloGlobals[532] == 0xFDE9 || CurrentServerSiloGlobals[564] == 0xFDE9 )
    return 1;
  v5 = 0;
  v2 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24];
  if ( !v2 )
    return v5;
  if ( v1 )
    result = *(_WORD *)(v2 + 846) == 0xFDE9;
  else
    result = *(_WORD *)(v2 + 844) == 0xFDE9;
  v5 = result;
  return result;
}
