/*
 * XREFs of ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C0183400
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C01839C4 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0053290 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::bFastFill(RGNMEMOBJ *this, struct EPATHOBJ *a2, int a3, struct _POINTFIX *a4)
{
  struct _POINTFIX *v4; // r15
  int v5; // r10d
  FIX y; // ebx
  struct _POINTFIX *v9; // r11
  struct _POINTFIX *v10; // rsi
  FIX v11; // eax
  FIX v12; // ecx
  FIX *v13; // rax
  __int64 result; // rax
  __m128i *v15; // rax
  __int64 v16; // rcx
  __m128i v17; // xmm1
  int v18; // ebx
  __int64 v19; // rax
  unsigned int v20; // esi
  struct REGION *Region; // rax
  int v22; // r12d
  _QWORD *v23; // rax
  int *v24; // r9
  int *v25; // r8
  __int64 v26; // r13
  char *v27; // r10
  int *v28; // rdx
  struct _POINTFIX *v29; // rcx
  struct _POINTFIX *v30; // rax
  struct _POINTFIX *v31; // rdx
  FIX v32; // ecx
  FIX *p_y; // rax
  FIX v34; // r11d
  int v35; // r14d
  unsigned int v36; // r11d
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  int v39; // esi
  int v40; // r15d
  int v41; // edx
  int v42; // eax
  bool v43; // zf
  int v44; // r14d
  int v45; // r14d
  int v46; // edx
  int i; // r13d
  int v48; // eax
  bool v49; // sf
  int v50; // edx
  int v51; // eax
  int v52; // ecx
  int v53; // edx
  int v54; // r13d
  int v55; // esi
  int v56; // r14d
  int v57; // eax
  int v58; // r11d
  int v59; // r10d
  int v60; // eax
  __int128 v61; // xmm1
  __int128 v62; // xmm5
  __int128 v63; // xmm6
  __int128 v64; // xmm7
  int v65; // r10d
  int v66; // ecx
  __int64 v67; // rax
  int v68; // r11d
  int v69; // r11d
  __int128 v70; // xmm4
  __int128 v71; // xmm0
  __int128 v72; // xmm2
  __int128 v73; // [rsp+28h] [rbp-69h]
  __int128 v74; // [rsp+38h] [rbp-59h]
  __int64 v75; // [rsp+48h] [rbp-49h]
  __int128 v76; // [rsp+50h] [rbp-41h] BYREF
  __int128 v77; // [rsp+60h] [rbp-31h]
  __int64 v78; // [rsp+70h] [rbp-21h]
  int v79; // [rsp+78h] [rbp-19h]
  int v80; // [rsp+7Ch] [rbp-15h]
  __int64 v81; // [rsp+80h] [rbp-11h]
  struct _POINTFIX *v82; // [rsp+88h] [rbp-9h]
  int v84; // [rsp+108h] [rbp+77h]

  v84 = a3;
  v4 = a4;
  v5 = a3 - 1;
  y = v4->y;
  v9 = v4;
  v10 = v4;
  v82 = &v4[a3 - 1];
  if ( v4[1].y <= y )
  {
    while ( 1 )
    {
      ++v10;
      if ( !--v5 )
        break;
      if ( v10[1].y > v10->y )
      {
        v31 = v10;
        while ( --v5 )
        {
          v32 = v31[2].y;
          ++v31;
          p_y = &v31->y;
          if ( v32 < v31->y )
          {
            while ( 1 )
            {
              if ( v32 < y )
                return 0LL;
              if ( !--v5 )
                break;
              v32 = p_y[4];
              p_y += 2;
              if ( v32 > *p_y )
                return 0LL;
            }
            goto LABEL_13;
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
            goto LABEL_13;
          }
          v12 = v9[2].y;
          ++v9;
          v13 = &v9->y;
        }
        while ( v12 <= v9->y );
        v10 = v9;
        do
        {
          if ( v12 > y )
            break;
          if ( !--v5 )
            goto LABEL_13;
          v12 = v13[4];
          v13 += 2;
        }
        while ( v12 >= *v13 );
        return 0LL;
      }
    }
  }
LABEL_13:
  v15 = (__m128i *)*((_QWORD *)a2 + 1);
  v16 = (int)HIDWORD(v15[3].m128i_i64[0]);
  v17 = _mm_srli_si128(v15[3], 8);
  v18 = (v10->y + 15) >> 4;
  v78 = 4294967288LL;
  v75 = 8LL;
  *((_QWORD *)&v77 + 1) = v10;
  *((_QWORD *)&v74 + 1) = v10;
  v19 = 24 * ((v17.m128i_i32[1] - v16 + 15) >> 4) + 32;
  if ( v19 > 0x7FFFFFFF )
    return 0LL;
  v20 = 112;
  if ( (unsigned __int64)v19 > 0x70 )
    v20 = 24 * ((v17.m128i_i32[1] - v16 + 15) >> 4) + 32;
  Region = RGNMEMOBJ::AllocateRegion(v20);
  *(_QWORD *)this = Region;
  if ( !Region )
    return 0LL;
  *((_DWORD *)Region + 6) = v20;
  v22 = 1;
  *(_DWORD *)(*(_QWORD *)this + 48LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 52LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 32LL) + v20;
  v23 = (_QWORD *)(*(_QWORD *)this + 88LL);
  v23[1] = v23;
  *v23 = v23;
  v24 = *(int **)(*(_QWORD *)this + 32LL);
  *v24 = 0;
  v25 = v24 + 4;
  v24[3] = 0;
  v24[1] = 0x80000000;
LABEL_18:
  v24[2] = v18;
LABEL_19:
  v26 = 1LL;
  v81 = 1LL;
  v27 = (char *)&v76 + 4;
  while ( *((_DWORD *)v27 + 8) )
  {
LABEL_56:
    --v26;
    v27 -= 40;
    v81 = v26;
    if ( v26 < 0 )
    {
      v53 = HIDWORD(v75);
      v54 = HIDWORD(v73);
      v55 = DWORD1(v76);
      if ( SHIDWORD(v78) < SHIDWORD(v75) )
        v53 = HIDWORD(v78);
      v56 = DWORD1(v73);
      HIDWORD(v78) -= v53;
      HIDWORD(v75) -= v53;
      if ( !(HIDWORD(v76) | HIDWORD(v73)) && !(DWORD1(v76) | DWORD1(v73)) )
      {
        v57 = v73;
        v58 = *v24;
        if ( (_DWORD)v76 == (_DWORD)v73 )
        {
          v60 = v18 + v53;
          if ( v58 )
          {
            *v25 = 0;
            v24 = v25;
            v25[3] = 0;
            v25[1] = v18;
            v25[2] = v60;
            v25 += 4;
            ++v22;
          }
          else
          {
            v24[2] = v60;
          }
          v18 += v53;
        }
        else
        {
          v59 = v76;
          if ( (int)v76 <= (int)v73 )
          {
            v59 = v73;
            v57 = v76;
          }
          if ( v58 == 2 && v24[3] == v57 && v24[4] == v59 )
          {
            v18 += v53;
            goto LABEL_18;
          }
          v25[1] = v18;
          v24 = v25;
          v18 += v53;
          *v25 = 2;
          v25[2] = v18;
          v25[3] = v57;
          v25[4] = v59;
          v25[5] = 2;
          v25 += 6;
          ++v22;
        }
        goto LABEL_19;
      }
      v61 = (unsigned __int64)v78;
      v62 = v77;
      v63 = (unsigned __int64)v75;
      v64 = v74;
      while ( 2 )
      {
        v65 = v73;
        v66 = v76;
LABEL_75:
        if ( v65 - v66 <= 0 )
        {
          if ( v65 != v66 )
          {
            v70 = v76;
            v71 = v61;
            v72 = v62;
            v62 = v64;
            v76 = v73;
            v55 = DWORD1(v73);
            v73 = v70;
            v61 = v63;
            v54 = HIDWORD(v70);
            v63 = v71;
            v56 = DWORD1(v70);
            v77 = v64;
            v64 = v72;
            v74 = v72;
            continue;
          }
          if ( !*v24 )
            goto LABEL_82;
          *v25 = 0;
          v67 = 16LL;
          v25[3] = 0;
LABEL_84:
          v25[1] = v18;
          v24 = v25;
          v25[2] = ++v18;
          v25 = (int *)((char *)v25 + v67);
          ++v22;
        }
        else
        {
          if ( *v24 != 2 || v24[3] != v66 || v24[4] != v65 )
          {
            *v25 = 2;
            v25[5] = 2;
            v67 = 24LL;
            v25[3] = v66;
            v25[4] = v65;
            goto LABEL_84;
          }
LABEL_82:
          v24[2] = ++v18;
        }
        break;
      }
      v65 += v56;
      v49 = v54 + DWORD2(v73) < 0;
      v68 = v54 + DWORD2(v73);
      LODWORD(v73) = v65;
      DWORD2(v73) += v54;
      if ( !v49 )
      {
        ++v65;
        DWORD2(v73) = v68 - v74;
        LODWORD(v73) = v65;
      }
      v66 += v55;
      v49 = DWORD2(v76) + HIDWORD(v76) < 0;
      v69 = DWORD2(v76) + HIDWORD(v76);
      DWORD2(v76) += HIDWORD(v76);
      LODWORD(v76) = v66;
      if ( !v49 )
      {
        ++v66;
        DWORD2(v76) = v69 - v77;
        LODWORD(v76) = v66;
      }
      if ( !--v53 )
      {
        v78 = v61;
        v75 = v63;
        goto LABEL_19;
      }
      goto LABEL_75;
    }
  }
  while ( --v84 >= 0 )
  {
    v28 = *(int **)(v27 + 20);
    v29 = (struct _POINTFIX *)((char *)v28 + *((int *)v27 + 7));
    *(_QWORD *)(v27 + 20) = v29;
    if ( v29 >= v4 )
    {
      if ( v29 > v82 )
      {
        *(_QWORD *)(v27 + 20) = v4;
        v29 = v4;
      }
    }
    else
    {
      v30 = v82;
      *(_QWORD *)(v27 + 20) = v82;
      v29 = v30;
    }
    v34 = v29->y;
    *((_DWORD *)v27 + 8) = ((v34 + 15) >> 4) - v18;
    if ( ((v34 + 15) >> 4) - v18 > 0 )
    {
      v35 = v28[1];
      v36 = v34 - v35;
      v37 = v29->x - *v28;
      v79 = *v28;
      if ( (v37 & 0x80000000) == 0 )
      {
        if ( (int)v37 >= (int)v36 )
        {
          v40 = v37 / v36;
          *(_DWORD *)v27 = v37 / v36;
          v39 = v37 % v36;
          *((_DWORD *)v27 + 2) = v37 % v36;
        }
        else
        {
          *(_DWORD *)v27 = 0;
          v39 = v37;
          v40 = 0;
          *((_DWORD *)v27 + 2) = v37;
        }
      }
      else
      {
        v38 = -v37;
        if ( (int)v38 >= (int)v36 )
        {
          v41 = v38 % v36;
          v40 = -(int)(v38 / v36);
          *(_DWORD *)v27 = v40;
          v39 = v38 % v36;
          *((_DWORD *)v27 + 2) = v38 % v36;
          if ( (int)(v38 % v36) > 0 )
          {
            *(_DWORD *)v27 = --v40;
            v39 = v36 - v41;
            *((_DWORD *)v27 + 2) = v36 - v41;
          }
        }
        else
        {
          *(_DWORD *)v27 = -1;
          v39 = v36 - v38;
          *((_DWORD *)v27 + 2) = v36 - v38;
          v40 = -1;
        }
      }
      v42 = v79;
      v44 = v35 & 0xF;
      v43 = v44 == 0;
      v80 = v44;
      v45 = v79;
      *((_DWORD *)v27 + 3) = v36;
      v46 = -1;
      if ( !v43 )
      {
        for ( i = 16 - v80; i > 0; --i )
        {
          v48 = v40 + v42;
          v49 = v39 + v46 < 0;
          v50 = v39 + v46;
          v45 = v48 + 1;
          if ( v49 )
            v45 = v48;
          v51 = v50;
          v46 = v50 - v36;
          if ( v51 < 0 )
            v46 = v51;
          v42 = v45;
        }
        v26 = v81;
      }
      v52 = v45 & 0xF;
      if ( (v45 & 0xF) != 0 )
      {
        v45 += 15;
        v46 -= v36 * (16 - v52);
      }
      v4 = a4;
      *((_DWORD *)v27 + 1) = v46 >> 4;
      *((_DWORD *)v27 - 1) = v45 >> 4;
      goto LABEL_56;
    }
  }
  if ( *v24 )
  {
    *v25 = 0;
    ++v22;
    v25[3] = 0;
    v25[1] = v18;
    v25[2] = 0x7FFFFFFF;
    v25 += 4;
  }
  else
  {
    v24[2] = 0x7FFFFFFF;
  }
  *(_DWORD *)(*(_QWORD *)this + 52LL) = v22;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v25;
  result = 1LL;
  *(_DWORD *)(*(_QWORD *)this + 48LL) = (_DWORD)v25 - *(_DWORD *)(*(_QWORD *)this + 32LL);
  return result;
}
