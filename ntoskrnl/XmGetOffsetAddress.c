/*
 * XREFs of XmGetOffsetAddress @ 0x14039F39C
 * Callers:
 *     XmGroup45General @ 0x140398BB0 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x14039F330 (XmSegmentOffset.c)
 *     XmGeneralBitOffset @ 0x140530850 (XmGeneralBitOffset.c)
 *     XmGroup8BitOffset @ 0x1405309E0 (XmGroup8BitOffset.c)
 *     XmLoadSegment @ 0x140530BB0 (XmLoadSegment.c)
 *     XmXlatOpcode @ 0x140530E20 (XmXlatOpcode.c)
 *     XmBoundOp @ 0x140531FE0 (XmBoundOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403B9030 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
 */

__int64 __fastcall XmGetOffsetAddress(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v3; // r9d

  v2 = *(unsigned int *)(a1 + 116);
  v3 = *(unsigned __int16 *)(a1 + 2 * v2 + 68);
  if ( (unsigned int)a2 > v3 || (int)a2 + *(_DWORD *)(a1 + 120) > v3 )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 2 * v2 + 56), a2);
}
