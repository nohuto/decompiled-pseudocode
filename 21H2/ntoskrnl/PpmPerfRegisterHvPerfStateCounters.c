/*
 * XREFs of PpmPerfRegisterHvPerfStateCounters @ 0x1408F6AE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x1404F2110 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1404F81B4 (HvlRegisterPerfFeedbackCounters.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 */

__int64 __fastcall PpmPerfRegisterHvPerfStateCounters(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // r14
  __int64 v3; // r13
  unsigned int v4; // r12d
  unsigned int v5; // esi
  __int64 i; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  int v9; // ecx
  unsigned int v10; // ebx
  int LpIndexFromProcessorIndex; // r15d

  if ( (HvlEnlightenments & 0x400) == 0 )
    return (unsigned int)-1073741637;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(v2 + 16);
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v5 = 0;
  if ( !v4 )
    return (unsigned int)PpmRegisterPerfStates(v2, 1);
  for ( i = 0LL; ; i += 32LL )
  {
    v7 = *(_QWORD *)(v2 + 416);
    v8 = 0LL;
    v9 = *(_DWORD *)(i + v7 + 28);
    if ( v9 == 2 )
      goto LABEL_15;
    v10 = *(_DWORD *)(i + v7);
    if ( v9 == 1 )
    {
      LpIndexFromProcessorIndex = *(_DWORD *)(i + v7);
      goto LABEL_10;
    }
    if ( v10 == -1 )
      break;
    LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(v10);
    v8 = KeGetPrcb(v10) + 0x8000;
LABEL_10:
    if ( v3 )
    {
      if ( LpIndexFromProcessorIndex != -1 )
      {
        v1 = HvlRegisterPerfFeedbackCounters(LpIndexFromProcessorIndex, (__int128 *)(v3 + 104LL * v5));
        if ( v1 < 0 )
          goto LABEL_19;
      }
    }
    if ( v8 )
      *(_DWORD *)(v8 + 216) = 3;
LABEL_15:
    if ( ++v5 >= v4 )
      return (unsigned int)PpmRegisterPerfStates(v2, 1);
  }
  v1 = -1073741811;
LABEL_19:
  PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)v1;
}
