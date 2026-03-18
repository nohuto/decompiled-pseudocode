/*
 * XREFs of ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C0007C70
 * Callers:
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0007458 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?BltLnkAccel6666@@YAXPEAE0JJJJ@Z @ 0x1C02DA50C (-BltLnkAccel6666@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccel8888@@YAXPEAE0JJJJ@Z @ 0x1C02DA5AC (-BltLnkAccel8888@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z @ 0x1C02DA654 (-BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z.c)
 */

void __fastcall BltLnkRect(struct _BLTLNKINFO *a1, struct _RECTL *a2)
{
  int v4; // ecx
  char *v5; // r15
  const unsigned __int8 *v6; // rsi
  LONG bottom; // r11d
  LONG top; // r10d
  int v9; // edi
  LONG left; // edx
  unsigned int v11; // r14d
  __int64 v12; // r13
  int v13; // r8d
  __int64 v14; // r9
  int v15; // r8d
  LONG v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // r10d
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rax
  int v23; // r10d
  char v24; // dl
  int v25; // r11d
  __int64 v26; // r8
  int v27; // r15d
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned __int64 n; // rdx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  void (__fastcall *v37)(unsigned __int8 *, unsigned int, const unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int); // rax
  int v38; // ecx
  unsigned int v39; // r11d
  int v40; // edx
  unsigned int v41; // ecx
  int v42; // ecx
  int v43; // eax
  void (*v44)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *); // rax
  int v45; // r8d
  void (__fastcall *v46)(struct BLTINFO *, unsigned int, unsigned int *, unsigned __int8); // r11
  int v47; // ecx
  unsigned __int8 v48; // r8
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // r8d
  int v54; // r8d
  int v55; // r8d
  int v56; // r8d
  int v57; // r8d
  int v58; // r8d
  bool v59; // zf
  unsigned int ii; // ecx
  char *v61; // rcx
  __int64 v62; // rcx
  int v63; // ecx
  unsigned int m; // ecx
  char *v65; // rcx
  unsigned int k; // r8d
  int v67; // edi
  int v69; // eax
  __int64 v70; // rcx
  int v72; // edi
  __int64 j; // rdx
  int v74; // eax
  __int64 v75; // rcx
  unsigned int v76; // r9d
  __int64 v77; // r8
  char *v78; // rcx
  unsigned int v79; // r9d
  int v80; // [rsp+44h] [rbp-644h]
  int v81; // [rsp+48h] [rbp-640h]
  unsigned int v82; // [rsp+4Ch] [rbp-63Ch]
  unsigned int v83; // [rsp+50h] [rbp-638h]
  unsigned int v84; // [rsp+60h] [rbp-628h]
  unsigned int v85; // [rsp+64h] [rbp-624h]
  int v86; // [rsp+68h] [rbp-620h]
  unsigned int v87; // [rsp+6Ch] [rbp-61Ch]
  int v88; // [rsp+70h] [rbp-618h]
  unsigned int v89; // [rsp+74h] [rbp-614h]
  __int64 kk; // [rsp+78h] [rbp-610h]
  __int64 jj; // [rsp+78h] [rbp-610h]
  unsigned int v92; // [rsp+78h] [rbp-610h]
  __int64 v93; // [rsp+78h] [rbp-610h]
  __int64 i; // [rsp+78h] [rbp-610h]
  int v95; // [rsp+90h] [rbp-5F8h]
  unsigned int v96; // [rsp+90h] [rbp-5F8h]
  XLATEOBJ *v97; // [rsp+90h] [rbp-5F8h]
  int v98; // [rsp+90h] [rbp-5F8h]
  int v99; // [rsp+90h] [rbp-5F8h]
  int v100; // [rsp+98h] [rbp-5F0h]
  void (__fastcall *v101)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *); // [rsp+A0h] [rbp-5E8h]
  void (__fastcall *v102)(unsigned __int8 *, unsigned int, const unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int); // [rsp+A8h] [rbp-5E0h]
  void (* near *v103)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+B0h] [rbp-5D8h]
  void (* near *v104)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+B0h] [rbp-5D8h]
  ULONG *pulXlate; // [rsp+B0h] [rbp-5D8h]
  void (* near *v106)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+B0h] [rbp-5D8h]
  void (* near *v107)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+B0h] [rbp-5D8h]
  unsigned int v108; // [rsp+BCh] [rbp-5CCh]
  __int128 v109; // [rsp+C0h] [rbp-5C8h] BYREF
  __int128 v110; // [rsp+D0h] [rbp-5B8h]
  __int64 v111; // [rsp+E0h] [rbp-5A8h]
  struct _BLTLNKINFO *v112; // [rsp+E8h] [rbp-5A0h]
  void (* near *v113)(struct BLTINFO *); // [rsp+F0h] [rbp-598h]
  void (* near *v114)(struct BLTINFO *); // [rsp+F8h] [rbp-590h]
  void (* near *v115)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+100h] [rbp-588h]
  XLATEOBJ *v116; // [rsp+110h] [rbp-578h] BYREF
  char *v117; // [rsp+118h] [rbp-570h]
  __int64 v118; // [rsp+120h] [rbp-568h]
  int v119; // [rsp+128h] [rbp-560h]
  unsigned int v120; // [rsp+12Ch] [rbp-55Ch]
  int v121; // [rsp+130h] [rbp-558h]
  int v122; // [rsp+134h] [rbp-554h]
  int v123; // [rsp+138h] [rbp-550h]
  int v124; // [rsp+13Ch] [rbp-54Ch]
  unsigned int v125; // [rsp+140h] [rbp-548h]
  unsigned int v126; // [rsp+144h] [rbp-544h]
  LONG v127; // [rsp+148h] [rbp-540h]
  int v128; // [rsp+14Ch] [rbp-53Ch]
  int v129; // [rsp+150h] [rbp-538h]
  __int64 v130; // [rsp+1B0h] [rbp-4D8h] BYREF
  char *v131; // [rsp+1B8h] [rbp-4D0h]
  char *v132; // [rsp+1C0h] [rbp-4C8h]
  int v133; // [rsp+1C8h] [rbp-4C0h]
  unsigned int v134; // [rsp+1CCh] [rbp-4BCh]
  int v135; // [rsp+1D0h] [rbp-4B8h]
  int v136; // [rsp+1D4h] [rbp-4B4h]
  int v137; // [rsp+1D8h] [rbp-4B0h]
  int v138; // [rsp+1DCh] [rbp-4ACh]
  int v139; // [rsp+1E0h] [rbp-4A8h]
  int v140; // [rsp+1E4h] [rbp-4A4h]
  unsigned int v141; // [rsp+1E8h] [rbp-4A0h]
  int v142; // [rsp+1ECh] [rbp-49Ch]
  int v143; // [rsp+1F0h] [rbp-498h]
  _DWORD v144[64]; // [rsp+250h] [rbp-438h] BYREF
  _DWORD v145[64]; // [rsp+350h] [rbp-338h] BYREF
  _DWORD v146[64]; // [rsp+450h] [rbp-238h] BYREF
  _DWORD v147[64]; // [rsp+550h] [rbp-138h] BYREF

  v112 = a1;
  v4 = 0;
  v82 = 0;
  v89 = 0;
  v85 = 0;
  v143 = 0;
  v129 = 0;
  v114 = 0LL;
  v113 = 0LL;
  v102 = 0LL;
  v101 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v87 = 0;
  v84 = 0;
  v88 = 0;
  v81 = 0;
  v80 = 0;
  v86 = 0;
  v83 = 0;
  v100 = 0;
  v108 = 0;
  v109 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  bottom = a2->bottom;
  top = a2->top;
  v9 = bottom - top;
  left = a2->left;
  v11 = a2->right - left;
  v12 = *((_QWORD *)a1 + 2);
  v13 = *(_DWORD *)(v12 + 96);
  switch ( v13 )
  {
    case 6:
      v83 = left;
      v82 = a2->right - left;
      v100 = 4;
LABEL_3:
      v89 = v4;
LABEL_4:
      v85 = v4;
      break;
    case 1:
      v83 = left >> 5;
      v89 = (left >> 3) & 3;
      v4 = left & 0x1F;
      v82 = (v4 + v11 + 31) >> 5;
      goto LABEL_4;
    case 2:
      v83 = left >> 3;
      v89 = (left >> 1) & 3;
      v4 = left & 7;
      v82 = (v4 + v11 + 7) >> 3;
      goto LABEL_4;
    case 3:
      v83 = left >> 2;
      v4 = left & 3;
      v82 = (v4 + v11 + 3) >> 2;
      v100 = 1;
      goto LABEL_3;
    case 4:
      v83 = left >> 1;
      v4 = left & 1;
      v89 = 2 * v4;
      v82 = (v4 + v11 + 1) >> 1;
      v100 = 2;
      goto LABEL_4;
    case 5:
      v83 = (3 * left) >> 2;
      v89 = -left & 3;
      v85 = 0;
      v108 = v89;
      v100 = 3;
      v82 = (v89 + 2 * (v11 + 1) + v11 + 1) >> 2;
      break;
  }
  v14 = *((_QWORD *)a1 + 11);
  if ( !v14 )
  {
    v86 = *((_DWORD *)a1 + 37);
    v15 = *((_DWORD *)a1 + 26);
    goto LABEL_7;
  }
  if ( v13 == 6 )
  {
    v87 = 4 * *((_DWORD *)a1 + 38);
    v34 = 4 * *((_DWORD *)a1 + 40);
    v35 = 4 * left;
  }
  else
  {
    v53 = v13 - 1;
    if ( !v53 )
    {
      v87 = *((_DWORD *)a1 + 38);
      v84 = left - *((_DWORD *)a1 + 40);
      v37 = BltLnkReadPat1;
      goto LABEL_69;
    }
    v54 = v53 - 1;
    if ( !v54 )
    {
      v87 = *((_DWORD *)a1 + 38);
      v84 = left - *((_DWORD *)a1 + 40);
      v37 = BltLnkReadPat4;
      goto LABEL_69;
    }
    v55 = v54 - 1;
    if ( !v55 )
    {
      v87 = *((_DWORD *)a1 + 38);
      v84 = left - *((_DWORD *)a1 + 40);
      goto LABEL_68;
    }
    v56 = v55 - 1;
    if ( v56 )
    {
      if ( v56 != 1 )
        goto LABEL_70;
      v87 = 3 * *((_DWORD *)a1 + 38);
      v36 = 3 * (left - *((_DWORD *)a1 + 40));
      goto LABEL_67;
    }
    v87 = 2 * *((_DWORD *)a1 + 38);
    v34 = 2 * *((_DWORD *)a1 + 40);
    v35 = 2 * left;
  }
  v36 = v35 - v34;
