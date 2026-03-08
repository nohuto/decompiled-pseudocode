/*
 * XREFs of KiTimerDispatch @ 0x140B107C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTimerDispatch(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // rdx

  _mm_lfence();
  v2 = 25;
  v3 = *(_QWORD *)(a1 + 64) ^ a2 | 0xFFFF800000000000uLL;
  v4 = __ROR8__(v3, (*(_BYTE *)(a1 + 64) ^ a2) & 0x3F);
  v5 = 0;
  v6 = v3 - 8;
  do
  {
    v7 = *(_QWORD *)(v6 + 8);
    v6 += 8LL;
    *(_QWORD *)v6 = v3 + (v4 ^ v7) + v5;
    v4 = v3 + __ROL8__(__ROR8__(v5 ^ (unsigned __int64)(200 - v5), ~(_BYTE)v7 & 0x3F) ^ v4, (v7 ^ 0xE9) & 0x3F);
    if ( v5 == 24 && *(_QWORD *)v3 != 0x85131481131482ELL )
    {
      *(_QWORD *)v6 ^= *(_QWORD *)v3 ^ 0x85131481131482ELL;
      v2 += *(_DWORD *)(v6 + 4);
      *(_QWORD *)v6 ^= *(_QWORD *)v3 ^ 0x85131481131482ELL;
    }
    ++v5;
  }
  while ( v5 < v2 );
  v8 = *(_QWORD *)v3 ^ 0x85131481131482ELL;
  *(_BYTE *)v3 = 46;
  *(_BYTE *)(v3 + 1) = 72;
  *(_BYTE *)(v3 + 2) = 49;
  *(_BYTE *)(v3 + 3) = 17;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v3)(v3, v8, 0LL, 0LL);
}
