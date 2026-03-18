/*
 * XREFs of ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C0133198
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C0132CB4 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
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
  FIX x; // r12d
  FIX v15; // ecx
  FIX y; // esi
  FIX v17; // eax
  unsigned int v18; // r14d
  FIX v19; // r9d
  FIX v20; // r8d
  unsigned int v21; // r12d
  unsigned int v22; // esi
  int v23; // r8d
  int v24; // r9d
  unsigned __int64 v25; // rdx
  signed __int64 v26; // rax
  int v27; // r11d
  int v28; // r10d
  signed int v29; // edi
  signed int v30; // r13d
  unsigned int v31; // r10d
  unsigned __int64 v32; // r11
  unsigned int v33; // ecx
  signed int v34; // eax
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
  char *v49; // r8
  char *v50; // rcx
  __int64 v51; // r13
  __int64 v52; // rdx
  unsigned int v53; // ecx
  unsigned int v54; // eax
  int v55; // edx
  int v56; // r8d
  unsigned int v57; // r9d
  unsigned int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rdx
  int v61; // eax
  int v62; // eax
  int *v63; // rdx
  int *v64; // rax
  int v65; // ecx
  unsigned int v66; // eax
  FIX v67; // eax
  unsigned __int64 v68; // rax
  unsigned int v69; // ecx
  unsigned int v70; // eax
  unsigned int v71; // edx
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned int v74; // eax
  unsigned __int64 v75; // rtt
  int v76; // [rsp+20h] [rbp-2F8h]
  unsigned int v77; // [rsp+24h] [rbp-2F4h]
  unsigned int v78; // [rsp+28h] [rbp-2F0h]
  unsigned int v79; // [rsp+2Ch] [rbp-2ECh]
  int v80; // [rsp+34h] [rbp-2E4h]
  __int64 v81; // [rsp+38h] [rbp-2E0h]
  int v82; // [rsp+50h] [rbp-2C8h]
  int v83; // [rsp+54h] [rbp-2C4h]
  int v84; // [rsp+58h] [rbp-2C0h]
  int v85; // [rsp+60h] [rbp-2B8h]
  struct _POINTFIX *v88; // [rsp+78h] [rbp-2A0h]
  __int64 v89; // [rsp+88h] [rbp-290h]
  void (*v90)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // [rsp+98h] [rbp-280h]
  struct _POINTFIX *v91; // [rsp+100h] [rbp-218h]
  _QWORD v92[56]; // [rsp+110h] [rbp-208h] BYREF

  v12 = a3;
  v88 = a3;
  if ( a1 <= (struct _BMINFO *)&off_1C03265F0 || !bUMPDSecurityGateEx() )
  {
    v91 = &v12[a5];
    v78 = 0;
    v83 = 0;
    v84 = 0;
    v81 = 0LL;
    v89 = 0LL;
    v79 = 0;
    v80 = 0;
    v77 = 0;
    memset(v92, 0, 0x1B0uLL);
    v92[54] = a12;
    v92[55] = a10;
    while ( 1 )
    {
      x = a2->x;
      v15 = v12->x;
      y = a2->y;
      v17 = v12->y;
      v18 = a9 | 0x20;
      if ( v15 >= a2->x )
        v18 = a9;
      v19 = v17;
      if ( v15 >= x )
        v19 = a2->y;
      v20 = v15;
      if ( v15 >= x )
      {
        v20 = a2->x;
        y = v17;
        x = v15;
      }
      if ( y < v19 )
      {
        v19 = -v19;
        y = -y;
        v18 |= 8u;
      }
      v21 = x - v20;
      if ( (v21 & 0x80000000) == 0 )
      {
        v22 = y - v19;
        if ( (v22 & 0x80000000) == 0 )
          break;
      }
      v34 = v77;
      v33 = v79;
LABEL_112:
      v47 = v78;
      while ( (v18 & 0x40) != 0 )
      {
        if ( !--a5 )
          return 1LL;
LABEL_61:
        v76 = v18 & 0x20;
        if ( (v18 & 0x20) != 0 )
        {
          v31 = v34 - a4->iStop;
          v29 = v34 - a4->iStart;
        }
        else
        {
          v31 = v33 + a4->iStart;
          v29 = v33 + a4->iStop;
        }
        ++a4;
        v22 = v47;
        *((_DWORD *)a6 + 8) = *((_DWORD *)a6 + 9);
        v68 = v81 + v47 * (unsigned __int64)v31;
        if ( v68 >= 0xFFFFFFFF )
          v32 = (v81 + v47 * (unsigned __int64)v31) / v21;
        else
          LODWORD(v32) = (unsigned int)v68 / v21;
LABEL_24:
        if ( (v18 & 0x400) != 0 )
        {
          v49 = (char *)a6 + 92;
          v50 = (char *)a6 + 88;
          if ( (v18 & 5) == 0 )
            v50 = (char *)a6 + 92;
          v51 = *(unsigned int *)v50;
          if ( (v18 & 5) == 0 )
            v49 = (char *)a6 + 88;
          v52 = *(unsigned int *)v49;
          if ( (_DWORD)v52 == (_DWORD)v51 || (unsigned __int64)v22 * v51 <= (unsigned __int64)v21 * v52 )
          {
            *((_QWORD *)a6 + 1) = (unsigned int)v52;
            *((_DWORD *)a6 + 4) = v52;
            v53 = v77 - v79;
            LODWORD(v51) = v52;
            if ( v76 )
            {
              v74 = v77 - v31;
LABEL_122:
              v54 = v74 + 1;
            }
            else
            {
              v54 = v31 - v79;
            }
          }
          else
          {
            v73 = v81 + v22 * (unsigned __int64)v77;
            if ( v73 >= 0xFFFFFFFF )
              v73 = (v81 + v22 * (unsigned __int64)v77) / v21;
            else
              LODWORD(v73) = (unsigned int)v73 / v21;
            *((_DWORD *)a6 + 2) = 0;
            *((_DWORD *)a6 + 3) = v51;
            *((_DWORD *)a6 + 4) = v51;
            v53 = v73 - v80;
            if ( v76 )
            {
              v74 = v73 - v32;
              goto LABEL_122;
            }
            v54 = v32 - v80;
          }
          v55 = *((_DWORD *)a6 + 8);
          v56 = v55 + v54 * v51;
          v57 = v55 + v51 * (v53 + 1);
          *((_DWORD *)a6 + 8) = v57;
          v58 = *((_DWORD *)a6 + 7);
          if ( v56 >= v58 )
            v56 %= v58;
          if ( v57 >= v58 )
            *((_DWORD *)a6 + 8) = v57 % v58;
          if ( v76 )
          {
            v56 = -v56;
            if ( v56 < 0 )
              v56 += v58;
            v59 = *((_QWORD *)a6 + 8);
            v60 = v59 + 4LL * (unsigned int)(*((_DWORD *)a6 + 25) - 1);
            v61 = *((_DWORD *)a6 + 21) == 0;
          }
          else
          {
            v59 = *((_QWORD *)a6 + 9);
            v60 = v59 + 4LL * (unsigned int)(*((_DWORD *)a6 + 25) - 1);
            v61 = *((_DWORD *)a6 + 21);
          }
          *((_DWORD *)a6 + 20) = v61;
          *((_QWORD *)a6 + 5) = v59;
          *((_QWORD *)a6 + 6) = v60;
          v62 = *((_DWORD *)a6 + 6);
          if ( v56 >= v62 )
          {
            v56 -= v62;
            if ( (*((_DWORD *)a6 + 25) & 1) != 0 )
              *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
          }
          v63 = (int *)*((_QWORD *)a6 + 5);
          *((_QWORD *)a6 + 7) = v63;
          v64 = v63;
          while ( 1 )
          {
            v65 = *v64;
            if ( v56 < *v64 )
              break;
            *((_QWORD *)a6 + 7) = ++v64;
            v56 -= v65;
          }
          *((_DWORD *)a6 + 5) = v65 - v56;
          if ( (((_BYTE)v64 - (_BYTE)v63) & 4) != 0 )
            *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
        }
        v35 = v31 + v83;
        v36 = v32 + v84;
        if ( (v18 & 5) == 0 )
        {
          v36 = v31 + v83;
          v35 = v32 + v84;
        }
        v37 = -v35;
        if ( (v18 & 8) == 0 )
          v37 = v35;
        if ( 2 * v22 > v21 )
        {
          v18 |= 2u;
          v89 = v81 - v21;
          v22 = v21 - v22;
          LODWORD(v32) = v31 - v32;
        }
        HIDWORD(v92[0]) = v18;
        v90 = a8[v18 & 3];
        LODWORD(v92[3]) = v36 & *((_DWORD *)a1 + 7);
        LODWORD(v92[1]) = a11;
        v38 = &a10[v37 * a11];
        v39 = *((_DWORD *)a1 + 6);
        if ( v39 < 0 )
          v92[2] = (char *)v38 + 3 * v36;
        else
          v92[2] = &v38[(__int64)v36 >> v39];
        v40 = (int *)&v92[3] + 1;
        v41 = v29 - v31 + 1;
        LODWORD(v42) = 0;
        v43 = 0;
        v85 = 0;
        v82 = 0;
        if ( v22 )
        {
          v75 = v89 + v21 * (unsigned __int64)(unsigned int)(v32 + 1);
          v42 = v75 % v22;
          v44 = v75 / v22 - v31 + 1;
          v82 = v21 % v22;
          v43 = v21 / v22;
          v85 = v21 / v22;
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
          if ( v46 == (char *)&v92[53] + 4 )
          {
            LODWORD(v92[0]) = (v46 - ((char *)&v92[3] + 4)) >> 2;
            ((void (__fastcall *)(_QWORD *, struct _BMINFO *, struct _LINESTATE *))v90)(v92, a1, a6);
            v40 = (int *)&v92[3] + 1;
            v43 = v85;
          }
          v44 = v43;
          LODWORD(v42) = v42 + v82;
          if ( (unsigned int)v42 >= v22 )
          {
            LODWORD(v42) = v42 - v22;
            v44 = v43 + 1;
          }
        }
        *v40 = v45;
        LODWORD(v92[0]) = (v46 - ((char *)&v92[3] + 4)) >> 2;
        ((void (__fastcall *)(_QWORD *, struct _BMINFO *, struct _LINESTATE *))v90)(v92, a1, a6);
        v34 = v77;
        v33 = v79;
        v47 = v78;
      }
      a2 = v88;
      v12 = v88 + 1;
      v88 = v12;
      if ( v12 >= v91 )
        return 1LL;
    }
    if ( v22 >= v21 )
    {
      if ( v22 == v21 )
      {
        v18 |= 0x10u;
      }
      else
      {
        v66 = v21;
        v21 = v22;
        v22 = v66;
        v67 = v20;
        v20 = v19;
        v19 = v67;
        v18 |= 5u;
      }
    }
    v18 |= gaflRound[(v18 >> 2) & 7];
    v83 = v20 >> 4;
    v84 = v19 >> 4;
    v23 = v20 & 0xF;
    v24 = v19 & 0xF;
    v25 = (int)v22 * (unsigned __int64)(unsigned int)v23;
    v26 = (int)v21 * (unsigned __int64)(unsigned int)(v24 + 8) - v25 - 1;
    if ( (v18 & 0x8000) == 0 )
      v26 = (int)v21 * (unsigned __int64)(unsigned int)(v24 + 8) - v25;
    v81 = v26 >> 4;
    v89 = ~(v26 >> 4);
    v27 = ((_BYTE)v22 + (_BYTE)v24) & 0xF;
    v28 = ((_BYTE)v21 + (_BYTE)v23) & 0xF;
    v29 = (v21 + v23) >> 4;
    v76 = v18 & 0x20;
    if ( (v18 & 0x20) == 0 )
    {
      v30 = --v29;
      if ( (((_BYTE)v21 + (_BYTE)v23) & 0xF) != 0 )
      {
        if ( (((_BYTE)v22 + (_BYTE)v24) & 0xF) != 0 )
        {
          if ( (int)abs32(v27 - 8) <= v28 )
            v29 = (v21 + v23) >> 4;
        }
        else
        {
          v29 = (v21 + v23) >> 4;
          if ( v28 - (unsigned int)((v18 & 0x80) != 0) + 8 < 0x10 )
            v29 = v30;
        }
      }
      if ( (v18 & 0x90) != 0x90 )
        goto LABEL_19;
      if ( (((_BYTE)v21 + (_BYTE)v23) & 0xF) != 0 && v27 == v28 + 8 )
        --v29;
      if ( v23 && v24 == v23 + 8 )
      {
        v31 = 0;
      }
      else
      {
LABEL_19:
        v31 = 0;
        if ( v23 )
        {
          if ( v24 )
            v31 = (int)abs32(v24 - 8) <= v23;
          else
            LOBYTE(v31) = v23 - (unsigned int)((v18 & 0x80) != 0) + 8 >= 0x10;
        }
      }
      LODWORD(v32) = 0;
      if ( v81 >= 0 )
        LODWORD(v32) = (unsigned int)v81 >= v21 - (v22 & -v31);
      goto LABEL_22;
    }
    if ( (((_BYTE)v22 + (_BYTE)v24) & 0xF) != 0 )
    {
      if ( v28 + abs32(v27 - 8) > 0x10 )
        ++v29;
    }
    else
    {
      ++v29;
      if ( v28 - (unsigned int)((v18 & 0x80) != 0) + 8 < 0x10 )
        v29 = (v21 + v23) >> 4;
    }
    if ( (v18 & 0x90) == 0x10 )
    {
      if ( (((_BYTE)v22 + (_BYTE)v24) & 0xF) != 0 && v28 == v27 + 8 )
        ++v29;
      if ( v24 && v23 == v24 + 8 )
        goto LABEL_94;
    }
    v31 = 1;
    v69 = 0;
    if ( !v24 )
    {
      v70 = v23 - ((v18 & 0x80) != 0) + 8;
      v31 = 2 - (v70 < 0x10);
      v69 = v22;
      if ( v70 < 0x10 )
        v69 = 0;
      goto LABEL_74;
    }
    if ( v23 + abs32(v24 - 8) > 0x10 )
    {
LABEL_94:
      v69 = v22;
      v31 = 2;
    }
LABEL_74:
    LODWORD(v32) = 0;
    v71 = v81 + v69;
    v72 = (v81 + v69) >> 32;
    if ( v72 >= 0 )
    {
      if ( v72 > 0 || v71 >= 2 * v21 - v22 )
        LODWORD(v32) = 2;
      else
        LODWORD(v32) = v71 >= v21 - v22;
    }
LABEL_22:
    v80 = v32;
    v33 = v31;
    v79 = v31;
    v34 = v29;
    v77 = v29;
    if ( v29 >= (int)v31 )
    {
      if ( (v18 & 0x40) != 0 )
      {
        v47 = v22;
        v78 = v22;
        goto LABEL_61;
      }
      goto LABEL_24;
    }
    goto LABEL_112;
  }
  if ( gfUMPDDebug )
    DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\engline.cxx:%d:bLines:Invalid surface format.\n", 416);
  return 0LL;
}
