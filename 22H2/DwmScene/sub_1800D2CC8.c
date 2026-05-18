/*
 * XREFs of sub_1800D2CC8 @ 0x1800D2CC8
 * Callers:
 *     sub_1800D27D8 @ 0x1800D27D8 (sub_1800D27D8.c)
 *     sub_1800D2E8C @ 0x1800D2E8C (sub_1800D2E8C.c)
 * Callees:
 *     sub_18001D08C @ 0x18001D08C (sub_18001D08C.c)
 */

__int64 __fastcall sub_1800D2CC8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v7; // r12
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rbx
  double v12; // xmm0_8
  double v13; // xmm1_8
  double v14; // xmm0_8
  bool v15; // cf
  bool v16; // zf
  _QWORD *v17; // rsi
  _QWORD *v18; // r14
  __int64 v19; // rsi
  _QWORD *v20; // rbx
  double v21; // xmm0_8
  __int64 v22; // r14
  __int64 v23; // rsi
  double v24; // xmm1_8
  double v25; // xmm0_8
  bool v26; // cf
  bool v27; // zf
  __int64 v28; // rbx
  _QWORD *v29; // rbx
  __int64 result; // rax

  v4 = a3 - 1;
  v7 = (a3 - 1) >> 1;
  v9 = a2;
  v10 = a2;
  if ( a2 < v7 )
  {
    do
    {
      v11 = 2 * v10;
      v12 = *(double *)(a1 + 48 * v11 + 128);
      v13 = *(double *)(a1 + 48 * v11 + 80);
      if ( v12 == v13 )
      {
        v14 = *(double *)(a1 + 48 * v11 + 88);
        v15 = v14 < *(double *)(a1 + 48 * v11 + 136);
        v16 = v14 == *(double *)(a1 + 48 * v11 + 136);
      }
      else
      {
        v15 = v13 < v12;
        v16 = v13 == v12;
      }
      v17 = (_QWORD *)(a1 + 48 * a2);
      v10 = (v15 | (unsigned __int8)v16) + v11 + 1;
      v18 = (_QWORD *)(a1 + 48 * v10);
      if ( v17 != v18 )
        sub_18001D08C(v17, a1 + 48 * v10);
      a2 = v10;
      v17[4] = v18[4];
      v17[5] = v18[5];
    }
    while ( v10 < v7 );
    v4 = a3 - 1;
  }
  if ( v10 == v7 && (a3 & 1) == 0 )
  {
    v19 = 48 * a3 + a1 - 48;
    v20 = (_QWORD *)(a1 + 48 * a2);
    if ( v20 != (_QWORD *)v19 )
      sub_18001D08C(v20, 48 * a3 + a1 - 48);
    a2 = v4;
    v20[4] = *(_QWORD *)(v19 + 32);
    v20[5] = *(_QWORD *)(v19 + 40);
  }
  if ( v9 < a2 )
  {
    do
    {
      v21 = *(double *)(a4 + 32);
      v22 = (a2 - 1) >> 1;
      v23 = a1 + 48 * v22;
      v24 = *(double *)(v23 + 32);
      if ( v24 == v21 )
      {
        v25 = *(double *)(a4 + 40);
        v26 = v25 < *(double *)(v23 + 40);
        v27 = v25 == *(double *)(v23 + 40);
      }
      else
      {
        v26 = v21 < v24;
        v27 = v21 == v24;
      }
      if ( v26 || v27 )
        break;
      v28 = a1 + 48 * a2;
      if ( v28 != v23 )
      {
        sub_18001D08C((_QWORD *)v28, a1 + 48 * v22);
        v24 = *(double *)(v23 + 32);
      }
      *(double *)(v28 + 32) = v24;
      a2 = v22;
      *(_QWORD *)(v28 + 40) = *(_QWORD *)(v23 + 40);
    }
    while ( v9 < v22 );
  }
  v29 = (_QWORD *)(a1 + 48 * a2);
  if ( v29 != (_QWORD *)a4 )
    sub_18001D08C(v29, a4);
  v29[4] = *(_QWORD *)(a4 + 32);
  result = *(_QWORD *)(a4 + 40);
  v29[5] = result;
  return result;
}
