/*
 * XREFs of sub_1800D29AC @ 0x1800D29AC
 * Callers:
 *     sub_1800D3004 @ 0x1800D3004 (sub_1800D3004.c)
 * Callees:
 *     sub_1800D28F4 @ 0x1800D28F4 (sub_1800D28F4.c)
 *     sub_1800D3308 @ 0x1800D3308 (sub_1800D3308.c)
 */

unsigned __int64 *__fastcall sub_1800D29AC(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v4; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  double *v16; // rax
  double v17; // xmm1_8
  double v18; // xmm2_8
  double v19; // xmm0_8
  bool v20; // cf
  bool v21; // zf
  bool v22; // cf
  bool v23; // zf
  double v24; // xmm2_8
  double v25; // xmm1_8
  double v26; // xmm0_8
  bool v27; // cf
  bool v28; // zf
  double v29; // xmm0_8
  bool v30; // cf
  bool v31; // zf
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rsi
  double v34; // xmm1_8
  double v35; // xmm2_8
  double v36; // xmm0_8
  bool v37; // cf
  bool v38; // zf
  double v39; // xmm0_8
  bool v40; // cf
  bool v41; // zf
  double v42; // xmm1_8
  double v43; // xmm2_8
  double v44; // xmm0_8
  bool v45; // cf
  bool v46; // zf
  double v47; // xmm0_8
  bool v48; // cf
  bool v49; // zf
  unsigned __int64 *result; // rax

  v4 = a1;
  v6 = a3 - 48;
  v8 = a2 + 48 * (((__int64)((unsigned __int128)((__int64)(a3 - a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3) / 2);
  v9 = (__int64)(a3 - 48 - a2) / 48;
  if ( v9 <= 40 )
  {
    sub_1800D28F4(a2, v8, a3 - 48);
  }
  else
  {
    v10 = (v9 + 1) >> 3;
    v11 = 48 * v10;
    v12 = 96 * v10;
    v13 = 48 * v10 + a2;
    sub_1800D28F4(a2, v13, 96 * v10 + a2);
    sub_1800D28F4(v8 - v11, v8, v11 + v8);
    v14 = v6 - v11;
    sub_1800D28F4(a3 - 48 - v12, v14, a3 - 48);
    sub_1800D28F4(v13, v8, v14);
    v4 = a1;
  }
  v15 = v8 + 48;
  if ( a2 < v8 )
  {
    v16 = (double *)(v8 - 8);
    do
    {
      v17 = *(v16 - 1);
      v18 = v16[5];
      if ( v17 == v18 )
      {
        v19 = v16[6];
        v20 = v19 < *v16;
        v21 = v19 == *v16;
      }
      else
      {
        v20 = v18 < v17;
        v21 = v18 == v17;
      }
      if ( !v20 && !v21 )
        break;
      if ( v18 == v17 )
      {
        v22 = *v16 < v16[6];
        v23 = *v16 == v16[6];
      }
      else
      {
        v22 = v17 < v18;
        v23 = v17 == v18;
      }
      if ( !v22 && !v23 )
        break;
      v8 -= 48LL;
      v16 -= 6;
    }
    while ( a2 < v8 );
  }
  if ( v15 < a3 )
  {
    v24 = *(double *)(v8 + 32);
    do
    {
      v25 = *(double *)(v15 + 32);
      if ( v25 == v24 )
      {
        v26 = *(double *)(v8 + 40);
        v27 = v26 < *(double *)(v15 + 40);
        v28 = v26 == *(double *)(v15 + 40);
      }
      else
      {
        v27 = v24 < v25;
        v28 = v24 == v25;
      }
      if ( !v27 && !v28 )
        break;
      if ( v24 == v25 )
      {
        v29 = *(double *)(v15 + 40);
        v30 = v29 < *(double *)(v8 + 40);
        v31 = v29 == *(double *)(v8 + 40);
      }
      else
      {
        v30 = v25 < v24;
        v31 = v25 == v24;
      }
      if ( !v30 && !v31 )
        break;
      v15 += 48LL;
    }
    while ( v15 < a3 );
  }
  v32 = v15;
  v33 = v8;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v32 >= a3 )
        goto LABEL_52;
      v34 = *(double *)(v8 + 32);
      v35 = *(double *)(v32 + 32);
      if ( v34 == v35 )
      {
        v36 = *(double *)(v32 + 40);
        v37 = v36 < *(double *)(v8 + 40);
        v38 = v36 == *(double *)(v8 + 40);
      }
      else
      {
        v37 = v35 < v34;
        v38 = v35 == v34;
      }
      if ( v37 || v38 )
        break;
LABEL_38:
      v32 += 48LL;
    }
    if ( v35 == v34 )
    {
      v39 = *(double *)(v8 + 40);
      v40 = v39 < *(double *)(v32 + 40);
      v41 = v39 == *(double *)(v32 + 40);
    }
    else
    {
      v40 = v34 < v35;
      v41 = v34 == v35;
    }
    if ( v40 || v41 )
    {
      if ( v15 != v32 )
        sub_1800D3308(v15, v32);
      v15 += 48LL;
      goto LABEL_38;
    }
LABEL_52:
    while ( a2 < v33 )
    {
      v42 = *(double *)(v33 - 16);
      v43 = *(double *)(v8 + 32);
      if ( v42 == v43 )
      {
        v44 = *(double *)(v8 + 40);
        v45 = v44 < *(double *)(v33 - 8);
        v46 = v44 == *(double *)(v33 - 8);
      }
      else
      {
        v45 = v43 < v42;
        v46 = v43 == v42;
      }
      if ( v45 || v46 )
      {
        if ( v43 == v42 )
        {
          v47 = *(double *)(v33 - 8);
          v48 = v47 < *(double *)(v8 + 40);
          v49 = v47 == *(double *)(v8 + 40);
        }
        else
        {
          v48 = v42 < v43;
          v49 = v42 == v43;
        }
        if ( !v48 && !v49 )
          break;
        v8 -= 48LL;
        if ( v8 != v33 - 48 )
          sub_1800D3308(v8, v33 - 48);
      }
      v33 -= 48LL;
    }
    if ( v33 == a2 )
      break;
    v33 -= 48LL;
    if ( v32 != a3 )
    {
      sub_1800D3308(v32, v33);
      goto LABEL_38;
    }
    v8 -= 48LL;
    if ( v33 != v8 )
      sub_1800D3308(v33, v8);
    v15 -= 48LL;
    sub_1800D3308(v8, v15);
  }
  if ( v32 != a3 )
  {
    if ( v15 != v32 )
      sub_1800D3308(v8, v15);
    v15 += 48LL;
    sub_1800D3308(v8, v32);
    v8 += 48LL;
    goto LABEL_38;
  }
  v4[1] = v15;
  result = v4;
  *v4 = v8;
  return result;
}
