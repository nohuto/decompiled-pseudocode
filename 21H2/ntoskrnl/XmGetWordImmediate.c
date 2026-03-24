/*
 * XREFs of XmGetWordImmediate @ 0x140397440
 * Callers:
 *     XmRetOp @ 0x140396810 (XmRetOp.c)
 *     XmGetImmediateSourceValue @ 0x140396FC0 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140397014 (XmEvaluateAddressSpecifier.c)
 *     XmLongJump @ 0x140397400 (XmLongJump.c)
 *     XmSegmentOffset @ 0x1403C91A0 (XmSegmentOffset.c)
 *     XmImmediateEnter @ 0x1404E55C0 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1404E5610 (XmImmediateJump.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140397B50 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D0670 (longjmp.c)
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
