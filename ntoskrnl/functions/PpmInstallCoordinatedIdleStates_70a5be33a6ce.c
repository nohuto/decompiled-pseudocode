__int64 __fastcall PpmInstallCoordinatedIdleStates(unsigned int *a1)
{
  unsigned int *v1; // r14
  char *Pool2; // r12
  char v3; // si
  int updated; // ebx
  __int64 v5; // rbp
  int v6; // r13d
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // r15
  int v10; // r9d
  _DWORD *v11; // rcx
  __int64 v12; // r10
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned int i; // edx
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // r15
  _DWORD *v23; // r13
  __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // ebx
  __int64 v30; // r13
  __int64 Prcb; // rax
  unsigned int v32; // r9d
  __int64 v33; // r8
  _QWORD *v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned int *v38; // r14
  __int64 v39; // r10
  __int64 v40; // rbp
  __int64 v41; // r13
  __int64 v42; // r12
  __int64 v43; // r9
  unsigned int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r11
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int j; // ebx
  unsigned int v53; // r14d
  __int64 k; // r15
  char v55; // al
  __int64 v56; // r10
  __int64 v57; // r11
  unsigned int v58; // [rsp+20h] [rbp-68h]
  unsigned int v59; // [rsp+28h] [rbp-60h]
  int v60; // [rsp+30h] [rbp-58h]
  unsigned int v61; // [rsp+34h] [rbp-54h]
  unsigned int v63; // [rsp+98h] [rbp+10h]
  unsigned int v64; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v65; // [rsp+A0h] [rbp+18h]
  unsigned int v66; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  Pool2 = 0LL;
  PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
  v3 = 1;
  if ( PpmPlatformStates && !*((_BYTE *)v1 + 40) )
  {
    updated = -1073741431;
LABEL_41:
    PopReleaseRwLock(&PpmIdlePolicyLock);
    return (unsigned int)updated;
  }
  updated = PpmIdleUpdateCoordinatedDependencies(v1);
  if ( updated < 0 )
    goto LABEL_41;
  v5 = *v1;
  v61 = v5;
  if ( !(_DWORD)v5 )
    goto LABEL_40;
  v6 = KeNumberProcessors_0;
  v7 = (unsigned int)(KeNumberProcessors_0 * v5);
  v8 = 0;
  v63 = KeNumberProcessors_0;
  v9 = (unsigned int)v5;
  v10 = KeNumberProcessors_0 * v5;
  v11 = v1 + 86;
  v12 = (unsigned int)v5;
  do
  {
    v13 = v11[1];
    v8 += v13;
    v14 = *v11 * v13;
    v11 += 80;
    v10 += v14;
    --v12;
  }
  while ( v12 );
  v15 = PpmPlatformStates;
  if ( PpmPlatformStates )
  {
    if ( *(_DWORD *)(PpmPlatformStates + 8) == (_DWORD)KeNumberProcessors_0
      && *(_QWORD *)PpmPlatformStates == ((unsigned int)v5 | 0x100000000LL) )
    {
      goto LABEL_33;
    }
LABEL_40:
    updated = -1073741811;
    goto LABEL_41;
  }
  v66 = (448 * v5 + 71) & 0xFFFFFFF8;
  v58 = v66 + 24 * v8;
  v59 = v58 + 24 * v10;
  v64 = (v59 + 4 * v7 + 7) & 0xFFFFFFF8;
  v60 = (v64 + 1016 * v5 + 31) & 0xFFFFFFF8;
  if ( PpmIdleVetoList )
  {
    v16 = *((_DWORD *)PpmIdleVetoList + 1);
    if ( v16 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, ((unsigned int)v5 * (unsigned __int64)v16) << 6, 1766674512LL);
      if ( !Pool2 )
        goto LABEL_15;
    }
  }
  else
  {
    v16 = 0;
  }
  v17 = ExAllocatePool2(72LL, v60 + v6 * ((4 * (_DWORD)v5 + 15) & 0xFFFFFFF8), 1766674512LL);
  v15 = v17;
  if ( !v17 )
  {
    ExFreePoolWithTag(Pool2, 0x694D5050u);
LABEL_15:
    updated = -1073741670;
    goto LABEL_41;
  }
  *(_DWORD *)(v17 + 8) = v6;
  *(_DWORD *)v17 = v5;
  v18 = v17 + v64;
  *(_DWORD *)(v17 + 4) = 1;
  *(_BYTE *)(v17 + 12) = 1;
  *(_QWORD *)(v17 + 16) = *((_QWORD *)v1 + 1);
  *(_QWORD *)(v17 + 24) = *((_QWORD *)v1 + 2);
  *(_QWORD *)(v17 + 32) = *((_QWORD *)v1 + 3);
  *(_QWORD *)(v17 + 40) = *((_QWORD *)v1 + 4);
  *(_QWORD *)(v17 + 48) = v18;
  *(_DWORD *)(v18 + 4) = v5;
  PpmResetPlatformIdleAccounting(v18);
  for ( i = 0; i < *v1; ++i )
  {
    v20 = v15 + 448LL * i;
    *(_QWORD *)(v20 + 96) = v20 + 88;
    *(_QWORD *)(v20 + 88) = v20 + 88;
    *(_BYTE *)(v20 + 104) = 7;
    if ( PpmIdleDisableStatesAtBoot )
      *(_DWORD *)(v20 + 80) = 0x80000000;
    if ( v16 )
    {
      if ( i == *v1 - 1 )
        *(_BYTE *)(v20 + 105) = 1;
      *(_QWORD *)(v20 + 112) = Pool2;
      Pool2 += 64 * (unsigned __int64)v16;
      *(_DWORD *)(v20 + 108) = v16;
      *(_QWORD *)(1016LL * i + v18 + 200) = v15 + 448LL * i + 80;
    }
  }
  v21 = v15 + v58;
  v7 = v15 + 130;
  v22 = v5;
  v23 = v1 + 87;
  v65 = (unsigned __int16 *)(v15 + 130);
  v24 = v15 + v66;
  do
  {
    v25 = v7 - 2;
    *(_OWORD *)(v7 + 262) = *(_OWORD *)(v23 - 9);
    *(_QWORD *)(v7 - 66) = *(_QWORD *)(v23 - 5);
    *(_DWORD *)(v7 + 2) = 0;
    *(_WORD *)v7 = 32;
    *(_WORD *)(v7 - 2) = 1;
    memset((void *)(v7 + 6), 0, 0x100uLL);
    KiCopyAffinityEx(v25, *v65, v23 - 75);
    v26 = 0LL;
    *(_DWORD *)(v65 - 3) = *v23;
    *(_QWORD *)(v65 + 139) = v24;
    v27 = (unsigned int)*v23;
    v24 += 24 * v27;
    if ( (_DWORD)v27 )
    {
      do
      {
        v28 = 3 * v26;
        v26 = (unsigned int)(v26 + 1);
        *(_QWORD *)(*(_QWORD *)(v65 + 139) + 8 * v28 + 16) = v21;
        v21 += 24LL * (unsigned int)*(v23 - 1);
      }
      while ( (unsigned int)v26 < *v23 );
    }
    v7 = (__int64)(v65 + 224);
    v23 += 80;
    v65 += 224;
    --v22;
  }
  while ( v22 );
  v1 = a1;
  v9 = v5;
  v29 = 0;
  v30 = v15 + v59;
  if ( v63 )
  {
    do
    {
      Prcb = KeGetPrcb(v29);
      v32 = 0;
      v33 = *(_QWORD *)(Prcb + 33600);
      *(_QWORD *)(v33 + 1080) = v21;
      v21 += 24 * v5;
      *(_QWORD *)(v33 + 1104) = v30;
      v30 += 4 * v5;
      *(_DWORD *)(v33 + 1072) = v5;
      *(_QWORD *)(v33 + 1048) = v15 + v60 + v29 * ((4 * (_DWORD)v5 + 15) & 0xFFFFFFF8);
      *(_DWORD *)(v33 + 1088) = v5;
      v34 = (_QWORD *)(v15 + 408);
      do
      {
        v35 = *(_QWORD *)(v33 + 1080);
        v7 = 3LL * ((unsigned int)v5 - v32 - 1);
        *(_DWORD *)(v35 + 8 * v7 + 4) = v32++;
        *(_DWORD *)(v35 + 8 * v7 + 8) = *((_DWORD *)v34 - 71);
        v36 = *v34;
        v34 += 56;
        *(_QWORD *)(v35 + 8 * v7 + 16) = v36;
      }
      while ( v32 < (unsigned int)v5 );
      ++v29;
    }
    while ( v29 < v63 );
    v1 = a1;
    v9 = v5;
  }
