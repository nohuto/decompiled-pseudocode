__int64 __fastcall HalpTscAdvSynchToTarget(unsigned int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned int i; // edi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // r14
  unsigned int v10; // ebp
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-28h]

  if ( !HalpTscAdjustAvailable )
    HalpTscAdvSynchSkewCounter(0LL);
  v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, 0LL);
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  if ( !HalpTscAdjustAvailable )
  {
    for ( i = 0; i < HalpTscSyncRecalculateSkews; ++i )
    {
      v5 = v3;
      v6 = v2;
      do
        HalpTscAdvSynchSkewCounter(0LL);
      while ( v7 != 1 );
      v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, 0LL);
      v3 = (v2 - v6) / 100;
      if ( v3 >= v5 )
        v3 = v5;
    }
    *(_DWORD *)(HalpTscSkewOffset + 4LL * KeGetCurrentPrcb()->Number) = v3;
  }
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  do
  {
    if ( !v8 )
    {
      if ( HalpTscAdjustAvailable )
      {
        v9 = v2;
        __writemsr(0x3Bu, v2 + __readmsr(0x3Bu));
      }
      else
      {
        v9 = v3 + v2;
        HalpTscAdvSynchSkewCounter(v3 + v2);
      }
    }
    v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, 0LL);
    if ( !v8 )
    {
      LODWORD(v12) = v10;
      HalpTscTraceProcessorSynchronization(a1, KeGetCurrentPrcb()->Number, v2, v9, v12);
    }
    ++v8;
    if ( (unsigned __int64)(v2 + 24) > 0x30 )
      v8 = 0;
    ++v10;
  }
  while ( v10 < 0x32 && v8 < 2 );
  result = HalpTscWaves;
  *(_DWORD *)(HalpTscWaves + 4LL * KeGetCurrentPrcb()->Number) = v10;
  return result;
}
