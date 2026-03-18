/*
 * XREFs of XmGetCodeByte @ 0x1403A340C
 * Callers:
 *     XmGetImmediateSourceValue @ 0x1403A3060 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x1403A30B4 (XmEvaluateAddressSpecifier.c)
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 *     XmShortJump @ 0x1403A3710 (XmShortJump.c)
 *     XmGroup2ByByte @ 0x1403CCF30 (XmGroup2ByByte.c)
 *     XmGroup8BitOffset @ 0x1405351F0 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1405352A0 (XmImmediateEnter.c)
 *     XmPortImmediate @ 0x140535530 (XmPortImmediate.c)
 *     XmShiftDouble @ 0x1405355F0 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x140536D58 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403A3520 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
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
