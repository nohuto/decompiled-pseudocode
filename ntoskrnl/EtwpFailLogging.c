/*
 * XREFs of EtwpFailLogging @ 0x1402FABEC
 * Callers:
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpReleaseTraceBuffer @ 0x140205BD8 (EtwpReleaseTraceBuffer.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x140231970 (EtwpLevelKeywordEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14028DD10 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpUpdateEventsLostCount @ 0x1402FAD84 (EtwpUpdateEventsLostCount.c)
 *     EtwpTraceLostEvent @ 0x1405F9F94 (EtwpTraceLostEvent.c)
 */

void __fastcall EtwpFailLogging(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        char a7,
        __int64 a8,
        char a9,
        int a10,
        __int64 a11,
        char a12)
{
  __int64 v12; // r15
  unsigned int v14; // esi
  unsigned __int8 v16; // r9
  unsigned __int8 v17; // si
  bool i; // zf
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned int *v26; // rdi
  __int64 v28; // [rsp+98h] [rbp+10h]

  v28 = a2;
  v12 = *(_QWORD *)(a3 + 392);
  v14 = 0;
  v16 = a1;
  if ( *(_DWORD *)(a4 + 384) )
  {
    v24 = 0LL;
    do
    {
      v25 = 6 * v24;
      v26 = *(unsigned int **)(a4 + 48 * v24);
      if ( (v26[3] & 0x8000000) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(a4 + 48 * v24 + 8) + 2LL) = -16371;
        EtwpUpdateEventsLostCount(v26);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(a3 + 40, a8, (_DWORD)v26 + 136, a6, a7, a10, a11, a9, a12);
      }
      EtwpReleaseTraceBuffer((signed __int64 *)(a4 + 16 + 8 * v25));
      if ( a9 )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 448) + 8LL * *v26),
          1u);
      v24 = ++v14;
    }
    while ( v14 < *(_DWORD *)(a4 + 384) );
    a2 = v28;
    v16 = a1;
  }
  v17 = a5;
  for ( i = !_BitScanForward((unsigned int *)&v19, a5); !i; i = !_BitScanForward((unsigned int *)&v19, v17) )
  {
    v17 &= v17 - 1;
    if ( EtwpLevelKeywordEnabled(a3 + 32 * (v19 + 4), v16, a2) )
    {
      v21 = *(unsigned __int16 *)(v20 + 6);
      v22 = v21;
      if ( !a9
        || ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 448) + 8 * v21),
             1u) )
      {
        if ( (unsigned int)v21 < *(_DWORD *)(v12 + 16) )
        {
          v23 = *(_QWORD *)(*(_QWORD *)(v12 + 456) + 8 * v21);
          if ( (v23 & 1) == 0 )
          {
            EtwpUpdateEventsLostCount(v23);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
              EtwpTraceLostEvent(a3 + 40, a8, v23 + 136, a6, a7, a10, a11, a9, a12);
          }
        }
        if ( a9 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 448) + 8 * v22), 1u);
      }
    }
    a2 = v28;
    v16 = a1;
  }
}
