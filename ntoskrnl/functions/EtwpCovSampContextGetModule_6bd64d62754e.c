__int64 __fastcall EtwpCovSampContextGetModule(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v8; // r12
  void *v9; // r13
  char *v10; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 Module; // rax
  unsigned int v18; // ecx
  char *Pool2; // rax
  size_t v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  unsigned int v26; // edi
  __int64 v27; // rax
  __m128i v28; // xmm6
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  unsigned int v32; // edx
  struct _KTHREAD *v33; // rcx
  char *v34; // r10
  char *v35; // r9
  __int64 v36; // r8
  unsigned int v37; // eax
  char i; // cl
  __int64 v39; // r11
  unsigned __int64 v40; // rcx
  unsigned int v41; // edi
  __int64 v42; // rdx
  _QWORD *v43; // r11
  __int64 v44; // rcx
  char k; // cl
  unsigned __int64 v46; // rcx
  __int64 v47; // r11
  unsigned int v48; // edi
  __int64 v49; // rdx
  _QWORD *v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned int v55; // edi
  _QWORD *n; // rdx
  _QWORD *v57; // r9
  __int64 v58; // r12
  unsigned int v59; // edi
  _QWORD *ii; // rdx
  int v61; // r10d
  __int64 v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rcx
  int v66; // r11d
  __int64 v67; // rdx
  __int64 v68; // r9
  __int64 v69; // rdi
  int v70; // r8d
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  void *v74; // rcx
  int v76; // [rsp+20h] [rbp-128h]
  int Name; // [rsp+24h] [rbp-124h]
  __int64 v78; // [rsp+28h] [rbp-120h]
  __int64 v79; // [rsp+30h] [rbp-118h]
  __int64 j; // [rsp+30h] [rbp-118h]
  __int64 v81; // [rsp+38h] [rbp-110h]
  __m128i *v82; // [rsp+40h] [rbp-108h]
  __int64 v83; // [rsp+40h] [rbp-108h]
  __int64 v84; // [rsp+48h] [rbp-100h]
  __int64 v85; // [rsp+58h] [rbp-F0h]
  unsigned int v86; // [rsp+68h] [rbp-E0h]
  int v87; // [rsp+6Ch] [rbp-DCh]
  unsigned int v88; // [rsp+70h] [rbp-D8h]
  __int128 v89; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v90; // [rsp+88h] [rbp-C0h]
  unsigned __int64 v91[2]; // [rsp+98h] [rbp-B0h] BYREF
  _QWORD v92[3]; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v93; // [rsp+C0h] [rbp-88h]
  __int64 v94; // [rsp+D0h] [rbp-78h]
  __int64 v95; // [rsp+E0h] [rbp-68h]
  __m128i v96; // [rsp+F0h] [rbp-58h]
  int v99; // [rsp+170h] [rbp+28h]
  unsigned __int64 v100; // [rsp+170h] [rbp+28h]
  __int64 v101; // [rsp+170h] [rbp+28h]
  int v102; // [rsp+170h] [rbp+28h]
  __int64 m; // [rsp+170h] [rbp+28h]
  __int64 v104; // [rsp+170h] [rbp+28h]

  v8 = 0LL;
  v9 = 0LL;
  v79 = 0LL;
  v10 = 0LL;
  v76 = 0;
  *a6 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  *((_QWORD *)&v89 + 1) = *(_QWORD *)(a5 + 32);
  v12 = RtlImageNtHeader(*(_QWORD *)(a5 + 16));
  v92[2] = v12;
  if ( !v12 )
  {
    Name = -1073741637;
    goto LABEL_131;
  }
  LODWORD(v90) = *(_DWORD *)(v12 + 88);
  DWORD1(v90) = *(_DWORD *)(v12 + 8);
  if ( (*(_DWORD *)(a5 + 8) & 0x100) != 0 )
  {
    v13 = *(_QWORD *)(a5 + 16);
  }
  else
  {
    v14 = *(_QWORD *)(a5 + 48);
    if ( !v14 )
    {
      Name = -1073741637;
      goto LABEL_131;
    }
    v13 = *(_QWORD *)(v14 + 24);
  }
  *(_QWORD *)&v89 = v13;
  if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a5 + 16) == *(_QWORD *)(a2 + 1312) )
    {
      v76 = 1;
    }
    else
    {
      v76 = 0;
      v15 = *(unsigned int *)(a3 + 40);
      *(_QWORD *)&v89 = v15 ^ v13;
      DWORD2(v90) = v15;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1176, 0LL);
  Module = EtwpCovSampContextFastFindModule(a1, (__int64)&v89, a6);
  if ( Module && Module == *a6 )
  {
    ProcessForExeModule(a1, a3, *a6, v76);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1176), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 1176));
    KeAbPostRelease(a1 + 1176);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Name = 0;
    goto LABEL_17;
  }
  v87 = *(_DWORD *)(a1 + 1196) >> 5;
  v18 = *(_DWORD *)(a1 + 1192);
  if ( v18 <= *(_DWORD *)(a1 + 1208) )
    v18 = *(_DWORD *)(a1 + 1208);
  v88 = v18;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1176), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1176));
  KeAbPostRelease(a1 + 1176);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  Pool2 = (char *)ExAllocatePool2(256LL, 176LL, 1450669125LL);
  v10 = Pool2;
  if ( !Pool2 )
  {
    Name = -1073741670;
LABEL_17:
    v9 = 0LL;
    goto LABEL_131;
  }
  memset(Pool2, 0, 0xB0uLL);
  *((_QWORD *)v10 + 10) = v10 + 72;
  *((_QWORD *)v10 + 9) = v10 + 72;
  *((_QWORD *)v10 + 12) = v10 + 88;
  *((_QWORD *)v10 + 11) = v10 + 88;
  *(_QWORD *)v10 = 0LL;
  *((_QWORD *)v10 + 2) = 0LL;
  *((_QWORD *)v10 + 8) = 1LL;
  *((_QWORD *)v10 + 1) = v89;
  v20 = *((_QWORD *)&v89 + 1);
  *((_QWORD *)v10 + 5) = *((_QWORD *)&v89 + 1);
  *((_QWORD *)v10 + 4) = v90;
  *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (*(_DWORD *)(a5 + 8) << 9)) & 0x20000;
  v92[0] = 0LL;
  v92[1] = 0LL;
  v86 = 0;
  v82 = (__m128i *)v92;
  v99 = 1;
  if ( (int)EtwpFindDebugId(*(_QWORD *)(a5 + 16), v20, (__int64 *)v10 + 6, (_DWORD *)v10 + 14) >= 0 )
  {
    v21 = *((_QWORD *)v10 + 6);
    if ( *((_DWORD *)v10 + 14) <= 0x400u )
    {
      v86 = *(_DWORD *)(v21 + 20);
      v82 = (__m128i *)(v21 + 4);
      goto LABEL_30;
    }
    ExFreePoolWithTag(*((PVOID *)v10 + 6), 0);
    *((_QWORD *)v10 + 6) = 0LL;
    *((_DWORD *)v10 + 14) = 0;
  }
  v99 = 0;
  v22 = v76;
  if ( !v76 )
  {
    v23 = 0;
LABEL_40:
    if ( !v23 && !v22 )
      goto LABEL_47;
    goto LABEL_42;
  }
