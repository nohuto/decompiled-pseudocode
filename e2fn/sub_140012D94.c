__int64 __fastcall sub_140012D94(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // r10d
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  __int64 result; // rax

  v5 = a4[3] | (*(unsigned __int16 *)(a2 + 18) << 8);
  a4[3] = v5;
  v6 = *(_DWORD *)(a2 + 44);
  *a4 &= 0xFFFF01FF;
  a4[3] = v5 | (v6 << 16);
  v7 = *a4 | *(unsigned __int16 *)(a2 + 16);
  *a4 = v7;
  *a4 = v7 | (*(unsigned __int16 *)(a2 + 14) << 9);
  *(_DWORD *)(a3 + 8) |= 0x80000000;
  v8 = *(_DWORD *)(a3 + 12) | ((*(unsigned __int16 *)(a2 + 12) << 14)
                             + -16384 * *(unsigned __int16 *)(a2 + 16)
                             - (*(unsigned __int16 *)(a2 + 14) << 14)
                             - (*(unsigned __int16 *)(a2 + 18) << 14));
  *(_DWORD *)(a3 + 12) = v8;
  result = *(unsigned int *)(a2 + 40);
  *(_DWORD *)(a3 + 12) = dword_1400D52B8[result] | v8;
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 720));
  return result;
}
