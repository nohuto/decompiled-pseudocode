/*
 * XREFs of SymCryptFdefModAdd256Asm @ 0x140400B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefModAdd256Asm(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // r11
  bool v6; // cf
  unsigned __int64 v7; // r11
  __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  _BOOL8 v10; // rtt
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int128 v13; // kr10_16
  unsigned __int64 v14; // rtt
  __int64 v15; // kr20_8
  __int64 v16; // rcx
  __int64 result; // rax

  v4 = (*(_OWORD *)a3 + *(_OWORD *)a2) >> 64;
  v5 = a2[2];
  v6 = __CFADD__(__CFADD__(__CFADD__(*a3, *a2), a2[1]) | (unsigned __int8)__CFADD__(a3[1], v4), v5);
  v7 = (__CFADD__(__CFADD__(*a3, *a2), a2[1]) | (unsigned __int8)__CFADD__(a3[1], v4)) + v5;
  v6 |= __CFADD__(a3[2], v7);
  v7 += a3[2];
  v8 = a2[3];
  v10 = v6;
  v6 = __CFADD__(v6, v8);
  v9 = v10 + v8;
  v6 |= __CFADD__(a3[3], v9);
  v9 += a3[3];
  v11 = a1 + 128;
  v12 = *a3 + *a2;
  v13 = __PAIR128__(v4, v12) - *(_OWORD *)v11;
  v14 = (__PAIR128__(v4, v12) < *(_OWORD *)v11) + *(_QWORD *)(v11 + 16);
  v15 = (__PAIR128__(v9, v7) - __PAIR128__(*(_QWORD *)(v11 + 24), v14)) >> 64;
  v16 = -(__int64)v6 ^ ((v9 - (unsigned __int128)((unsigned __int64)(v7 < v14) + *(_QWORD *)(v11 + 24))) >> 64);
  result = v16 & (v13 ^ v12);
  *a4 = result ^ v13;
  a4[1] = v16 & (*((_QWORD *)&v13 + 1) ^ v4) ^ *((_QWORD *)&v13 + 1);
  a4[2] = v16 & ((v7 - v14) ^ v7) ^ (v7 - v14);
  a4[3] = v16 & (v15 ^ v9) ^ v15;
  return result;
}
