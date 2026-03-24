/*
 * XREFs of XmGetCodeByte @ 0x140396C68
 * Callers:
 *     XmGetImmediateSourceValue @ 0x1403968C0 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140396914 (XmEvaluateAddressSpecifier.c)
 *     XmEmulateStream @ 0x140396B08 (XmEmulateStream.c)
 *     XmShortJump @ 0x140397A10 (XmShortJump.c)
 *     XmGroup2ByByte @ 0x1403C0E20 (XmGroup2ByByte.c)
 *     XmGroup8BitOffset @ 0x1404E5450 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1404E5500 (XmImmediateEnter.c)
 *     XmPortImmediate @ 0x1404E5790 (XmPortImmediate.c)
 *     XmShiftDouble @ 0x1404E5850 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E6FB8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140397450 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403CFF70 (longjmp.c)
 */

char __fastcall XmGetCodeByte(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(unsigned int *)(a1 + 20);
  if ( (unsigned int)v1 > *(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  ++*(_WORD *)(a1 + 20);
  return *(_BYTE *)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 58), v1);
}
