/*
 * XREFs of XmGetLongImmediate @ 0x140395F88
 * Callers:
 *     XmSegmentOffset @ 0x14039F330 (XmSegmentOffset.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B3F0C (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1403B41F4 (XmGetImmediateSourceValue.c)
 *     XmLongJump @ 0x1403B4310 (XmLongJump.c)
 *     XmImmediateJump @ 0x140530AE0 (XmImmediateJump.c)
 *     XmEvaluateIndexSpecifier @ 0x1405324A8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403B9030 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
 */

__int64 __fastcall XmGetLongImmediate(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 + 3 > (unsigned int)*(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  *(_WORD *)(a1 + 20) += 4;
  return *(unsigned int *)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 58), (unsigned __int16)v1);
}
