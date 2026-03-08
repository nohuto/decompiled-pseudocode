/*
 * XREFs of EtwInitialize @ 0x14080AAA4
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1408174BC (CmCompleteRegistryInitialization.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     EtwpBuffersFlushRequired @ 0x1402052DC (EtwpBuffersFlushRequired.c)
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     KeInsertQueueDpc @ 0x140230290 (KeInsertQueueDpc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14028DD10 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 */

void __fastcall EtwInitialize(unsigned int a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx

  if ( a2 && (v3 = *(_QWORD *)(a2 + 240)) != 0 && *(_QWORD *)(v3 + 3680) && *(_QWORD *)(v3 + 3688) )
    v4 = v3 + 3672;
  else
    v4 = 0LL;
  if ( a1 )
  {
    if ( a1 < 3 )
    {
      while ( (unsigned __int8)EtwpBootPhase <= a1 )
        EtwpInitialize((unsigned __int8)EtwpBootPhase, a1, v4);
    }
    else if ( a1 == 3 )
    {
      v5 = EtwpHostSiloState;
      v6 = 0LL;
      ++EtwpBootPhase;
      if ( *(_DWORD *)(EtwpHostSiloState + 16) )
      {
        do
        {
          if ( ExAcquireRundownProtectionCacheAwareEx(
                 *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v5 + 448) + 8 * v6),
                 1u) )
          {
            if ( (unsigned int)v6 < *(_DWORD *)(EtwpHostSiloState + 16) )
            {
              v7 = *(_QWORD *)(EtwpHostSiloState + 456);
              v8 = *(_QWORD *)(v7 + 8 * v6);
              if ( (v8 & 1) == 0
                && (*(_DWORD *)(v8 + 12) & 0x400) == 0
                && EtwpBuffersFlushRequired(*(_DWORD **)(v7 + 8 * v6)) )
              {
                if ( ObGetCurrentIrql() > 2u )
                {
                  if ( !_interlockedbittestandset((volatile signed __int32 *)(v8 + 824), 8u) )
                    KeInsertQueueDpc((PRKDPC)(v8 + 568), 0LL, 0LL);
                }
                else
                {
                  KeSetEvent((PRKEVENT)(v8 + 480), 0, 0);
                }
              }
            }
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(EtwpHostSiloState + 448) + 8 * v6),
              1u);
          }
          v5 = EtwpHostSiloState;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < *(_DWORD *)(EtwpHostSiloState + 16) );
      }
    }
  }
  else if ( v4 && *(_QWORD *)(v4 + 8) != v4 + 8 )
  {
    EtwpInitialize((unsigned __int8)EtwpBootPhase, 0LL, v4);
  }
}
