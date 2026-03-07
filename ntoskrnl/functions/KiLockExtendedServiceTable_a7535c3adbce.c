__int64 __fastcall KiLockExtendedServiceTable(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, unsigned int a3, int a4)
{
  ULONG_PTR v4; // rbx
  char v5; // r12
  ULONG_PTR v6; // r13
  _KPROCESS *CurrentProcess; // rax
  signed __int32 SessionId; // r8d
  unsigned __int128 v9; // rax
  unsigned int v10; // r9d
  unsigned __int64 v11; // r11
  ULONG_PTR v12; // rcx
  _QWORD *v13; // r10
  const char *v14; // rax
  unsigned int v15; // r15d
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  _QWORD *v19; // r10
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  char v22; // al
  int v23; // eax
  unsigned int v24; // r9d
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r11
  _QWORD *v28; // r9
  char v29; // r10
  __int64 v30; // r8
  unsigned int v31; // r14d
  __int64 v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // r9
  __int64 v35; // r8
  unsigned __int64 v36; // rcx
  char v37; // al
  unsigned int v38; // ebx
  ULONG_PTR v39; // rbx
  PVOID *v40; // rdx
  ULONG_PTR v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  char v44; // r13
  __int64 v45; // rax
  __int64 v46; // r10
  int v47; // r11d
  int v48; // eax
  int v49; // r9d
  char *v50; // rdx
  char v51; // cl
  char v52; // al
  __int16 v53; // ax
  char *v54; // r8
  unsigned int v55; // edx
  char *v56; // r9
  __int64 v57; // rcx
  __int64 v58; // rax
  char v59; // cl
  char v60; // al
  char *v61; // rdx
  int v62; // r9d
  char v63; // cl
  char v64; // al
  char *v65; // rdx
  int v66; // r9d
  char v67; // cl
  char v68; // al
  unsigned int v69; // r9d
  char v70; // r14
  _QWORD *v71; // r12
  _QWORD *v72; // r11
  unsigned __int64 v73; // rcx
  const char *v74; // rax
  ULONG_PTR v75; // r8
  unsigned int v76; // r15d
  __int64 v77; // rax
  ULONG_PTR v78; // r8
  _QWORD *v79; // r11
  __int64 v80; // r8
  ULONG_PTR v81; // rcx
  char v82; // al
  int v83; // eax
  unsigned int v84; // r9d
  unsigned __int64 v85; // rax
  __int64 v86; // rax
  int v87; // r8d
  __int64 v88; // rdx
  unsigned __int64 v89; // r13
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // r12
  __int64 v93; // r15
  __int64 v94; // rax
  unsigned __int64 v95; // r14
  __int64 v96; // rax
  __int64 *v97; // rcx
  unsigned __int64 v98; // r14
  unsigned __int64 v99; // r13
  __int64 v100; // rbx
  unsigned __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  char v104; // r11
  __int64 v105; // rcx
  unsigned int v106; // r9d
  _QWORD *v107; // r12
  unsigned __int64 v108; // rcx
  _QWORD *v109; // r10
  const char *v110; // rax
  __int64 *v111; // r8
  unsigned int v112; // r15d
  __int64 v113; // rax
  unsigned __int64 v114; // r8
  _QWORD *v115; // r10
  __int64 v116; // r8
  unsigned __int64 v117; // rcx
  char v118; // al
  int v119; // eax
  unsigned int v120; // r9d
  unsigned __int64 v121; // rax
  __int64 v122; // rax
  unsigned __int64 v123; // rax
  signed __int32 v125[6]; // [rsp+8h] [rbp-D9h] BYREF
  __int64 v126; // [rsp+38h] [rbp-A9h]
  __int64 v127; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v128; // [rsp+48h] [rbp-99h] BYREF
  __int64 v129; // [rsp+50h] [rbp-91h]
  unsigned __int64 v130; // [rsp+58h] [rbp-89h]
  __int64 v131; // [rsp+60h] [rbp-81h]
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-79h]
  unsigned int *v133; // [rsp+70h] [rbp-71h] BYREF
  __int128 v134; // [rsp+78h] [rbp-69h]
  __int128 v135; // [rsp+88h] [rbp-59h]
  __int64 v136; // [rsp+A0h] [rbp-41h] BYREF
  unsigned __int64 v137; // [rsp+B0h] [rbp-31h]
  __int64 v138; // [rsp+B8h] [rbp-29h]
  __int64 *v139; // [rsp+C0h] [rbp-21h]
  __int64 v140; // [rsp+E8h] [rbp+7h]
  __int64 v141; // [rsp+F0h] [rbp+Fh]
  __int64 v142; // [rsp+F8h] [rbp+17h]
  char v145; // [rsp+160h] [rbp+7Fh]
  int v146; // [rsp+160h] [rbp+7Fh]

  v145 = a4;
  v4 = a3;
  v5 = a4;
  v6 = BugCheckParameter1;
  if ( a4 )
  {
    CurrentProcess = PsGetCurrentProcess();
    SessionId = MmGetSessionIdEx((__int64)CurrentProcess);
    if ( dword_140C097A8 != SessionId )
    {
      *(_QWORD *)&v9 = (unsigned int)_InterlockedCompareExchange(&dword_140C097A8, SessionId, -1);
      if ( (_DWORD)v9 != -1 )
        return v9;
    }
    v10 = 4 * v4;
    v11 = ((unsigned __int64)&qword_140C0DF40 ^ qword_140C0DF48) & 0x3F;
    v12 = v6 + (unsigned int)(4 * v4);
    v13 = (_QWORD *)v6;
    v14 = (const char *)v6;
    if ( v6 < v12 )
    {
      do
      {
        _mm_prefetch(v14, 0);
        v14 += 64;
      }
      while ( (unsigned __int64)v14 < v12 );
    }
    v15 = v10 >> 7;
    v16 = (unsigned __int64)&qword_140C0DF40 ^ qword_140C0DF48;
    if ( v10 >> 7 )
    {
      do
      {
        v17 = 8LL;
        do
        {
          v18 = *v13 ^ v16;
          v19 = v13 + 1;
          v20 = *v19 ^ __ROL8__(v18, v11);
          v13 = v19 + 1;
          v16 = __ROL8__(v20, v11);
          --v17;
        }
        while ( v17 );
        v21 = __ROL8__((unsigned __int64)&qword_140C0DF40 ^ qword_140C0DF48 ^ ((unsigned __int64)v13 - v6), 17) ^ (unsigned __int64)&qword_140C0DF40 ^ qword_140C0DF48 ^ ((unsigned __int64)v13 - v6);
        v140 = (v21 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v22 = v11 ^ v140 ^ v21;
        LOBYTE(v11) = 1;
        v23 = v22 & 0x3F;
        if ( v23 )
          LOBYTE(v11) = v23;
        --v15;
      }
      while ( v15 );
      v5 = v145;
    }
    v24 = v10 & 0x7F;
    if ( v24 >= 8 )
    {
      v25 = (unsigned __int64)v24 >> 3;
      do
      {
        v16 = __ROL8__(*v13++ ^ v16, v11);
        v24 -= 8;
        --v25;
      }
      while ( v25 );
    }
    for ( ; v24; --v24 )
    {
      v26 = *(unsigned __int8 *)v13;
      v13 = (_QWORD *)((char *)v13 + 1);
      v16 = __ROL8__(v26 ^ v16, v11);
    }
    v27 = v16 ^ qword_140C0DF40;
    BugCheckParameter3 = v4;
    v28 = (_QWORD *)a2;
    v29 = (v16 ^ qword_140C0DF40) & 0x3F;
    *(_QWORD *)&v9 = a2;
    if ( a2 < a2 + v4 )
    {
      do
      {
        _mm_prefetch((const char *)v9, 0);
        *(_QWORD *)&v9 = v9 + 64;
      }
      while ( (unsigned __int64)v9 < a2 + v4 );
    }
    v30 = v16 ^ qword_140C0DF40;
    v31 = (unsigned int)v4 >> 7;
    if ( (unsigned int)v4 >> 7 )
    {
      do
      {
        v32 = 8LL;
        do
        {
          v33 = *v28 ^ v30;
          v34 = v28 + 1;
          v35 = *v34 ^ __ROL8__(v33, v29);
          v28 = v34 + 1;
          v30 = __ROL8__(v35, v29);
          --v32;
        }
        while ( v32 );
        v36 = __ROL8__(v27 ^ ((unsigned __int64)v28 - a2), 17) ^ v27 ^ ((unsigned __int64)v28 - a2);
        v141 = (v36 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v37 = v29 ^ v141 ^ v36;
        v29 = 1;
        *(_QWORD *)&v9 = v37 & 0x3F;
        if ( (_DWORD)v9 )
          v29 = v9;
        --v31;
      }
      while ( v31 );
      v5 = v145;
      v6 = BugCheckParameter1;
    }
    v38 = v4 & 0x7F;
    if ( v38 >= 8 )
    {
      *(_QWORD *)&v9 = (unsigned __int64)v38 >> 3;
      do
      {
        v30 = __ROL8__(*v28++ ^ v30, v29);
        v38 -= 8;
        *(_QWORD *)&v9 = v9 - 1;
      }
      while ( (_QWORD)v9 );
    }
    for ( ; v38; --v38 )
    {
      *(_QWORD *)&v9 = *(unsigned __int8 *)v28;
      v28 = (_QWORD *)((char *)v28 + 1);
      v30 = __ROL8__(v9 ^ v30, v29);
    }
    v39 = v6 ^ v30 ^ BugCheckParameter3;
    if ( (v5 & 2) != 0 )
    {
      qword_140C0DF48 = v6 ^ v30 ^ BugCheckParameter3;
      return v9;
    }
    v40 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList == &PsLoadedModuleList )
      goto LABEL_142;
    while ( 1 )
    {
      v41 = (ULONG_PTR)v40[6];
      if ( v6 >= v41 && v6 < v41 + *((unsigned int *)v40 + 16) )
        break;
      v40 = (PVOID *)*v40;
      if ( v40 == &PsLoadedModuleList )
        goto LABEL_142;
    }
    if ( !v41 )
LABEL_142:
      KeBugCheckEx(0x43u, v6, a2, BugCheckParameter3, 0LL);
    v146 = 0;
    v42 = 0LL;
    qword_140C0E040[0] = (__int64)v40[6];
    v131 = 0LL;
LABEL_42:
    v43 = qword_140C0E040[v42];
    v128 = v43;
    if ( !v43 )
      goto LABEL_110;
    v44 = v39 & 0x3F;
    LODWORD(v129) = v39 & 0x3F;
    v45 = RtlImageNtHeader(v43);
    v126 = v45;
    if ( !v45 )
      KeBugCheckEx(0x43u, BugCheckParameter1, a2, BugCheckParameter3, 1uLL);
    v46 = v45 + *(unsigned __int16 *)(v45 + 20) + 24LL;
    v130 = v46 + 40LL * *(unsigned __int16 *)(v45 + 6);
    while ( 1 )
    {
      v47 = 0;
      if ( (*(_DWORD *)(v46 + 36) & 0x2000000) != 0 )
        goto LABEL_73;
      v48 = *(_DWORD *)v46;
      if ( *(_DWORD *)v46 == 1414090313 )
        break;
      if ( v48 != 1162297680 )
        goto LABEL_48;
      v53 = *(_WORD *)(v46 + 4);
      if ( v53 != 30839 && v53 != 29303 && v53 != 30583 )
      {
LABEL_50:
        v49 = 7;
        v50 = VfExcludeSections[0];
        v134 = *(_OWORD *)VfExcludeSections;
        v135 = *(_OWORD *)off_140C094C0;
        while ( 1 )
        {
          v51 = v50[v46 - (unsigned __int64)VfExcludeSections[0]];
          v52 = *v50++;
          if ( v51 != v52 )
            break;
          if ( !--v49 )
            goto LABEL_73;
        }
        v54 = (char *)*((_QWORD *)&v134 + 1);
        v55 = 8;
        v56 = (char *)v46;
        while ( 1 )
        {
          v57 = *(_QWORD *)v56;
          v56 += 8;
          v58 = *(_QWORD *)v54;
          v54 += 8;
          if ( v57 != v58 )
            break;
          v55 -= 8;
          if ( v55 < 8 )
          {
            if ( !v55 )
              goto LABEL_73;
            while ( 1 )
            {
              v59 = *v56++;
              v60 = *v54++;
              if ( v59 != v60 )
                goto LABEL_66;
              if ( !--v55 )
                goto LABEL_73;
            }
          }
        }
LABEL_66:
        v61 = (char *)v135;
        v62 = 4;
        while ( 1 )
        {
          v63 = v61[v46 - (_QWORD)v135];
          v64 = *v61++;
          if ( v63 != v64 )
            break;
          if ( !--v62 )
            goto LABEL_73;
        }
        v65 = (char *)*((_QWORD *)&v135 + 1);
        v66 = 6;
        do
        {
          v67 = v65[v46 - *((_QWORD *)&v135 + 1)];
          v68 = *v65++;
          if ( v67 != v68 )
            goto LABEL_74;
        }
        while ( --v66 );
      }
LABEL_73:
      v47 = 1;
LABEL_74:
      v69 = *(_DWORD *)(v46 + 16);
      if ( *(int *)(v46 + 36) < 0 )
        v47 = 1;
      if ( !v47 )
      {
        v70 = v44;
        if ( v69 <= *(_DWORD *)(v46 + 8) )
          v69 = *(_DWORD *)(v46 + 8);
        v71 = (_QWORD *)(v128 + *(unsigned int *)(v46 + 12));
        v72 = v71;
        v73 = (unsigned __int64)v71 + v69;
        v74 = (const char *)v71;
        if ( (unsigned __int64)v71 < v73 )
        {
          do
          {
            _mm_prefetch(v74, 0);
            v74 += 64;
          }
          while ( (unsigned __int64)v74 < v73 );
        }
        v75 = v39;
        v76 = v69 >> 7;
        if ( v69 >> 7 )
        {
          do
          {
            v77 = 8LL;
            do
            {
              v78 = *v72 ^ v75;
              v79 = v72 + 1;
              v80 = *v79 ^ __ROL8__(v78, v70);
              v72 = v79 + 1;
              v75 = __ROL8__(v80, v70);
              --v77;
            }
            while ( v77 );
            v81 = __ROL8__(v39 ^ ((char *)v72 - (char *)v71), 17) ^ v39 ^ ((char *)v72 - (char *)v71);
            v142 = (v81 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v82 = v70 ^ v142 ^ v81;
            v70 = 1;
            v83 = v82 & 0x3F;
            if ( v83 )
              v70 = v83;
            --v76;
          }
          while ( v76 );
          v44 = v129;
        }
        v84 = v69 & 0x7F;
        if ( v84 >= 8 )
        {
          v85 = (unsigned __int64)v84 >> 3;
          do
          {
            v75 = __ROL8__(*v72++ ^ v75, v70);
            v84 -= 8;
            --v85;
          }
          while ( v85 );
        }
        for ( ; v84; --v84 )
        {
          v86 = *(unsigned __int8 *)v72;
          v72 = (_QWORD *)((char *)v72 + 1);
          v75 = __ROL8__(v86 ^ v75, v70);
        }
        v39 = v75;
      }
      v46 += 40LL;
      if ( v46 == v130 )
      {
        v87 = v146;
        if ( !v146 )
        {
          v88 = v126;
          v89 = v128;
          v90 = *(unsigned int *)(v126 + 148);
          if ( (unsigned int)v90 >= 0x14 )
          {
            v91 = *(unsigned int *)(v126 + 144);
            v92 = v91 + v90 + v128;
            v93 = v91 + v128;
            if ( v91 + v128 != v92 )
            {
              do
              {
                if ( !*(_DWORD *)(v93 + 12) )
                  break;
                v94 = *(unsigned int *)(v93 + 16);
                if ( !(_DWORD)v94 )
                  break;
                v95 = *(_QWORD *)(v94 + v89);
                if ( v95 && (v95 < v89 || v95 >= v89 + *(unsigned int *)(v88 + 80)) )
                {
                  if ( MmIsSessionAddress(v95) )
                  {
                    RtlPcToFileHeader(v95, &v128);
                    if ( v128 )
                    {
                      v96 = 0LL;
                      v97 = qword_140C0E040;
                      while ( *v97 != v128 )
                      {
                        if ( !*v97 )
                        {
                          qword_140C0E040[v96] = v128;
                          break;
                        }
                        v96 = (unsigned int)(v96 + 1);
                        ++v97;
                        if ( (unsigned int)v96 >= 0x10 )
                        {
                          if ( (_DWORD)v96 != 16 )
                            break;
                          goto LABEL_110;
                        }
                      }
                    }
                  }
                  v88 = v126;
                }
                v93 += 20LL;
              }
              while ( v93 != v92 );
              v87 = 0;
            }
          }
        }
        v42 = v131 + 1;
        v146 = v87 + 1;
        ++v131;
        if ( (unsigned int)(v87 + 1) >= 0x10 )
        {
LABEL_110:
          *(_QWORD *)&v9 = memset(qword_140C0E040, 0, sizeof(qword_140C0E040));
          if ( v39 == qword_140C0DF40 || !v39 )
          {
            *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
            v39 ^= 0x95EA5DE843D5D824uLL;
          }
          _InterlockedOr(v125, 0);
          qword_140C0DF40 = v39;
          return v9;
        }
        goto LABEL_42;
      }
    }
    if ( *(_DWORD *)(v46 + 4) == 1195525195 )
      goto LABEL_73;
LABEL_48:
    if ( v48 != 1095914053 || *(_WORD *)(v46 + 4) != 16724 )
      goto LABEL_50;
    goto LABEL_73;
  }
  v98 = (unsigned __int64)&qword_140C0DF50;
  v99 = (unsigned __int64)&qword_140C0DF50 & 0x3F;
  v130 = (unsigned __int64)&qword_140C0DF50 & 0x3F;
  RtlImageNtHeader(0x140000000LL);
  RtlCaptureImageExceptionValues(0x140000000LL, &v136, &v127);
  v100 = v136;
  v101 = 0x140000000uLL;
  LODWORD(v127) = (unsigned int)v127 / 0xC;
  v137 = 0x140000000uLL;
  v102 = v136 + 12LL * (unsigned int)v127;
  v138 = v102;
  v139 = (__int64 *)&v133;
  while ( v100 && v100 != v102 )
  {
    v103 = RtlpConvertFunctionEntry(v100, v101);
    v104 = v99;
    *v139 = v103;
    v100 = v136 + 12;
    v136 += 12LL;
    v105 = *v133;
    v106 = v133[1] - v105;
    v107 = (_QWORD *)(0x140000000LL + v105);
    v108 = 0x140000000LL + v105 + v106;
    v109 = v107;
    v110 = (const char *)v107;
    if ( (unsigned __int64)v107 < v108 )
    {
      do
      {
        _mm_prefetch(v110, 0);
        v110 += 64;
      }
      while ( (unsigned __int64)v110 < v108 );
    }
    v111 = (__int64 *)v98;
    v112 = v106 >> 7;
    if ( v106 >> 7 )
    {
      do
      {
        v113 = 8LL;
        do
        {
          v114 = *v109 ^ (unsigned __int64)v111;
          v115 = v109 + 1;
          v116 = *v115 ^ __ROL8__(v114, v104);
          v109 = v115 + 1;
          v111 = (__int64 *)__ROL8__(v116, v104);
          --v113;
        }
        while ( v113 );
        v117 = __ROL8__(v98 ^ ((char *)v109 - (char *)v107), 17) ^ v98 ^ ((char *)v109 - (char *)v107);
        v118 = v104 ^ ((v117 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v117;
        v104 = 1;
        v119 = v118 & 0x3F;
        if ( v119 )
          v104 = v119;
        --v112;
      }
      while ( v112 );
      LOBYTE(v99) = v130;
    }
    v120 = v106 & 0x7F;
    if ( v120 >= 8 )
    {
      v121 = (unsigned __int64)v120 >> 3;
      do
      {
        v111 = (__int64 *)__ROL8__(*v109++ ^ (unsigned __int64)v111, v104);
        v120 -= 8;
        --v121;
      }
      while ( v121 );
    }
    for ( ; v120; --v120 )
    {
      v122 = *(unsigned __int8 *)v109;
      v109 = (_QWORD *)((char *)v109 + 1);
      v111 = (__int64 *)__ROL8__(v122 ^ (unsigned __int64)v111, v104);
    }
    v102 = v138;
    v101 = v137;
    v98 = (unsigned __int64)v111;
  }
  qword_140C0DF50 = v98;
  if ( qword_140C0DF40 )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
  v123 = __rdtsc();
  v9 = (__ROR8__(v123, 3) ^ v123) * (unsigned __int128)0x7010008004002001uLL;
  qword_140C0DF40 = v9 ^ *((_QWORD *)&v9 + 1);
  if ( (unsigned __int64)v9 == *((_QWORD *)&v9 + 1) )
  {
    *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
    qword_140C0DF40 = 0x95EA5DE843D5D824uLL;
  }
  return v9;
}
