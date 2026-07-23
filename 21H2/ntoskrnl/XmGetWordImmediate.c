/*
 * XREFs of XmGetWordImmediate @ 0x140397590
 * Callers:
 *     XmRetOp @ 0x140396960 (XmRetOp.c)
 *     XmGetImmediateSourceValue @ 0x140397110 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140397164 (XmEvaluateAddressSpecifier.c)
 *     XmLongJump @ 0x140397550 (XmLongJump.c)
 *     XmSegmentOffset @ 0x1403C9340 (XmSegmentOffset.c)
 *     XmImmediateEnter @ 0x1404E5800 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1404E5850 (XmImmediateJump.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140397CA0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D07E0 (longjmp.c)
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
