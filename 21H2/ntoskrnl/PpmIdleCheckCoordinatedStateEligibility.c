/*
 * XREFs of PpmIdleCheckCoordinatedStateEligibility @ 0x140566650
 * Callers:
 *     PpmIdleSelectStates @ 0x1403956D0 (PpmIdleSelectStates.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140566380 (PpmIdleCheckCoordinatedDependency.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x140513880 (KeIsSubsetAffinityEx.c)
 *     PpmCheckIdleVeto @ 0x140565A08 (PpmCheckIdleVeto.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x140566220 (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x140566F0C (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1405673C4 (PpmIdleWaitForDependentTransitions.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedStateEligibility(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v9; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rbx
  unsigned int v16; // eax
  int v17; // r8d
  unsigned __int64 v18; // r9
  int v19; // r10d
  unsigned int v21; // [rsp+B0h] [rbp+28h]

  v9 = PpmPlatformStates;
  v12 = *(_QWORD *)(a1 + 0x8000);
  v13 = 384LL * a5;
  v14 = v12 + 240;
  v21 = *(_DWORD *)(a8 + 4);
  if ( *(_BYTE *)(v13 + PpmPlatformStates + 121) )
  {
    if ( !*(_BYTE *)(v12 + 540) )
    {
      v15 = *(_BYTE *)(a1 + 33) != 0 ? 0xFFFFFFFFLL : 2147483660LL;
LABEL_21:
      PpmIdleRollbackCoordinatedSelection(a8, v21);
      return v15;
    }
  }
  else if ( !(unsigned int)KeIsSubsetAffinityEx(
                             (unsigned __int16 *)(v13 + PpmPlatformStates + 128),
                             (unsigned __int16 *)(v12 + 576)) )
  {
LABEL_5:
    v15 = 0xFFFFFFFFLL;
    goto LABEL_21;
  }
  if ( _InterlockedCompareExchange(
         (volatile signed __int32 *)(v13 + v9 + 320),
         (a6 << 27) | KeGetPcr()->Prcb.Number & 0xFFF | 0x1000000,
         0) )
  {
    goto LABEL_5;
  }
  *(_DWORD *)(*(_QWORD *)(a8 + 16) + 4LL * (unsigned int)(*(_DWORD *)(a8 + 4))++) = a5;
  v16 = PpmCheckIdleVeto(v13 + v9 + 80);
  if ( v16 )
  {
    v15 = v16 | 0x100000000LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v13 + v9 + 72) > a3 )
  {
    v15 = 2147483650LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v13 + v9 + 384) )
    goto LABEL_20;
  if ( *(unsigned int *)(v13 + v9 + 76) > v18 )
  {
    v15 = 2147483651LL;
    goto LABEL_21;
  }
  v15 = PpmIdleCheckCoordinatedDependencies(
          a1,
          v19,
          v17,
          a3 - *(_DWORD *)(v13 + v9 + 72),
          v18,
          *(_DWORD *)(v13 + v9 + 124),
          *(_QWORD *)(v13 + v9 + 312),
          (__int64)a7,
          a8,
          v14);
  if ( v15 )
    goto LABEL_21;
  if ( *a7 == -1 )
  {
    v15 = 2147483649LL;
    goto LABEL_21;
  }
  if ( (int)PpmIdleWaitForDependentTransitions(v14) < 0 )
  {
    v15 = 2147483653LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v13 + v9 + 384) )
  {
LABEL_20:
    v15 = 2147483652LL;
    goto LABEL_21;
  }
  return v15;
}