LABEL_67:
  v84 = v36;
LABEL_68:
  v37 = BltLnkReadPat;
LABEL_69:
  v102 = v37;
LABEL_70:
  if ( v84 >= v87 )
    v84 %= v87;
  v88 = *((_DWORD *)a1 + 39);
  v81 = top - *((_DWORD *)a1 + 41);
  v15 = *((_DWORD *)a1 + 26);
  if ( v15 < 0 )
    v81 = bottom + -*((_DWORD *)a1 + 41) - 1;
  if ( v81 >= v88 )
  {
    v81 %= v88;
  }
  else if ( v81 < 0 )
  {
    v81 = v88 - ~v81 % v88 - 1;
  }
  v6 = (const unsigned __int8 *)(v14 + v81 * *((_DWORD *)a1 + 29));
LABEL_7:
  if ( v15 <= 0 )
    v16 = bottom - 1;
  else
    v16 = top;
  v17 = *((_QWORD *)a1 + 9) + v16 * *((_DWORD *)a1 + 28);
  v18 = *((_QWORD *)a1 + 8);
  if ( v18 )
  {
    v130 = *((_QWORD *)a1 + 6);
    v19 = *((_DWORD *)a1 + 36) - *((_DWORD *)a1 + 1) + top;
    *((_DWORD *)a1 + 50) = v19;
    v20 = a2->left + *((_DWORD *)a1 + 35) - *(_DWORD *)a1;
    *((_DWORD *)a1 + 47) = v20;
    *((_DWORD *)a1 + 48) = v20 + v11;
    v21 = *((_DWORD *)a1 + 27);
    if ( v15 <= 0 )
      v22 = v21 * (v19 + v9 - 1);
    else
      v22 = v19 * v21;
    v5 = (char *)(v22 + v18);
  }
  v23 = *((_DWORD *)a1 + 56);
  if ( !v23 )
    goto LABEL_14;
  v39 = a2->left + *((_DWORD *)a1 + 44) - *(_DWORD *)a1;
  v40 = a2->top + *((_DWORD *)a1 + 45) - *((_DWORD *)a1 + 1);
  v80 = v40;
  if ( v15 < 0 )
  {
    v40 = v9 + v40 - 1;
    v80 = v40;
  }
  v41 = *((_DWORD *)a1 + 42);
  v96 = v41;
  if ( v39 >= v41 )
  {
    v39 %= v41;
    v40 = v80;
  }
  v42 = *((_DWORD *)a1 + 43);
  if ( v40 >= v42 )
  {
    v80 = v40 % v42;
  }
  else if ( v40 < 0 )
  {
    v80 = v42 - ~v40 % v42 - 1;
  }
  *((_QWORD *)&v109 + 1) = *((_QWORD *)a1 + 10);
  *(_QWORD *)&v109 = *((_QWORD *)&v109 + 1) + v80 * *((_DWORD *)a1 + 30);
  *((_QWORD *)&v110 + 1) = __PAIR64__(v39, v96);
  *(_QWORD *)&v110 = __PAIR64__(v80, v42);
  BYTE4(v111) = *((_BYTE *)a1 + 229);
  LODWORD(v111) = *((_DWORD *)a1 + 34);
  v43 = *(_DWORD *)(v12 + 96);
  if ( v43 == 6 )
  {
    v44 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk32;
  }
  else
  {
    v49 = v43 - 1;
    if ( v49 )
    {
      v50 = v49 - 1;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( v51 )
        {
          v52 = v51 - 1;
          if ( v52 )
          {
            if ( v52 == 1 )
              v101 = BltLnkSrcCopyMsk24;
            goto LABEL_14;
          }
          v44 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk16;
        }
        else
        {
          v44 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk8;
        }
      }
      else
      {
        v44 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk4;
      }
    }
    else
    {
      v44 = BltLnkSrcCopyMsk1;
    }
  }
  v101 = (void (__fastcall *)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))v44;
