/*
 * XREFs of XmGetCodeByte @ 0x1403B8DB4
 * Callers:
 *     XmPortImmediate @ 0x140396920 (XmPortImmediate.c)
 *     XmGroup2ByByte @ 0x140396960 (XmGroup2ByByte.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B8BCC (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1403B8EB4 (XmGetImmediateSourceValue.c)
 *     XmShortJump @ 0x1403C0E60 (XmShortJump.c)
 *     XmGroup8BitOffset @ 0x140532EB0 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x140532F60 (XmImmediateEnter.c)
 *     XmShiftDouble @ 0x140533270 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x140534978 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403BE960 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D7880 (longjmp.c)
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
