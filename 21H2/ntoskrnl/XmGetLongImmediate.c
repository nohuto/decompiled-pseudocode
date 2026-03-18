/*
 * XREFs of XmGetLongImmediate @ 0x1403D20CC
 * Callers:
 *     XmGetImmediateSourceValue @ 0x1403A3060 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x1403A30B4 (XmEvaluateAddressSpecifier.c)
 *     XmLongJump @ 0x1403A34A0 (XmLongJump.c)
 *     XmSegmentOffset @ 0x1403D7560 (XmSegmentOffset.c)
 *     XmImmediateJump @ 0x1405352F0 (XmImmediateJump.c)
 *     XmEvaluateIndexSpecifier @ 0x140536D58 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403A3520 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

__int64 __fastcall XmGetLongImmediate(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 + 3 > (unsigned int)*(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  *(_WORD *)(a1 + 20) += 4;
  return (unsigned int)*x86BiosTranslateAddress(*(_WORD *)(a1 + 58), v1);
}
