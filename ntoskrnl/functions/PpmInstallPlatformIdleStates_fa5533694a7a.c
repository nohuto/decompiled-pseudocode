__int64 __fastcall PpmInstallPlatformIdleStates(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rsi
  void *v3; // rdi
  char v4; // bp
  __int64 v5; // rbx
  unsigned int v6; // r12d
  unsigned int v7; // edx
  unsigned int v8; // eax
  _DWORD *v9; // rcx
  int v10; // r14d
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // r14
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r12d
  __int64 v18; // rdi
  unsigned int v19; // edi
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int64 v25; // r15
  __int64 v26; // rdi
  unsigned int v27; // r13d
  __int64 v28; // rbx
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // rdi
  __int64 Prcb; // rax
  unsigned int v34; // r9d
  __int64 v35; // r10
  __int64 v36; // r8
  __int64 v37; // rdx
  unsigned int v38; // r12d
  unsigned int v39; // edx
  __int64 v40; // r13
  __int64 v41; // rbx
  __int64 v42; // r11
  unsigned int v43; // ecx
  __int64 v44; // r15
  __int64 v45; // rdi
  unsigned int v46; // eax
  __int64 v47; // r9
  __int64 v48; // r8
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v50; // rbx
  __int64 v51; // rdi
  int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int i; // ebx
  unsigned int v56; // edi
  __int64 v57; // r13
  unsigned int v58; // eax
  __int64 v59; // rcx
  bool v60; // zf
  char v61; // al
  unsigned int v63; // [rsp+20h] [rbp-78h]
  int v64; // [rsp+28h] [rbp-70h]
  int v65; // [rsp+2Ch] [rbp-6Ch]
  __int64 Pool2; // [rsp+30h] [rbp-68h]
  __int64 v67; // [rsp+30h] [rbp-68h]
  __int64 v68; // [rsp+40h] [rbp-58h]
  unsigned int v70; // [rsp+A8h] [rbp+10h]
  unsigned int v71; // [rsp+A8h] [rbp+10h]
  __int64 v72; // [rsp+A8h] [rbp+10h]
  unsigned int v73; // [rsp+B0h] [rbp+18h]
  __int64 v74; // [rsp+B0h] [rbp+18h]
  unsigned int v75; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = 0LL;
  Pool2 = 0LL;
  v3 = 0LL;
  PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
  v4 = 1;
  if ( PpmPlatformStates && !*(_BYTE *)(v1 + 48) )
  {
    LODWORD(v2) = -1073741431;
LABEL_78:
    PopReleaseRwLock(&PpmIdlePolicyLock);
    return (unsigned int)v2;
  }
  v5 = *(unsigned int *)(v1 + 4);
  if ( !(_DWORD)v5 || *(_DWORD *)(v1 + 8) > (unsigned int)v5 )
    goto LABEL_77;
  PpmIdleUpdatePlatformDependencies(v1);
  v6 = KeNumberProcessors_0;
  v7 = 0;
  v8 = *(_DWORD *)(v1 + 8);
  v73 = KeNumberProcessors_0;
  if ( v8 )
  {
    v9 = (_DWORD *)(v1 + 72);
    while ( *v9 <= (unsigned int)KeNumberProcessors_0 )
    {
      ++v7;
      v9 += 12;
      if ( v7 >= v8 )
      {
        v10 = 0;
        if ( !(_DWORD)KeNumberProcessors_0 )
        {
LABEL_13:
          v8 = *(_DWORD *)(v1 + 8);
          v12 = v8 * (v6 + v10);
          v7 = v6 * v8;
          v3 = 0LL;
          goto LABEL_15;
        }
        while ( 1 )
        {
          v11 = *(_QWORD *)(KeGetPrcb((unsigned int)v3) + 33600);
          if ( !v11 )
            goto LABEL_77;
          v10 += *(_DWORD *)(v11 + 40);
          LODWORD(v3) = (_DWORD)v3 + 1;
          if ( (unsigned int)v3 >= v6 )
            goto LABEL_13;
        }
      }
    }
    goto LABEL_77;
  }
  v12 = 0;
LABEL_15:
  v13 = PpmPlatformStates;
  if ( PpmPlatformStates )
  {
    if ( *(_DWORD *)(PpmPlatformStates + 8) == v6 && *(_DWORD *)PpmPlatformStates == (_DWORD)v5 )
    {
      LODWORD(v21) = v8;
      if ( *(_DWORD *)(PpmPlatformStates + 4) == 1 )
        goto LABEL_49;
    }
LABEL_77:
    LODWORD(v2) = -1073741811;
    goto LABEL_78;
  }
  v75 = (448 * v5 + 71) & 0xFFFFFFF8;
  v63 = v75 + 24 * v7;
  v70 = v63 + 24 * v12;
  v64 = (v70 + 1016 * v5 + 31) & 0xFFFFFFF8;
  v65 = (4 * v5 + 15) & 0xFFFFFFF8;
  if ( PpmIdleVetoList )
  {
    v14 = *((_DWORD *)PpmIdleVetoList + 1);
    if ( v14 )
    {
      Pool2 = ExAllocatePool2(64LL, (v5 * v14) << 6, 1766674512LL);
      v3 = (void *)Pool2;
      if ( !Pool2 )
        goto LABEL_22;
    }
  }
  else
  {
    v14 = 0;
  }
  v15 = ExAllocatePool2(72LL, v64 + v6 * ((4 * (_DWORD)v5 + 15) & 0xFFFFFFF8), 1766674512LL);
  v13 = v15;
  if ( !v15 )
  {
    ExFreePoolWithTag(v3, 0x694D5050u);
LABEL_22:
    LODWORD(v2) = -1073741670;
    goto LABEL_78;
  }
  *(_DWORD *)v15 = v5;
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(v1 + 8) != 0;
  *(_DWORD *)(v15 + 8) = v6;
  *(_QWORD *)(v15 + 16) = *(_QWORD *)(v1 + 16);
  *(_QWORD *)(v15 + 24) = *(_QWORD *)(v1 + 24);
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(v1 + 32);
  *(_QWORD *)(v15 + 40) = *(_QWORD *)(v1 + 40);
  v16 = v15 + v70;
  *(_QWORD *)(v13 + 48) = v16;
  *(_DWORD *)(v16 + 4) = v5;
  PpmResetPlatformIdleAccounting(v13 + v70);
  if ( *(_DWORD *)(v1 + 4) )
  {
    v17 = 0;
    do
    {
      v18 = v13 + 448LL * v17;
      *(_BYTE *)(v18 + 121) = 1;
      *(_QWORD *)(v18 + 128) = 2097153LL;
      memset((void *)(v18 + 136), 0, 0x100uLL);
      KeQueryActiveProcessorAffinity2(v18 + 128);
      *(_BYTE *)(v18 + 104) = 7;
      *(_QWORD *)(v18 + 96) = v18 + 88;
      *(_QWORD *)(v18 + 88) = v18 + 88;
      if ( PpmIdleDisableStatesAtBoot )
        *(_DWORD *)(v18 + 80) = 0x80000000;
      if ( v14 )
      {
        if ( v17 == *(_DWORD *)(v1 + 4) - 1 )
          *(_BYTE *)(v18 + 105) = 1;
        *(_QWORD *)(v18 + 112) = Pool2;
        *(_DWORD *)(v18 + 108) = v14;
        Pool2 += (unsigned __int64)v14 << 6;
        *(_QWORD *)(1016LL * v17 + v13 + v70 + 200) = v18 + 80;
      }
      ++v17;
    }
    while ( v17 < *(_DWORD *)(v1 + 4) );
    v6 = v73;
  }
  v19 = 0;
  v20 = v13 + v75;
  LODWORD(v21) = *(_DWORD *)(v1 + 8);
  v67 = v13 + v63;
  v71 = 0;
  if ( (_DWORD)v21 )
  {
    v22 = 24LL * v6;
    do
    {
      v23 = 448LL * v19;
      v24 = *(_OWORD *)(v1 + 48LL * v19 + 80);
      *(_QWORD *)(v23 + v13 + 408) = v20;
      v20 += v22;
      *(_DWORD *)(v23 + v13 + 124) = v6;
      v68 = v20;
      *(_OWORD *)(v23 + v13 + 392) = v24;
      if ( v6 )
      {
        v25 = v67;
        v26 = 448LL * v19;
        v27 = 0;
        do
        {
          v28 = *(_QWORD *)(v26 + v13 + 408);
          v29 = *(_QWORD *)(KeGetPrcb(v27) + 33600);
          *(_DWORD *)(v2 + v28) = v27++;
          v2 += 24LL;
          v30 = *(_DWORD *)(v29 + 40);
          *(_QWORD *)(v2 + v28 - 8) = v25;
          *(_DWORD *)(v2 + v28 - 16) = v30;
          v25 += 24LL * *(unsigned int *)(v29 + 40);
        }
        while ( v27 < v6 );
        v19 = v71;
        v2 = 0LL;
        v20 = v68;
        v22 = 24LL * v6;
        v67 = v25;
        v1 = a1;
      }
      LODWORD(v21) = *(_DWORD *)(v1 + 8);
      v71 = ++v19;
    }
    while ( v19 < (unsigned int)v21 );
  }
  v31 = 0;
  if ( v6 )
  {
    v32 = v67;
    do
    {
      Prcb = KeGetPrcb(v31);
      v34 = 0;
      v35 = *(_QWORD *)(Prcb + 33600);
      *(_QWORD *)(v35 + 1048) = v13 + v64 + v31 * v65;
      *(_DWORD *)(v35 + 1072) = *(_DWORD *)(v1 + 8);
      *(_QWORD *)(v35 + 1080) = v32;
      v21 = *(unsigned int *)(v1 + 8);
      v32 += 24 * v21;
      if ( (_DWORD)v21 )
      {
        do
        {
          v36 = 448LL * v34;
          v37 = 3LL * ((unsigned int)v21 - v34 - 1);
          v21 = *(_QWORD *)(v35 + 1080);
          *(_DWORD *)(v21 + 8 * v37 + 4) = v34++;
          *(_DWORD *)(v21 + 8 * v37 + 8) = *(_DWORD *)(v36 + v13 + 124);
          *(_QWORD *)(v21 + 8 * v37 + 16) = *(_QWORD *)(v36 + v13 + 408);
          LODWORD(v21) = *(_DWORD *)(v1 + 8);
        }
        while ( v34 < (unsigned int)v21 );
      }
      ++v31;
    }
    while ( v31 < v6 );
  }
LABEL_49:
  if ( (_DWORD)v21 )
  {
    v38 = 0;
    do
    {
      v39 = 0;
      v40 = v1 + 48LL * v38;
      v41 = 448LL * v38 + v13;
      *(_DWORD *)(v41 + 72) = *(_DWORD *)(v40 + 64);
      *(_DWORD *)(v41 + 76) = *(_DWORD *)(v40 + 68);
      if ( *(_DWORD *)(v40 + 72) )
      {
        do
        {
          v42 = *(_QWORD *)(v40 + 96);
          v43 = 0;
          v44 = *(_QWORD *)(v41 + 408);
          v45 = 3LL * *(unsigned int *)(v42 + 8LL * v39);
          v46 = *(_DWORD *)(v44 + 24LL * *(unsigned int *)(v42 + 8LL * v39) + 8);
          if ( v46 )
          {
            do
            {
              v47 = *(_QWORD *)(v44 + 8 * v45 + 16);
              v48 = 3LL * (v46 - v43 - 1);
              *(_OWORD *)(v47 + 8 * v48) = 0LL;
              *(_QWORD *)(v47 + 8 * v48 + 16) = 0LL;
              *(_DWORD *)(v47 + 8 * v48 + 4) = v43;
              if ( !*(_BYTE *)(v40 + 60) && v43 == *(unsigned __int8 *)(v40 + 61) )
                *(_BYTE *)(v47 + 24LL * (v46 - v43 - 1) + 1) = 1;
              if ( v43 >= *(unsigned __int8 *)(v42 + 8LL * v39 + 4) )
              {
                *(_BYTE *)(v47 + 24LL * (v46 - v43 - 1) + 2) = 1;
                if ( !*(_BYTE *)(v42 + 8LL * v39 + 6) )
                  *(_BYTE *)(v47 + 24LL * (v46 - v43 - 1)) = 1;
              }
              v46 = *(_DWORD *)(v44 + 8 * v45 + 8);
              ++v43;
            }
            while ( v43 < v46 );
          }
          ++v39;
        }
        while ( v39 < *(_DWORD *)(v40 + 72) );
        v1 = a1;
      }
      if ( *(_BYTE *)(v40 + 60) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v40 + 56));
        v50 = *(_QWORD *)(v41 + 408);
        v51 = 3LL * ProcessorIndexFromNumber;
        memset(
          *(void **)(v50 + 24LL * ProcessorIndexFromNumber + 16),
          0,
          24LL * *(unsigned int *)(v50 + 24LL * ProcessorIndexFromNumber + 8));
        v52 = *(unsigned __int8 *)(v40 + 61);
        v53 = 3LL * (unsigned int)(*(_DWORD *)(v50 + 8 * v51 + 8) - v52 - 1);
        v54 = *(_QWORD *)(v50 + 8 * v51 + 16);
        *(_DWORD *)(v54 + 8 * v53 + 4) = v52;
        *(_BYTE *)(v54 + 8 * v53 + 1) = 1;
      }
      ++v38;
    }
    while ( v38 < *(_DWORD *)(v1 + 8) );
    v6 = v73;
  }
  for ( i = 0; i < v6; ++i )
  {
    v56 = 0;
    v57 = *(_QWORD *)(KeGetPrcb(i) + 33600);
    v58 = *(_DWORD *)(v57 + 1072);
    if ( v58 )
    {
      do
      {
        v72 = 3LL * (v58 - v56 - 1);
        v74 = *(_QWORD *)(v57 + 1080);
        v59 = v1 + 48LL * v56 + 56;
        if ( !*(_BYTE *)(v59 + 4) || (v60 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v59) == i, v61 = 0, v60) )
          v61 = 1;
        ++v56;
        *(_BYTE *)(v74 + 8 * v72 + 1) = v61;
        v58 = *(_DWORD *)(v57 + 1072);
      }
      while ( v56 < v58 );
    }
  }
  if ( !PpmPlatformStates )
  {
    PpmEnableCoordinatedIdleStates(v13, 0LL);
    v4 = 0;
  }
  if ( v4 )
    goto LABEL_78;
  return (unsigned int)v2;
}
