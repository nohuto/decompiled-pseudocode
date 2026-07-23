/*
 * XREFs of XmGetCodeByte @ 0x1403974B8
 * Callers:
 *     XmGetImmediateSourceValue @ 0x140397110 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140397164 (XmEvaluateAddressSpecifier.c)
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 *     XmShortJump @ 0x140398260 (XmShortJump.c)
 *     XmGroup2ByByte @ 0x1403C15F0 (XmGroup2ByByte.c)
 *     XmGroup8BitOffset @ 0x1404E5750 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1404E5800 (XmImmediateEnter.c)
 *     XmPortImmediate @ 0x1404E5A90 (XmPortImmediate.c)
 *     XmShiftDouble @ 0x1404E5B50 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E72B8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140397CA0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D07E0 (longjmp.c)
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
