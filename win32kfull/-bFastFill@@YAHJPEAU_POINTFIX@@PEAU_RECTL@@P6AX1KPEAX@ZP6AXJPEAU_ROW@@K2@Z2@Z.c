/*
 * XREFs of ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C02F6EC8
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C02F6D08 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
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
  FIX v11; // ecx
  FIX *p_y; // rax
  int v13; // r12d
  int *v14; // r15
  unsigned int v15; // esi
  unsigned int v16; // r14d
  int v17; // ebx
  unsigned __int64 v18; // rax
  struct _POINTFIX *v19; // rcx
  __int64 v21; // r8
  char *v22; // rdx
  struct _POINTFIX *v23; // rcx
  int i; // eax
  __int64 v25; // r8
  int *v26; // rdx
  struct _POINTFIX *v27; // rcx
  struct _POINTFIX *v28; // rax
  int v29; // r9d
  int v30; // edi
  unsigned int v31; // r10d
  int v32; // r9d
  int v33; // ecx
  unsigned int v34; // ecx
  int v35; // edx
  int v36; // r11d
  int v37; // edi
  int v38; // ecx
  int v39; // eax
  bool v40; // sf
  int v41; // edi
  int v42; // r9d
  int v43; // ecx
  int v44; // eax
  __int32 v45; // edi
  __int64 v46; // r9
  unsigned __int64 v47; // r11
  unsigned __int64 v48; // rdx
  int v49; // edi
  __int64 v50; // r9
  int v51; // edx
  int v52; // r8d
  int v53; // ecx
  int v54; // eax
  int v55; // edx
  int v56; // ecx
  int v57; // r9d
  signed int v58; // eax
  int v59; // r8d
  int v60; // edx
  int v61; // r8d
  int v62; // edx
  unsigned int v63; // [rsp+30h] [rbp-298h]
  int v64; // [rsp+34h] [rbp-294h]
  __m128i v65; // [rsp+50h] [rbp-278h]
  __int128 v66; // [rsp+60h] [rbp-268h]
  __int128 v67; // [rsp+70h] [rbp-258h]
  __int64 v68; // [rsp+80h] [rbp-248h]
  __int128 v69; // [rsp+88h] [rbp-240h]
  __int128 v70; // [rsp+98h] [rbp-230h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-220h]
  int v72; // [rsp+B0h] [rbp-218h]
  int *v73; // [rsp+B8h] [rbp-210h]
  struct _POINTFIX *v74; // [rsp+C0h] [rbp-208h]
  void (*v75)(int, struct _ROW *, unsigned int, void *); // [rsp+C8h] [rbp-200h]
  struct _POINTFIX *v76; // [rsp+D0h] [rbp-1F8h]
  __m128i *v77; // [rsp+D8h] [rbp-1F0h]
  int v78; // [rsp+E0h] [rbp-1E8h]
  unsigned int v79; // [rsp+E4h] [rbp-1E4h]
  void (*v80)(struct _RECTL *, unsigned int, void *); // [rsp+E8h] [rbp-1E0h]
  struct _POINTFIX *v81; // [rsp+F8h] [rbp-1D0h]
  __int128 v82; // [rsp+100h] [rbp-1C8h]
  __int128 v83; // [rsp+110h] [rbp-1B8h]
  __int64 v84; // [rsp+120h] [rbp-1A8h]
  __int128 v85; // [rsp+128h] [rbp-1A0h] BYREF
  _BYTE v86[320]; // [rsp+140h] [rbp-188h] BYREF
  int v87; // [rsp+2D0h] [rbp+8h]

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
    while ( 1 )
    {
      ++v8;
      if ( !--v9 )
        break;
      if ( v8[1].y > v8->y )
      {
        v19 = v8;
        while ( --v9 )
        {
          ++v19;
          if ( v19[1].y < v19->y )
          {
            while ( 1 )
            {
              if ( v19[1].y < y )
                return 0LL;
              if ( !--v9 )
                break;
              ++v19;
              if ( v19[1].y > v19->y )
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
    while ( --v9 )
    {
      ++a2;
      if ( a2[1].y < a2->y )
      {
        while ( --v9 )
        {
          ++a2;
          v11 = a2[1].y;
          p_y = &a2->y;
          if ( v11 > a2->y )
          {
            v8 = a2;
            do
            {
              if ( v11 > y )
                break;
              if ( !--v9 )
                goto LABEL_13;
              p_y += 2;
              v11 = p_y[2];
            }
            while ( v11 >= *p_y );
            return 0LL;
          }
        }
        if ( a2[1].y < y )
          v8 = a2 + 1;
        break;
      }
    }
  }
LABEL_13:
  v71 = 4294967288LL;
  v68 = 8LL;
  *((_QWORD *)&v70 + 1) = v8;
  *((_QWORD *)&v67 + 1) = v8;
  v13 = 0;
  v63 = 0;
  v14 = (int *)v86;
  v73 = (int *)v86;
  v15 = 0;
  v16 = 0;
  v17 = (v8->y + 15) >> 4;
  if ( v77 )
  {
    v65 = *v77;
    v18 = HIDWORD(v77->m128i_i64[0]);
    if ( (int)HIDWORD(v77->m128i_i64[0]) <= v17 )
      LODWORD(v18) = (v8->y + 15) >> 4;
    v17 = v18;
    if ( (int)v18 >= _mm_srli_si128(*v77, 8).m128i_i32[1] )
      return 1LL;
    v63 = v77->m128i_i64[1];
    v13 = (int)*v77;
  }
  else
  {
    v65.m128i_i32[1] = 0x80000000;
    v65.m128i_i32[3] = 0x7FFFFFFF;
  }
  if ( v77 )
  {
    v21 = 1LL;
    v22 = (char *)&v70 + 8;
LABEL_30:
    if ( v21 >= 0 )
    {
      while ( v87 )
      {
        v23 = (struct _POINTFIX *)(*(_QWORD *)v22 + *((int *)v22 + 2));
        if ( v23 >= v6 )
        {
          if ( v23 > v76 )
            v23 = v6;
        }
        else
        {
          v23 = v76;
        }
        if ( v23->y >> 4 >= v65.m128i_i32[1] )
        {
          --v21;
          v22 -= 40;
          goto LABEL_30;
        }
        --v87;
        *(_QWORD *)v22 = v23;
      }
      return 1LL;
    }
  }
LABEL_39:
  v79 = v16;
  for ( i = 1; ; i = v64 - 1 )
  {
    v64 = i;
    if ( i < 0 )
    {
      v49 = HIDWORD(v68);
      if ( SHIDWORD(v71) < SHIDWORD(v68) )
        v49 = HIDWORD(v71);
      HIDWORD(v71) -= v49;
      HIDWORD(v68) -= v49;
      if ( v17 + v49 > v65.m128i_i32[3] )
        v49 = v65.m128i_i32[3] - v17;
      if ( HIDWORD(v69) | HIDWORD(v66) || DWORD1(v69) | DWORD1(v66) || v49 <= 2 )
      {
        v16 = v17;
        if ( v15 )
          v16 = v79;
        while ( 1 )
        {
          v55 = v66;
          if ( (int)v66 - (int)v69 <= 0 )
          {
            if ( (_DWORD)v66 != (_DWORD)v69 )
            {
              v82 = v69;
              v83 = v70;
              v84 = v71;
              v69 = v66;
              v70 = v67;
              v71 = v68;
              v66 = v82;
              v67 = v83;
              v68 = v84;
              continue;
            }
            if ( v15 )
            {
              ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v75)(v16, v86, v15, v7);
LABEL_127:
              v14 = (int *)v86;
              v73 = (int *)v86;
              v15 = 0;
            }
            v16 = v17 + 1;
            goto LABEL_129;
          }
          if ( v77 )
          {
            v56 = v13;
            if ( (int)v69 >= v13 )
              v56 = v69;
            *v14 = v56;
            v57 = v63;
            v58 = v63;
            if ( (int)v66 <= (int)v63 )
              v58 = v66;
            v14[1] = v58;
            if ( v56 >= v58 )
            {
              if ( v15 )
              {
                ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v75)(v16, v86, v15, v7);
                v57 = v63;
                v7 = a6;
                v14 = (int *)v86;
                v73 = (int *)v86;
                v15 = 0;
              }
              v16 = v17 + 1;
              if ( (int)v69 < v13 && (int)**((_DWORD **)&v70 + 1) >> 4 < v13 && (int)**((_DWORD **)&v67 + 1) >> 4 < v13
                || (int)v69 >= v57
                && (int)**((_DWORD **)&v70 + 1) >> 4 >= v57
                && (int)**((_DWORD **)&v67 + 1) >> 4 >= v57 )
              {
                goto LABEL_102;
              }
              goto LABEL_129;
            }
          }
          else
          {
            *v14 = v69;
            v14[1] = v55;
          }
          ++v15;
          v14 += 2;
          v73 = v14;
          if ( v15 == 40 )
          {
            ((void (__fastcall *)(_QWORD, _BYTE *, __int64, void *))v75)(v16, v86, 40LL, v7);
            goto LABEL_127;
          }
LABEL_129:
          v59 = DWORD1(v66) + v66;
          LODWORD(v66) = DWORD1(v66) + v66;
          v40 = HIDWORD(v66) + DWORD2(v66) < 0;
          v60 = HIDWORD(v66) + DWORD2(v66);
          DWORD2(v66) += HIDWORD(v66);
          if ( !v40 )
          {
            DWORD2(v66) = v60 - v67;
            LODWORD(v66) = v59 + 1;
          }
          v61 = DWORD1(v69) + v69;
          LODWORD(v69) = DWORD1(v69) + v69;
          v40 = HIDWORD(v69) + DWORD2(v69) < 0;
          v62 = HIDWORD(v69) + DWORD2(v69);
          DWORD2(v69) += HIDWORD(v69);
          if ( !v40 )
          {
            DWORD2(v69) = v62 - v70;
            LODWORD(v69) = v61 + 1;
          }
          --v49;
          ++v17;
          v7 = a6;
          if ( !v49 )
            goto LABEL_39;
        }
      }
      if ( v15 )
      {
        ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v75)(v16, v86, v15, v7);
        v50 = v63;
        v7 = a6;
        v14 = (int *)v86;
        v73 = (int *)v86;
        v15 = 0;
      }
      else
      {
        v50 = v63;
      }
      v51 = v66;
      if ( (_DWORD)v69 != (_DWORD)v66 )
      {
        v52 = v69;
        if ( (int)v69 <= (int)v66 )
        {
          v52 = v66;
          v51 = v69;
        }
        v85 = 0LL;
        DWORD1(v85) = v17;
        HIDWORD(v85) = v17 + v49;
        if ( v77 )
        {
          v53 = v13;
          if ( v51 >= v13 )
            v53 = v51;
          LODWORD(v85) = v53;
          v54 = v50;
          if ( v52 <= (int)v50 )
            v54 = v52;
          DWORD2(v85) = v54;
          if ( v53 < v54 )
          {
            ((void (__fastcall *)(__int128 *, __int64, void *))v80)(&v85, 1LL, v7);
            v7 = a6;
          }
        }
        else
        {
          LODWORD(v85) = v51;
          DWORD2(v85) = v52;
          ((void (__fastcall *)(__int128 *, __int64, void *, __int64))v80)(&v85, 1LL, v7, v50);
          v7 = a6;
        }
      }
LABEL_102:
      v17 += v49;
      goto LABEL_39;
    }
    v25 = 5LL * i;
    if ( !*((_DWORD *)&v68 + 10 * i + 1) )
      break;
LABEL_77:
    ;
  }
  while ( --v87 >= 0 && v17 < v65.m128i_i32[3] )
  {
    v26 = (int *)*((_QWORD *)&v67 + v25 + 1);
    v27 = (struct _POINTFIX *)((char *)v26 + *((int *)&v68 + 2 * v25));
    *((_QWORD *)&v67 + v25 + 1) = v27;
    if ( v27 >= v6 )
    {
      if ( v27 > v76 )
      {
        *((_QWORD *)&v67 + v25 + 1) = v6;
        v27 = v81;
      }
    }
    else
    {
      v28 = v76;
      *((_QWORD *)&v67 + v25 + 1) = v76;
      v27 = v28;
    }
    v29 = v27->y;
    v72 = v29;
    *((_DWORD *)&v68 + 2 * v25 + 1) = ((v29 + 15) >> 4) - v17;
    if ( ((v29 + 15) >> 4) - v17 > 0 )
    {
      v30 = v26[1];
      v78 = v30;
      v31 = v29 - v30;
      v32 = *v26;
      v33 = v27->x - *v26;
      if ( v33 >= 0 )
      {
        if ( v33 >= (int)v31 )
        {
          v36 = v33 / v31;
          *((_DWORD *)&v66 + 2 * v25 + 1) = v33 / v31;
          v35 = v33 % v31;
LABEL_57:
          *((_DWORD *)&v66 + 2 * v25 + 3) = v35;
        }
        else
        {
          *((_DWORD *)&v66 + 2 * v25 + 1) = 0;
          *((_DWORD *)&v66 + 2 * v25 + 3) = v33;
          v36 = 0;
          v35 = v33;
        }
      }
      else
      {
        v34 = -v33;
        if ( (int)v34 < (int)v31 )
        {
          *((_DWORD *)&v66 + 2 * v25 + 1) = -1;
          v35 = v31 - v34;
          v36 = -1;
          goto LABEL_57;
        }
        v36 = -(int)(v34 / v31);
        *((_DWORD *)&v66 + 2 * v25 + 1) = v36;
        v35 = v34 % v31;
        *((_DWORD *)&v66 + 2 * v25 + 3) = v34 % v31;
        if ( (int)(v34 % v31) > 0 )
        {
          *((_DWORD *)&v66 + 2 * v25 + 1) = --v36;
          v35 = v31 - v35;
          *((_DWORD *)&v66 + 2 * v25 + 3) = v35;
        }
      }
      *((_DWORD *)&v67 + 2 * v25) = v31;
      v37 = v30 & 0xF;
      v38 = -1;
      if ( v37 )
      {
        v39 = 16 - v37;
        v38 = -1;
        while ( v39 > 0 )
        {
          v32 += v36;
          *((_DWORD *)&v66 + 2 * v25) = v32;
          v40 = v35 + v38 < 0;
          v38 += v35;
          *((_DWORD *)&v66 + 2 * v25 + 2) = v38;
          if ( !v40 )
          {
            v38 -= v31;
            *((_DWORD *)&v66 + 2 * v25 + 2) = v38;
            *((_DWORD *)&v66 + 2 * v25) = ++v32;
          }
          --v39;
        }
      }
      v41 = v32 & 0xF;
      if ( (v32 & 0xF) != 0 )
      {
        v32 += 15;
        v38 -= v31 * (16 - v41);
      }
      v42 = v32 >> 4;
      *((_DWORD *)&v66 + 2 * v25) = v42;
      v43 = v38 >> 4;
      *((_DWORD *)&v66 + 2 * v25 + 2) = v43;
      v44 = (v78 + 15) >> 4;
      if ( v44 < v65.m128i_i32[1] )
      {
        v45 = v65.m128i_i32[1] - v44;
        if ( v72 >> 4 >= v65.m128i_i32[1] || v36 || v35 )
        {
          v72 = v45 * v36 + v42;
          *((_DWORD *)&v66 + 2 * v25) = v72;
          v46 = v43 + v35 * (__int64)v45;
          if ( v46 < 0 )
          {
            *((_DWORD *)&v66 + 2 * v25 + 2) = v46;
          }
          else
          {
            if ( (v46 & 0xFFFFFFFF80000000uLL) != 0 )
            {
              v47 = v46 / (unsigned __int64)v31;
              v48 = v46 % (unsigned __int64)v31;
            }
            else
            {
              LODWORD(v48) = (int)v46 % (int)v31;
              LODWORD(v47) = (int)v46 / (int)v31;
            }
            *((_DWORD *)&v66 + 2 * v25) = v47 + v72 + 1;
            *((_DWORD *)&v66 + 2 * v25 + 2) = v48 - v31;
          }
        }
      }
      v7 = a6;
      goto LABEL_77;
    }
  }
  if ( v15 )
    ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v75)(v16, v86, v15, v7);
  return 1LL;
}
