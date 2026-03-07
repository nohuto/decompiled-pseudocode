__int64 __fastcall KiTpSetFlagsZeroSignParity(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // r10
  __int64 v4; // r9
  int v5; // r11d
  __int64 result; // rax

  v3 = *(_BYTE *)(a1 + 1);
  v4 = a3 >> (v3 - 1);
  v5 = *((unsigned __int8 *)KiTpParityLookupTable + (unsigned __int8)a3);
  if ( v3 < 0x40u )
    a3 &= (1LL << v3) - 1;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFFF3B;
  result = a3 == 0 ? 0x10 : 0;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) |= 4 * (v5 | result | (32 * (v4 & 1)));
  return result;
}
