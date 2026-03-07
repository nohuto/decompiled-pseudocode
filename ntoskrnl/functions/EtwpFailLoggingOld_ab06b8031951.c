void __fastcall EtwpFailLoggingOld(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        __int16 *a7,
        char a8,
        unsigned int a9,
        __int64 a10,
        char a11)
{
  __int64 v11; // r15
  unsigned int v13; // esi
  unsigned __int8 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int16 *v18; // rdi
  unsigned __int8 v19; // si
  bool i; // zf
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v27; // [rsp+88h] [rbp+10h]

  v27 = a2;
  v11 = *(_QWORD *)(a3 + 392);
  v13 = 0;
  v15 = a1;
  if ( *(_DWORD *)(a4 + 384) )
  {
    v16 = 0LL;
    do
    {
      v17 = 6 * v16;
      v18 = *(unsigned __int16 **)(a4 + 48 * v16);
      if ( (*((_DWORD *)v18 + 3) & 0x8000000) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(a4 + 48 * v16 + 8) + 2LL) = -16371;
        EtwpUpdateEventsLostCount((__int64)v18);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEventOld((_QWORD *)(a3 + 40), a7, v18 + 68, a6, a9, a10, a8, a11);
      }
      EtwpReleaseTraceBuffer((signed __int64 *)(a4 + 16 + 8 * v17));
      if ( a8 )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v11 + 448) + 8LL * *(unsigned int *)v18),
          1u);
      v16 = ++v13;
    }
    while ( v13 < *(_DWORD *)(a4 + 384) );
    a2 = v27;
    v15 = a1;
  }
  v19 = a5;
  for ( i = !_BitScanForward((unsigned int *)&v21, a5); !i; i = !_BitScanForward((unsigned int *)&v21, v19) )
  {
    v19 &= v19 - 1;
    if ( EtwpLevelKeywordEnabled(a3 + 32 * (v21 + 4), v15, a2) )
    {
      v23 = *(unsigned __int16 *)(v22 + 6);
      v24 = v23;
      if ( !a8
        || ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v11 + 448) + 8 * v23),
             1u) )
      {
        if ( (unsigned int)v23 < *(_DWORD *)(v11 + 16) )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(v11 + 456) + 8 * v23);
          if ( (v25 & 1) == 0 )
          {
            EtwpUpdateEventsLostCount(v25);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
              EtwpTraceLostEventOld((_QWORD *)(a3 + 40), a7, (unsigned __int16 *)(v25 + 136), a6, a9, a10, a8, a11);
          }
        }
        if ( a8 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v11 + 448) + 8 * v24), 1u);
      }
    }
    a2 = v27;
    v15 = a1;
  }
}
