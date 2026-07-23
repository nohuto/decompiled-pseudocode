/*
 * XREFs of PpmIdleCheckCoordinatedDependencies @ 0x140566220
 * Callers:
 *     PpmIdleCheckCoordinatedDependency @ 0x140566380 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140566650 (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140566380 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleSelectCoordinatedProcessorDependency @ 0x140566F54 (PpmIdleSelectCoordinatedProcessorDependency.c)
 *     PpmTestAndLockProcessor @ 0x140567C6C (PpmTestAndLockProcessor.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedDependencies(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // edi
  __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned int v16; // ecx
  __int64 result; // rax
  __int64 Prcb; // rsi
  int v19; // [rsp+90h] [rbp+18h]

  v19 = a3;
  v10 = 0;
  if ( !a6 )
    return 0LL;
  v14 = a7 + 8;
  v15 = a10;
  while ( 1 )
  {
    v16 = *(_DWORD *)(v14 - 8);
    if ( v16 == -1 )
    {
      result = PpmIdleCheckCoordinatedDependency(a1, a2, a4, a5, a3, v14, a8, a9, v15);
    }
    else if ( v16 == *(_DWORD *)(a1 + 36) )
    {
      result = PpmIdleSelectCoordinatedProcessorDependency(a1, a2, a4, a5, v14, a8);
    }
    else
    {
      Prcb = KeGetPrcb(v16);
      if ( (int)PpmTestAndLockProcessor(Prcb, a10, v14) >= 0 )
        result = *(_BYTE *)(PpmPlatformStates + 12)
              && *(_DWORD *)(248LL * *(unsigned int *)(Prcb + 32820) + *(_QWORD *)(Prcb + 0x8000) + 1000) > a4
               ? 2147483650LL
               : 0LL;
      else
        result = 2147483653LL;
      v15 = a10;
    }
    if ( result )
      break;
    a3 = v19;
    ++v10;
    v14 += 24LL;
    if ( v10 >= a6 )
      return 0LL;
  }
  return result;
}
