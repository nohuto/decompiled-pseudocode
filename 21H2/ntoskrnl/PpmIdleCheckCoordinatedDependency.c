/*
 * XREFs of PpmIdleCheckCoordinatedDependency @ 0x140566380
 * Callers:
 *     PpmIdleCheckCoordinatedDependencies @ 0x140566220 (PpmIdleCheckCoordinatedDependencies.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x140566220 (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140566650 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x140566F0C (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleTransitionStall @ 0x1405671D8 (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x140567C6C (PpmTestAndLockProcessor.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedDependency(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r10
  unsigned int v10; // r11d
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  char v14; // r12
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned int v21; // eax
  unsigned int v22; // r9d
  __int64 Prcb; // rax
  unsigned int v25; // [rsp+58h] [rbp-51h]
  int v26; // [rsp+5Ch] [rbp-4Dh] BYREF
  unsigned int v27; // [rsp+60h] [rbp-49h] BYREF
  int v28; // [rsp+64h] [rbp-45h]
  __int128 v29; // [rsp+68h] [rbp-41h] BYREF
  __int64 v30; // [rsp+78h] [rbp-31h]
  _QWORD v31[13]; // [rsp+80h] [rbp-29h] BYREF

  v26 = -1;
  v27 = 0;
  v9 = a1;
  v25 = 0;
  v10 = a3;
  v11 = a6;
  v30 = 0LL;
  v12 = 2147483649LL;
  v13 = *(unsigned int *)(a1 + 36);
  v29 = 0LL;
  v14 = (*(_QWORD *)(PpmPlatformStates
                   + 8
                   * (48LL * *(unsigned int *)(*(_QWORD *)(a6 + 8) + 4LL)
                    + ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v13] >> 6))
                   + 136) >> (KiProcessorIndexToNumberMappingTable[v13] & 0x3F)) & 1;
  v15 = 0LL;
  v28 = 0;
  if ( !*(_DWORD *)a6 )
    return v12;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v11 + 8);
    v17 = 3 * v15;
    v18 = PpmPlatformStates;
    v19 = *(unsigned int *)(v16 + 24 * v15 + 4);
    v20 = 384 * v19;
    if ( v14 )
    {
      v25 = *(_DWORD *)(a8 + 4);
      if ( !*(_BYTE *)(v16 + 24 * v15 + 1) )
        goto LABEL_25;
      v26 = -1;
      v12 = PpmIdleCheckCoordinatedStateEligibility(v9, a2, v10, a4, v19, a5, (__int64)&v26, a8);
      if ( !v12 )
        goto LABEL_17;
LABEL_23:
      PpmIdleRollbackCoordinatedSelection(a8, v25);
      goto LABEL_24;
    }
    if ( !*(_BYTE *)(v16 + 24 * v15 + 2) )
      goto LABEL_25;
    v21 = *(_DWORD *)(v20 + PpmPlatformStates + 320);
    if ( (v21 & 0x4000000) == 0 )
    {
      v31[3] = 0x100000000LL;
      v31[0] = 0LL;
      v31[1] = PopIdleTransitionTimeout;
      v31[2] = 0LL;
      if ( (v21 & 0x3000000) == 0x1000000 )
      {
        do
        {
          if ( v21 >> 27 > a5 )
            break;
          PpmIdleTransitionStall(v31);
          v21 = *(_DWORD *)(v20 + v18 + 320);
        }
        while ( (v21 & 0x3000000) == 0x1000000 );
        v9 = a1;
        v10 = a3;
        v11 = a6;
      }
      if ( (v21 & 0x4000000) == 0 )
      {
        v12 = 2147483659LL;
        goto LABEL_25;
      }
    }
    v22 = *(_DWORD *)(v20 + v18 + 72);
    if ( v22 <= v10 )
      break;
    v12 = 2147483650LL;
LABEL_24:
    v11 = a6;
LABEL_25:
    v15 = (unsigned int)(v28 + 1);
    v28 = v15;
    if ( (unsigned int)v15 >= *(_DWORD *)v11 )
      return v12;
    v9 = a1;
    v10 = a3;
  }
  v12 = PpmIdleCheckCoordinatedDependencies(
          v9,
          a2,
          a5,
          v22 - v10,
          a4,
          *(_DWORD *)(v16 + 8 * v17 + 8),
          *(_QWORD *)(v16 + 8 * v17 + 16),
          0LL,
          0LL,
          a9);
  if ( v12 )
    goto LABEL_24;
LABEL_17:
  if ( *(_BYTE *)(v16 + 8 * v17) )
  {
    LOWORD(v30) = 0;
    v12 = 0LL;
    *((_QWORD *)&v29 + 1) = *(_QWORD *)(v20 + v18 + 128 + 8);
    *(_QWORD *)&v29 = v20 + v18 + 128;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v27, (unsigned __int16 **)&v29) )
    {
      Prcb = KeGetPrcb(v27);
      if ( a1 != Prcb && (int)PpmTestAndLockProcessor(Prcb, a9, 0LL) < 0 )
      {
        v12 = 2147483653LL;
        if ( !v14 )
          goto LABEL_24;
        goto LABEL_23;
      }
    }
  }
  if ( v14 )
    *a7 = v26;
  return v12;
}
