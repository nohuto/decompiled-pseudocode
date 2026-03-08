/*
 * XREFs of ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C00877C0
 * Callers:
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0087124 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?BltLnkAccel6666@@YAXPEAE0JJJJ@Z @ 0x1C03060EC (-BltLnkAccel6666@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccel8888@@YAXPEAE0JJJJ@Z @ 0x1C030618C (-BltLnkAccel8888@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z @ 0x1C0306234 (-BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z.c)
 */

void __fastcall BltLnkRect(struct _BLTLNKINFO *a1, struct _RECTL *a2)
{
  struct _RECTL *v2; // r13
  int v4; // ecx
  char *v5; // r12
  LONG bottom; // r11d
  LONG top; // r10d
  LONG left; // edx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  int v11; // r8d
  __int64 v12; // r9
  int *v13; // r8
  int v14; // r9d
  __int64 v15; // rcx
  LONG v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // ecx
  __int64 v21; // r12
  int v22; // edx
  int v23; // r8d
  char v24; // dl
  __int64 v25; // rdi
  __int64 v26; // rax
  struct Gre::Base::SESSION_GLOBALS *v27; // r8
  struct Gre::Base::SESSION_GLOBALS *v29; // rax
  unsigned int v30; // r10d
  int v31; // ecx
  unsigned int v32; // edi
  int v33; // r11d
  int v34; // eax
  void (*v35)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *); // rax
  void (__fastcall *v36)(unsigned __int8 *, unsigned int, const unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int); // rax
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  void (__fastcall *v44)(struct BLTINFO *, unsigned int, unsigned int *, unsigned __int8); // r11
  int v45; // r10d
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  bool v49; // zf
  char *v50; // r13
  _DWORD *v51; // rdi
  int v52; // ecx
  const unsigned __int8 *v53; // r15
  unsigned int n; // ecx
  char *v55; // rcx
  unsigned int m; // edx
  int v57; // edi
  int v58; // esi
  int v60; // eax
  __int64 v61; // rcx
  const unsigned __int8 *v62; // rdi
  unsigned int k; // ecx
  char *v64; // rcx
  unsigned int j; // edx
  int v66; // esi
  int v68; // eax
  __int64 v69; // rcx
  int v70; // r15d
  const unsigned __int8 *i; // rdx
  int v73; // eax
  __int64 v74; // rcx
  const unsigned __int8 *v75; // rdi
  unsigned int v76; // r9d
  __int64 v77; // r8
  char *v78; // rcx
  unsigned int v79; // r9d
  int v80; // [rsp+44h] [rbp-674h]
  int v81; // [rsp+48h] [rbp-670h]
  int v82; // [rsp+4Ch] [rbp-66Ch]
  unsigned int v83; // [rsp+50h] [rbp-668h]
  unsigned int v84; // [rsp+54h] [rbp-664h]
  unsigned int v85; // [rsp+68h] [rbp-650h]
  unsigned int v86; // [rsp+6Ch] [rbp-64Ch]
  int v87; // [rsp+70h] [rbp-648h]
  unsigned int v88; // [rsp+74h] [rbp-644h]
  int v89; // [rsp+78h] [rbp-640h]
  unsigned int v90; // [rsp+7Ch] [rbp-63Ch]
  __int64 ii; // [rsp+90h] [rbp-628h]
  unsigned int v92; // [rsp+90h] [rbp-628h]
  __int64 v93; // [rsp+90h] [rbp-628h]
  __int64 v94; // [rsp+90h] [rbp-628h]
  __int64 v95; // [rsp+90h] [rbp-628h]
  int v96; // [rsp+98h] [rbp-620h]
  const unsigned __int8 *v97; // [rsp+A0h] [rbp-618h]
  void (*v98)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *); // [rsp+A8h] [rbp-610h]
  unsigned int v99; // [rsp+B0h] [rbp-608h]
  void (__fastcall *v100)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+B0h] [rbp-608h]
  void (__fastcall *v101)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+B0h] [rbp-608h]
  void (__fastcall *v102)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+B0h] [rbp-608h]
  void (__fastcall *v103)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+B0h] [rbp-608h]
  void (__fastcall *v104)(unsigned __int8 *, unsigned int, const unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int); // [rsp+B8h] [rbp-600h]
  int *v105; // [rsp+C0h] [rbp-5F8h]
  __int64 v106; // [rsp+C8h] [rbp-5F0h]
  __int64 v107; // [rsp+C8h] [rbp-5F0h]
  _DWORD *v109; // [rsp+D8h] [rbp-5E0h]
  __int128 v110; // [rsp+E0h] [rbp-5D8h] BYREF
  __int128 v111; // [rsp+F0h] [rbp-5C8h]
  __int64 v112; // [rsp+100h] [rbp-5B8h]
  const unsigned __int8 **v113; // [rsp+108h] [rbp-5B0h]
  struct _BLTLNKINFO *v114; // [rsp+110h] [rbp-5A8h]
  _DWORD *v115; // [rsp+118h] [rbp-5A0h]
  void (*const near *v116)(struct BLTINFO *); // [rsp+120h] [rbp-598h]
  void (*const near *v117)(struct BLTINFO *); // [rsp+128h] [rbp-590h]
  char *v118; // [rsp+130h] [rbp-588h]
  void (__fastcall *v119)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+138h] [rbp-580h]
  char *v120; // [rsp+140h] [rbp-578h] BYREF
  char *v121; // [rsp+148h] [rbp-570h]
  __int64 v122; // [rsp+150h] [rbp-568h]
  int v123; // [rsp+158h] [rbp-560h]
  unsigned int v124; // [rsp+15Ch] [rbp-55Ch]
  int v125; // [rsp+160h] [rbp-558h]
  int v126; // [rsp+164h] [rbp-554h]
  int v127; // [rsp+168h] [rbp-550h]
  int v128; // [rsp+16Ch] [rbp-54Ch]
  int v129; // [rsp+170h] [rbp-548h]
  unsigned int v130; // [rsp+174h] [rbp-544h]
  LONG v131; // [rsp+178h] [rbp-540h]
  int v132; // [rsp+17Ch] [rbp-53Ch]
  int v133; // [rsp+180h] [rbp-538h]
  __int64 v134; // [rsp+1E0h] [rbp-4D8h] BYREF
  char *v135; // [rsp+1E8h] [rbp-4D0h]
  char *v136; // [rsp+1F0h] [rbp-4C8h]
  int v137; // [rsp+1F8h] [rbp-4C0h]
  unsigned int v138; // [rsp+1FCh] [rbp-4BCh]
  int v139; // [rsp+200h] [rbp-4B8h]
  int v140; // [rsp+204h] [rbp-4B4h]
  int v141; // [rsp+208h] [rbp-4B0h]
  int v142; // [rsp+20Ch] [rbp-4ACh]
  int v143; // [rsp+210h] [rbp-4A8h]
  int v144; // [rsp+214h] [rbp-4A4h]
  unsigned int v145; // [rsp+218h] [rbp-4A0h]
  int v146; // [rsp+21Ch] [rbp-49Ch]
  int v147; // [rsp+220h] [rbp-498h]
  _DWORD v148[64]; // [rsp+280h] [rbp-438h] BYREF
  _DWORD v149[64]; // [rsp+380h] [rbp-338h] BYREF
  _DWORD v150[64]; // [rsp+480h] [rbp-238h] BYREF
  _DWORD v151[64]; // [rsp+580h] [rbp-138h] BYREF

  v2 = a2;
  v114 = a1;
  v4 = 0;
  v83 = 0;
  v90 = 0;
  v86 = 0;
  v147 = 0;
  v133 = 0;
  v117 = 0LL;
  v116 = 0LL;
  v104 = 0LL;
  v98 = 0LL;
  v5 = 0LL;
  v97 = 0LL;
  v88 = 0;
  v85 = 0;
  v89 = 0;
  v80 = 0;
  v82 = 0;
  v87 = 0;
  v84 = 0;
  v96 = 0;
  v99 = 0;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  bottom = a2->bottom;
  top = a2->top;
  v81 = bottom - top;
  left = a2->left;
  v9 = v2->right - left;
  v118 = (char *)a1 + 16;
  v10 = *((_QWORD *)a1 + 2);
  v106 = v10;
  v11 = *(_DWORD *)(v10 + 96);
  switch ( v11 )
  {
    case 6:
      v84 = left;
      v83 = v9;
      v96 = 4;
LABEL_3:
      v90 = v4;
LABEL_4:
      v86 = v4;
      break;
    case 1:
      v84 = left >> 5;
      v90 = (left >> 3) & 3;
      v4 = left & 0x1F;
      v83 = (v4 + v9 + 31) >> 5;
      goto LABEL_4;
    case 2:
      v84 = left >> 3;
      v90 = (left >> 1) & 3;
      v4 = left & 7;
      v83 = (v4 + v9 + 7) >> 3;
      goto LABEL_4;
    case 3:
      v84 = left >> 2;
      v4 = left & 3;
      v83 = (v4 + v9 + 3) >> 2;
      v96 = 1;
      goto LABEL_3;
    case 4:
      v84 = left >> 1;
      v4 = left & 1;
      v90 = 2 * v4;
      v83 = (v4 + v9 + 1) >> 1;
      v96 = 2;
      goto LABEL_4;
    case 5:
      v84 = (3 * left) >> 2;
      v99 = -left & 3;
      v90 = v99;
      v86 = 0;
      v96 = 3;
      v83 = (v99 + 2 * (v9 + 1) + v9 + 1) >> 2;
      break;
  }
  v113 = (const unsigned __int8 **)((char *)a1 + 88);
  v12 = *((_QWORD *)a1 + 11);
  if ( v12 )
  {
    switch ( v11 )
    {
      case 1:
        v88 = *((_DWORD *)a1 + 38);
        v85 = left - *((_DWORD *)a1 + 40);
        v36 = BltLnkReadPat1;
        goto LABEL_71;
      case 2:
        v88 = *((_DWORD *)a1 + 38);
        v85 = left - *((_DWORD *)a1 + 40);
        v36 = BltLnkReadPat4;
        goto LABEL_71;
      case 3:
        v88 = *((_DWORD *)a1 + 38);
        v85 = left - *((_DWORD *)a1 + 40);
        goto LABEL_70;
      case 4:
        v88 = 2 * *((_DWORD *)a1 + 38);
        v37 = 2 * *((_DWORD *)a1 + 40);
        v38 = 2 * left;
        goto LABEL_68;
      case 5:
        v88 = 3 * *((_DWORD *)a1 + 38);
        v39 = 3 * (left - *((_DWORD *)a1 + 40));
        goto LABEL_69;
      case 6:
        v88 = 4 * *((_DWORD *)a1 + 38);
        v37 = 4 * *((_DWORD *)a1 + 40);
        v38 = 4 * left;
LABEL_68:
        v39 = v38 - v37;
LABEL_69:
        v85 = v39;
LABEL_70:
        v36 = BltLnkReadPat;
LABEL_71:
        v104 = v36;
        break;
      default:
        break;
    }
    if ( v85 >= v88 )
      v85 %= v88;
    v89 = *((_DWORD *)a1 + 39);
    v80 = top - *((_DWORD *)a1 + 41);
    v13 = (int *)((char *)a1 + 104);
    if ( *((int *)a1 + 26) < 0 )
      v80 = bottom + -*((_DWORD *)a1 + 41) - 1;
    if ( v80 < v89 )
    {
      if ( v80 < 0 )
        v80 = v89 - ~v80 % v89 - 1;
    }
    else
    {
      v80 %= v89;
    }
    v97 = (const unsigned __int8 *)(v12 + *((_DWORD *)a1 + 29) * v80);
  }
  else
  {
    v87 = *((_DWORD *)a1 + 37);
    v13 = (int *)((char *)a1 + 104);
  }
  v105 = v13;
  v14 = *v13;
  v15 = *((unsigned int *)a1 + 28);
  if ( *v13 <= 0 )
    v16 = bottom - 1;
  else
    v16 = top;
  v17 = *((_QWORD *)a1 + 9) + (int)v15 * v16;
  v18 = *((_QWORD *)a1 + 8);
  if ( v18 )
  {
    v134 = *((_QWORD *)a1 + 6);
    v19 = top + *((_DWORD *)a1 + 36) - *((_DWORD *)a1 + 1);
    *((_DWORD *)a1 + 50) = v19;
    v20 = v2->left + *((_DWORD *)a1 + 35) - *(_DWORD *)a1;
    *((_DWORD *)a1 + 47) = v20;
    *((_DWORD *)a1 + 48) = v20 + v9;
    v21 = v18;
    v15 = *((unsigned int *)a1 + 27);
    v22 = bottom - top;
    if ( v14 <= 0 )
    {
      v5 = (char *)((int)v15 * (v19 + v81 - 1) + v21);
    }
    else
    {
      v15 = (unsigned int)(v19 * v15);
      v5 = (char *)((int)v15 + v21);
    }
  }
  else
  {
    v22 = bottom - top;
  }
  v115 = (_DWORD *)((char *)a1 + 224);
  v23 = *((_DWORD *)a1 + 56);
  if ( !v23 )
    goto LABEL_13;
  v30 = v2->left + *((_DWORD *)a1 + 44) - *(_DWORD *)a1;
  v31 = v2->top + *((_DWORD *)a1 + 45) - *((_DWORD *)a1 + 1);
  v82 = v31;
  if ( v14 < 0 )
  {
    v31 = v22 + v31 - 1;
    v82 = v31;
  }
  v32 = *((_DWORD *)a1 + 42);
  if ( v30 >= v32 )
    v30 %= v32;
  v33 = *((_DWORD *)a1 + 43);
  if ( v31 >= v33 )
  {
    v31 %= v33;
    v82 = v31;
  }
  else if ( v31 < 0 )
  {
    v31 = v33 - ~v31 % v33 - 1;
    v82 = v31;
  }
  *((_QWORD *)&v110 + 1) = *((_QWORD *)a1 + 10);
  v15 = *((_QWORD *)&v110 + 1) + *((_DWORD *)a1 + 30) * v31;
  *(_QWORD *)&v110 = v15;
  *((_QWORD *)&v111 + 1) = __PAIR64__(v30, v32);
  *(_QWORD *)&v111 = __PAIR64__(v82, v33);
  BYTE4(v112) = *((_BYTE *)a1 + 229);
  LODWORD(v112) = *((_DWORD *)a1 + 34);
  v10 = v106;
  v34 = *(_DWORD *)(v106 + 96);
  if ( v34 == 6 )
  {
    v35 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk32;
LABEL_52:
    v98 = v35;
    goto LABEL_13;
  }
  v40 = v34 - 1;
  if ( !v40 )
  {
    v35 = BltLnkSrcCopyMsk1;
    goto LABEL_52;
  }
  v41 = v40 - 1;
  if ( !v41 )
  {
    v35 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk4;
    goto LABEL_52;
  }
  v42 = v41 - 1;
  if ( !v42 )
  {
    v35 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk8;
    goto LABEL_52;
  }
  v43 = v42 - 1;
  if ( !v43 )
  {
    v35 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk16;
    goto LABEL_52;
  }
  if ( v43 == 1 )
  {
    v35 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk24;
    goto LABEL_52;
  }
