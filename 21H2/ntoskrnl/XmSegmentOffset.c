/*
 * XREFs of XmSegmentOffset @ 0x1403D7560
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x1403A2FA8 (XmSetSourceValue.c)
 *     XmSetDataType @ 0x1403A346C (XmSetDataType.c)
 *     XmGetWordImmediate @ 0x1403A34E0 (XmGetWordImmediate.c)
 *     XmGetLongImmediate @ 0x1403D20CC (XmGetLongImmediate.c)
 *     XmGetOffsetAddress @ 0x1403D75CC (XmGetOffsetAddress.c)
 */

__int64 __fastcall XmSegmentOffset(__int64 a1)
{
  unsigned int LongImmediate; // eax
  unsigned __int16 *OffsetAddress; // rax
  __int64 v4; // rdx
  unsigned __int16 *v5; // r8

  XmSetDataType(a1);
  if ( *(_BYTE *)(a1 + 137) )
    LongImmediate = XmGetLongImmediate(a1);
  else
    LongImmediate = (unsigned __int16)XmGetWordImmediate(a1);
  OffsetAddress = (unsigned __int16 *)XmGetOffsetAddress(a1, LongImmediate);
  v4 = a1 + 24;
  v5 = OffsetAddress;
  if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
  {
    OffsetAddress = (unsigned __int16 *)(a1 + 24);
    v4 = (__int64)v5;
  }
  *(_QWORD *)(a1 + 88) = v4;
  XmSetSourceValue(a1, OffsetAddress);
  return 1LL;
}