LABEL_33:
  v37 = v15 + 76;
  v38 = v1 + 85;
  do
  {
    v39 = 0LL;
    *(_DWORD *)(v37 - 4) = *(v38 - 1);
    *(_DWORD *)v37 = *v38;
    for ( *(_BYTE *)(v37 + 45) = *((_BYTE *)v38 + 12); (unsigned int)v39 < v38[2]; v39 = (unsigned int)(v39 + 1) )
    {
      v40 = *(_QWORD *)(v37 + 332);
      v41 = 3 * v39;
      v42 = 0LL;
      v43 = *(_QWORD *)(v38 + 5) + 16LL * (unsigned int)v39;
      *(_DWORD *)(v40 + 8 * v41) = *(_DWORD *)v43;
      *(_DWORD *)(v40 + 8 * v41 + 8) = *(_DWORD *)(v43 + 4);
      v44 = *(_DWORD *)(v43 + 4);
      if ( v44 )
      {
        do
        {
          v45 = *(_QWORD *)(v43 + 8);
          v46 = *(_QWORD *)(v40 + 24 * v39 + 16);
          v47 = 3LL * (v44 - (unsigned int)v42 - 1);
          v48 = *(unsigned __int8 *)(v45 + 4 * v42);
          *(_DWORD *)(v46 + 8 * v47 + 4) = v48;
          *(_BYTE *)(v46 + 8 * v47) = *(_BYTE *)(v45 + 4 * v42 + 1) == 0;
          *(_BYTE *)(v46 + 8 * v47 + 1) = *(_BYTE *)(v45 + 4 * v42 + 2);
          *(_BYTE *)(v46 + 8 * v47 + 2) = *(_BYTE *)(v45 + 4 * v42 + 3);
          if ( *(_DWORD *)(v40 + 24 * v39) == -1 )
          {
            v49 = 448LL * v48;
            *(_DWORD *)(v46 + 8 * v47 + 8) = *(_DWORD *)(v49 + v15 + 124);
            v50 = *(_QWORD *)(v49 + v15 + 408);
          }
          else
          {
            *(_DWORD *)(v46 + 8 * v47 + 8) = 0;
            v50 = 0LL;
          }
          *(_QWORD *)(v46 + 8 * v47 + 16) = v50;
          v42 = (unsigned int)(v42 + 1);
          v44 = *(_DWORD *)(v43 + 4);
        }
        while ( (unsigned int)v42 < v44 );
      }
    }
    v37 += 448LL;
    v38 += 80;
    --v9;
  }
  while ( v9 );
  for ( j = 0; j < v63; ++j )
  {
    v53 = 0;
    for ( k = *(_QWORD *)(KeGetPrcb(j) + 33600); v53 < v61; *(_BYTE *)(v56 + 8 * v57 + 1) = v55 )
    {
      v55 = PpmCheckCoordinatedStateInitiator(
              j,
              *(unsigned int *)(*(_QWORD *)(k + 1080) + 24LL * (v61 - v53 - 1) + 8),
              *(_QWORD *)(*(_QWORD *)(k + 1080) + 24LL * (v61 - v53 - 1) + 16));
      ++v53;
    }
  }
  if ( !PpmPlatformStates )
  {
    LOBYTE(v7) = 1;
    PpmEnableCoordinatedIdleStates(v15, v7);
    v3 = 0;
  }
  updated = 0;
  if ( v3 )
    goto LABEL_41;
  return (unsigned int)updated;
}
