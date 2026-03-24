/*
 * XREFs of ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C0024214
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C00256F4 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C002B1C0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::bFastFill(RGNMEMOBJ *this, struct EPATHOBJ *a2, int a3, struct _POINTFIX *a4)
{
  struct _POINTFIX *v4; // r15
  int v5; // r10d
  FIX y; // ebx
  struct _POINTFIX *v9; // r11
  struct _POINTFIX *v10; // rsi
  FIX v11; // eax
  __m128i *v12; // rax
  __int64 v13; // rcx
  __m128i v14; // xmm1
  int v15; // ebx
  __int64 v16; // rax
  unsigned int v17; // esi
  struct REGION *Region; // rax
  int v19; // r12d
  _QWORD *v20; // rax
  int *v21; // r10
  int *v22; // r8
  __int64 v23; // r13
  char *v24; // r9
  int *v25; // rdx
  struct _POINTFIX *v26; // rcx
  FIX v27; // esi
  int v28; // r14d
  unsigned int v29; // esi
  FIX x; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // r15d
  int v34; // r11d
  bool v35; // zf
  int v36; // r14d
  int v37; // r14d
  int v38; // edx
  int v39; // ecx
  int v40; // edx
  int v41; // r13d
  int v42; // esi
  int v43; // r14d
  int v44; // eax
  int v45; // r11d
  int v46; // r9d
  __int64 result; // rax
  int i; // r13d
  int v49; // eax
  int v50; // ecx
  int v51; // edx
  __int128 v52; // xmm1
  __int128 v53; // xmm5
  __int128 v54; // xmm6
  __int128 v55; // xmm7
  int v56; // r9d
  int v57; // ecx
  int v58; // eax
  bool v59; // sf
  int v60; // r11d
  int v61; // r11d
  struct _POINTFIX *v62; // rdx
  FIX v63; // ecx
  FIX *p_y; // rax
  unsigned int v65; // eax
  int v66; // edx
  FIX v67; // ecx
  FIX *v68; // rax
  int v69; // eax
  int v70; // edx
  __int128 v71; // xmm4
  __int128 v72; // xmm0
  __int128 v73; // xmm2
  int v74; // eax
  int v75; // [rsp+28h] [rbp-69h]
  __int64 v76; // [rsp+30h] [rbp-61h]
  struct _POINTFIX *v77; // [rsp+38h] [rbp-59h]
  __int128 v78; // [rsp+48h] [rbp-49h]
  __int128 v79; // [rsp+58h] [rbp-39h]
  __int64 v80; // [rsp+68h] [rbp-29h]
  __int128 v81; // [rsp+70h] [rbp-21h] BYREF
  __int128 v82; // [rsp+80h] [rbp-11h]
  __int64 v83; // [rsp+90h] [rbp-1h]
  int v85; // [rsp+108h] [rbp+77h]

  v85 = a3;
  v4 = a4;
  v5 = a3 - 1;
  y = v4->y;
  v9 = v4;
  v10 = v4;
  v77 = &v4[a3 - 1];
  if ( v4[1].y <= y )
  {
    while ( 1 )
    {
      ++v10;
      if ( !--v5 )
        break;
      if ( v10[1].y > v10->y )
      {
        v62 = v10;
        while ( --v5 )
        {
          v63 = v62[2].y;
          ++v62;
          p_y = &v62->y;
          if ( v63 < v62->y )
          {
            while ( 1 )
            {
              if ( v63 < y )
                return 0LL;
              if ( !--v5 )
                break;
              v63 = p_y[4];
              p_y += 2;
              if ( v63 > *p_y )
                return 0LL;
            }
            goto LABEL_7;
          }
        }
        break;
      }
    }
  }
  else
  {
    while ( --v5 )
    {
      v11 = v9[1].y;
      ++v9;
      if ( v9[1].y < v11 )
      {
        do
        {
          if ( !--v5 )
          {
            if ( v9[1].y < y )
              v10 = v9 + 1;
            goto LABEL_7;
          }
          v67 = v9[2].y;
          ++v9;
          v68 = &v9->y;
        }
        while ( v67 <= v9->y );
        v10 = v9;
        do
        {
          if ( v67 > y )
            break;
          if ( !--v5 )
            goto LABEL_7;
          v67 = v68[4];
          v68 += 2;
        }
        while ( v67 >= *v68 );
        return 0LL;
      }
    }
  }
LABEL_7:
  v12 = (__m128i *)*((_QWORD *)a2 + 1);
  v13 = (int)HIDWORD(v12[3].m128i_i64[0]);
  v14 = _mm_srli_si128(v12[3], 8);
  v15 = (v10->y + 15) >> 4;
  v83 = 4294967288LL;
  v80 = 8LL;
  *((_QWORD *)&v82 + 1) = v10;
  *((_QWORD *)&v79 + 1) = v10;
  v16 = 24 * ((v14.m128i_i32[1] - v13 + 15) >> 4) + 32;
  if ( v16 > 0x7FFFFFFF )
    return 0LL;
  v17 = 112;
  if ( (unsigned __int64)v16 > 0x70 )
    v17 = 24 * ((v14.m128i_i32[1] - v13 + 15) >> 4) + 32;
  Region = RGNMEMOBJ::AllocateRegion(v17);
  *(_QWORD *)this = Region;
  if ( !Region )
    return 0LL;
  *((_DWORD *)Region + 6) = v17;
  v19 = 1;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 88LL) + v17;
  v20 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v20[1] = v20;
  *v20 = v20;
  v21 = *(int **)(*(_QWORD *)this + 88LL);
  v21[1] = 0x80000000;
  v22 = v21 + 4;
  v21[2] = v15;
  *v21 = 0;
  v21[3] = 0;
LABEL_12:
  v23 = 1LL;
  v76 = 1LL;
  v24 = (char *)&v81 + 4;
  while ( *((_DWORD *)v24 + 8) )
  {
LABEL_26:
    --v23;
    v24 -= 40;
    v76 = v23;
    if ( v23 < 0 )
    {
      v40 = HIDWORD(v80);
      v41 = HIDWORD(v78);
      v42 = DWORD1(v81);
      if ( SHIDWORD(v83) < SHIDWORD(v80) )
        v40 = HIDWORD(v83);
      v43 = DWORD1(v78);
      HIDWORD(v83) -= v40;
      HIDWORD(v80) -= v40;
      if ( !(HIDWORD(v81) | HIDWORD(v78)) && !(DWORD1(v81) | DWORD1(v78)) )
      {
        v44 = v78;
        v45 = *v21;
        if ( (_DWORD)v81 == (_DWORD)v78 )
        {
          v74 = v15 + v40;
          if ( v45 )
          {
            v22[1] = v15;
            *v22 = 0;
            v21 = v22;
            v22[3] = 0;
            v15 += v40;
            v22[2] = v74;
            v22 += 4;
            ++v19;
          }
          else
          {
            v21[2] = v74;
            v15 += v40;
          }
        }
        else
        {
          v46 = v81;
          if ( (int)v81 <= (int)v78 )
          {
            v46 = v78;
            v44 = v81;
          }
          if ( v45 == 2 && v21[3] == v44 && v21[4] == v46 )
          {
            v15 += v40;
            v21[2] = v15;
          }
          else
          {
            v22[1] = v15;
            v21 = v22;
            v15 += v40;
            *v22 = 2;
            v22[2] = v15;
            v22[3] = v44;
            v22[4] = v46;
            v22[5] = 2;
            v22 += 6;
            ++v19;
          }
        }
        goto LABEL_12;
      }
      v52 = (unsigned __int64)v83;
      v53 = v82;
      v54 = (unsigned __int64)v80;
      v55 = v79;
      while ( 2 )
      {
        v56 = v78;
        v57 = v81;
LABEL_51:
        if ( v56 - v57 <= 0 )
        {
          if ( v56 != v57 )
          {
            v71 = v81;
            v72 = v52;
            v73 = v53;
            v53 = v55;
            v81 = v78;
            v42 = DWORD1(v78);
            v78 = v71;
            v52 = v54;
            v41 = HIDWORD(v71);
            v54 = v72;
            v43 = DWORD1(v71);
            v82 = v55;
            v55 = v73;
            v79 = v73;
            continue;
          }
          if ( *v21 )
          {
            *v22 = 0;
            v22[3] = 0;
            goto LABEL_55;
          }
LABEL_63:
          v21[2] = ++v15;
        }
        else
        {
          if ( *v21 == 2 && v21[3] == v57 && v21[4] == v56 )
            goto LABEL_63;
          *v22 = 2;
          v22[4] = v56;
          v22[5] = 2;
          v22[3] = v57;
LABEL_55:
          v58 = *v22;
          v21 = v22;
          v22[1] = v15++;
          v22[2] = v15;
          v22 = (int *)((char *)v22 + (unsigned int)(4 * v58 + 16));
          ++v19;
        }
        break;
      }
      v56 += v43;
      v59 = v41 + DWORD2(v78) < 0;
      v60 = v41 + DWORD2(v78);
      LODWORD(v78) = v56;
      DWORD2(v78) += v41;
      if ( !v59 )
      {
        ++v56;
        DWORD2(v78) = v60 - v79;
        LODWORD(v78) = v56;
      }
      v57 += v42;
      v59 = DWORD2(v81) + HIDWORD(v81) < 0;
      v61 = DWORD2(v81) + HIDWORD(v81);
      DWORD2(v81) += HIDWORD(v81);
      LODWORD(v81) = v57;
      if ( !v59 )
      {
        ++v57;
        DWORD2(v81) = v61 - v82;
        LODWORD(v81) = v57;
      }
      if ( !--v40 )
      {
        v83 = v52;
        v80 = v54;
        goto LABEL_12;
      }
      goto LABEL_51;
    }
  }
  while ( --v85 >= 0 )
  {
    v25 = *(int **)(v24 + 20);
    v26 = (struct _POINTFIX *)((char *)v25 + *((int *)v24 + 7));
    *(_QWORD *)(v24 + 20) = v26;
    if ( v26 < v4 )
    {
      *(_QWORD *)(v24 + 20) = v77;
      v26 = v77;
    }
    else if ( v26 > v77 )
    {
      *(_QWORD *)(v24 + 20) = v4;
      v26 = v4;
    }
    v27 = v26->y;
    *((_DWORD *)v24 + 8) = ((v27 + 15) >> 4) - v15;
    if ( ((v27 + 15) >> 4) - v15 > 0 )
    {
      v28 = v25[1];
      v29 = v27 - v28;
      x = v26->x;
      v31 = *v25;
      v32 = x - *v25;
      if ( v32 < 0 )
      {
        v65 = -v32;
        if ( (int)v65 < (int)v29 )
        {
          v33 = -1;
          v34 = v29 - v65;
          *(_DWORD *)v24 = -1;
          *((_DWORD *)v24 + 2) = v29 - v65;
        }
        else
        {
          v66 = v65 % v29;
          *((_DWORD *)v24 + 2) = v65 % v29;
          v33 = -(int)(v65 / v29);
          v34 = v65 % v29;
          *(_DWORD *)v24 = v33;
          if ( (int)(v65 % v29) > 0 )
          {
            *(_DWORD *)v24 = --v33;
            v34 = v29 - v66;
            *((_DWORD *)v24 + 2) = v29 - v66;
          }
        }
      }
      else if ( v32 >= (int)v29 )
      {
        v70 = v32 % v29;
        v69 = v32 / v29;
        v34 = v70;
        *(_DWORD *)v24 = v69;
        v33 = v69;
        *((_DWORD *)v24 + 2) = v70;
      }
      else
      {
        *(_DWORD *)v24 = 0;
        v33 = 0;
        v34 = v32;
        *((_DWORD *)v24 + 2) = v32;
      }
      v36 = v28 & 0xF;
      v35 = v36 == 0;
      *((_DWORD *)v24 + 3) = v29;
      v75 = v36;
      v37 = v31;
      v38 = -1;
      if ( !v35 )
      {
        for ( i = 16 - v75; i > 0; --i )
        {
          v49 = v33 + v31;
          v37 = v33 + v31 + 1;
          v51 = v34 + v38;
          v50 = v51;
          if ( v51 < 0 )
            v37 = v49;
          v38 = v51 - v29;
          if ( v50 < 0 )
            v38 = v50;
          v31 = v37;
        }
        v23 = v76;
      }
      v39 = v37 & 0xF;
      if ( (v37 & 0xF) != 0 )
      {
        v37 += 15;
        v38 -= v29 * (16 - v39);
      }
      v4 = a4;
      *((_DWORD *)v24 - 1) = v37 >> 4;
      *((_DWORD *)v24 + 1) = v38 >> 4;
      goto LABEL_26;
    }
  }
  if ( *v21 )
  {
    ++v19;
    *v22 = 0;
    *((_QWORD *)v22 + 1) = 0x7FFFFFFFLL;
    v22[1] = v15;
    v22 += 4;
  }
  else
  {
    v21[2] = 0x7FFFFFFF;
  }
  *(_DWORD *)(*(_QWORD *)this + 84LL) = v19;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v22;
  result = 1LL;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = (_DWORD)v22 - *(_DWORD *)(*(_QWORD *)this + 88LL);
  return result;
}
