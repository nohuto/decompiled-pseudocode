/*
 * XREFs of XmGetWordImmediate @ 0x1403B4350
 * Callers:
 *     XmSegmentOffset @ 0x14039F330 (XmSegmentOffset.c)
 *     XmRetOp @ 0x1403B3850 (XmRetOp.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B3F0C (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1403B41F4 (XmGetImmediateSourceValue.c)
 *     XmLongJump @ 0x1403B4310 (XmLongJump.c)
 *     XmImmediateEnter @ 0x140530A90 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x140530AE0 (XmImmediateJump.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403B9030 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
 */

__int64 __fastcall XmGetWordImmediate(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 + 1 > (unsigned int)*(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  *(_WORD *)(a1 + 20) += 2;
  return *(unsigned __int16 *)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 58), (unsigned __int16)v1);
}
