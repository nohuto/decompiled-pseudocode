/*
 * XREFs of PpmInstallCoordinatedIdleStates @ 0x14097EDD0
 * Callers:
 *     <none>
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpmCheckCoordinatedStateInitiator @ 0x140581A80 (PpmCheckCoordinatedStateInitiator.c)
 *     PpmResetPlatformIdleAccounting @ 0x140583658 (PpmResetPlatformIdleAccounting.c)
 *     PpmEnableCoordinatedIdleStates @ 0x14097EB2C (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdateCoordinatedDependencies @ 0x14099AB44 (PpmIdleUpdateCoordinatedDependencies.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmInstallCoordinatedIdleStates(unsigned int *a1)
{
  unsigned int *v1; // r14
  char *Pool2; // r12
  char v3; // si
  int updated; // ebx
  __int64 v5; // rbp
  int v6; // r13d
  int v7; // r8d
  __int64 v8; // r15
  int v9; // r9d
  _DWORD *v10; // rcx
  __int64 v11; // r10
  int v12; // eax
  int v13; // eax
  int *v14; // rdi
  unsigned int v15; // edi
  unsigned int v16; // ebx
  __int64 v17; // rax
  int *v18; // r13
  unsigned int i; // edx
  int *v20; // rcx
  char *v21; // r12
  char *v22; // rdx
  __int64 v23; // r15
  unsigned __int16 *v24; // r13
  char *v25; // r14
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  char *v31; // r13
  __int64 Prcb; // rax
  unsigned int v33; // r9d
  __int64 v34; // r8
  _QWORD *v35; // r10
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  int *v39; // r8
  unsigned int *v40; // r14
  __int64 v41; // r10
  __int64 v42; // rbp
  __int64 v43; // r13
  __int64 v44; // r12
  __int64 v45; // r9
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // r11
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int j; // ebx
  unsigned int v55; // r14d
  __int64 v56; // r9
  __int64 k; // r15
  char v58; // al
  __int64 v59; // r10
  __int64 v60; // r11
  unsigned int v61; // [rsp+20h] [rbp-68h]
  unsigned int v62; // [rsp+28h] [rbp-60h]
  int v63; // [rsp+30h] [rbp-58h]
  unsigned int v64; // [rsp+34h] [rbp-54h]
  unsigned int v66; // [rsp+98h] [rbp+10h]
  unsigned int v67; // [rsp+A0h] [rbp+18h]
  char *v68; // [rsp+A0h] [rbp+18h]
  unsigned int v69; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  Pool2 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v3 = 1;
  if ( PpmPlatformStates && !*((_BYTE *)v1 + 40) )
  {
    updated = -1073741431;
LABEL_41:
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    return (unsigned int)updated;
  }
  updated = PpmIdleUpdateCoordinatedDependencies(v1);
  if ( updated < 0 )
    goto LABEL_41;
  v5 = *v1;
  v64 = v5;
  if ( !(_DWORD)v5 )
    goto LABEL_40;
  v6 = KeNumberProcessors_0;
  v7 = 0;
  v66 = KeNumberProcessors_0;
  v8 = (unsigned int)v5;
  v9 = KeNumberProcessors_0 * v5;
  v10 = v1 + 86;
  v11 = (unsigned int)v5;
  do
  {
    v12 = v10[1];
    v7 += v12;
    v13 = *v10 * v12;
    v10 += 80;
    v9 += v13;
    --v11;
  }
  while ( v11 );
  v14 = (int *)PpmPlatformStates;
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
  v69 = (448 * v5 + 71) & 0xFFFFFFF8;
  v61 = v69 + 24 * v7;
  v62 = v61 + 24 * v9;
  v67 = (v62 + 4 * KeNumberProcessors_0 * v5 + 7) & 0xFFFFFFF8;
  v63 = (v67 + 1016 * v5 + 31) & 0xFFFFFFF8;
  v15 = v63 + KeNumberProcessors_0 * ((4 * v5 + 15) & 0xFFFFFFF8);
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
  v17 = ExAllocatePool2(72LL, v15, 1766674512LL);
  v14 = (int *)v17;
  if ( !v17 )
  {
    ExFreePoolWithTag(Pool2, 0x694D5050u);
LABEL_15:
    updated = -1073741670;
    goto LABEL_41;
  }
  *(_DWORD *)(v17 + 8) = v6;
  *(_DWORD *)v17 = v5;
  v18 = (int *)(v17 + v67);
  *(_DWORD *)(v17 + 4) = 1;
  *(_BYTE *)(v17 + 12) = 1;
  *(_QWORD *)(v17 + 16) = *((_QWORD *)v1 + 1);
  *(_QWORD *)(v17 + 24) = *((_QWORD *)v1 + 2);
  *(_QWORD *)(v17 + 32) = *((_QWORD *)v1 + 3);
  *(_QWORD *)(v17 + 40) = *((_QWORD *)v1 + 4);
  *(_QWORD *)(v17 + 48) = v18;
  v18[1] = v5;
  PpmResetPlatformIdleAccounting(v18);
  for ( i = 0; i < *v1; ++i )
  {
    v20 = &v14[112 * i];
    *((_QWORD *)v20 + 12) = v20 + 22;
    *((_QWORD *)v20 + 11) = v20 + 22;
    *((_BYTE *)v20 + 104) = 7;
    if ( PpmIdleDisableStatesAtBoot )
      v20[20] = 0x80000000;
    if ( v16 )
    {
      if ( i == *v1 - 1 )
        *((_BYTE *)v20 + 105) = 1;
      *((_QWORD *)v20 + 14) = Pool2;
      Pool2 += 64 * (unsigned __int64)v16;
      v20[27] = v16;
      *(_QWORD *)&v18[254 * i + 50] = &v14[112 * i + 20];
    }
  }
  v21 = (char *)v14 + v61;
  v22 = (char *)v14 + 130;
  v23 = v5;
  v24 = (unsigned __int16 *)(v1 + 87);
  v68 = (char *)v14 + 130;
  v25 = (char *)v14 + v69;
  do
  {
    v26 = (__int64)(v22 - 2);
    *(_OWORD *)(v22 + 262) = *(_OWORD *)(v24 - 18);
    *(_QWORD *)(v22 - 66) = *(_QWORD *)(v24 - 10);
    *(_DWORD *)(v22 + 2) = 0;
    *(_WORD *)v22 = 32;
    *((_WORD *)v22 - 1) = 1;
    memset(v22 + 6, 0, 0x100uLL);
    KiCopyAffinityEx(v26, *(_WORD *)v68, v24 - 150);
    v27 = 0LL;
    *(_DWORD *)(v68 - 6) = *(_DWORD *)v24;
    *(_QWORD *)(v68 + 278) = v25;
    v28 = *(unsigned int *)v24;
    v25 += 24 * v28;
    if ( (_DWORD)v28 )
    {
      do
      {
        v29 = 3 * v27;
        v27 = (unsigned int)(v27 + 1);
        *(_QWORD *)(*(_QWORD *)(v68 + 278) + 8 * v29 + 16) = v21;
        v21 += 24 * *((unsigned int *)v24 - 1);
      }
      while ( (unsigned int)v27 < *(_DWORD *)v24 );
    }
    v22 = v68 + 448;
    v24 += 160;
    v68 += 448;
    --v23;
  }
  while ( v23 );
  v1 = a1;
  v8 = v5;
  v30 = 0;
  v31 = (char *)v14 + v62;
  if ( v66 )
  {
    do
    {
      Prcb = KeGetPrcb(v30);
      v33 = 0;
      v34 = *(_QWORD *)(Prcb + 33600);
      *(_QWORD *)(v34 + 1080) = v21;
      v21 += 24 * v5;
      *(_QWORD *)(v34 + 1104) = v31;
      v31 += 4 * v5;
      *(_DWORD *)(v34 + 1072) = v5;
      *(_QWORD *)(v34 + 1048) = (char *)v14 + v63 + v30 * ((4 * (_DWORD)v5 + 15) & 0xFFFFFFF8);
      *(_DWORD *)(v34 + 1088) = v5;
      v35 = v14 + 102;
      do
      {
        v36 = *(_QWORD *)(v34 + 1080);
        v37 = 3LL * ((unsigned int)v5 - v33 - 1);
        *(_DWORD *)(v36 + 8 * v37 + 4) = v33++;
        *(_DWORD *)(v36 + 8 * v37 + 8) = *((_DWORD *)v35 - 71);
        v38 = *v35;
        v35 += 56;
        *(_QWORD *)(v36 + 8 * v37 + 16) = v38;
      }
      while ( v33 < (unsigned int)v5 );
      ++v30;
    }
    while ( v30 < v66 );
    v1 = a1;
    v8 = v5;
  }
LABEL_33:
  v39 = v14 + 19;
  v40 = v1 + 85;
  do
  {
    v41 = 0LL;
    *(v39 - 1) = *(v40 - 1);
    *v39 = *v40;
    for ( *((_BYTE *)v39 + 45) = *((_BYTE *)v40 + 12); (unsigned int)v41 < v40[2]; v41 = (unsigned int)(v41 + 1) )
    {
      v42 = *(_QWORD *)(v39 + 83);
      v43 = 3 * v41;
      v44 = 0LL;
      v45 = *(_QWORD *)(v40 + 5) + 16LL * (unsigned int)v41;
      *(_DWORD *)(v42 + 8 * v43) = *(_DWORD *)v45;
      *(_DWORD *)(v42 + 8 * v43 + 8) = *(_DWORD *)(v45 + 4);
      v46 = *(_DWORD *)(v45 + 4);
      if ( v46 )
      {
        do
        {
          v47 = *(_QWORD *)(v45 + 8);
          v48 = *(_QWORD *)(v42 + 24 * v41 + 16);
          v49 = 3LL * (v46 - (unsigned int)v44 - 1);
          v50 = *(unsigned __int8 *)(v47 + 4 * v44);
          *(_DWORD *)(v48 + 8 * v49 + 4) = v50;
          *(_BYTE *)(v48 + 8 * v49) = *(_BYTE *)(v47 + 4 * v44 + 1) == 0;
          *(_BYTE *)(v48 + 8 * v49 + 1) = *(_BYTE *)(v47 + 4 * v44 + 2);
          *(_BYTE *)(v48 + 8 * v49 + 2) = *(_BYTE *)(v47 + 4 * v44 + 3);
          if ( *(_DWORD *)(v42 + 24 * v41) == -1 )
          {
            v51 = 112LL * v50;
            *(_DWORD *)(v48 + 8 * v49 + 8) = v14[v51 + 31];
            v52 = *(_QWORD *)&v14[v51 + 102];
          }
          else
          {
            *(_DWORD *)(v48 + 8 * v49 + 8) = 0;
            v52 = 0LL;
          }
          *(_QWORD *)(v48 + 8 * v49 + 16) = v52;
          v44 = (unsigned int)(v44 + 1);
          v46 = *(_DWORD *)(v45 + 4);
        }
        while ( (unsigned int)v44 < v46 );
      }
    }
    v39 += 112;
    v40 += 80;
    --v8;
  }
  while ( v8 );
  for ( j = 0; j < v66; ++j )
  {
    v55 = 0;
    for ( k = *(_QWORD *)(KeGetPrcb(j) + 33600); v55 < v64; *(_BYTE *)(v59 + 8 * v60 + 1) = v58 )
    {
      v58 = PpmCheckCoordinatedStateInitiator(
              j,
              *(_DWORD *)(*(_QWORD *)(k + 1080) + 24LL * (v64 - v55 - 1) + 8),
              *(_QWORD *)(*(_QWORD *)(k + 1080) + 24LL * (v64 - v55 - 1) + 16),
              v56);
      ++v55;
    }
  }
  if ( !PpmPlatformStates )
  {
    PpmEnableCoordinatedIdleStates(v14, 1);
    v3 = 0;
  }
  updated = 0;
  if ( v3 )
    goto LABEL_41;
  return (unsigned int)updated;
}
