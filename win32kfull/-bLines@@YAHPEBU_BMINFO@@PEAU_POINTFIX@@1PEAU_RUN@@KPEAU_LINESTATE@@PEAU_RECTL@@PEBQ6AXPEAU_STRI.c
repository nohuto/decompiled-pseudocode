/*
 * XREFs of ?bLines@@YAHPEBU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEBQ6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C000CC04
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C000C938 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D4254 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall bLines(
        const struct _BMINFO *a1,
        struct _POINTFIX *a2,
        struct _POINTFIX *a3,
        struct _RUN *a4,
        unsigned int a5,
        struct _LINESTATE *a6,
        struct _RECTL *a7,
        void (*const *a8)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *),
        unsigned int a9,
        unsigned int *a10,
        int a11,
        struct _W32KCDD_ENG_CALLBACKS *a12)
{
  struct _POINTFIX *v12; // r14
  FIX x; // r12d
  FIX v15; // ecx
  FIX y; // r14d
  unsigned int v17; // esi
  FIX v18; // r10d
  FIX v19; // r8d
  unsigned int v20; // r12d
  unsigned int v21; // r14d
  int v22; // r8d
  int v23; // r10d
  unsigned __int64 v24; // rcx
  signed __int64 v25; // rax
  int v26; // r11d
  int v27; // r9d
  signed int v28; // edi
  signed int v29; // r13d
  unsigned int v30; // r9d
  unsigned __int64 v31; // r11
  unsigned int v32; // edx
  signed int v33; // ecx
  int v34; // edx
  signed int v35; // r8d
  int v36; // r10d
  unsigned int *v37; // rdx
  int v38; // ecx
  int *v39; // r10
  int v40; // edi
  unsigned __int64 v41; // r13
  int v42; // r8d
  int v43; // r11d
  int v44; // eax
  char *v45; // rcx
  unsigned int v46; // r10d
  unsigned int v48; // eax
  FIX v49; // eax
  unsigned int v50; // ecx
  unsigned int v51; // eax
  unsigned int v52; // edx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  int v55; // r13d
  char *v56; // rdx
  char *v57; // rax
  unsigned int v58; // r10d
  unsigned int v59; // r8d
  unsigned __int64 v60; // rax
  unsigned int v61; // edx
  unsigned int v62; // ecx
  int v63; // r13d
  unsigned int v64; // eax
  int v65; // eax
  unsigned int v66; // eax
  int v67; // edx
  int v68; // r8d
  unsigned int v69; // r10d
  unsigned int v70; // ecx
  __int64 v71; // rcx
  int v72; // eax
  int v73; // eax
  int *v74; // r13
  int *v75; // rax
  int v76; // ecx
  unsigned int v77; // [rsp+20h] [rbp-308h]
  unsigned int v78; // [rsp+24h] [rbp-304h]
  unsigned int v79; // [rsp+28h] [rbp-300h]
  unsigned int v80; // [rsp+30h] [rbp-2F8h]
  int v81; // [rsp+38h] [rbp-2F0h]
  __int64 v82; // [rsp+40h] [rbp-2E8h]
  void (*v83)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *); // [rsp+58h] [rbp-2D0h]
  __int64 v84; // [rsp+58h] [rbp-2D0h]
  int v85; // [rsp+60h] [rbp-2C8h]
  int v86; // [rsp+64h] [rbp-2C4h]
  int v87; // [rsp+68h] [rbp-2C0h]
  struct _POINTFIX *v88; // [rsp+70h] [rbp-2B8h]
  __int64 v91; // [rsp+A0h] [rbp-288h]
  struct _POINTFIX *v92; // [rsp+110h] [rbp-218h]
  _DWORD v93[4]; // [rsp+120h] [rbp-208h] BYREF
  unsigned int *v94; // [rsp+130h] [rbp-1F8h]
  int v95; // [rsp+138h] [rbp-1F0h]
  _BYTE v96[400]; // [rsp+13Ch] [rbp-1ECh] BYREF
  char v97; // [rsp+2CCh] [rbp-5Ch] BYREF
  struct _W32KCDD_ENG_CALLBACKS *v98; // [rsp+2D0h] [rbp-58h]
  unsigned int *v99; // [rsp+2D8h] [rbp-50h]

  v12 = a3;
  v88 = a3;
  if ( a1 <= (const struct _BMINFO *)&off_1C030A140 || !(unsigned int)bUMPDSecurityGateEx() )
  {
    v92 = &v12[a5];
    v78 = 0;
    v85 = 0;
    v86 = 0;
    v82 = 0LL;
    v91 = 0LL;
    v79 = 0;
    v80 = 0;
    v77 = 0;
    memset_0(v93, 0, 0x1B0uLL);
    v98 = a12;
    v99 = a10;
    while ( 1 )
    {
      x = a2->x;
      v15 = v12->x;
      y = a2->y;
      v17 = a9 | 0x20;
      if ( v15 >= a2->x )
        v17 = a9;
      v18 = v88->y;
      if ( v15 >= x )
        v18 = a2->y;
      v19 = v15;
      if ( v15 >= x )
      {
        v19 = a2->x;
        y = v88->y;
        x = v15;
      }
      if ( y < v18 )
      {
        v18 = -v18;
        y = -y;
        v17 |= 8u;
      }
      v20 = x - v19;
      if ( (v20 & 0x80000000) == 0 )
      {
        v21 = y - v18;
        if ( (v21 & 0x80000000) == 0 )
          break;
      }
      v33 = v77;
      v32 = v79;
LABEL_88:
      v46 = v78;
      while ( (v17 & 0x40) != 0 )
      {
        if ( !--a5 )
          return 1LL;
LABEL_85:
        if ( (v17 & 0x20) != 0 )
        {
          v30 = v33 - a4->iStop;
          v28 = v33 - a4->iStart;
        }
        else
        {
          v30 = v32 + a4->iStart;
          v28 = v32 + a4->iStop;
        }
        ++a4;
        v21 = v46;
        *((_DWORD *)a6 + 8) = *((_DWORD *)a6 + 9);
        v54 = v82 + v46 * (unsigned __int64)v30;
        if ( v54 >= 0xFFFFFFFF )
          v31 = (v82 + v46 * (unsigned __int64)v30) / v20;
        else
          LODWORD(v31) = (unsigned int)v54 / v20;
LABEL_24:
        if ( (v17 & 0x400) != 0 )
        {
          v55 = 0;
          v56 = (char *)a6 + 92;
          v57 = (char *)a6 + 88;
          if ( (v17 & 5) == 0 )
            v57 = (char *)a6 + 92;
          v58 = *(_DWORD *)v57;
          if ( (v17 & 5) == 0 )
            v56 = (char *)a6 + 88;
          v59 = *(_DWORD *)v56;
          if ( *(_DWORD *)v56 != v58 )
            LOBYTE(v55) = v21 * (unsigned __int64)v58 > v20 * (unsigned __int64)v59;
          if ( v55 )
          {
            v60 = v82 + v21 * (unsigned __int64)v77;
            if ( v60 >= 0xFFFFFFFF )
              v60 = (v82 + v21 * (unsigned __int64)v77) / v20;
            else
              LODWORD(v60) = (unsigned int)v60 / v20;
            *((_DWORD *)a6 + 2) = 0;
            *((_DWORD *)a6 + 3) = v58;
            *((_DWORD *)a6 + 4) = v58;
            v61 = v80;
            v62 = v60 - v80;
            v63 = v17 & 0x20;
            if ( (v17 & 0x20) != 0 )
            {
              v64 = v60 - v31;
              goto LABEL_110;
            }
            v65 = v31;
LABEL_112:
            v66 = v65 - v61;
          }
          else
          {
            *((_DWORD *)a6 + 2) = v59;
            *((_DWORD *)a6 + 3) = 0;
            *((_DWORD *)a6 + 4) = v59;
            v61 = v79;
            v62 = v77 - v79;
            v63 = v17 & 0x20;
            v58 = v59;
            if ( (v17 & 0x20) == 0 )
            {
              v65 = v30;
              goto LABEL_112;
            }
            v64 = v77 - v30;
LABEL_110:
            v66 = v64 + 1;
          }
          v67 = *((_DWORD *)a6 + 8);
          v68 = v67 + v66 * v58;
          v69 = v67 + (v62 + 1) * v58;
          *((_DWORD *)a6 + 8) = v69;
          v70 = *((_DWORD *)a6 + 7);
          if ( v68 >= v70 )
            v68 %= v70;
          if ( v69 >= v70 )
            *((_DWORD *)a6 + 8) = v69 % v70;
          if ( v63 )
          {
            v68 = -v68;
            if ( v68 < 0 )
              v68 += v70;
            v71 = *((_QWORD *)a6 + 8);
            v84 = v71 + 4LL * (unsigned int)(*((_DWORD *)a6 + 25) - 1);
            v72 = *((_DWORD *)a6 + 21) == 0;
          }
          else
          {
            v71 = *((_QWORD *)a6 + 9);
            v84 = v71 + 4LL * (unsigned int)(*((_DWORD *)a6 + 25) - 1);
            v72 = *((_DWORD *)a6 + 21);
          }
          *((_DWORD *)a6 + 20) = v72;
          *((_QWORD *)a6 + 5) = v71;
          *((_QWORD *)a6 + 6) = v84;
          v73 = *((_DWORD *)a6 + 6);
          if ( v68 >= v73 )
          {
            v68 -= v73;
            if ( (*((_DWORD *)a6 + 25) & 1) != 0 )
              *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
          }
          v74 = (int *)*((_QWORD *)a6 + 5);
          *((_QWORD *)a6 + 7) = v74;
          v75 = v74;
          while ( 1 )
          {
            v76 = *v75;
            if ( v68 < *v75 )
              break;
            *((_QWORD *)a6 + 7) = ++v75;
            v68 -= v76;
          }
          *((_DWORD *)a6 + 5) = v76 - v68;
          if ( (((_BYTE)v75 - (_BYTE)v74) & 4) != 0 )
            *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
        }
        v34 = v30 + v85;
        v35 = v31 + v86;
        if ( (v17 & 5) == 0 )
        {
          v35 = v30 + v85;
          v34 = v31 + v86;
        }
        v36 = -v34;
        if ( (v17 & 8) == 0 )
          v36 = v34;
        if ( 2 * v21 > v20 )
        {
          v17 |= 2u;
          v91 = v82 - v20;
          v21 = v20 - v21;
          LODWORD(v31) = v30 - v31;
        }
        v93[1] = v17;
        v83 = a8[v17 & 3];
        v95 = v35 & *((_DWORD *)a1 + 7);
        v93[2] = a11;
        v37 = &a10[v36 * a11];
        v38 = *((_DWORD *)a1 + 6);
        if ( v38 < 0 )
          v94 = (unsigned int *)((char *)v37 + 3 * v35);
        else
          v94 = &v37[(__int64)v35 >> v38];
        v39 = (int *)v96;
        v40 = v28 - v30 + 1;
        LODWORD(v41) = 0;
        v42 = 0;
        v87 = 0;
        v81 = 0;
        if ( v21 )
        {
          v41 = (v91 + v20 * (unsigned __int64)(unsigned int)(v31 + 1)) % v21;
          v43 = (v91 + v20 * (unsigned __int64)(unsigned int)(v31 + 1)) / v21 - v30 + 1;
          v42 = v20 / v21;
          v87 = v20 / v21;
          v81 = v20 % v21;
        }
        else
        {
          v43 = 0x7FFFFFFF;
        }
        while ( 1 )
        {
          v44 = v40;
          v40 -= v43;
          v45 = (char *)(v39 + 1);
          if ( v40 <= 0 )
            break;
          *v39++ = v43;
          if ( v45 == &v97 )
          {
            v93[0] = (v45 - v96) >> 2;
            ((void (__fastcall *)(_DWORD *, const struct _BMINFO *, struct _LINESTATE *))v83)(v93, a1, a6);
            v39 = (int *)v96;
            v42 = v87;
          }
          v43 = v42;
          LODWORD(v41) = v41 + v81;
          if ( (unsigned int)v41 >= v21 )
          {
            LODWORD(v41) = v41 - v21;
            v43 = v42 + 1;
          }
        }
        *v39 = v44;
        v93[0] = (v45 - v96) >> 2;
        ((void (__fastcall *)(_DWORD *, const struct _BMINFO *, struct _LINESTATE *))v83)(v93, a1, a6);
        v33 = v77;
        v32 = v79;
        v46 = v78;
      }
      a2 = v88;
      v12 = v88 + 1;
      v88 = v12;
      if ( v12 >= v92 )
        return 1LL;
    }
    if ( v21 >= v20 )
    {
      if ( v21 == v20 )
      {
        v17 |= 0x10u;
      }
      else
      {
        v48 = v20;
        v20 = v21;
        v21 = v48;
        v49 = v19;
        v19 = v18;
        v18 = v49;
        v17 |= 5u;
      }
    }
    v17 |= gaflRound[(v17 >> 2) & 7];
    v85 = v19 >> 4;
    v86 = v18 >> 4;
    v22 = v19 & 0xF;
    v23 = v18 & 0xF;
    v24 = (int)v21 * (unsigned __int64)(unsigned int)v22;
    v25 = (int)v20 * (unsigned __int64)(unsigned int)(v23 + 8) - v24 - 1;
    if ( (v17 & 0x8000) == 0 )
      v25 = (int)v20 * (unsigned __int64)(unsigned int)(v23 + 8) - v24;
    v82 = v25 >> 4;
    v91 = ~(v25 >> 4);
    v26 = ((_BYTE)v21 + (_BYTE)v23) & 0xF;
    v27 = ((_BYTE)v20 + (_BYTE)v22) & 0xF;
    v28 = (v20 + v22) >> 4;
    if ( (v17 & 0x20) == 0 )
    {
      v29 = --v28;
      if ( (((_BYTE)v20 + (_BYTE)v22) & 0xF) != 0 )
      {
        if ( (((_BYTE)v21 + (_BYTE)v23) & 0xF) != 0 )
        {
          if ( (int)abs32(v26 - 8) <= v27 )
            v28 = (v20 + v22) >> 4;
        }
        else
        {
          v28 = (v20 + v22) >> 4;
          if ( v27 - (unsigned int)((v17 & 0x80) != 0) + 8 < 0x10 )
            v28 = v29;
        }
      }
      if ( (v17 & 0x90) != 0x90 )
        goto LABEL_19;
      if ( (((_BYTE)v20 + (_BYTE)v22) & 0xF) != 0 && v26 == v27 + 8 )
        --v28;
      if ( v22 && v23 == v22 + 8 )
      {
        v30 = 0;
      }
      else
      {
LABEL_19:
        v30 = 0;
        if ( v22 )
        {
          if ( v23 )
            v30 = (int)abs32(v23 - 8) <= v22;
          else
            LOBYTE(v30) = v22 - (unsigned int)((v17 & 0x80) != 0) + 8 >= 0x10;
        }
      }
      LODWORD(v31) = 0;
      if ( v82 >= 0 )
        LODWORD(v31) = (unsigned int)v82 >= v20 - (v21 & -v30);
      goto LABEL_22;
    }
    if ( (((_BYTE)v21 + (_BYTE)v23) & 0xF) != 0 )
    {
      if ( v27 + abs32(v26 - 8) > 0x10 )
        ++v28;
    }
    else
    {
      ++v28;
      if ( v27 - (unsigned int)((v17 & 0x80) != 0) + 8 < 0x10 )
        v28 = (v20 + v22) >> 4;
    }
    if ( (v17 & 0x90) == 0x10 )
    {
      if ( (((_BYTE)v21 + (_BYTE)v23) & 0xF) != 0 && v27 == v26 + 8 )
        ++v28;
      if ( v23 && v22 == v23 + 8 )
        goto LABEL_62;
    }
    v30 = 1;
    v50 = 0;
    if ( !v23 )
    {
      v51 = v22 - ((v17 & 0x80) != 0) + 8;
      v30 = 2 - (v51 < 0x10);
      v50 = v21;
      if ( v51 < 0x10 )
        v50 = 0;
      goto LABEL_63;
    }
    if ( v22 + abs32(v23 - 8) > 0x10 )
    {
LABEL_62:
      v50 = v21;
      v30 = 2;
    }
LABEL_63:
    LODWORD(v31) = 0;
    v52 = v82 + v50;
    v53 = (v82 + v50) >> 32;
    if ( v53 >= 0 )
    {
      if ( v53 > 0 || v52 >= 2 * v20 - v21 )
        LODWORD(v31) = 2;
      else
        LODWORD(v31) = v52 >= v20 - v21;
    }
LABEL_22:
    v80 = v31;
    v32 = v30;
    v79 = v30;
    v33 = v28;
    v77 = v28;
    if ( v28 >= (int)v30 )
    {
      if ( (v17 & 0x40) != 0 )
      {
        v46 = v21;
        v78 = v21;
        goto LABEL_85;
      }
      goto LABEL_24;
    }
    goto LABEL_88;
  }
  return 0LL;
}
