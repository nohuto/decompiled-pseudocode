/*
 * XREFs of HalpTscAdvSynchToLeader @ 0x140388164
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x140387D38 (HalpTscAdvSynchLeader.c)
 * Callees:
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x14038829C (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     HalpTscTraceProcessorSynchronization @ 0x1403884E4 (HalpTscTraceProcessorSynchronization.c)
 */

__int64 __fastcall HalpTscAdvSynchToLeader(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v2; // r15
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned int v9; // r12d
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r14
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF

  v1 = a1;
  if ( !HalpTscAdjustAvailable )
  {
    *(_QWORD *)(((unsigned __int64)a1 << 7) + TscRequest + 8) = 0LL;
    _InterlockedOr(v15, 0);
    _InterlockedExchange((volatile __int32 *)(((unsigned __int64)a1 << 7) + TscRequest), 1);
    while ( *(_DWORD *)(((unsigned __int64)a1 << 7) + TscRequest) == 1 )
      _mm_pause();
  }
  v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, 0LL);
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  if ( !HalpTscAdjustAvailable )
  {
    v9 = 0;
    if ( HalpTscSyncRecalculateSkews )
    {
      v10 = v1 << 7;
      do
      {
        v11 = TscRequest;
        v12 = v3;
        *(_QWORD *)(v10 + TscRequest + 8) = 0LL;
        *(_DWORD *)(v10 + v11 + 4) = 100;
        _InterlockedOr(v15, 0);
        _InterlockedExchange((volatile __int32 *)(v10 + TscRequest), 2);
        while ( *(_DWORD *)(v10 + TscRequest) == 2 )
          _mm_pause();
        v13 = HalpTscAdvSynchCalculateRemoteDelta((unsigned int)v1, 0LL);
        v14 = v2 - v13;
        v2 = v13;
        v3 = v14 / 100;
        if ( v14 / 100 >= v12 )
          v3 = v12;
        ++v9;
      }
      while ( v9 < HalpTscSyncRecalculateSkews );
    }
    *(_DWORD *)(HalpTscSkewOffset + 4 * v1) = v3;
  }
  v4 = 0;
  LODWORD(v5) = 0;
  v6 = 0;
  do
  {
    if ( !v4 )
    {
      v5 = -v2;
      v7 = v1 << 7;
      if ( HalpTscAdjustAvailable )
      {
        *(_QWORD *)(v7 + TscRequest + 8) = v5;
        _InterlockedOr(v15, 0);
        _InterlockedExchange((volatile __int32 *)(v7 + TscRequest), 3);
        while ( *(_DWORD *)(v7 + TscRequest) == 3 )
          _mm_pause();
      }
      else
      {
        LODWORD(v5) = v3 - v2;
        *(_QWORD *)(v7 + TscRequest + 8) = v3 - v2;
        _InterlockedOr(v15, 0);
        _InterlockedExchange((volatile __int32 *)(v7 + TscRequest), 1);
        while ( *(_DWORD *)(v7 + TscRequest) == 1 )
          _mm_pause();
      }
    }
    v2 = HalpTscAdvSynchCalculateRemoteDelta((unsigned int)v1, 0LL);
    if ( !v4 )
      HalpTscTraceProcessorSynchronization(KeGetCurrentPrcb()->Number, v1, v2, v5, v6);
    ++v4;
    if ( (unsigned __int64)(v2 + 24) > 0x30 )
      v4 = 0;
    ++v6;
  }
  while ( v4 < 2 && v6 < 0x32 );
  result = HalpTscWaves;
  *(_DWORD *)(HalpTscWaves + 4 * v1) = v6;
  return result;
}
