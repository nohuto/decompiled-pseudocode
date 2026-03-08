/*
 * XREFs of XmGetCodeByte @ 0x1403B40F4
 * Callers:
 *     XmPortImmediate @ 0x140394750 (XmPortImmediate.c)
 *     XmGroup2ByByte @ 0x140394790 (XmGroup2ByByte.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B3F0C (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1403B41F4 (XmGetImmediateSourceValue.c)
 *     XmShortJump @ 0x1403BB530 (XmShortJump.c)
 *     XmGroup8BitOffset @ 0x1405309E0 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x140530A90 (XmImmediateEnter.c)
 *     XmShiftDouble @ 0x140530DA0 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x1405324A8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403B9030 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
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
