/*
 * XREFs of XmGetLongImmediate @ 0x1403C4B34
 * Callers:
 *     XmGetImmediateSourceValue @ 0x1403968C0 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140396914 (XmEvaluateAddressSpecifier.c)
 *     XmLongJump @ 0x140396D00 (XmLongJump.c)
 *     XmSegmentOffset @ 0x1403C8B70 (XmSegmentOffset.c)
 *     XmImmediateJump @ 0x1404E5550 (XmImmediateJump.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E6FB8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140397450 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403CFF70 (longjmp.c)
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
