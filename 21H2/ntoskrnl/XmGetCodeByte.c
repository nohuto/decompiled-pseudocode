/*
 * XREFs of XmGetCodeByte @ 0x140397368
 * Callers:
 *     XmGetImmediateSourceValue @ 0x140396FC0 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140397014 (XmEvaluateAddressSpecifier.c)
 *     XmEmulateStream @ 0x140397208 (XmEmulateStream.c)
 *     XmShortJump @ 0x140398110 (XmShortJump.c)
 *     XmGroup2ByByte @ 0x1403C11C0 (XmGroup2ByByte.c)
 *     XmGroup8BitOffset @ 0x1404E5510 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1404E55C0 (XmImmediateEnter.c)
 *     XmPortImmediate @ 0x1404E5850 (XmPortImmediate.c)
 *     XmShiftDouble @ 0x1404E5910 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E7078 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140397B50 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D0670 (longjmp.c)
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