LABEL_13:
  if ( *((int *)a1 + 25) <= 0 || v14 <= 0 )
    goto LABEL_22;
  v24 = *((_BYTE *)a1 + 228);
  if ( v24 == -52 )
  {
    if ( v23 )
    {
      v15 = *((_QWORD *)a1 + 3);
      if ( *(_DWORD *)(v15 + 96) == *(_DWORD *)(v10 + 96) )
      {
        v15 = *(unsigned int *)(*((_QWORD *)a1 + 6) + 4LL);
        if ( (v15 & 1) != 0 )
        {
          v29 = Gre::Base::Globals((Gre::Base *)v15);
          v122 = v17;
          v121 = v5;
          v123 = 1;
          v126 = *v105;
          v124 = v9;
          v125 = v81;
          v127 = *((_DWORD *)a1 + 31);
          v128 = *((_DWORD *)a1 + 32);
          v129 = *((_DWORD *)a1 + 47);
          v130 = v129 + v9;
          v131 = v2->left;
          v132 = 0;
          v120 = (char *)v29 + 6896;
          ((void (__fastcall *)(char **, __int128 *, _DWORD *, _DWORD *))v98)(&v120, &v110, v148, v150);
          return;
        }
      }
    }
  }
  if ( v24 != -72 && v24 != -30 )
    goto LABEL_18;
  if ( v23 )
  {
LABEL_22:
    v109 = (_DWORD *)((char *)a1 + 212);
    v25 = v99;
    if ( *((_DWORD *)a1 + 53) )
    {
      v136 = (char *)v148 + v99;
      v135 = v5;
      v137 = 1;
      v140 = v14;
      v138 = v9;
      v139 = 1;
      v141 = 1;
      v142 = 1;
      v143 = *((_DWORD *)a1 + 47);
      v144 = v9 + v143;
      v145 = v86;
      v146 = 1;
      v134 = *((_QWORD *)a1 + 6);
      v15 = 4 * (*(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) | (unsigned int)(8 * *(_DWORD *)(v106 + 96)));
      v26 = (unsigned int)(v15 + 1);
      if ( (*(_DWORD *)(v134 + 4) & 1) == 0 )
        v26 = (unsigned int)v15;
      v117 = (&SrcCopyFunctionTable)[v26];
    }
    v107 = v99;
    v27 = Gre::Base::Globals((Gre::Base *)v15);
    v122 = v17;
    v121 = (char *)v150 + v99;
    v123 = 1;
    v126 = *v105;
    v124 = v9;
    v125 = 1;
    v127 = 1;
    v128 = 1;
    v129 = v86;
    v130 = v9 + v86;
    v131 = v2->left;
    v132 = 0;
    v120 = (char *)v27 + 6896;
    if ( !*v115 )
      v116 = (&SrcCopyFunctionTable)[4
                                   * (*(_DWORD *)(*(_QWORD *)v118 + 96LL) | (unsigned int)(8
                                                                                         * *(_DWORD *)(*(_QWORD *)v118 + 96LL)))
                                   + 1];
    v119 = (void (__fastcall *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))((char *)a1 + 220);
    if ( *((_DWORD *)a1 + 55) )
    {
      if ( *((_DWORD *)a1 + 54) )
      {
        if ( *v109 )
        {
          v103 = off_1C030C190[*((_BYTE *)a1 + 228) & 0xF];
          v119 = off_1C030C190[(unsigned __int64)*((unsigned __int8 *)a1 + 228) >> 4];
          v95 = v17;
          v70 = v82;
          while ( v81-- )
          {
            ((void (__fastcall *)(__int64 *))v117)(&v134);
            v135 += *((int *)a1 + 31);
            v103(v151, (unsigned int *)(v95 + 4LL * v84), v148, v83);
            v119(v149, (unsigned int *)(v95 + 4LL * v84), v148, v83);
            if ( v97 )
            {
              v104((unsigned __int8 *)v148 + v90, v86, v97, v88, v85, v9, v96);
              if ( *v105 == 1 )
              {
                v97 += *((int *)a1 + 33);
                if ( v80 + 1 >= v89 )
                {
                  i = *v113;
                  v97 = *v113;
                }
                v73 = 0;
                if ( v80 + 1 < v89 )
                  v73 = v80 + 1;
                v80 = v73;
              }
              else
              {
                v74 = *((int *)v114 + 29);
                if ( v80 )
                {
                  --v80;
                  v75 = &v97[-v74];
                }
                else
                {
                  v80 = v89 - 1;
                  v75 = &(*v113)[(v89 - 1) * (int)v74];
                }
                v97 = v75;
              }
              v76 = v83;
              v77 = 0LL;
              while ( v76 )
              {
                i = (const unsigned __int8 *)(*(_DWORD *)((char *)v148 + v77) & *(_DWORD *)((char *)v149 + v77) | (unsigned int)~*(_DWORD *)((char *)v148 + v77) & *(_DWORD *)((char *)v151 + v77));
                *(_DWORD *)((char *)v150 + v77) = (_DWORD)i;
                v77 += 4LL;
                --v76;
              }
            }
            else if ( *(_DWORD *)(*(_QWORD *)v118 + 96LL) == 5 )
            {
              v78 = (char *)v148 + v107;
              for ( i = (const unsigned __int8 *)v9; (_DWORD)i; i = (const unsigned __int8 *)(unsigned int)((_DWORD)i - 1) )
              {
                *(_WORD *)v78 = v87;
                v78[2] = BYTE2(v87);
                v78 += 3;
              }
              v79 = v83;
              v77 = 0LL;
              while ( v79 )
              {
                i = (const unsigned __int8 *)(*(_DWORD *)((char *)v148 + v77) & *(_DWORD *)((char *)v149 + v77) | (unsigned int)~*(_DWORD *)((char *)v148 + v77) & *(_DWORD *)((char *)v151 + v77));
                *(_DWORD *)((char *)v150 + v77) = (_DWORD)i;
                v77 += 4LL;
                --v79;
              }
            }
            else
            {
              v77 = v83;
              i = 0LL;
              while ( (_DWORD)v77 )
              {
                *(_DWORD *)((char *)v150 + (_QWORD)i) = v87 & *(_DWORD *)((_BYTE *)v149 + (_QWORD)i) | ~v87 & *(_DWORD *)((_BYTE *)v151 + (_QWORD)i);
                i += 4;
                v77 = (unsigned int)(v77 - 1);
              }
            }
            if ( *v115 )
            {
              ((void (__fastcall *)(char **, __int128 *, _DWORD *, _QWORD))v98)(&v120, &v110, v148, 0LL);
              if ( *v105 <= 0 )
              {
                if ( v70 )
                {
                  --v70;
                  *(_QWORD *)&v110 = *((int *)a1 + 34) + (_QWORD)v110;
                }
                else
                {
                  v70 = *((_DWORD *)a1 + 43) - 1;
                  *(_QWORD *)&v110 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 30) * v70;
                }
              }
              else
              {
                ++v70;
                *(_QWORD *)&v110 = *((int *)a1 + 34) + (_QWORD)v110;
                if ( v70 >= *((_DWORD *)a1 + 43) )
                {
                  v70 = 0;
                  *(_QWORD *)&v110 = *((_QWORD *)a1 + 10);
                }
              }
            }
            else
            {
              ((void (__fastcall *)(char **, const unsigned __int8 *, __int64))v116)(&v120, i, v77);
            }
            v95 += *((int *)a1 + 32);
            v122 = v95;
          }
        }
        else
        {
          v62 = v97;
          if ( !v97 )
          {
            if ( *(_DWORD *)(*(_QWORD *)v118 + 96LL) == 5 )
            {
              v64 = (char *)v149 + v99;
              for ( j = v9; j; --j )
              {
                *(_WORD *)v64 = v87;
                v64[2] = BYTE2(v87);
                v64 += 3;
              }
            }
            else
            {
              for ( k = v83; k; v149[k] = v87 )
                --k;
            }
          }
          v102 = off_1C030C190[*((_DWORD *)a1 + 51) & 0xF];
          v94 = v17;
          v66 = v82;
          while ( v81-- )
          {
            if ( *(_DWORD *)v119 && v62 )
            {
              v104((unsigned __int8 *)v149 + v90, v86, v62, v88, v85, v9, v96);
              if ( *v105 == 1 )
              {
                v62 += *((int *)a1 + 33);
                if ( v80 + 1 >= v89 )
                  v62 = *v113;
                v68 = 0;
                if ( v80 + 1 < v89 )
                  v68 = v80 + 1;
                v80 = v68;
              }
              else
              {
                v69 = *((int *)v114 + 29);
                if ( v80 )
                {
                  --v80;
                  v62 -= v69;
                }
                else
                {
                  v80 = v89 - 1;
                  v62 = &(*v113)[(v89 - 1) * (int)v69];
                }
              }
            }
            v102(v150, (unsigned int *)(v94 + 4LL * v84), v149, v83);
            if ( *v115 )
            {
              ((void (__fastcall *)(char **, __int128 *, _DWORD *, _QWORD))v98)(&v120, &v110, v148, 0LL);
              if ( *v105 <= 0 )
              {
                if ( v66 )
                {
                  --v66;
                  *(_QWORD *)&v110 = *((int *)a1 + 34) + (_QWORD)v110;
                }
                else
                {
                  v66 = *((_DWORD *)a1 + 43) - 1;
                  *(_QWORD *)&v110 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 30) * v66;
                }
              }
              else
              {
                ++v66;
                *(_QWORD *)&v110 = *((int *)a1 + 34) + (_QWORD)v110;
                if ( v66 >= *((_DWORD *)a1 + 43) )
                {
                  v66 = 0;
                  *(_QWORD *)&v110 = *((_QWORD *)a1 + 10);
                }
              }
            }
            else
            {
              ((void (__fastcall *)(char **))v116)(&v120);
            }
            v94 += *((int *)a1 + 32);
            v122 = v94;
          }
        }
      }
      else
      {
        v101 = off_1C030C190[*((_DWORD *)a1 + 52) & 0xF];
        v53 = v97;
        if ( !v97 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v118 + 96LL) == 5 )
          {
            v55 = (char *)v149 + v25;
            for ( m = v9; m; --m )
            {
              *(_WORD *)v55 = v87;
              v55[2] = BYTE2(v87);
              v55 += 3;
            }
          }
          else
          {
            for ( n = v83; n; v149[n] = v87 )
              --n;
          }
        }
        v93 = v17;
        v57 = v81;
        v58 = v82;
        while ( v57-- )
        {
          if ( *v109 )
          {
            ((void (__fastcall *)(__int64 *))v117)(&v134);
            v135 += *((int *)a1 + 31);
          }
          if ( v53 )
          {
            v104((unsigned __int8 *)v149 + v90, v86, v53, v88, v85, v9, v96);
            if ( *v105 == 1 )
            {
              v53 += *((int *)a1 + 33);
              if ( v80 + 1 >= v89 )
                v53 = *v113;
              v60 = 0;
              if ( v80 + 1 < v89 )
                v60 = v80 + 1;
              v80 = v60;
            }
            else
            {
              v61 = *((int *)v114 + 29);
              if ( v80 )
              {
                --v80;
                v53 -= v61;
              }
              else
              {
                v80 = v89 - 1;
                v53 = &(*v113)[(v89 - 1) * (int)v61];
              }
            }
          }
          v101(v150, v149, v148, v83);
          if ( *v115 )
          {
            ((void (__fastcall *)(char **, __int128 *, _DWORD *, _QWORD))v98)(&v120, &v110, v148, 0LL);
            if ( *v105 <= 0 )
            {
              if ( v58 )
              {
                --v58;
                *(_QWORD *)&v110 = *((int *)a1 + 34) + (_QWORD)v110;
              }
              else
              {
                v58 = *((_DWORD *)a1 + 43) - 1;
                *(_QWORD *)&v110 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 30) * v58;
              }
            }
            else
            {
              ++v58;
              *(_QWORD *)&v110 = *((int *)a1 + 34) + (_QWORD)v110;
              if ( v58 >= *((_DWORD *)a1 + 43) )
              {
                v58 = 0;
                *(_QWORD *)&v110 = *((_QWORD *)a1 + 10);
              }
            }
          }
          else
          {
            ((void (__fastcall *)(char **))v116)(&v120);
          }
          v93 += *((int *)a1 + 32);
          v122 = v93;
        }
      }
    }
    else
    {
      v100 = off_1C030C190[*((_BYTE *)a1 + 228) & 0xF];
      for ( ii = v17; v81--; v122 = ii )
      {
        if ( *v109 )
        {
          ((void (__fastcall *)(__int64 *))v117)(&v134);
          v135 += *((int *)a1 + 31);
        }
        v100(v150, (unsigned int *)(ii + 4LL * v84), v148, v83);
        if ( *v115 )
        {
          ((void (__fastcall *)(char **, __int128 *, _DWORD *, _QWORD))v98)(&v120, &v110, v151, 0LL);
          v52 = v82;
          if ( *v105 <= 0 )
          {
            if ( v82 )
            {
              --v82;
              *(_QWORD *)&v110 = *((int *)a1 + 34) + (_QWORD)v110;
            }
            else
            {
              v82 = *((_DWORD *)a1 + 43) - 1;
              *(_QWORD *)&v110 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 30) * v82;
            }
          }
          else
          {
            ++v82;
            *(_QWORD *)&v110 = *((int *)a1 + 34) + (_QWORD)v110;
            if ( v52 + 1 >= *((_DWORD *)a1 + 43) )
            {
              v82 = 0;
              *(_QWORD *)&v110 = *((_QWORD *)a1 + 10);
            }
          }
        }
        else
        {
          ((void (__fastcall *)(char **))v116)(&v120);
        }
        ii += *((int *)a1 + 32);
      }
    }
    return;
  }
  v92 = *((_DWORD *)a1 + 37);
  if ( v92 == -1
    || *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) != 1
    || (v15 = *(unsigned int *)(v10 + 96), (unsigned int)(v15 - 3) > 3) )
  {
LABEL_18:
    if ( !v23 )
    {
      if ( *((_DWORD *)a1 + 53) )
      {
        if ( *((_DWORD *)a1 + 54) )
        {
          if ( *(_DWORD *)(v10 + 96) == 3 && *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) == 3 )
          {
            v15 = *(unsigned int *)(*((_QWORD *)a1 + 6) + 4LL);
            if ( (v15 & 1) != 0 )
            {
              switch ( v24 )
              {
                case 102:
                  BltLnkAccel6666(
                    (unsigned __int8 *)&v5[*((int *)a1 + 47)],
                    (unsigned __int8 *)(v17 + v2->left),
                    *((_DWORD *)a1 + 31),
                    *((_DWORD *)a1 + 32),
                    v9,
                    v81);
                  return;
                case -120:
                  BltLnkAccel8888(
                    (unsigned __int8 *)&v5[*((int *)a1 + 47)],
                    (unsigned __int8 *)(v17 + v2->left),
                    *((_DWORD *)a1 + 31),
                    *((_DWORD *)a1 + 32),
                    v9,
                    v81);
                  return;
                case -18:
                  BltLnkAccelEEEE(
                    (unsigned __int8 *)&v5[*((int *)a1 + 47)],
                    (unsigned __int8 *)(v17 + v2->left),
                    *((_DWORD *)a1 + 31),
                    *((_DWORD *)a1 + 32),
                    v9,
                    v81);
                  return;
              }
            }
          }
        }
      }
    }
    goto LABEL_22;
  }
  v44 = 0LL;
  v45 = 0;
  v46 = v15 - 3;
  if ( v46 )
  {
    v47 = v46 - 1;
    if ( v47 )
    {
      v48 = v47 - 1;
      if ( v48 )
      {
        v49 = v48 == 1;
        v15 = 255LL;
        if ( v49 )
        {
          v44 = BltLnkPatMaskCopy32;
          v45 = 0xFFFFFF;
        }
      }
      else
      {
        v44 = BltLnkPatMaskCopy24;
        v15 = 255LL;
        v45 = 0xFFFFFF;
      }
    }
    else
    {
      v44 = BltLnkPatMaskCopy16;
      v15 = 255LL;
      v45 = 0xFFFF;
    }
  }
  else
  {
    v44 = BltLnkPatMaskCopy8;
    v15 = 255LL;
    v45 = 255;
  }
  v50 = (char *)*((_QWORD *)a1 + 6);
  v51 = (_DWORD *)*((_QWORD *)v50 + 2);
  if ( (v45 & v51[1]) != v45 || (v45 & *v51) != 0 )
  {
    v10 = v106;
    v2 = a2;
    goto LABEL_18;
  }
  if ( v24 != -30 )
    LOBYTE(v15) = 0;
  v122 = v17;
  v121 = v5;
  v123 = 1;
  v126 = v14;
  v124 = v9;
  v125 = v81;
  v127 = *((_DWORD *)a1 + 31);
  v128 = *((_DWORD *)a1 + 32);
  v129 = *((_DWORD *)a1 + 47);
  v130 = v9 + v129;
  v131 = a2->left;
  v132 = 0;
  v120 = v50;
  v44((struct BLTINFO *)&v120, v92, v148, v15);
}
