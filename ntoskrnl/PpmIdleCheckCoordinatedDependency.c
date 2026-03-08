/*
 * XREFs of PpmIdleCheckCoordinatedDependency @ 0x1405821CC
 * Callers:
 *     PpmIdleCheckCoordinatedDependencies @ 0x14058205C (PpmIdleCheckCoordinatedDependencies.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x14058205C (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140582574 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x140582F8C (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleTransitionStall @ 0x1405831B0 (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x140583A5C (PpmTestAndLockProcessor.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedDependency(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int *a8,
        __int64 a9,
        __int64 a10,
        unsigned __int64 *a11)
{
  __int64 v11; // rsi
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // r8
  char v16; // dl
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r14
  unsigned int v24; // eax
  unsigned int v25; // r9d
  __int64 v26; // rax
  __int64 Prcb; // rax
  int v28; // eax
  unsigned __int64 v29; // rcx
  unsigned int v31; // [rsp+68h] [rbp-51h]
  int v32; // [rsp+6Ch] [rbp-4Dh] BYREF
  unsigned int v33; // [rsp+70h] [rbp-49h] BYREF
  int v34; // [rsp+74h] [rbp-45h]
  unsigned __int64 v35; // [rsp+78h] [rbp-41h] BYREF
  __int128 v36; // [rsp+80h] [rbp-39h] BYREF
  __int64 v37; // [rsp+90h] [rbp-29h]
  _QWORD v38[12]; // [rsp+98h] [rbp-21h] BYREF
  char v43; // [rsp+158h] [rbp+9Fh]

  v32 = -1;
  v11 = a7;
  v35 = 0LL;
  v37 = 0LL;
  v33 = 0;
  *a11 = -1LL;
  v31 = 0;
  v13 = *(_QWORD *)(a7 + 8);
  v36 = 0LL;
  v14 = KeCheckProcessorAffinityEx(
          (unsigned __int16 *)(448LL * *(unsigned int *)(v13 + 4) + PpmPlatformStates + 128),
          *(_DWORD *)(a1 + 36));
  v15 = 0LL;
  v43 = v14;
  v16 = v14;
  v17 = 0LL;
  v18 = 2147483649LL;
  v34 = 0;
  if ( !*(_DWORD *)a7 )
    return v18;
  while ( 1 )
  {
    v19 = *(_QWORD *)(v11 + 8);
    v20 = 3 * v17;
    v21 = PpmPlatformStates;
    v22 = *(unsigned int *)(v19 + 24 * v17 + 4);
    v23 = 448 * v22;
    if ( !v16 )
      break;
    v31 = *(_DWORD *)(a9 + 4);
    if ( *(_BYTE *)(v19 + 24 * v17 + 1) != (_BYTE)v15 )
    {
      v32 = -1;
      v18 = PpmIdleCheckCoordinatedStateEligibility(a1, a2, a3, a4, a5, v22, a6, (__int64)&v32, a9, (__int64)&v35);
      if ( !v18 )
        goto LABEL_17;
LABEL_23:
      PpmIdleRollbackCoordinatedSelection(a9, v31, 0LL);
      goto LABEL_24;
    }
LABEL_25:
    v11 = a7;
    v17 = (unsigned int)(v34 + 1);
    v34 = v17;
    if ( (unsigned int)v17 >= *(_DWORD *)a7 )
      return v18;
  }
  if ( *(_BYTE *)(v19 + 24 * v17 + 2) == (_BYTE)v15 )
    goto LABEL_25;
  v24 = *(_DWORD *)(v23 + PpmPlatformStates + 416);
  if ( (v24 & 0x4000000) == 0 )
  {
    v38[3] = 0x100000000LL;
    v38[0] = 0LL;
    v38[1] = PopIdleTransitionTimeout;
    v38[2] = v15;
    if ( (v24 & 0x3000000) == 0x1000000 )
    {
      do
      {
        if ( v24 >> 27 > a6 )
          break;
        PpmIdleTransitionStall(v38);
        v24 = *(_DWORD *)(v23 + v21 + 416);
      }
      while ( (v24 & 0x3000000) == 0x1000000 );
      v16 = v43;
      v15 = 0LL;
    }
    if ( (v24 & 0x4000000) == 0 )
    {
      v18 = 2147483659LL;
      goto LABEL_25;
    }
  }
  v25 = *(_DWORD *)(v23 + v21 + 72);
  if ( v25 > a3 )
  {
    v18 = 2147483650LL;
    goto LABEL_25;
  }
  v26 = PpmIdleCheckCoordinatedDependencies(
          a1,
          a2,
          a6,
          v25 - a3,
          a4,
          a5,
          *(_DWORD *)(v19 + 8 * v20 + 8),
          *(_QWORD *)(v19 + 8 * v20 + 16),
          v15,
          v15,
          a10,
          &v35);
  v15 = 0LL;
  v18 = v26;
  if ( v26 )
  {
LABEL_24:
    v16 = v43;
    goto LABEL_25;
  }
LABEL_17:
  if ( *(_BYTE *)(v19 + 8 * v20) )
  {
    LOWORD(v37) = 0;
    v18 = 0LL;
    *((_QWORD *)&v36 + 1) = *(_QWORD *)(v23 + v21 + 128 + 8);
    *(_QWORD *)&v36 = v23 + v21 + 128;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v33, (unsigned __int16 **)&v36) )
    {
      Prcb = KeGetPrcb(v33);
      if ( a1 != Prcb )
      {
        v28 = PpmTestAndLockProcessor(Prcb, a10, 0LL);
        v15 = 0LL;
        if ( v28 < 0 )
        {
          v16 = v43;
          v18 = 2147483653LL;
          if ( !v43 )
            goto LABEL_25;
          goto LABEL_23;
        }
      }
    }
  }
  if ( v43 )
    *a8 = v32;
  v29 = v35;
  if ( *a11 < v35 )
    v29 = *a11;
  *a11 = v29;
  return v18;
}
