/*
 * XREFs of SymCryptFdefModSub256Asm @ 0x140400C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefModSub256Asm(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // kr00_16
  unsigned __int64 v5; // r11
  bool v6; // cf
  unsigned __int64 v7; // r11
  unsigned __int128 v8; // kr10_16
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rbp
  __int64 result; // rax
  __int64 v14; // r11
  __int64 v15; // rtt
  __int64 v16; // rsi

  v4 = *(_OWORD *)a2 - *(_OWORD *)a3;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = v5 < (unsigned __int64)(*(_OWORD *)a2 < *(_OWORD *)a3) + *(_QWORD *)(a3 + 16);
  v7 = v5 - ((*(_OWORD *)a2 < *(_OWORD *)a3) + *(_QWORD *)(a3 + 16));
  v8 = *(unsigned __int64 *)(a2 + 24) - (unsigned __int128)((unsigned __int64)v6 + *(_QWORD *)(a3 + 24));
  v9 = (_QWORD *)(a1 + 128);
  v10 = *((_QWORD *)&v8 + 1) & *v9;
  v11 = *((_QWORD *)&v8 + 1) & v9[1];
  v12 = *((_QWORD *)&v8 + 1) & v9[2];
  result = v10 + v4;
  v15 = __CFADD__(__CFADD__(v10, (_QWORD)v4), *((_QWORD *)&v4 + 1)) | (unsigned __int8)__CFADD__(
                                                                                         v11,
                                                                                         (__PAIR128__(v11, v10) + v4) >> 64);
  v6 = __CFADD__(v15, v7);
  v14 = v15 + v7;
  v16 = (*((_QWORD *)&v8 + 1) & v9[3]) + (v6 | (unsigned __int8)__CFADD__(v12, v14)) + (_QWORD)v8;
  *(_OWORD *)a4 = __PAIR128__(v11, v10) + v4;
  *(_QWORD *)(a4 + 16) = v12 + v14;
  *(_QWORD *)(a4 + 24) = v16;
  return result;
}