LABEL_30:
  Name = EtwpCovSampModuleGetName(v10, a5, a4);
  if ( Name < 0 )
    goto LABEL_17;
  v91[0] = *((_QWORD *)v10 + 14);
  v91[1] = (unsigned __int16)*((_DWORD *)v10 + 30);
  v24 = *(_DWORD *)(a1 + 1624);
  if ( v24 )
    v23 = EtwpCovSampCheckForSegments(v91, (unsigned __int64 *)(a1 + 1304), v24);
  else
    v23 = v99;
  if ( !v23 )
    goto LABEL_39;
  v25 = *(_DWORD *)(a1 + 1628);
  if ( !v25 )
    goto LABEL_39;
  if ( (unsigned int)EtwpCovSampCheckForSegments(v91, (unsigned __int64 *)(a1 + 1464), v25) )
  {
    v23 = 0;
LABEL_39:
    v22 = v76;
    goto LABEL_40;
  }
  v23 = 1;
LABEL_42:
  *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (v23 << 16)) & 0x10000;
  v26 = *((_DWORD *)v10 + 10);
  LODWORD(v100) = *((_DWORD *)v10 + 9);
  HIDWORD(v100) = *((_DWORD *)v10 + 8);
  v27 = EtwCovSampHash(v100, *(unsigned int *)(a1 + 12));
  v96 = *v82;
  v28 = v96;
  v29 = EtwCovSampHash(__PAIR64__(v86, v26), v27);
  v30 = EtwCovSampHash(v28.m128i_u64[0], v29);
  v101 = EtwCovSampHash(_mm_srli_si128(v28, 8).m128i_u64[0], v30);
  v31 = v101 ^ HIDWORD(v101);
  if ( (unsigned int)v101 == HIDWORD(v101) )
    v31 = 1;
  if ( !v76 )
    v31 ^= *(_DWORD *)(a3 + 40);
  *((_DWORD *)v10 + 31) = v31;
