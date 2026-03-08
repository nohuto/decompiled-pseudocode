/*
 * XREFs of KiSwInterruptDispatch @ 0x1403DEA50
 * Callers:
 *     KiSwInterrupt @ 0x14041E0D0 (KiSwInterrupt.c)
 * Callees:
 *     KeExitRetpoline @ 0x1402E3E6C (KeExitRetpoline.c)
 *     KiGetTrapFrameMode @ 0x1403D0940 (KiGetTrapFrameMode.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiReadKernelDr7 @ 0x140569C1C (KiReadKernelDr7.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     $$ba @ 0x140B0E898 ($$ba.c)
 *     SdbpCheckDll @ 0x140B104F0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140B107A0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140B107B0 (KeGuardCheckICall.c)
 */

char __fastcall KiSwInterruptDispatch(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // r12
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  _QWORD *Pool2; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // r14
  int v11; // r10d
  _QWORD *v12; // r9
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  const char *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r8
  unsigned int i; // r11d
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // ecx
  unsigned int *v29; // rax
  unsigned int v30; // ecx
  _QWORD *v31; // r8
  unsigned int v32; // r9d
  int *v33; // rdi
  __int64 v34; // r10
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  bool v40; // zf
  __int64 v41; // rax
  int v42; // eax
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  unsigned __int64 v46; // rax
  _QWORD *v47; // r11
  __int64 v48; // r8
  _QWORD *v49; // r9
  const char *v50; // rax
  int v51; // r14d
  unsigned __int64 v52; // rsi
  unsigned int v53; // r10d
  __int64 v54; // rax
  __int64 v55; // rsi
  unsigned __int64 v56; // rcx
  __int64 v57; // r8
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int64 j; // rax
  unsigned int v61; // esi
  BOOL v62; // r12d
  __int64 v63; // rcx
  unsigned __int8 v64; // r13
  unsigned __int64 v65; // r14
  unsigned __int64 v66; // r15
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  unsigned __int8 v71; // r12
  __int64 v72; // rdx
  unsigned int *v73; // rcx
  unsigned int *v74; // rsi
  char v75; // r13
  unsigned __int64 v76; // r15
  __int64 v77; // r8
  __int64 *v78; // r9
  unsigned int *v79; // r10
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  unsigned __int8 v86; // r15
  unsigned __int64 v87; // rdx
  unsigned int *v88; // rcx
  unsigned int *v89; // rsi
  unsigned __int64 v90; // r14
  __int64 v91; // rax
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rax
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 v97; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v99; // rdx
  unsigned int *v100; // rcx
  char v101; // r13
  unsigned __int64 v102; // r15
  __int64 v103; // r8
  __int64 *v104; // r9
  unsigned int *v105; // r10
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // r13
  unsigned __int64 v110; // rdi
  __int64 v111; // r14
  unsigned __int64 v112; // r12
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v114; // rsi
  __int64 v115; // r15
  unsigned __int64 v116; // r9
  unsigned __int64 v117; // r14
  unsigned int v118; // r8d
  _QWORD *k; // rdx
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // rax
  __int64 v122; // rdi
  _QWORD *v123; // rcx
  char *v124; // r8
  int v125; // r10d
  unsigned __int64 v126; // r11
  signed __int64 v127; // r8
  int v128; // esi
  _QWORD *v129; // r9
  int v130; // r10d
  const char *v131; // rax
  __int64 v132; // r11
  int v133; // edi
  __int64 v134; // r8
  __int64 v135; // rax
  __int64 v136; // r8
  _QWORD *v137; // r9
  __int64 v138; // r8
  unsigned __int64 v139; // rcx
  __int64 v140; // rax
  int v141; // r11d
  __int64 v142; // rax
  void (__fastcall *v143)(_QWORD *, __int64, __int64, _QWORD *); // rax
  const signed __int32 *KernelDr7; // rax
  int v145; // ecx
  int v146; // ecx
  int v147; // ecx
  int v148; // ecx
  int v149; // ecx
  int v150; // ecx
  volatile signed __int32 *v151; // rax
  _QWORD *v153; // [rsp+40h] [rbp-39h]
  int v154; // [rsp+40h] [rbp-39h]
  __int64 v155; // [rsp+48h] [rbp-31h]
  int v156; // [rsp+48h] [rbp-31h]
  __int64 v157; // [rsp+78h] [rbp-1h]
  unsigned int v158; // [rsp+80h] [rbp+7h] BYREF
  int v160; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v161; // [rsp+F0h] [rbp+77h] BYREF
  unsigned __int64 v162; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD **)&MaxDataSize;
  v2 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)&MaxDataSize + 2452LL) & 0x100000) != 0 )
    KeExitRetpoline();
  else
    _mm_lfence();
  v3 = __rdtsc();
  v4 = __ROR8__(v3, 3) ^ v3;
  Pool2 = (_QWORD *)ExAllocatePool2(
                      66LL,
                      v1[338] + 2807LL,
                      (unsigned int)dword_140C0DF60[((unsigned __int8)v4 ^ (unsigned __int8)((v4
                                                                                            * (unsigned __int128)0x7010008004002001uLL) >> 64)) & 0xF]);
  v153 = Pool2;
  v6 = Pool2;
  if ( Pool2 )
  {
    v7 = Pool2 + 4;
    Pool2[3] = Pool2;
    *Pool2 = 0LL;
    Pool2[2] = sub_1403EBDF0;
    v161 = Pool2 + 4;
    memmove(Pool2 + 4, v1, 0xAA0uLL);
    v6[339] = v1;
    v6[340] = v6 + 344;
    v8 = __rdtsc();
    *((_DWORD *)v6 + 530) = 0;
    v9 = (__ROR8__(v8, 3) ^ v8) * (unsigned __int128)0x7010008004002001uLL;
    *((_DWORD *)v6 + 528) = (*((_QWORD *)&v9 + 1) ^ (unsigned __int64)v9) % *((unsigned int *)v6 + 523);
    v10 = v6[339];
    v11 = *((_DWORD *)v6 + 525);
    v12 = (_QWORD *)v10;
    v13 = __rdtsc();
    v14 = __ROR8__(v13, 3);
    v15 = v6[263];
    *((_DWORD *)v6 + 532) = (((v14 ^ v13) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v14 ^ v13));
    v6[341] = ((unsigned __int64)v6 + 2807) & 0xFFFFFFFFFFFFFFF8uLL;
    v16 = (const char *)v10;
    v17 = *(unsigned int *)(v10 + 2020);
    if ( v10 < v10 + v17 )
    {
      do
      {
        _mm_prefetch(v16, 0);
        v16 += 64;
      }
      while ( (unsigned __int64)v16 < v10 + v17 );
    }
    v18 = v15;
    for ( i = (unsigned int)v17 >> 7; i; --i )
    {
      v20 = 8LL;
      do
      {
        v21 = v12[1] ^ __ROL8__(*v12 ^ v18, v11);
        v12 += 2;
        v18 = __ROL8__(v21, v11);
        --v20;
      }
      while ( v20 );
      v22 = __ROL8__(v15 ^ ((unsigned __int64)v12 - v10), 17) ^ v15 ^ ((unsigned __int64)v12 - v10);
      v11 = ((unsigned __int8)(((v22 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v22) ^ (unsigned __int8)v11) & 0x3F;
      if ( !v11 )
        LOBYTE(v11) = 1;
    }
    v23 = *(_DWORD *)(v10 + 2020) & 0x7F;
    if ( v23 >= 8 )
    {
      v24 = (unsigned __int64)(v17 & 0x7F) >> 3;
      do
      {
        v18 = __ROL8__(*v12++ ^ v18, v11);
        v23 -= 8;
        --v24;
      }
      while ( v24 );
    }
    for ( ; v23; --v23 )
    {
      v25 = *(unsigned __int8 *)v12;
      v12 = (_QWORD *)((char *)v12 + 1);
      v18 = __ROL8__(v25 ^ v18, v11);
    }
    v26 = 0xA3A03F5891C8B4E8uLL;
    if ( v18 != qword_140D1EA10 )
    {
      v27 = v6[181];
      *(_QWORD *)v27 = v10;
      *(_DWORD *)(v27 + 16) = v17;
      if ( !*((_DWORD *)v6 + 582) )
      {
        *(_QWORD *)(v6[181] + 24LL) = v18 ^ qword_140D1EA10;
        if ( !*((_DWORD *)v6 + 582) )
        {
          v6[293] = 0LL;
          v6[292] = v6 - 0xB8BF814EDC6E95FLL;
          v6[294] = 273LL;
          v6[295] = v18;
          *((_DWORD *)v6 + 582) = 1;
          __ba(v6 + 4, 0LL, v18, v12);
        }
      }
    }
    v28 = 4;
    v157 = 0LL;
    v29 = &v158;
    do
    {
      *(_BYTE *)v29 = 0;
      v29 = (unsigned int *)((char *)v29 + 1);
      --v28;
    }
    while ( v28 );
    v30 = 0;
    v160 = 0;
    if ( *((_DWORD *)v6 + 523) )
    {
      while ( 1 )
      {
        v31 = v7;
        v32 = 0;
        if ( v7[335] )
          v31 = (_QWORD *)v7[335];
        v33 = (int *)((char *)v31 + *((unsigned int *)v31 + 514));
        if ( (_DWORD)v157 && HIDWORD(v157) <= v30 )
        {
          v32 = HIDWORD(v157);
          v33 = (int *)((char *)v31 + v158);
        }
        if ( v32 != v30 )
        {
          v34 = v30 - v32;
          v32 = v30;
          while ( 1 )
          {
            v35 = *v33;
            if ( *v33 > 28 )
            {
              v43 = v35 - 30;
              if ( !v43 )
              {
                v26 = ((v33[9] != 0 ? v33[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
                v41 = (unsigned int)v26 + 24 * (*((unsigned __int16 *)v33 + 20) + 2);
                goto LABEL_53;
              }
              v44 = v43 - 3;
              if ( !v44 || (v45 = v44 - 1) == 0 )
              {
                v26 = ((v33[8] & 0xFFF) + (unsigned __int64)(unsigned int)v33[10] + 4095) >> 12;
                v41 = (unsigned int)(20 * v26 + 48);
                goto LABEL_53;
              }
              v40 = v45 == 9;
            }
            else
            {
              if ( v35 == 28 )
              {
                v42 = *((unsigned __int16 *)v33 + 20);
                goto LABEL_41;
              }
              v36 = v35 - 1;
              if ( !v36 )
                goto LABEL_50;
              v37 = v36 - 6;
              if ( !v37 )
              {
                v41 = (unsigned int)(24 * (v33[6] + 2));
                goto LABEL_53;
              }
              v38 = v37 - 1;
              if ( !v38 )
              {
                v42 = *((unsigned __int16 *)v33 + 16);
LABEL_41:
                v41 = (v42 + 55) & 0xFFFFFFF8;
                goto LABEL_53;
              }
              v39 = v38 - 2;
              if ( !v39 )
              {
                v41 = (unsigned int)(16 * (v33[7] + 3));
                goto LABEL_53;
              }
              v40 = v39 == 2;
            }
            if ( v40 )
            {
LABEL_50:
              v26 = (unsigned int)v33[4] / 0xCuLL;
              v41 = (unsigned int)(4 * v26 + 48);
              goto LABEL_53;
            }
            v41 = 48LL;
LABEL_53:
            v33 = (int *)((char *)v33 + v41);
            if ( !--v34 )
            {
              v7 = v161;
              v30 = v160;
              break;
            }
          }
        }
        LODWORD(v157) = 1;
        HIDWORD(v157) = v32;
        v158 = (_DWORD)v33 - (_DWORD)v31;
        v46 = *v33;
        if ( (_DWORD)v46 == 36 )
          break;
        if ( (unsigned int)v46 > 0x2B )
          goto LABEL_139;
        v26 = 0x80200000002LL;
        if ( !_bittest64((const __int64 *)&v26, v46) )
          goto LABEL_139;
        v97 = v7[167];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ((void (__fastcall *)(__int64))v7[42])(v97);
        v100 = *(unsigned int **)v7[195];
        v89 = v100 + 4;
        v101 = *((_BYTE *)v100 + 12);
        v102 = (unsigned __int64)&v100[6 * *v100 + 4];
        do
        {
          v103 = 24LL;
          v104 = (__int64 *)(v33 + 6);
          v105 = v89;
          while ( 1 )
          {
            v106 = *(_QWORD *)v105;
            v105 += 2;
            v107 = *v104++;
            if ( v106 != v107 )
              break;
            v103 = (unsigned int)(v103 - 8);
            if ( (unsigned int)v103 < 8 )
            {
              if ( !(_DWORD)v103 )
                goto LABEL_129;
              while ( 1 )
              {
                v99 = *(unsigned __int8 *)v105;
                v105 = (unsigned int *)((char *)v105 + 1);
                v108 = *(unsigned __int8 *)v104;
                v104 = (__int64 *)((char *)v104 + 1);
                if ( v99 != v108 )
                  goto LABEL_128;
                v40 = (_DWORD)v103 == 1;
                v103 = (unsigned int)(v103 - 1);
                if ( v40 )
                  goto LABEL_129;
              }
            }
          }
LABEL_128:
          v89 += 6;
        }
        while ( (unsigned __int64)v89 < v102 );
LABEL_129:
        ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v7[50])(v7[167], v99, v103, v104);
        __writecr8(CurrentIrql);
        if ( !v101 )
          goto LABEL_206;
        if ( (*((_DWORD *)v7 + 613) & 0x10) != 0 && !*((_DWORD *)v7 + 574) )
        {
          v7[288] = v7 - 0xB8BF814EDC6E963LL;
          v7[289] = (char *)v33 - 0x4C48B4211BBACBEBLL;
          v7[290] = *v33;
          v7[291] = 1LL;
          *((_DWORD *)v7 + 574) = 1;
          __ba(v7, 0LL, v94, v95);
        }
        if ( *((_QWORD *)v33 + 3) != 1LL )
        {
LABEL_206:
          if ( v89 == (unsigned int *)v102 && !*((_DWORD *)v7 + 574) )
          {
            v7[288] = v7 - 0xB8BF814EDC6E963LL;
            v7[289] = (char *)v33 - 0x4C48B4211BBACBEBLL;
            v96 = *v33;
            *((_DWORD *)v7 + 574) = 1;
LABEL_137:
            v7[290] = v96;
            v7[291] = v89;
            __ba(v7, 0LL, v94, v95);
          }
        }
LABEL_138:
        v30 = v160;
LABEL_139:
        v160 = ++v30;
        if ( v30 >= *((_DWORD *)v7 + 515) )
          goto LABEL_140;
      }
      v47 = (_QWORD *)*((_QWORD *)v33 + 1);
      v48 = (unsigned int)v33[4];
      v49 = v47;
      *((_DWORD *)v7 + 522) += v48;
      v50 = (const char *)v47;
      v51 = *((_DWORD *)v7 + 517);
      if ( v47 < (_QWORD *)((char *)v47 + v48) )
      {
        do
        {
          _mm_prefetch(v50, 0);
          v50 += 64;
        }
        while ( v50 < (const char *)v47 + v48 );
      }
      v52 = v7[259];
      v53 = (unsigned int)v48 >> 7;
      if ( (unsigned int)v48 >> 7 )
      {
        do
        {
          v54 = 8LL;
          do
          {
            v55 = v49[1] ^ __ROL8__(*v49 ^ v52, v51);
            v49 += 2;
            v52 = __ROL8__(v55, v51);
            --v54;
          }
          while ( v54 );
          v56 = __ROL8__(v7[259] ^ ((char *)v49 - (char *)v47), 17) ^ v7[259] ^ ((char *)v49 - (char *)v47);
          v26 = (v56 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v51 = ((unsigned __int8)(v26 ^ v56) ^ (unsigned __int8)v51) & 0x3F;
          if ( !v51 )
            LOBYTE(v51) = 1;
          --v53;
        }
        while ( v53 );
        v7 = v161;
      }
      v57 = v48 & 0x7F;
      if ( (unsigned int)v57 >= 8 )
      {
        v58 = (unsigned __int64)(unsigned int)v57 >> 3;
        do
        {
          v52 = __ROL8__(*v49++ ^ v52, v51);
          v57 = (unsigned int)(v57 - 8);
          --v58;
        }
        while ( v58 );
      }
      if ( (_DWORD)v57 )
      {
        do
        {
          v59 = *(unsigned __int8 *)v49;
          v49 = (_QWORD *)((char *)v49 + 1);
          v52 = __ROL8__(v59 ^ v52, v51);
          v40 = (_DWORD)v57 == 1;
          v57 = (unsigned int)(v57 - 1);
        }
        while ( !v40 );
      }
      for ( j = v52; ; LODWORD(v52) = j ^ v52 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v61 = v52 & 0x7FFFFFFF;
      v62 = 0;
      if ( v61 != v33[5] )
      {
        if ( !*v33 )
          v62 = v33[6] != 0;
        v63 = (unsigned int)v33[4];
        v26 = *((_QWORD *)v33 + 1);
        if ( v33[4] && (*((_DWORD *)v7 + 613) & 0x40) != 0 )
        {
          v64 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v65 = v26 & 0xFFFFFFFFFFFFF000uLL;
          v155 = (v26 + v63 - 1) | 0xFFF;
          v162 = (v26 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v66 = v64;
            while ( 1 )
            {
              v67 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v7[141])(v65, 0LL, v57, v49);
              if ( v67 != -1073741267 )
                break;
              if ( v62 )
                goto LABEL_87;
              if ( v64 > 1u )
                goto LABEL_85;
              v66 = v64;
              __writecr8(v64);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v67 < 0 )
            {
LABEL_87:
              __writecr8(v66);
              goto LABEL_88;
            }
LABEL_85:
            v65 += 4096LL;
            v162 += 4096LL;
            if ( v162 != v155 )
              continue;
            break;
          }
          __writecr8(v66);
        }
        else
        {
LABEL_88:
          if ( !*((_DWORD *)v7 + 574) )
          {
            *(_QWORD *)(v7[177] + 24LL) = (unsigned int)v33[5] ^ (unsigned __int64)v61;
            v68 = *((_QWORD *)v33 + 1);
            if ( !*((_DWORD *)v7 + 574) )
            {
              v7[288] = v7 - 0xB8BF814EDC6E963LL;
              v7[289] = (char *)v33 - 0x4C48B4211BBACBEBLL;
              v69 = *v33;
              v7[291] = v68;
              v7[290] = v69;
              *((_DWORD *)v7 + 574) = 1;
              __ba(v7, 0LL, v57, v49);
            }
          }
        }
      }
      v70 = v7[167];
      v71 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, unsigned __int64, __int64, _QWORD *))v7[42])(v70, v26, v57, v49);
      v73 = *(unsigned int **)v7[195];
      v74 = v73 + 4;
      v75 = *((_BYTE *)v73 + 12);
      v76 = (unsigned __int64)&v73[6 * *v73 + 4];
      do
      {
        v77 = 24LL;
        v78 = (__int64 *)(v33 + 6);
        v79 = v74;
        while ( 1 )
        {
          v80 = *(_QWORD *)v79;
          v79 += 2;
          v81 = *v78++;
          if ( v80 != v81 )
            break;
          v77 = (unsigned int)(v77 - 8);
          if ( (unsigned int)v77 < 8 )
          {
            if ( !(_DWORD)v77 )
              goto LABEL_100;
            while ( 1 )
            {
              v72 = *(unsigned __int8 *)v79;
              v79 = (unsigned int *)((char *)v79 + 1);
              v82 = *(unsigned __int8 *)v78;
              v78 = (__int64 *)((char *)v78 + 1);
              if ( v72 != v82 )
                goto LABEL_99;
              v40 = (_DWORD)v77 == 1;
              v77 = (unsigned int)(v77 - 1);
              if ( v40 )
                goto LABEL_100;
            }
          }
        }
LABEL_99:
        v74 += 6;
      }
      while ( (unsigned __int64)v74 < v76 );
LABEL_100:
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v7[50])(v7[167], v72, v77, v78);
      __writecr8(v71);
      if ( !v75 )
        goto LABEL_207;
      if ( (*((_DWORD *)v7 + 613) & 0x10) != 0 && !*((_DWORD *)v7 + 574) )
      {
        v7[288] = v7 - 0xB8BF814EDC6E963LL;
        v7[289] = (char *)v33 - 0x4C48B4211BBACBEBLL;
        v7[290] = *v33;
        v7[291] = 1LL;
        *((_DWORD *)v7 + 574) = 1;
        __ba(v7, 0LL, v83, v84);
      }
      if ( *((_QWORD *)v33 + 3) != 1LL )
      {
LABEL_207:
        if ( v74 == (unsigned int *)v76 && !*((_DWORD *)v7 + 574) )
        {
          v7[288] = v7 - 0xB8BF814EDC6E963LL;
          v7[289] = (char *)v33 - 0x4C48B4211BBACBEBLL;
          v91 = *v33;
          *((_DWORD *)v7 + 574) = 1;
          v7[290] = v91;
          v7[291] = v74;
          __ba(v7, 0LL, v83, v84);
        }
      }
      v85 = v7[167];
      v86 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v7[42])(v85);
      v87 = 0LL;
      v88 = *(unsigned int **)v7[195];
      v89 = v88 + 4;
      v90 = (unsigned __int64)&v88[6 * *v88 + 4];
      while ( 1 )
      {
        v89 += 6;
        if ( (unsigned __int64)v89 >= v90 )
          break;
        v92 = *((_QWORD *)v89 + 1);
        if ( v92 < v87 )
          break;
        if ( (v92 & 0xFFFFFFFFFFFFF000uLL) != v92 )
          break;
        v93 = v92 + v89[4];
        if ( v93 <= v92 || v93 == v87 )
          break;
        v87 = v92 + v89[4];
      }
      ((void (__fastcall *)(_QWORD))v7[50])(v7[167]);
      __writecr8(v86);
      if ( v89 == (unsigned int *)v90 || *((_DWORD *)v7 + 574) )
        goto LABEL_138;
      v7[288] = v7 - 0xB8BF814EDC6E963LL;
      v7[289] = (char *)v33 - 0x4C48B4211BBACBEBLL;
      v96 = *v33;
      *((_DWORD *)v7 + 574) = 1;
      goto LABEL_137;
    }
LABEL_140:
    if ( *((_DWORD *)v7 + 574) )
    {
      v109 = v7[290];
      v110 = v7[291];
      v111 = v7[289];
      v112 = v7[288];
      v162 = v110;
      v156 = v111;
      v154 = v112;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v114 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v7[200]);
      v115 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v7[202]);
      if ( !*((_BYTE *)&CurrentPrcb->MxCsr + v7[201])
        || (unsigned __int64)&v161 > v114
        || (unsigned __int64)&v161 < v114 - 24576 )
      {
        v114 = *(_QWORD *)(v115 + v7[208]);
      }
      if ( (v7[306] & 0x8000000) == 0 )
      {
        v112 = __readcr0();
        __writecr0(v112 & 0xFFFFFFFFFFFEFFFFuLL);
        v116 = (unsigned __int64)(v7 + 341);
        v117 = (unsigned __int64)&v7[2 * *((unsigned int *)v7 + 680) + 341];
        v118 = 0;
        for ( k = (_QWORD *)v117; v118 < *((_DWORD *)v7 + 681); ++v118 )
        {
          *(_QWORD *)*k = k[1];
          v120 = __readcr4();
          if ( (v120 & 0x20080) != 0 )
          {
            __writecr4(v120 ^ 0x80);
            __writecr4(v120);
          }
          else
          {
            v121 = __readcr3();
            __writecr3(v121);
          }
          k += 2;
        }
        if ( v116 < v117 )
        {
          do
          {
            v122 = *(unsigned int *)(v116 + 8);
            v123 = k;
            v124 = *(char **)v116;
            v125 = v122;
            if ( (unsigned int)v122 >= 8 )
            {
              v126 = (unsigned __int64)(unsigned int)v122 >> 3;
              do
              {
                v125 -= 8;
                *(_QWORD *)v124 = *v123++;
                v124 += 8;
                --v126;
              }
              while ( v126 );
            }
            if ( v125 )
            {
              v127 = v124 - (char *)v123;
              do
              {
                *((_BYTE *)v123 + v127) = *(_BYTE *)v123;
                v123 = (_QWORD *)((char *)v123 + 1);
                --v125;
              }
              while ( v125 );
            }
            k = (_QWORD *)((char *)k + v122);
            v116 += 16LL;
          }
          while ( v116 < v117 );
          LODWORD(v110) = v162;
        }
        *(_BYTE *)v7[67] = -61;
        __writecr0(v112);
        LODWORD(v111) = v156;
        LODWORD(v112) = v154;
      }
      v146 = *((_DWORD *)v7 + 586);
      if ( v146 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v146 = *((_DWORD *)v7 + 586);
        }
        if ( v146 )
        {
          v147 = v146 - 1;
          if ( v147 )
          {
            v148 = v147 - 1;
            if ( v148 )
            {
              v149 = v148 - 1;
              if ( v149 )
              {
                v150 = v149 - 1;
                if ( v150 )
                {
                  if ( v150 == 1 )
                    _interlockedbittestandset(
                      *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + v7[202]),
                      (*((_DWORD *)v7 + 612) >> 10) & 0x1F);
                  else
                    _InterlockedOr64((volatile signed __int64 *)(v7[182] + 832LL), 1uLL);
                }
                else
                {
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)(v7[214]
                                                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v7[202])
                                                + v7[210]),
                    (*((_DWORD *)v7 + 612) >> 10) & 0x1F);
                }
                goto LABEL_201;
              }
              v151 = (volatile signed __int32 *)v7[171];
            }
            else
            {
              v151 = (volatile signed __int32 *)v7[170];
            }
          }
          else
          {
            v151 = (volatile signed __int32 *)v7[168];
          }
          _interlockedbittestandset64(v151, 0LL);
        }
      }
