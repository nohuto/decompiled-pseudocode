/*
 * XREFs of ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C014A7BC
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C014A2CC (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CFBA8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall bLines(
        struct _BMINFO *a1,
        struct _POINTFIX *a2,
        struct _POINTFIX *a3,
        struct _RUN *a4,
        unsigned int a5,
        struct _LINESTATE *a6,
        struct _RECTL *a7,
        void (**a8)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *),
        unsigned int a9,
        unsigned int *a10,
        int a11,
        struct _W32KCDD_ENG_CALLBACKS *a12)
{
  struct _POINTFIX *v12; // r14
  signed int v14; // r13d
  FIX x; // r12d
  FIX v16; // ecx
  FIX y; // esi
  FIX v18; // eax
  unsigned int v19; // r14d
  FIX v20; // r9d
  FIX v21; // r8d
  unsigned int v22; // r12d
  unsigned int v23; // esi
  int v24; // r8d
  int v25; // r9d
  unsigned __int64 v26; // rdx
  signed __int64 v27; // rax
  int v28; // r11d
  int v29; // r10d
  signed int v30; // edi
  signed int v31; // r13d
  unsigned int v32; // r10d
  unsigned __int64 v33; // r11
  unsigned int v34; // ecx
  int v35; // edx
  signed int v36; // r8d
  int v37; // r9d
  unsigned int *v38; // rdx
  int v39; // ecx
  int *v40; // r8
  int v41; // edi
  unsigned __int64 v42; // r13
  int v43; // edx
  int v44; // r9d
  int v45; // eax
  char *v46; // rcx
  unsigned int v47; // r8d
  unsigned int v49; // eax
  FIX v50; // eax
  unsigned __int64 v51; // rtt
  unsigned int v52; // ecx
  unsigned int v53; // eax
  unsigned int v54; // edx
  __int64 v55; // rax
  char *v56; // r8
  char *v57; // rcx
  __int64 v58; // r13
  __int64 v59; // rdx
  unsigned int v60; // ecx
  unsigned int v61; // eax
  int v62; // edx
  int v63; // r8d
  unsigned int v64; // r9d
  unsigned int v65; // ecx
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // rdx
  int v69; // eax
  int v70; // eax
  int *v71; // rdx
  int *i; // rax
  int v73; // ecx
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  unsigned int v76; // eax
  int v77; // eax
  int v78; // [rsp+20h] [rbp-308h]
  unsigned int v79; // [rsp+24h] [rbp-304h]
  unsigned int v80; // [rsp+28h] [rbp-300h]
  unsigned int v81; // [rsp+2Ch] [rbp-2FCh]
  int v82; // [rsp+34h] [rbp-2F4h]
  __int64 v83; // [rsp+38h] [rbp-2F0h]
  int v84; // [rsp+54h] [rbp-2D4h]
  int v85; // [rsp+58h] [rbp-2D0h]
  int v86; // [rsp+5Ch] [rbp-2CCh]
  int v87; // [rsp+64h] [rbp-2C4h]
  struct _POINTFIX *v90; // [rsp+80h] [rbp-2A8h]
  __int64 v91; // [rsp+90h] [rbp-298h]
  void (*v92)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // [rsp+A0h] [rbp-288h]
  struct _POINTFIX *v93; // [rsp+110h] [rbp-218h]
  _QWORD v94[56]; // [rsp+120h] [rbp-208h] BYREF

  v12 = a3;
  v90 = a3;
  if ( a1 <= (struct _BMINFO *)&off_1C032B5D0 || !bUMPDSecurityGateEx() )
  {
    v93 = &v12[a5];
    v79 = 0;
    v85 = 0;
    v86 = 0;
    v83 = 0LL;
    v91 = 0LL;
    v80 = 0;
    v82 = 0;
    v14 = 0;
    v81 = 0;
    memset(v94, 0, 0x1B0uLL);
    v94[54] = a12;
    v94[55] = a10;
    while ( 1 )
    {
      x = a2->x;
      v16 = v12->x;
      y = a2->y;
      v18 = v12->y;
      v19 = a9 | 0x20;
      if ( v16 >= a2->x )
        v19 = a9;
      v20 = v18;
      if ( v16 >= x )
        v20 = a2->y;
      v21 = v16;
      if ( v16 >= x )
      {
        v21 = a2->x;
        y = v18;
        x = v16;
      }
      if ( y < v20 )
      {
        v20 = -v20;
        y = -y;
        v19 |= 8u;
      }
      v22 = x - v21;
      if ( (v22 & 0x80000000) == 0 )
      {
        v23 = y - v20;
        if ( (v23 & 0x80000000) == 0 )
          break;
      }
      v34 = v80;
LABEL_118:
      v47 = v79;
      while ( (v19 & 0x40) != 0 )
      {
        if ( !--a5 )
          return 1LL;
LABEL_92:
        v78 = v19 & 0x20;
        if ( (v19 & 0x20) != 0 )
        {
          v32 = v14 - a4->iStop;
          v30 = v14 - a4->iStart;
        }
        else
        {
          v32 = v34 + a4->iStart;
          v30 = v34 + a4->iStop;
        }
        ++a4;
        v23 = v47;
        *((_DWORD *)a6 + 8) = *((_DWORD *)a6 + 9);
        v74 = v83 + v47 * (unsigned __int64)v32;
        if ( v74 >= 0xFFFFFFFF )
          v33 = (v83 + v47 * (unsigned __int64)v32) / v22;
        else
          LODWORD(v33) = (unsigned int)v74 / v22;
LABEL_24:
        if ( (v19 & 0x400) != 0 )
        {
          v56 = (char *)a6 + 92;
          v57 = (char *)a6 + 88;
          if ( (v19 & 5) == 0 )
            v57 = (char *)a6 + 92;
          v58 = *(unsigned int *)v57;
          if ( (v19 & 5) == 0 )
            v56 = (char *)a6 + 88;
          v59 = *(unsigned int *)v56;
          if ( (_DWORD)v59 == (_DWORD)v58 || (unsigned __int64)v23 * v58 <= (unsigned __int64)v22 * v59 )
          {
            *((_QWORD *)a6 + 1) = (unsigned int)v59;
            *((_DWORD *)a6 + 4) = v59;
            v60 = v81 - v80;
            LODWORD(v58) = v59;
            if ( v78 )
            {
              v76 = v81 - v32;
LABEL_128:
              v61 = v76 + 1;
            }
            else
            {
              v61 = v32 - v80;
            }
          }
          else
          {
            v75 = v83 + v23 * (unsigned __int64)v81;
            if ( v75 >= 0xFFFFFFFF )
              v75 = (v83 + v23 * (unsigned __int64)v81) / v22;
            else
              LODWORD(v75) = (unsigned int)v75 / v22;
            *((_DWORD *)a6 + 2) = 0;
            *((_DWORD *)a6 + 3) = v58;
            *((_DWORD *)a6 + 4) = v58;
            v60 = v75 - v82;
            if ( v78 )
            {
              v76 = v75 - v33;
              goto LABEL_128;
            }
            v61 = v33 - v82;
          }
          v62 = *((_DWORD *)a6 + 8);
          v63 = v62 + v61 * v58;
          v64 = v62 + v58 * (v60 + 1);
          *((_DWORD *)a6 + 8) = v64;
          v65 = *((_DWORD *)a6 + 7);
          if ( v63 >= v65 )
            v63 %= v65;
          if ( v64 >= v65 )
            *((_DWORD *)a6 + 8) = v64 % v65;
          v66 = 4LL * (unsigned int)(*((_DWORD *)a6 + 25) - 1);
          if ( v78 )
          {
            v77 = -v63;
            v67 = *((_QWORD *)a6 + 8);
            v68 = v67 + v66;
            v63 = v65 - v63;
            if ( v77 >= 0 )
              v63 = v77;
            v69 = *((_DWORD *)a6 + 21) == 0;
          }
          else
          {
            v67 = *((_QWORD *)a6 + 9);
            v68 = v67 + v66;
            v69 = *((_DWORD *)a6 + 21);
          }
          *((_DWORD *)a6 + 20) = v69;
          *((_QWORD *)a6 + 5) = v67;
          *((_QWORD *)a6 + 6) = v68;
          v70 = *((_DWORD *)a6 + 6);
          if ( v63 >= v70 )
          {
            v63 -= v70;
            if ( (*((_DWORD *)a6 + 25) & 1) != 0 )
              *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
          }
          v71 = (int *)*((_QWORD *)a6 + 5);
          *((_QWORD *)a6 + 7) = v71;
          for ( i = v71; ; *((_QWORD *)a6 + 7) = i )
          {
            v73 = *i;
            if ( v63 < *i )
              break;
            v63 -= v73;
            ++i;
          }
          *((_DWORD *)a6 + 5) = v73 - v63;
          if ( (((_BYTE)i - (_BYTE)v71) & 4) != 0 )
            *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
        }
        v35 = v32 + v85;
        v36 = v33 + v86;
        if ( (v19 & 5) == 0 )
        {
          v36 = v32 + v85;
          v35 = v33 + v86;
        }
        v37 = -v35;
        if ( (v19 & 8) == 0 )
          v37 = v35;
        if ( 2 * v23 > v22 )
        {
          v19 |= 2u;
          v91 = v83 - v22;
          v23 = v22 - v23;
          LODWORD(v33) = v32 - v33;
        }
        HIDWORD(v94[0]) = v19;
        v92 = a8[v19 & 3];
        LODWORD(v94[3]) = v36 & *((_DWORD *)a1 + 7);
        LODWORD(v94[1]) = a11;
        v38 = &a10[v37 * a11];
        v39 = *((_DWORD *)a1 + 6);
        if ( v39 < 0 )
          v94[2] = (char *)v38 + 3 * v36;
        else
          v94[2] = &v38[(__int64)v36 >> v39];
        v40 = (int *)&v94[3] + 1;
        v41 = v30 - v32 + 1;
        LODWORD(v42) = 0;
        v43 = 0;
        v87 = 0;
        v84 = 0;
        if ( v23 )
        {
          v51 = v91 + v22 * (unsigned __int64)(unsigned int)(v33 + 1);
          v42 = v51 % v23;
          v44 = v51 / v23 - v32 + 1;
          v84 = v22 % v23;
          v43 = v22 / v23;
          v87 = v22 / v23;
        }
        else
        {
          v44 = 0x7FFFFFFF;
        }
        while ( 1 )
        {
          v45 = v41;
          v41 -= v44;
          v46 = (char *)(v40 + 1);
          if ( v41 <= 0 )
            break;
          *v40++ = v44;
          if ( v46 == (char *)&v94[53] + 4 )
          {
            LODWORD(v94[0]) = (v46 - ((char *)&v94[3] + 4)) >> 2;
            ((void (__fastcall *)(_QWORD *, struct _BMINFO *, struct _LINESTATE *))v92)(v94, a1, a6);
            v40 = (int *)&v94[3] + 1;
            v43 = v87;
          }
          v44 = v43;
          LODWORD(v42) = v42 + v84;
          if ( (unsigned int)v42 >= v23 )
          {
            LODWORD(v42) = v42 - v23;
            v44 = v43 + 1;
          }
        }
        *v40 = v45;
        LODWORD(v94[0]) = (v46 - ((char *)&v94[3] + 4)) >> 2;
        ((void (__fastcall *)(_QWORD *, struct _BMINFO *, struct _LINESTATE *))v92)(v94, a1, a6);
        v14 = v81;
        v34 = v80;
        v47 = v79;
      }
      a2 = v90;
      v12 = v90 + 1;
      v90 = v12;
      if ( v12 >= v93 )
        return 1LL;
    }
    if ( v23 >= v22 )
    {
      if ( v23 == v22 )
      {
        v19 |= 0x10u;
      }
      else
      {
        v49 = v22;
        v22 = v23;
        v23 = v49;
        v50 = v21;
        v21 = v20;
        v20 = v50;
        v19 |= 5u;
      }
    }
    v19 |= gaflRound[(v19 >> 2) & 7];
    v85 = v21 >> 4;
    v86 = v20 >> 4;
    v24 = v21 & 0xF;
    v25 = v20 & 0xF;
    v26 = (int)v23 * (unsigned __int64)(unsigned int)v24;
    v27 = (int)v22 * (unsigned __int64)(unsigned int)(v25 + 8) - v26 - 1;
    if ( (v19 & 0x8000) == 0 )
      v27 = (int)v22 * (unsigned __int64)(unsigned int)(v25 + 8) - v26;
    v83 = v27 >> 4;
    v91 = ~(v27 >> 4);
    v28 = ((_BYTE)v23 + (_BYTE)v25) & 0xF;
    v29 = ((_BYTE)v22 + (_BYTE)v24) & 0xF;
    v30 = (v22 + v24) >> 4;
    v78 = v19 & 0x20;
    if ( (v19 & 0x20) == 0 )
    {
      v31 = --v30;
      if ( (((_BYTE)v22 + (_BYTE)v24) & 0xF) != 0 )
      {
        if ( (((_BYTE)v23 + (_BYTE)v25) & 0xF) != 0 )
        {
          if ( (int)abs32(v28 - 8) <= v29 )
            v30 = (v22 + v24) >> 4;
        }
        else
        {
          v30 = (v22 + v24) >> 4;
          if ( v29 - (unsigned int)((v19 & 0x80) != 0) + 8 < 0x10 )
            v30 = v31;
        }
      }
      if ( (v19 & 0x90) != 0x90 )
        goto LABEL_19;
      if ( (((_BYTE)v22 + (_BYTE)v24) & 0xF) != 0 && v28 == v29 + 8 )
        --v30;
      if ( v24 && v25 == v24 + 8 )
      {
        v32 = 0;
      }
      else
      {
LABEL_19:
        v32 = 0;
        if ( v24 )
        {
          if ( v25 )
            v32 = (int)abs32(v25 - 8) <= v24;
          else
            LOBYTE(v32) = v24 - (unsigned int)((v19 & 0x80) != 0) + 8 >= 0x10;
        }
      }
      LODWORD(v33) = 0;
      if ( v83 >= 0 )
        LODWORD(v33) = (unsigned int)v83 >= v22 - (v23 & -v32);
      goto LABEL_22;
    }
    if ( (((_BYTE)v23 + (_BYTE)v25) & 0xF) != 0 )
    {
      if ( v29 + abs32(v28 - 8) > 0x10 )
        ++v30;
    }
    else
    {
      ++v30;
      if ( v29 - (unsigned int)((v19 & 0x80) != 0) + 8 < 0x10 )
        v30 = (v22 + v24) >> 4;
    }
    if ( (v19 & 0x90) == 0x10 )
    {
      if ( (((_BYTE)v23 + (_BYTE)v25) & 0xF) != 0 && v29 == v28 + 8 )
        ++v30;
      if ( v25 && v24 == v25 + 8 )
        goto LABEL_86;
    }
    v32 = 1;
    v52 = 0;
    if ( !v25 )
    {
      v53 = v24 - ((v19 & 0x80) != 0) + 8;
      v52 = v23;
      if ( v53 < 0x10 )
        v52 = 0;
      v32 = 2 - (v53 < 0x10);
      goto LABEL_57;
    }
    if ( v24 + abs32(v25 - 8) > 0x10 )
    {
LABEL_86:
      v52 = v23;
      v32 = 2;
    }
LABEL_57:
    LODWORD(v33) = 0;
    v54 = v83 + v52;
    v55 = (v83 + v52) >> 32;
    if ( v55 >= 0 )
    {
      if ( v55 > 0 || v54 >= 2 * v22 - v23 )
        LODWORD(v33) = 2;
      else
        LODWORD(v33) = v54 >= v22 - v23;
    }
LABEL_22:
    v82 = v33;
    v34 = v32;
    v80 = v32;
    v14 = v30;
    v81 = v30;
    if ( v30 >= (int)v32 )
    {
      if ( (v19 & 0x40) != 0 )
      {
        v47 = v23;
        v79 = v23;
        goto LABEL_92;
      }
      goto LABEL_24;
    }
    goto LABEL_118;
  }
  if ( gfUMPDDebug )
    DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\engline.cxx:%d:bLines:Invalid surface format.\n", 416);
  return 0LL;
}
