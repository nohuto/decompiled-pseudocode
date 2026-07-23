/*
 * XREFs of PpmTestAndLockProcessor @ 0x140567C6C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x140566220 (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140566380 (PpmIdleCheckCoordinatedDependency.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     PpmIdleLockProcessor @ 0x140566CDC (PpmIdleLockProcessor.c)
 *     PpmIdleTransitionStall @ 0x1405671D8 (PpmIdleTransitionStall.c)
 */

__int64 __fastcall PpmTestAndLockProcessor(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int32 *v3; // r13
  unsigned __int32 v4; // eax
  __int64 v5; // rbp
  _WORD *v7; // r11
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  __int64 i; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  _QWORD v17[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (unsigned __int32 *)(a1 + 32832);
  v4 = *(_DWORD *)(a1 + 32832);
  v5 = 0LL;
  v17[3] = 0x100000000LL;
  v17[2] = a1;
  v7 = a2;
  v17[0] = 0LL;
  v17[1] = PopIdleTransitionTimeout;
  if ( (v4 & 0xFF000000) == 0x2000000 )
  {
    do
    {
      PpmIdleTransitionStall((__int64)v17);
      v4 = *v3;
    }
    while ( (*v3 & 0xFF000000) == 0x2000000 );
    v7 = a2;
  }
  v9 = -1073741782;
  if ( HIBYTE(v4) - 3 <= 2u )
  {
    if ( a3 )
    {
      v10 = *(_DWORD *)a3;
      for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
      {
        v5 = *(_QWORD *)(a3 + 8) + 24 * i;
        if ( *(_DWORD *)(v5 + 4) == *(_DWORD *)(a1 + 32820) )
          break;
      }
      if ( (_DWORD)i == v10 || !*(_BYTE *)(v5 + 2) )
        return v9;
      if ( !*(_BYTE *)v5 )
        return 0;
    }
    v12 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
    v13 = *(_QWORD *)&v7[4 * (v12 >> 6) + 4] >> (v12 & 0x3F);
    if ( (v13 & 1) != 0 )
      return 0;
    LODWORD(v13) = KeGetPcr()->Prcb.Number;
    v14 = *(_QWORD *)(a1 + 0x8000);
    v15 = (unsigned int)v13;
    _InterlockedOr64(
      (volatile signed __int64 *)(v14
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v13] >> 6)
                                + 80),
      1LL << (KiProcessorIndexToNumberMappingTable[v13] & 0x3F));
    v9 = PpmIdleLockProcessor(v3);
    if ( (v9 & 0x80000000) != 0 )
    {
      _InterlockedAnd64(
        (volatile signed __int64 *)(v14
                                  + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v15] >> 6)
                                  + 80),
        ~(1LL << (KiProcessorIndexToNumberMappingTable[v15] & 0x3F)));
      return v9;
    }
    KeAddProcessorAffinityEx(a2, *(_DWORD *)(a1 + 36));
    if ( !a3 || *(_DWORD *)(v5 + 4) == *(_DWORD *)(a1 + 32820) )
      return 0;
  }
  return v9;
}