LABEL_201:
      *(_QWORD *)(v115 + v7[211]) = 0LL;
      *(_QWORD *)(v115 + v7[213]) = 0LL;
      SdbpCheckDll(265, v112, v111, v110, v109, v7[43], v114);
      JUMPOUT(0x1403DF975LL);
    }
    *((_DWORD *)v7 + 522) += 1576;
    v128 = *((_DWORD *)v7 + 49);
    v129 = v7;
    v130 = *((_DWORD *)v7 + 517);
    v131 = (const char *)v7;
    v132 = v7[259];
    *((_DWORD *)v7 + 49) = 0;
    if ( v7 < v7 + 197 )
    {
      do
      {
        _mm_prefetch(v131, 0);
        v131 += 64;
      }
      while ( v131 < (const char *)v7 + 1576 );
    }
    v133 = 12;
    v134 = v132;
    do
    {
      v135 = 8LL;
      do
      {
        v136 = *v129 ^ v134;
        v137 = v129 + 1;
        v138 = *v137 ^ __ROL8__(v136, v130);
        v129 = v137 + 1;
        v134 = __ROL8__(v138, v130);
        --v135;
      }
      while ( v135 );
      v139 = __ROL8__(v132 ^ ((char *)v129 - (char *)v7), 17) ^ v132 ^ ((char *)v129 - (char *)v7);
      v130 = ((unsigned __int8)(((v139 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v139) ^ (unsigned __int8)v130) & 0x3F;
      if ( !v130 )
        LOBYTE(v130) = 1;
      --v133;
    }
    while ( v133 );
    v140 = 5LL;
    v2 = a1;
    v141 = 40;
    do
    {
      v134 = __ROL8__(*v129++ ^ v134, v130);
      v141 -= 8;
      --v140;
    }
    while ( v140 );
    for ( ; v141; --v141 )
    {
      v142 = *(unsigned __int8 *)v129;
      v129 = (_QWORD *)((char *)v129 + 1);
      v134 = __ROL8__(v142 ^ v134, v130);
    }
    v143 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v7[34];
    *((_DWORD *)v7 + 49) = v128;
    v7[324] = v134;
    v143(v153, 1LL, v134, v129);
  }
  LOBYTE(KernelDr7) = KiGetTrapFrameMode(v2);
  v145 = (_BYTE)KernelDr7 != 0;
  if ( (_BYTE)KernelDr7 )
  {
    _disable();
    KernelDr7 = *(const signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr
                                         + *(_QWORD *)(*(_QWORD *)&MaxDataSize + 1616LL));
    _enable();
    v145 = _bittest(KernelDr7, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !v145 )
  {
    KernelDr7 = (const signed __int32 *)KiReadKernelDr7();
    if ( KernelDr7 )
      __writedr(7u, (unsigned __int64)KernelDr7);
  }
  return (char)KernelDr7;
}
