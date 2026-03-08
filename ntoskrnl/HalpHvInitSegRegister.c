/*
 * XREFs of HalpHvInitSegRegister @ 0x140518E28
 * Callers:
 *     HalpHvStartProcessor @ 0x140518EF8 (HalpHvStartProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpHvInitSegRegister(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  __int16 v9; // dx
  __int64 result; // rax

  *(_WORD *)(a3 + 12) = a2;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = (unsigned __int64)a2 >> 3;
    if ( (*(_DWORD *)(v3 + 8 * v4 + 4) & 0x1000) != 0 )
      v5 = *(unsigned __int8 *)(v3 + 8 * v4 + 7);
    else
      v5 = *(unsigned __int8 *)(v3 + 8 * v4 + 7) | ((unsigned __int64)*(unsigned int *)(v3 + 8 * v4 + 8) << 8);
    *(_QWORD *)a3 = *(unsigned __int16 *)(v3 + 8 * v4 + 2) | ((*(unsigned __int8 *)(v3 + 8 * v4 + 4) | (v5 << 8)) << 16);
    v6 = *(unsigned __int16 *)(v3 + 8 * v4);
    v7 = *(_DWORD *)(v3 + 8 * v4 + 4);
    *(_WORD *)(a3 + 14) = 0;
    v8 = v6 | v7 & 0xF0000;
    *(_DWORD *)(a3 + 8) = v8;
    LOWORD(v6) = *(unsigned __int8 *)(v3 + 8 * v4 + 5);
    *(_WORD *)(a3 + 14) = v6;
    v9 = v6 | (*(unsigned __int8 *)(v3 + 8 * v4 + 6) << 8);
    result = 61695LL;
    v9 &= 0xF0FFu;
    *(_WORD *)(a3 + 14) = v9;
    if ( v9 < 0 )
      *(_DWORD *)(a3 + 8) = (v8 << 12) + 4095;
  }
  else
  {
    *(_QWORD *)a3 = 0LL;
    *(_DWORD *)(a3 + 8) = 0;
    *(_WORD *)(a3 + 14) = 0;
  }
  return result;
}
