/*
 * XREFs of ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C0147D10
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C0147B60 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bFastFill(
        int a1,
        struct _POINTFIX *a2,
        __m128i *a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void (*a5)(int, struct _ROW *, unsigned int, void *),
        void *a6)
{
  struct _POINTFIX *v6; // r13
  void *v7; // r11
  struct _POINTFIX *v8; // r8
  int v9; // r10d
  FIX y; // r9d
  struct _POINTFIX *v11; // rcx
  int *v13; // r15
  unsigned int v14; // esi
  unsigned int v15; // r14d
  int v16; // ebx
  int i; // eax
  __int64 v18; // r8
  int *v19; // rdx
  struct _POINTFIX *v20; // rcx
  int v21; // r9d
  int v22; // r12d
  unsigned int v23; // r10d
  int v24; // r9d
  int v25; // eax
  int v26; // r11d
  int v27; // edx
  int v28; // ecx
  int v29; // edi
  int v30; // r9d
  int v31; // ecx
  int v32; // eax
  int v33; // edi
  int v34; // edx
  int v35; // r8d
  bool v36; // sf
  int v37; // edx
  int v38; // r8d
  int v39; // edx
  unsigned int v40; // eax
  struct _POINTFIX *v41; // rax
  FIX v42; // ecx
  FIX *p_y; // rax
  int v44; // ecx
  int v45; // r9d
  signed int v46; // eax
  __int64 v47; // r8
  char *v48; // rdx
  struct _POINTFIX *v49; // rcx
  unsigned __int64 v50; // rax
  int j; // eax
  int v52; // r12d
  __int64 v53; // r9
  int v54; // edx
  int v55; // r8d
  __int32 v56; // edi
  int v57; // r11d
  __int64 v58; // r9
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdx
  int v61; // ecx
  int v62; // eax
  unsigned int v63; // [rsp+30h] [rbp-288h]
  int v64; // [rsp+34h] [rbp-284h]
  int v65; // [rsp+38h] [rbp-280h]
  __m128i v66; // [rsp+50h] [rbp-268h]
  __int128 v67; // [rsp+60h] [rbp-258h]
  __int128 v68; // [rsp+70h] [rbp-248h]
  __int64 v69; // [rsp+80h] [rbp-238h]
  __int128 v70; // [rsp+88h] [rbp-230h]
  __int128 v71; // [rsp+98h] [rbp-220h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-210h]
  int *v73; // [rsp+B0h] [rbp-208h]
  struct _POINTFIX *v74; // [rsp+B8h] [rbp-200h]
  void (*v75)(int, struct _ROW *, unsigned int, void *); // [rsp+C0h] [rbp-1F8h]
  struct _POINTFIX *v76; // [rsp+C8h] [rbp-1F0h]
  __m128i *v77; // [rsp+D0h] [rbp-1E8h]
  int v78; // [rsp+D8h] [rbp-1E0h]
  unsigned int v79; // [rsp+DCh] [rbp-1DCh]
  void (*v80)(struct _RECTL *, unsigned int, void *); // [rsp+E0h] [rbp-1D8h]
  struct _POINTFIX *v81; // [rsp+F0h] [rbp-1C8h]
  __int128 v82; // [rsp+F8h] [rbp-1C0h]
  __int128 v83; // [rsp+108h] [rbp-1B0h]
  __int64 v84; // [rsp+118h] [rbp-1A0h]
  __int128 v85; // [rsp+120h] [rbp-198h] BYREF
  _BYTE v86[320]; // [rsp+130h] [rbp-188h] BYREF
  int v87; // [rsp+2C0h] [rbp+8h]

  v87 = a1;
  v6 = a2;
  v74 = a2;
  v81 = a2;
  v77 = a3;
  v80 = a4;
  v75 = a5;
  v7 = a6;
  v8 = a2;
  v76 = &a2[a1 - 1];
  v9 = a1 - 1;
  y = a2->y;
  if ( a2[1].y <= y )
  {
    do
    {
      ++v8;
      if ( !--v9 )
        goto LABEL_13;
    }
    while ( v8[1].y <= v8->y );
    v11 = v8;
    do
    {
      if ( !--v9 )
        goto LABEL_13;
      ++v11;
    }
    while ( v11[1].y >= v11->y );
    do
    {
      if ( v11[1].y < y )
        break;
      if ( !--v9 )
        goto LABEL_13;
      ++v11;
    }
    while ( v11[1].y <= v11->y );
    return 0LL;
  }
  while ( --v9 )
  {
    ++a2;
    if ( a2[1].y < a2->y )
    {
      while ( --v9 )
      {
        ++a2;
        v42 = a2[1].y;
        p_y = &a2->y;
        if ( v42 > a2->y )
        {
          v8 = a2;
          do
          {
            if ( v42 > y )
              break;
            if ( !--v9 )
              goto LABEL_13;
            p_y += 2;
            v42 = p_y[2];
          }
          while ( v42 >= *p_y );
          return 0LL;
        }
      }
      if ( a2[1].y < y )
        v8 = a2 + 1;
      break;
    }
  }
LABEL_13:
  v72 = 4294967288LL;
  v69 = 8LL;
  *((_QWORD *)&v71 + 1) = v8;
  *((_QWORD *)&v68 + 1) = v8;
  v65 = 0;
  v63 = 0;
  v13 = (int *)v86;
  v73 = (int *)v86;
  v14 = 0;
  v15 = 0;
  v16 = (v8->y + 15) >> 4;
  if ( v77 )
  {
    v66 = *v77;
    v50 = HIDWORD(v77->m128i_i64[0]);
    if ( (int)HIDWORD(v77->m128i_i64[0]) <= v16 )
      LODWORD(v50) = (v8->y + 15) >> 4;
    v16 = v50;
    if ( (int)v50 >= _mm_srli_si128(*v77, 8).m128i_i32[1] )
      return 1LL;
    v63 = v77->m128i_i64[1];
    v65 = (int)*v77;
  }
  else
  {
    v66.m128i_i32[1] = 0x80000000;
    v66.m128i_i32[3] = 0x7FFFFFFF;
  }
  if ( v77 )
  {
    v47 = 1LL;
    v48 = (char *)&v71 + 8;
    while ( v47 >= 0 )
    {
      while ( 1 )
      {
        if ( !v87 )
          return 1LL;
        v49 = (struct _POINTFIX *)(*(_QWORD *)v48 + *((int *)v48 + 2));
        if ( v49 < v6 )
        {
          v49 = v76;
        }
        else if ( v49 > v76 )
        {
          v49 = v6;
        }
        if ( v49->y >> 4 >= v66.m128i_i32[1] )
          break;
        --v87;
        *(_QWORD *)v48 = v49;
      }
      --v47;
      v48 -= 40;
    }
  }
LABEL_16:
  v79 = v15;
  for ( i = 1; ; i = v64 - 1 )
  {
    v64 = i;
    if ( i < 0 )
    {
      v33 = HIDWORD(v69);
      if ( SHIDWORD(v72) < SHIDWORD(v69) )
        v33 = HIDWORD(v72);
      HIDWORD(v72) -= v33;
      HIDWORD(v69) -= v33;
      if ( v16 + v33 > v66.m128i_i32[3] )
        v33 = v66.m128i_i32[3] - v16;
      if ( HIDWORD(v70) | HIDWORD(v67) || DWORD1(v70) | DWORD1(v67) || v33 <= 2 )
      {
        v15 = v16;
        if ( v14 )
          v15 = v79;
        while ( 1 )
        {
          v34 = v67;
          if ( (int)v67 - (int)v70 <= 0 )
          {
            if ( (_DWORD)v67 != (_DWORD)v70 )
            {
              v82 = v70;
              v83 = v71;
              v84 = v72;
              v70 = v67;
              v71 = v68;
              v72 = v69;
              v67 = v82;
              v68 = v83;
              v69 = v84;
              continue;
            }
            if ( v14 )
            {
              ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v75)(v15, v86, v14, v7);
              goto LABEL_78;
            }
LABEL_58:
            v15 = v16 + 1;
            goto LABEL_47;
          }
          if ( v77 )
          {
            v44 = v65;
            if ( (int)v70 >= v65 )
              v44 = v70;
            *v13 = v44;
            v45 = v63;
            v46 = v63;
            if ( (int)v67 <= (int)v63 )
              v46 = v67;
            v13[1] = v46;
            if ( v44 >= v46 )
            {
              if ( v14 )
              {
                ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v75)(v15, v86, v14, v7);
                v45 = v63;
                v7 = a6;
                v13 = (int *)v86;
                v73 = (int *)v86;
                v14 = 0;
              }
              v15 = v16 + 1;
              if ( (int)v70 < v65 && (int)**((_DWORD **)&v71 + 1) >> 4 < v65 && (int)**((_DWORD **)&v68 + 1) >> 4 < v65
                || (int)v70 >= v45
                && (int)**((_DWORD **)&v71 + 1) >> 4 >= v45
                && (int)**((_DWORD **)&v68 + 1) >> 4 >= v45 )
              {
                goto LABEL_110;
              }
              goto LABEL_47;
            }
          }
          else
          {
            *v13 = v70;
            v13[1] = v34;
          }
          ++v14;
          v13 += 2;
          v73 = v13;
          if ( v14 == 40 )
          {
            ((void (__fastcall *)(_QWORD, _BYTE *, __int64, void *))v75)(v15, v86, 40LL, v7);
LABEL_78:
            v13 = (int *)v86;
            v73 = (int *)v86;
            v14 = 0;
            goto LABEL_58;
          }
LABEL_47:
          v35 = DWORD1(v67) + v67;
          LODWORD(v67) = DWORD1(v67) + v67;
          v36 = HIDWORD(v67) + DWORD2(v67) < 0;
          v37 = HIDWORD(v67) + DWORD2(v67);
          DWORD2(v67) += HIDWORD(v67);
          if ( !v36 )
          {
            DWORD2(v67) = v37 - v68;
            LODWORD(v67) = v35 + 1;
          }
          v38 = DWORD1(v70) + v70;
          LODWORD(v70) = DWORD1(v70) + v70;
          v36 = HIDWORD(v70) + DWORD2(v70) < 0;
          v39 = HIDWORD(v70) + DWORD2(v70);
          DWORD2(v70) += HIDWORD(v70);
          if ( !v36 )
          {
            DWORD2(v70) = v39 - v71;
            LODWORD(v70) = v38 + 1;
          }
          --v33;
          ++v16;
          v7 = a6;
          if ( !v33 )
            goto LABEL_16;
        }
      }
      if ( v14 )
      {
        ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v75)(v15, v86, v14, v7);
        v52 = v65;
        v53 = v63;
        v7 = a6;
        v13 = (int *)v86;
        v73 = (int *)v86;
        v14 = 0;
      }
      else
      {
        v52 = v65;
        v53 = v63;
      }
      v54 = v67;
      if ( (_DWORD)v70 != (_DWORD)v67 )
      {
        v55 = v70;
        if ( (int)v70 <= (int)v67 )
        {
          v55 = v67;
          v54 = v70;
        }
        v85 = 0LL;
        DWORD1(v85) = v16;
        HIDWORD(v85) = v16 + v33;
        if ( v77 )
        {
          v61 = v52;
          if ( v54 >= v52 )
            v61 = v54;
          LODWORD(v85) = v61;
          v62 = v53;
          if ( v55 <= (int)v53 )
            v62 = v55;
          DWORD2(v85) = v62;
          if ( v61 < v62 )
          {
            ((void (__fastcall *)(__int128 *, __int64, void *))v80)(&v85, 1LL, v7);
            v7 = a6;
          }
        }
        else
        {
          LODWORD(v85) = v54;
          DWORD2(v85) = v55;
          ((void (__fastcall *)(__int128 *, __int64, void *, __int64))v80)(&v85, 1LL, v7, v53);
          v7 = a6;
        }
      }
LABEL_110:
      v16 += v33;
      goto LABEL_16;
    }
    v18 = 5LL * i;
    if ( !*((_DWORD *)&v69 + 10 * i + 1) )
      break;
LABEL_34:
    ;
  }
  while ( --v87 >= 0 && v16 < v66.m128i_i32[3] )
  {
    v19 = (int *)*((_QWORD *)&v68 + v18 + 1);
    v20 = (struct _POINTFIX *)((char *)v19 + *((int *)&v69 + 2 * v18));
    *((_QWORD *)&v68 + v18 + 1) = v20;
    if ( v20 < v6 )
    {
      v41 = v76;
      *((_QWORD *)&v68 + v18 + 1) = v76;
      v20 = v41;
    }
    else if ( v20 > v76 )
    {
      *((_QWORD *)&v68 + v18 + 1) = v6;
      v20 = v81;
    }
    v21 = v20->y;
    v78 = v21;
    *((_DWORD *)&v69 + 2 * v18 + 1) = ((v21 + 15) >> 4) - v16;
    if ( ((v21 + 15) >> 4) - v16 > 0 )
    {
      v22 = v19[1];
      v23 = v21 - v22;
      v24 = *v19;
      v25 = v20->x - *v19;
      if ( v25 < 0 )
      {
        v40 = *v19 - v20->x;
        if ( (int)v40 < (int)v23 )
        {
          v26 = -1;
          *((_DWORD *)&v67 + 2 * v18 + 1) = -1;
          v27 = v23 - v40;
          goto LABEL_66;
        }
        v27 = v40 % v23;
        v26 = -(int)(v40 / v23);
        *((_DWORD *)&v67 + 2 * v18 + 1) = v26;
        *((_DWORD *)&v67 + 2 * v18 + 3) = v40 % v23;
        if ( (int)(v40 % v23) > 0 )
        {
          *((_DWORD *)&v67 + 2 * v18 + 1) = --v26;
          v25 = v23 - v27;
LABEL_28:
          v27 = v25;
          *((_DWORD *)&v67 + 2 * v18 + 3) = v25;
        }
      }
      else
      {
        if ( v25 < (int)v23 )
        {
          v26 = 0;
          *((_DWORD *)&v67 + 2 * v18 + 1) = 0;
          goto LABEL_28;
        }
        v27 = v25 % v23;
        v26 = v25 / v23;
        *((_DWORD *)&v67 + 2 * v18 + 1) = v25 / v23;
LABEL_66:
        *((_DWORD *)&v67 + 2 * v18 + 3) = v27;
      }
      *((_DWORD *)&v68 + 2 * v18) = v23;
      v28 = -1;
      if ( (v22 & 0xF) != 0 )
      {
        for ( j = 16 - (v22 & 0xF); j > 0; --j )
        {
          v24 += v26;
          *((_DWORD *)&v67 + 2 * v18) = v24;
          v36 = v27 + v28 < 0;
          v28 += v27;
          *((_DWORD *)&v67 + 2 * v18 + 2) = v28;
          if ( !v36 )
          {
            v28 -= v23;
            *((_DWORD *)&v67 + 2 * v18 + 2) = v28;
            *((_DWORD *)&v67 + 2 * v18) = ++v24;
          }
        }
      }
      v29 = v24 & 0xF;
      if ( (v24 & 0xF) != 0 )
      {
        v24 += 15;
        v28 -= v23 * (16 - v29);
      }
      v30 = v24 >> 4;
      *((_DWORD *)&v67 + 2 * v18) = v30;
      v31 = v28 >> 4;
      *((_DWORD *)&v67 + 2 * v18 + 2) = v31;
      v32 = (v22 + 15) >> 4;
      if ( v32 < v66.m128i_i32[1] )
      {
        v56 = v66.m128i_i32[1] - v32;
        if ( v78 >> 4 >= v66.m128i_i32[1] || v26 || v27 )
        {
          v57 = v30 + v56 * v26;
          *((_DWORD *)&v67 + 2 * v18) = v57;
          v58 = v31 + v56 * (__int64)v27;
          if ( v58 < 0 )
          {
            *((_DWORD *)&v67 + 2 * v18 + 2) = v58;
          }
          else
          {
            if ( (v58 & 0xFFFFFFFF80000000uLL) != 0 )
            {
              v59 = v58 / (unsigned __int64)v23;
              v60 = v58 % (unsigned __int64)v23;
            }
            else
            {
              LODWORD(v60) = (int)v58 % (int)v23;
              LODWORD(v59) = (int)v58 / (int)v23;
            }
            *((_DWORD *)&v67 + 2 * v18) = v57 + 1 + v59;
            *((_DWORD *)&v67 + 2 * v18 + 2) = v60 - v23;
          }
        }
      }
      v7 = a6;
      goto LABEL_34;
    }
  }
  if ( v14 )
    ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v75)(v15, v86, v14, v7);
  return 1LL;
}