LABEL_47:
  v32 = 2 * v87;
  if ( v88 + 1 > 2 * v87 )
  {
    v8 = v32;
    if ( !v32 )
      v8 = 128LL;
    v79 = ExAllocatePool2(256LL, 8LL * (unsigned int)(2 * v8), 1450669125LL);
  }
  v33 = KeGetCurrentThread();
  --v33->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 1176, 0LL);
  *(_QWORD *)(a1 + 1184) = KeGetCurrentThread();
  v34 = (char *)v79;
  if ( v79 && (unsigned int)v8 > *(_DWORD *)(a1 + 1196) >> 5 )
  {
    v35 = (char *)(v79 + 8LL * (unsigned int)v8);
    v36 = (unsigned int)v8;
    v102 = v8 & (v8 - 1);
    if ( v102 )
    {
      v37 = v8;
      for ( i = -1; v37; v37 >>= 1 )
        ++i;
      v36 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v36 > 0x4000000 )
      v36 = 0x4000000LL;
    v39 = a1 + 1208;
    v40 = (unsigned __int64)(8 * v36 + 7) >> 3;
    if ( v35 > &v35[8 * v36] )
      v40 = 0LL;
    if ( v40 )
      memset64(v35, (a1 + 1208) | 1, v40);
    v83 = -1LL << (*(_BYTE *)(a1 + 1212) & 0x1F);
    v41 = 0;
    if ( (*(_DWORD *)(a1 + 1212) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v42 = *(_QWORD *)(v39 + 8);
        for ( j = v42; ; v42 = j )
        {
          v43 = *(_QWORD **)(v42 + 8LL * v41);
          if ( ((unsigned __int8)v43 & 1) != 0 )
            break;
          *(_QWORD *)(v42 + 8LL * v41) = *v43;
          v81 = v83 & v43[1];
          v44 = (37
               * (BYTE6(v81)
                + 37
                * (BYTE5(v81)
                 + 37
                 * (BYTE4(v81)
                  + 37 * (BYTE3(v81) + 37 * (BYTE2(v81) + 37 * (BYTE1(v81) + 37 * ((unsigned __int8)v81 + 11623883)))))))
               + HIBYTE(v81)) & (unsigned int)(v36 - 1);
          *v43 = *(_QWORD *)&v35[8 * v44];
          *(_QWORD *)&v35[8 * v44] = v43;
        }
        ++v41;
        v39 = a1 + 1208;
      }
      while ( v41 < *(_DWORD *)(a1 + 1212) >> 5 );
    }
    *(_QWORD *)(v39 + 8) = v35;
    *(_DWORD *)(v39 + 4) = (32 * v36) | *(_DWORD *)(v39 + 4) & 0x1F;
    if ( v102 )
    {
      for ( k = -1; (_DWORD)v8; LODWORD(v8) = (unsigned int)v8 >> 1 )
        ++k;
      v8 = (unsigned int)(1 << k);
    }
    if ( (unsigned int)v8 > 0x4000000 )
      v8 = 0x4000000LL;
    v46 = (unsigned __int64)(8 * v8 + 7) >> 3;
    if ( v34 > &v34[8 * v8] )
      v46 = 0LL;
    if ( v46 )
      memset64(v34, (a1 + 1192) | 1, v46);
    v47 = -1LL << (*(_BYTE *)(a1 + 1196) & 0x1F);
    v48 = 0;
    if ( (*(_DWORD *)(a1 + 1196) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v49 = *(_QWORD *)(a1 + 1200);
        for ( m = v49; ; v49 = m )
        {
          v50 = *(_QWORD **)(v49 + 8LL * v48);
          if ( ((unsigned __int8)v50 & 1) != 0 )
            break;
          *(_QWORD *)(v49 + 8LL * v48) = *v50;
          v78 = v47 & v50[1];
          v51 = (37
               * (BYTE6(v78)
                + 37
                * (BYTE5(v78)
                 + 37
                 * (BYTE4(v78)
                  + 37 * (BYTE3(v78) + 37 * (BYTE2(v78) + 37 * (BYTE1(v78) + 37 * ((unsigned __int8)v78 + 11623883)))))))
               + HIBYTE(v78)) & (unsigned int)(v8 - 1);
          *v50 = *(_QWORD *)&v34[8 * v51];
          *(_QWORD *)&v34[8 * v51] = v50;
        }
        ++v48;
      }
      while ( v48 < *(_DWORD *)(a1 + 1196) >> 5 );
    }
    v52 = *(_QWORD *)(a1 + 1200);
    *(_QWORD *)(a1 + 1200) = v34;
    *(_DWORD *)(a1 + 1196) = *(_DWORD *)(a1 + 1196) & 0x1F | (32 * v8);
    v79 = v52;
  }
  if ( *(_DWORD *)(a1 + 1196) >= 0x20u )
  {
    v53 = EtwpCovSampContextFastFindModule(a1, (__int64)&v89, a6);
    if ( v53 )
    {
      if ( v53 == *a6 )
      {
        ProcessForExeModule(a1, a3, *a6, v76);
LABEL_90:
        Name = 0;
        goto LABEL_86;
      }
      *(_DWORD *)(v53 + 120) |= 0x40000u;
      v54 = a1 + 1192;
      v55 = *(_DWORD *)(a1 + 1196);
      v93 = *(_QWORD *)(v53 + 8) & (-1LL << (v55 & 0x1F));
      for ( n = (_QWORD *)(*(_QWORD *)(a1 + 1200)
                         + 8LL
                         * ((37
                           * (BYTE6(v93)
                            + 37
                            * (BYTE5(v93)
                             + 37
                             * (BYTE4(v93)
                              + 37
                              * (BYTE3(v93)
                               + 37 * (BYTE2(v93) + 37 * (BYTE1(v93) + 37 * ((unsigned __int8)v93 + 11623883)))))))
                           + HIBYTE(v93)) & ((v55 >> 5) - 1))); (*n & 1) == 0; n = (_QWORD *)*n )
      {
        if ( *n == v53 )
        {
          *n = *(_QWORD *)v53;
          --*(_DWORD *)v54;
          break;
        }
      }
      *(_QWORD *)v53 = 0LL;
      v57 = (_QWORD *)(v53 + 16);
      v58 = a1 + 1208;
      if ( *(_QWORD *)(v53 + 16) )
      {
        v59 = *(_DWORD *)(a1 + 1212);
        v94 = *(_QWORD *)(v53 + 24) & (-1LL << (v59 & 0x1F));
        for ( ii = (_QWORD *)(*(_QWORD *)(a1 + 1216)
                            + 8LL
                            * ((37
                              * (BYTE6(v94)
                               + 37
                               * (BYTE5(v94)
                                + 37
                                * (BYTE4(v94)
                                 + 37
                                 * (BYTE3(v94)
                                  + 37 * (BYTE2(v94) + 37 * (BYTE1(v94) + 37 * ((unsigned __int8)v94 + 11623883)))))))
                              + HIBYTE(v94)) & ((v59 >> 5) - 1))); (*ii & 1) == 0; ii = (_QWORD *)*ii )
        {
          if ( (_QWORD *)*ii == v57 )
          {
            *ii = *v57;
            --*(_DWORD *)v58;
            break;
          }
        }
        *v57 = 0LL;
      }
    }
    else
    {
      v54 = a1 + 1192;
      v58 = a1 + 1208;
    }
    v61 = v76;
    *((_DWORD *)v10 + 30) = (v76 << 20) | *((_DWORD *)v10 + 30) & 0xFFEFFFFF;
    *((_DWORD *)v10 + 32) = (*(_DWORD *)(a1 + 1632))++;
    v84 = *((_QWORD *)v10 + 1) & (-1LL << (*(_DWORD *)(v54 + 4) & 0x1F));
    v62 = (37
         * (BYTE6(v84)
          + 37
          * (BYTE5(v84)
           + 37
           * (BYTE4(v84)
            + 37 * (BYTE3(v84) + 37 * (BYTE2(v84) + 37 * (BYTE1(v84) + 37 * ((unsigned __int8)v84 + 11623883)))))))
         + HIBYTE(v84)) & (unsigned int)((*(_DWORD *)(v54 + 4) >> 5) - 1);
    v63 = *(_QWORD *)(v54 + 8);
    *(_QWORD *)v10 = *(_QWORD *)(v63 + 8 * v62);
    *(_QWORD *)(v63 + 8 * v62) = v10;
    ++*(_DWORD *)v54;
    v64 = (_QWORD *)(a1 + 1224);
    v65 = *(_QWORD *)(a1 + 1224);
    if ( *(_QWORD *)(v65 + 8) != a1 + 1224 )
      __fastfail(3u);
    *((_QWORD *)v10 + 9) = v65;
    *((_QWORD *)v10 + 10) = v64;
    *(_QWORD *)(v65 + 8) = v10 + 72;
    *v64 = v10 + 72;
    *((_DWORD *)v10 + 34) = MEMORY[0xFFFFF78000000320];
    ++*(_DWORD *)(a1 + 1240);
    ++*(_DWORD *)(a1 + 1244);
    v66 = *((_DWORD *)v10 + 30);
    if ( (v66 & 0x10000) != 0 || v76 )
    {
      v67 = *((unsigned int *)v10 + 31);
      *((_QWORD *)v10 + 3) = v67;
      v68 = -1LL << (*(_BYTE *)(a1 + 1212) & 0x1F);
      v69 = v67 & v68;
      v70 = *(_DWORD *)(a1 + 1212) >> 5;
      if ( v70 )
      {
        v95 = v67 & (-1LL << (*(_BYTE *)(a1 + 1212) & 0x1F));
        v104 = v67 & v68;
        v71 = *(_QWORD *)(a1 + 1216)
            + 8LL
            * ((37
              * (BYTE6(v104)
               + 37
               * (BYTE5(v104)
                + 37
                * (BYTE4(v104)
                 + 37 * (BYTE3(v104) + 37 * (BYTE2(v104) + 37 * (BYTE1(v104) + 37 * ((unsigned __int8)v69 + 11623883)))))))
              + HIBYTE(v104)) & (unsigned int)(v70 - 1));
        while ( 1 )
        {
          v71 = *(_QWORD *)v71;
          if ( (v71 & 1) != 0 )
            break;
          if ( v69 == (v68 & *(_QWORD *)(v71 + 8)) )
            goto LABEL_114;
        }
      }
      v71 = 0LL;
LABEL_114:
      if ( v71 )
      {
        if ( *(_DWORD *)(v71 + 16) != *((_DWORD *)v10 + 8)
          || *(_DWORD *)(v71 + 20) != *((_DWORD *)v10 + 9)
          || *(_QWORD *)(v71 + 24) != *((_QWORD *)v10 + 5)
          || !(unsigned int)EtwpCheckDebugInfoEqual(*(_QWORD *)(v71 + 32), *((_QWORD *)v10 + 6)) )
        {
          *((_DWORD *)v10 + 30) = v66 & 0xFFFEFFFF;
          *((_DWORD *)v10 + 31) = 0;
        }
        *((_DWORD *)v10 + 30) |= 0x80000u;
        EtwpCovSampModuleNameInfoCleanup(v10 + 104);
        *((_QWORD *)v10 + 14) = 0LL;
        *((_WORD *)v10 + 60) = 0;
        v74 = (void *)*((_QWORD *)v10 + 6);
        if ( v74 )
          ExFreePoolWithTag(v74, 0);
        *((_QWORD *)v10 + 6) = 0LL;
        *((_DWORD *)v10 + 14) = 0;
        v61 = v76;
      }
      else
      {
        v85 = v68 & *((_QWORD *)v10 + 3);
        v72 = (37
             * (BYTE6(v85)
              + 37
              * (BYTE5(v85)
               + 37
               * (BYTE4(v85)
                + 37 * (BYTE3(v85) + 37 * (BYTE2(v85) + 37 * (BYTE1(v85) + 37 * ((unsigned __int8)v85 + 11623883)))))))
             + HIBYTE(v85)) & (unsigned int)(v70 - 1);
        v73 = *(_QWORD *)(v58 + 8);
        *((_QWORD *)v10 + 2) = *(_QWORD *)(v73 + 8 * v72);
        *(_QWORD *)(v73 + 8 * v72) = v10 + 16;
        ++*(_DWORD *)v58;
      }
      if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
      {
        ProcessForExeModule(a1, a3, (__int64)v10, v61);
        *((_DWORD *)v10 + 40) = *(_DWORD *)(a3 + 40);
        *((_DWORD *)v10 + 41) = *(_DWORD *)(a3 + 44);
      }
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)v10 + 8) <= 1 )
      __fastfail(0xEu);
    *a6 = (__int64)v10;
    v10 = 0LL;
    *(_QWORD *)(a1 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1176));
    KeAbPostRelease(a1 + 1176);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    EtwpCovSampContextPruneModules(a1);
    goto LABEL_90;
  }
  Name = -1073741670;
LABEL_86:
  v9 = (void *)v79;
LABEL_131:
  if ( *(struct _KTHREAD **)(a1 + 1184) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1176));
    KeAbPostRelease(a1 + 1176);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v10 )
  {
    *((_QWORD *)v10 + 8) = 0LL;
    EtwpCovSampModuleCleanup(v10);
    ExFreePoolWithTag(v10, 0x56777445u);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x56777445u);
  return (unsigned int)Name;
}
