/*
 * XREFs of XmSegmentOffset @ 0x14039F330
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmGetLongImmediate @ 0x140395F88 (XmGetLongImmediate.c)
 *     XmGetOffsetAddress @ 0x14039F39C (XmGetOffsetAddress.c)
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     XmSetDataType @ 0x1403B41C8 (XmSetDataType.c)
 *     XmGetWordImmediate @ 0x1403B4350 (XmGetWordImmediate.c)
 */

__int64 __fastcall XmSegmentOffset(__int64 a1)
{
  unsigned int LongImmediate; // eax
  __int64 OffsetAddress; // rax
  __int64 v4; // rdx
  __int64 v5; // r8

  XmSetDataType(a1);
  if ( *(_BYTE *)(a1 + 137) )
    LongImmediate = XmGetLongImmediate(a1);
  else
    LongImmediate = (unsigned __int16)XmGetWordImmediate(a1);
  OffsetAddress = XmGetOffsetAddress(a1, LongImmediate);
  v4 = a1 + 24;
  v5 = OffsetAddress;
  if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
  {
    OffsetAddress = a1 + 24;
    v4 = v5;
  }
  *(_QWORD *)(a1 + 88) = v4;
  XmSetSourceValue(a1, OffsetAddress);
  return 1LL;
}
