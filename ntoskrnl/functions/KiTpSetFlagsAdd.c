__int64 __fastcall KiTpSetFlagsAdd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r10
  __int64 v6; // r11

  v5 = *(_BYTE *)(a1 + 1) - 1;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFF7EF;
  v6 = ~(a5 ^ a4);
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) |= 16
                                           * (((((v6 & (a4 ^ a3)) >> v5) & 1) << 7) | ((unsigned __int8)((a4 >> 3) & (v6 >> 3)) | (unsigned __int8)((~a3 >> 3) & ((a4 >> 3) ^ (a5 >> 3)))) & 1);
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= ~1u;
  *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) |= ((a4 & v6 | ~a3 & (a5 ^ a4)) >> v5) & 1;
  return KiTpSetFlagsZeroSignParity(a1, a2, a3);
}
