/*
 * XREFs of HalpTscAdvSynchTarget @ 0x140388384
 * Callers:
 *     HalpTscSynchronizationWorker @ 0x140387F60 (HalpTscSynchronizationWorker.c)
 * Callees:
 *     HalpTscAdvSynchComputeMinimumDeltaAlternate @ 0x140388478 (HalpTscAdvSynchComputeMinimumDeltaAlternate.c)
 *     HalpTscAdvSynchSkewCounter @ 0x140507EF0 (HalpTscAdvSynchSkewCounter.c)
 */

__int64 HalpTscAdvSynchTarget()
{
  __int64 i; // rbx
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int64 result; // rax
  unsigned __int64 v10; // rax
  int v11; // r8d
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  for ( i = (__int64)(int)KeGetCurrentPrcb()->Number << 7; ; *(_DWORD *)(i + TscRequest) = 0 )
  {
    while ( 1 )
    {
      v1 = *(_DWORD *)(i + TscRequest);
      if ( v1 )
        break;
      _mm_pause();
    }
    v2 = v1 - 1;
    if ( !v2 )
    {
      _InterlockedOr(v12, 0);
      HalpTscAdvSynchSkewCounter(*(_QWORD *)(i + TscRequest + 8));
      goto LABEL_10;
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
      _InterlockedOr(v12, 0);
      if ( *(_DWORD *)(i + TscRequest + 4) )
      {
        do
          HalpTscAdvSynchSkewCounter(*(_QWORD *)(i + TscRequest + 8));
        while ( v11 != 1 );
      }
      goto LABEL_10;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      _InterlockedOr(v12, 0);
      __writemsr(0x3Bu, *(_QWORD *)(i + TscRequest + 8) + __readmsr(0x3Bu));
      goto LABEL_10;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      _InterlockedOr(v12, 0);
      v6 = TscRequest;
      *(_DWORD *)(i + TscRequest) = 5;
      v7 = HalpTscAdvSynchComputeMinimumDeltaAlternate(
             *(_QWORD *)(i + TscRequest + 16),
             *(_QWORD *)(((unsigned __int64)*(unsigned int *)(i + v6 + 4) << 7) + TscRequest + 16));
LABEL_9:
      *(_QWORD *)(i + TscRequest + 8) = v7;
      goto LABEL_10;
    }
    v8 = v5 - 2;
    if ( !v8 )
    {
      v10 = __readcr2();
      __writecr2(v10);
      v7 = __rdtsc();
      goto LABEL_9;
    }
    if ( v8 == 1 )
      break;
LABEL_10:
    _InterlockedOr(v12, 0);
  }
  _InterlockedOr(v12, 0);
  result = TscRequest;
  *(_DWORD *)(i + TscRequest) = 0;
  return result;
}
