/*
 * XREFs of XmGetOffsetAddress @ 0x1403C93AC
 * Callers:
 *     XmGroup45General @ 0x1403C3CD0 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403C9340 (XmSegmentOffset.c)
 *     XmGeneralBitOffset @ 0x1404E55D0 (XmGeneralBitOffset.c)
 *     XmGroup8BitOffset @ 0x1404E5750 (XmGroup8BitOffset.c)
 *     XmLoadSegment @ 0x1404E5920 (XmLoadSegment.c)
 *     XmXlatOpcode @ 0x1404E5BD0 (XmXlatOpcode.c)
 *     XmBoundOp @ 0x1404E6E10 (XmBoundOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140397CA0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D07E0 (longjmp.c)
 */

int *__fastcall XmGetOffsetAddress(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  unsigned int v3; // r9d

  v2 = *(unsigned int *)(a1 + 116);
  v3 = *(unsigned __int16 *)(a1 + 2 * v2 + 68);
  if ( a2 > v3 || a2 + *(_DWORD *)(a1 + 120) > v3 )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return x86BiosTranslateAddress(*(_WORD *)(a1 + 2 * v2 + 56), a2);
}
