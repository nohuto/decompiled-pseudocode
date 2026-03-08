/*
 * XREFs of RaspTestIntersection @ 0x140382C60
 * Callers:
 *     RaspScanConvert @ 0x1403827F0 (RaspScanConvert.c)
 * Callees:
 *     BgpFmSqrt @ 0x140382F80 (BgpFmSqrt.c)
 */

__int64 __fastcall RaspTestIntersection(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r10
  _DWORD *v6; // rsi
  _DWORD *v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // rbx
  __int64 result; // rax
  bool v17; // cc
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  __int128 v26; // rax
  __int64 v27; // rbx
  bool v28; // cc
  __int128 v29; // rax
  __int128 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+70h] [rbp+8h]

  v4 = *(_DWORD **)a1;
  v6 = *(_DWORD **)(a1 + 8);
  v8 = *(_DWORD **)(a1 + 16);
  v32 = *v4 + v4[2];
  v9 = v4[1] + v4[3];
  v10 = v6[1] + v6[3];
  v31 = *v8 + v8[2];
  v11 = v32 << 16;
  v12 = (__int64)(v8[1] + v8[3]) << 16;
  v13 = v9 << 16;
  v14 = v10 << 16;
  v15 = v31 << 16;
  result = (__int64)a2 << 16;
  if ( v9 << 16 == v12 )
  {
    if ( v13 == result )
      goto LABEL_11;
  }
  else if ( v13 == result )
  {
    goto LABEL_7;
  }
  if ( v12 == result )
  {
LABEL_7:
    ++result;
    if ( *(_BYTE *)(a1 + 24) != 1 )
      goto LABEL_8;
LABEL_26:
    *a4 = 0x7FFFFFFF;
    v28 = v13 < result;
    if ( v13 > result )
    {
      if ( v12 > result )
        goto LABEL_28;
      v28 = v13 < result;
    }
    if ( !v28 || v12 >= result )
    {
      v29 = v11 + (v15 - v11) * (result - v13) / (v12 - v13);
      result = (__int64)(WORD4(v29) + (_QWORD)v29) >> 16;
      *a3 = result;
      return result;
    }
LABEL_28:
    *a3 = 0x7FFFFFFF;
    return result;
  }
  if ( *(_BYTE *)(a1 + 24) == 1 )
    goto LABEL_26;
  if ( v14 == result )
    ++result;
LABEL_8:
  v17 = v13 < result;
  if ( v13 > result )
  {
    if ( v14 <= result )
      goto LABEL_18;
    if ( v12 > result )
      goto LABEL_11;
    v17 = v13 < result;
  }
  if ( v17 && v14 < result && v12 < result )
    goto LABEL_11;
LABEL_18:
  if ( !(v13 + v12 - ((__int64)(v6[1] + v6[3]) << 17)) )
  {
    v30 = v11 + (v15 - v11) * (result - v13) / (v12 - v13);
    result = (__int64)(WORD4(v30) + (_QWORD)v30) >> 16;
    *a3 = result;
    goto LABEL_12;
  }
  v18 = *v6 + v6[2];
  result = 2 * v10;
  v19 = v9 + v8[1] + v8[3] - 2 * v10;
  v20 = 2 * (v10 - v9);
  v21 = v20 * v20 - 4 * v19 * (v9 - a2);
  if ( v21 < 0 )
  {
LABEL_11:
    *a3 = 0x7FFFFFFF;
LABEL_12:
    *a4 = 0x7FFFFFFF;
    return result;
  }
  v22 = BgpFmSqrt(v21);
  v23 = -65536 * v20;
  v24 = (v23 + v22) / (2 * v19);
  v25 = (v23 - v22) / (2 * v19);
  v26 = (__int64)(v31 * v24 * v24 + (0x10000 - v24) * (v32 * (0x10000 - v24) + 2 * v18 * v24));
  *(_QWORD *)&v26 = DWORD2(v26) + (_QWORD)v26;
  v27 = (__int64)v26 >> 32;
  *a3 = DWORD1(v26);
  result = (__int64)(v31 * v25 * v25 + (0x10000 - v25) * (v32 * (0x10000 - v25) + 2 * v18 * v25)) / 0x100000000LL;
  *a4 = result;
  if ( v24 > 0x10000 )
  {
    *a3 = 0x7FFFFFFF;
    LODWORD(v27) = 0x7FFFFFFF;
  }
  if ( v25 > 0x10000 )
  {
    *a4 = 0x7FFFFFFF;
    result = 0x7FFFFFFFLL;
  }
  if ( (int)v27 > (int)result )
  {
    *a3 = result;
    *a4 = v27;
    return result;
  }
  if ( (_DWORD)v27 == (_DWORD)result )
    goto LABEL_12;
  return result;
}