LABEL_14:
  if ( *((int *)a1 + 25) <= 0 || v15 <= 0 )
    goto LABEL_23;
  v24 = *((_BYTE *)a1 + 228);
  if ( v24 == -52
    && v23
    && *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) == *(_DWORD *)(v12 + 96)
    && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 4LL) & 1) != 0 )
  {
    v118 = v17;
    v117 = v5;
    v119 = 1;
    v122 = v15;
    v120 = v11;
    v121 = v9;
    v123 = *((_DWORD *)a1 + 31);
    v124 = *((_DWORD *)a1 + 32);
    v125 = *((_DWORD *)a1 + 47);
    v126 = v11 + v125;
    v127 = a2->left;
    v128 = 0;
    v116 = xloIdent;
    v101((struct BLTINFO *)&v116, (struct _BLTLNK_MASKINFO *)&v109, v144, v146);
    return;
  }
  if ( v24 != -72 && v24 != -30 )
    goto LABEL_19;
  if ( v23 )
  {
LABEL_23:
    v25 = *((_DWORD *)a1 + 53);
    v26 = v108;
    if ( v25 )
    {
      v132 = (char *)v144 + v108;
      v131 = v5;
      v133 = 1;
      v27 = *((_DWORD *)a1 + 26);
      v136 = v27;
      v134 = v11;
      v135 = 1;
      v137 = 1;
      v138 = 1;
      v139 = *((_DWORD *)a1 + 47);
      v140 = v11 + v139;
      v141 = v85;
      v142 = 1;
      v130 = *((_QWORD *)a1 + 6);
      v28 = 4 * ((8 * *(_DWORD *)(v12 + 96)) | *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL));
      v29 = v28 + 1;
      if ( (*(_DWORD *)(v130 + 4) & 1) == 0 )
        v29 = v28;
      n = 0x1C0000000uLL;
      v114 = (&SrcCopyFunctionTable)[v29];
    }
    else
    {
      v27 = *((_DWORD *)a1 + 26);
      n = 0x1C0000000uLL;
    }
    v118 = v17;
    v117 = (char *)v146 + v108;
    v119 = 1;
    v122 = v27;
    v120 = v11;
    v121 = 1;
    v123 = 1;
    v124 = 1;
    v125 = v85;
    v126 = v11 + v85;
    v127 = a2->left;
    v128 = 0;
    v116 = xloIdent;
    if ( !v23 )
      v113 = (&SrcCopyFunctionTable)[4 * (*(_DWORD *)(v12 + 96) | (unsigned int)(8 * *(_DWORD *)(v12 + 96))) + 1];
    if ( *((_DWORD *)a1 + 55) )
    {
      if ( *((_DWORD *)a1 + 54) )
      {
        if ( v25 )
        {
          v107 = (&RopFunctionTable)[*((_BYTE *)a1 + 228) & 0xF];
          v115 = (&RopFunctionTable)[(unsigned __int64)*((unsigned __int8 *)a1 + 228) >> 4];
          v99 = v9;
          for ( i = v17; v99--; v118 = i )
          {
            ((void (__fastcall *)(__int64 *, unsigned __int64, __int64))v114)(&v130, n, v26);
            v131 += *((int *)a1 + 31);
            ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v107)(v147, i + 4LL * v83, v144, v82);
            ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v115)(v145, i + 4LL * v83, v144, v82);
            v72 = v80;
            if ( v6 )
            {
              v102((unsigned __int8 *)v144 + v89, v85, v6, v87, v84, v11, v100);
              if ( *((_DWORD *)a1 + 26) == 1 )
              {
                v6 += *((int *)a1 + 33);
                if ( v81 + 1 >= v88 )
                  v6 = (const unsigned __int8 *)*((_QWORD *)a1 + 11);
                v74 = 0;
                if ( v81 + 1 < v88 )
                  v74 = v81 + 1;
                v81 = v74;
              }
              else
              {
                v75 = *((int *)v112 + 29);
                if ( v81 )
                {
                  --v81;
                  v6 -= v75;
                }
                else
                {
                  v81 = v88 - 1;
                  v6 = (const unsigned __int8 *)(*((_QWORD *)a1 + 11) + (v88 - 1) * (int)v75);
                }
              }
              v76 = v82;
              v77 = 0LL;
              while ( v76 )
              {
                j = *(_DWORD *)((char *)v144 + v77) & *(_DWORD *)((char *)v145 + v77) | (unsigned int)~*(_DWORD *)((char *)v144 + v77) & *(_DWORD *)((char *)v147 + v77);
                *(_DWORD *)((char *)v146 + v77) = j;
                v77 += 4LL;
                --v76;
              }
            }
            else if ( *(_DWORD *)(*((_QWORD *)a1 + 2) + 96LL) == 5 )
            {
              v78 = (char *)v144 + v108;
              for ( j = v11; (_DWORD)j; j = (unsigned int)(j - 1) )
              {
                *(_WORD *)v78 = v86;
                v78[2] = BYTE2(v86);
                v78 += 3;
              }
              v79 = v82;
              v77 = 0LL;
              while ( v79 )
              {
                j = *(_DWORD *)((char *)v144 + v77) & *(_DWORD *)((char *)v145 + v77) | (unsigned int)~*(_DWORD *)((char *)v144 + v77) & *(_DWORD *)((char *)v147 + v77);
                *(_DWORD *)((char *)v146 + v77) = j;
                v77 += 4LL;
                --v79;
              }
            }
            else
            {
              v77 = v82;
              j = 0LL;
              while ( (_DWORD)v77 )
              {
                *(_DWORD *)((char *)v146 + j) = v86 & *(_DWORD *)((char *)v145 + j) | ~v86 & *(_DWORD *)((char *)v147 + j);
                j += 4LL;
                v77 = (unsigned int)(v77 - 1);
              }
            }
            if ( *((_DWORD *)a1 + 56) )
            {
              v101((struct BLTINFO *)&v116, (struct _BLTLNK_MASKINFO *)&v109, v144, 0LL);
              if ( *((int *)a1 + 26) <= 0 )
              {
                if ( v80 )
                {
                  --v80;
                  *(_QWORD *)&v109 = *((int *)a1 + 34) + (_QWORD)v109;
                }
                else
                {
                  v80 = *((_DWORD *)a1 + 43) - 1;
                  *(_QWORD *)&v109 = *((_QWORD *)a1 + 10) + v80 * *((_DWORD *)a1 + 30);
                }
              }
              else
              {
                ++v80;
                *(_QWORD *)&v109 = *((int *)a1 + 34) + (_QWORD)v109;
                if ( v72 + 1 >= *((_DWORD *)a1 + 43) )
                {
                  v80 = 0;
                  *(_QWORD *)&v109 = *((_QWORD *)a1 + 10);
                }
              }
            }
            else
            {
              ((void (__fastcall *)(XLATEOBJ **, __int64, __int64))v113)(&v116, j, v77);
            }
            i += *((int *)a1 + 32);
          }
        }
        else
        {
          if ( !v6 )
          {
            if ( *(_DWORD *)(v12 + 96) == 5 )
            {
              v65 = (char *)v145 + v108;
              for ( k = v11; k; --k )
              {
                *(_WORD *)v65 = v86;
                v65[2] = BYTE2(v86);
                v65 += 3;
              }
            }
            else
            {
              for ( m = v82; m; v145[m] = v86 )
                --m;
            }
          }
          v106 = (&RopFunctionTable)[*((_DWORD *)a1 + 51) & 0xF];
          v98 = v9;
          v93 = v17;
          v67 = v80;
          while ( v98-- )
          {
            if ( *((_DWORD *)a1 + 55) && v6 )
            {
              v102((unsigned __int8 *)v145 + v89, v85, v6, v87, v84, v11, v100);
              if ( *((_DWORD *)a1 + 26) == 1 )
              {
                v6 += *((int *)a1 + 33);
                if ( v81 + 1 >= v88 )
                  v6 = (const unsigned __int8 *)*((_QWORD *)a1 + 11);
                v69 = 0;
                if ( v81 + 1 < v88 )
                  v69 = v81 + 1;
                v81 = v69;
              }
              else
              {
                v70 = *((int *)v112 + 29);
                if ( v81 )
                {
                  --v81;
                  v6 -= v70;
                }
                else
                {
                  v81 = v88 - 1;
                  v6 = (const unsigned __int8 *)(*((_QWORD *)a1 + 11) + (v88 - 1) * (int)v70);
                }
              }
            }
            ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v106)(v146, v93 + 4LL * v83, v145, v82);
            if ( *((_DWORD *)a1 + 56) )
            {
              v101((struct BLTINFO *)&v116, (struct _BLTLNK_MASKINFO *)&v109, v144, 0LL);
              if ( *((int *)a1 + 26) <= 0 )
              {
                if ( v67 )
                {
                  --v67;
                  *(_QWORD *)&v109 = *((int *)a1 + 34) + (_QWORD)v109;
                }
                else
                {
                  v67 = *((_DWORD *)a1 + 43) - 1;
                  *(_QWORD *)&v109 = *((_QWORD *)a1 + 10) + v67 * *((_DWORD *)a1 + 30);
                }
              }
              else
              {
                ++v67;
                *(_QWORD *)&v109 = *((int *)a1 + 34) + (_QWORD)v109;
                if ( v67 >= *((_DWORD *)a1 + 43) )
                {
                  v67 = 0;
                  *(_QWORD *)&v109 = *((_QWORD *)a1 + 10);
                }
              }
            }
            else
            {
              ((void (__fastcall *)(XLATEOBJ **))v113)(&v116);
            }
            v93 += *((int *)a1 + 32);
            v118 = v93;
          }
        }
      }
      else
      {
        v104 = (&RopFunctionTable)[*((_DWORD *)a1 + 52) & 0xF];
        if ( !v6 )
        {
          if ( *(_DWORD *)(v12 + 96) == 5 )
          {
            v61 = (char *)v145 + v108;
            for ( n = v11; (_DWORD)n; n = (unsigned int)(n - 1) )
            {
              *(_WORD *)v61 = v86;
              v61[2] = BYTE2(v86);
              v61 += 3;
            }
          }
          else
          {
            for ( ii = v82; ii; v145[ii] = v86 )
              --ii;
          }
        }
        for ( jj = v17; v9--; v118 = jj )
        {
          if ( *((_DWORD *)a1 + 53) )
          {
            ((void (__fastcall *)(__int64 *, unsigned __int64, __int64))v114)(&v130, n, v26);
            v131 += *((int *)a1 + 31);
          }
          if ( v6 )
          {
            v102((unsigned __int8 *)v145 + v89, v85, v6, v87, v84, v11, v100);
            if ( *((_DWORD *)a1 + 26) == 1 )
            {
              v6 += *((int *)a1 + 33);
              if ( v81 + 1 >= v88 )
                v6 = (const unsigned __int8 *)*((_QWORD *)a1 + 11);
              v33 = 0;
              if ( v81 + 1 < v88 )
                v33 = v81 + 1;
              v81 = v33;
            }
            else
            {
              v62 = *((int *)v112 + 29);
              if ( v81 )
              {
                --v81;
                v6 -= v62;
              }
              else
              {
                v81 = v88 - 1;
                v6 = (const unsigned __int8 *)(*((_QWORD *)a1 + 11) + (v88 - 1) * (int)v62);
              }
            }
          }
          ((void (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _QWORD))v104)(v146, v145, v144, v82);
          if ( *((_DWORD *)a1 + 56) )
          {
            v101((struct BLTINFO *)&v116, (struct _BLTLNK_MASKINFO *)&v109, v144, 0LL);
            v63 = v80;
            if ( *((int *)a1 + 26) <= 0 )
            {
              if ( v80 )
              {
                --v80;
                *(_QWORD *)&v109 = *((int *)a1 + 34) + (_QWORD)v109;
              }
              else
              {
                v80 = *((_DWORD *)a1 + 43) - 1;
                *(_QWORD *)&v109 = *((_QWORD *)a1 + 10) + v80 * *((_DWORD *)a1 + 30);
              }
            }
            else
            {
              ++v80;
              *(_QWORD *)&v109 = *((int *)a1 + 34) + (_QWORD)v109;
              if ( v63 + 1 >= *((_DWORD *)a1 + 43) )
              {
                v80 = 0;
                *(_QWORD *)&v109 = *((_QWORD *)a1 + 10);
              }
            }
          }
          else
          {
            ((void (__fastcall *)(XLATEOBJ **))v113)(&v116);
          }
          jj += *((int *)a1 + 32);
        }
      }
    }
    else
    {
      v103 = (&RopFunctionTable)[*((_BYTE *)a1 + 228) & 0xF];
      v95 = v9;
      for ( kk = v17; v95--; v118 = kk )
      {
        if ( *((_DWORD *)a1 + 53) )
        {
          ((void (__fastcall *)(__int64 *, unsigned __int64, __int64))v114)(&v130, n, v26);
          v131 += *((int *)a1 + 31);
        }
        ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v103)(v146, kk + 4LL * v83, v144, v82);
        if ( *((_DWORD *)a1 + 56) )
        {
          v101((struct BLTINFO *)&v116, (struct _BLTLNK_MASKINFO *)&v109, v147, 0LL);
          v38 = v80;
          if ( *((int *)a1 + 26) <= 0 )
          {
            if ( v80 )
            {
              --v80;
              *(_QWORD *)&v109 = *((int *)a1 + 34) + (_QWORD)v109;
            }
            else
            {
              v80 = *((_DWORD *)a1 + 43) - 1;
              *(_QWORD *)&v109 = *((_QWORD *)a1 + 10) + v80 * *((_DWORD *)a1 + 30);
            }
          }
          else
          {
            ++v80;
            *(_QWORD *)&v109 = *((int *)a1 + 34) + (_QWORD)v109;
            if ( v38 + 1 >= *((_DWORD *)a1 + 43) )
            {
              v80 = 0;
              *(_QWORD *)&v109 = *((_QWORD *)a1 + 10);
            }
          }
        }
        else
        {
          ((void (__fastcall *)(XLATEOBJ **))v113)(&v116);
        }
        kk += *((int *)a1 + 32);
      }
    }
    return;
  }
  v92 = *((_DWORD *)a1 + 37);
  if ( v92 == -1
    || *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) != 1
    || (v45 = *(_DWORD *)(v12 + 96), (unsigned int)(v45 - 3) > 3) )
  {
LABEL_19:
    if ( !v23
      && *((_DWORD *)a1 + 53)
      && *((_DWORD *)a1 + 54)
      && *(_DWORD *)(v12 + 96) == 3
      && *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) == 3
      && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 4LL) & 1) != 0 )
    {
      switch ( v24 )
      {
        case 102:
          BltLnkAccel6666(
            (unsigned __int8 *)&v5[*((int *)a1 + 47)],
            (unsigned __int8 *)(v17 + a2->left),
            *((_DWORD *)a1 + 31),
            *((_DWORD *)a1 + 32),
            v11,
            v9);
          return;
        case -120:
          BltLnkAccel8888(
            (unsigned __int8 *)&v5[*((int *)a1 + 47)],
            (unsigned __int8 *)(v17 + a2->left),
            *((_DWORD *)a1 + 31),
            *((_DWORD *)a1 + 32),
            v11,
            v9);
          return;
        case -18:
          BltLnkAccelEEEE(
            (unsigned __int8 *)&v5[*((int *)a1 + 47)],
            (unsigned __int8 *)(v17 + a2->left),
            *((_DWORD *)a1 + 31),
            *((_DWORD *)a1 + 32),
            v11,
            v9);
          return;
      }
    }
    goto LABEL_23;
  }
  v46 = 0LL;
  v47 = 0;
  if ( v45 == 6 )
  {
    v46 = BltLnkPatMaskCopy32;
    v48 = -1;
LABEL_100:
    v47 = 0xFFFFFF;
    goto LABEL_101;
  }
  v57 = v45 - 3;
  if ( !v57 )
  {
    v46 = BltLnkPatMaskCopy8;
    v48 = -1;
    v47 = 255;
    goto LABEL_101;
  }
  v58 = v57 - 1;
  if ( !v58 )
  {
    v46 = BltLnkPatMaskCopy16;
    v47 = 0xFFFF;
    v48 = -1;
    goto LABEL_101;
  }
  v59 = v58 == 1;
  v48 = -1;
  if ( v59 )
  {
    v46 = BltLnkPatMaskCopy24;
    goto LABEL_100;
  }
LABEL_101:
  v97 = (XLATEOBJ *)*((_QWORD *)a1 + 6);
  pulXlate = v97->pulXlate;
  if ( (v47 & pulXlate[1]) != v47 || (*pulXlate & v47) != 0 )
    goto LABEL_19;
  if ( v24 != -30 )
    v48 = 0;
  v118 = v17;
  v117 = v5;
  v119 = 1;
  v122 = *((_DWORD *)a1 + 26);
  v120 = v11;
  v121 = v9;
  v123 = *((_DWORD *)a1 + 31);
  v124 = *((_DWORD *)a1 + 32);
  v125 = *((_DWORD *)a1 + 47);
  v126 = v11 + v125;
  v127 = a2->left;
  v128 = 0;
  v116 = v97;
  v46((struct BLTINFO *)&v116, v92, v144, v48);
}
