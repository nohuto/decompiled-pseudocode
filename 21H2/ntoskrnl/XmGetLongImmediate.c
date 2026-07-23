/*
 * XREFs of XmGetLongImmediate @ 0x1403C5304
 * Callers:
 *     XmGetImmediateSourceValue @ 0x140397110 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140397164 (XmEvaluateAddressSpecifier.c)
 *     XmLongJump @ 0x140397550 (XmLongJump.c)
 *     XmSegmentOffset @ 0x1403C9340 (XmSegmentOffset.c)
 *     XmImmediateJump @ 0x1404E5850 (XmImmediateJump.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E72B8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140397CA0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D07E0 (longjmp.c)
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
