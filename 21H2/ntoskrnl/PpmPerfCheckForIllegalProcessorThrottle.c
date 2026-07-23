/*
 * XREFs of PpmPerfCheckForIllegalProcessorThrottle @ 0x140225EE4
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402C54D0 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140572E14 (PopDiagTraceIllegalProcessorThrottle.c)
 */

void __fastcall PpmPerfCheckForIllegalProcessorThrottle(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  void (__fastcall *v4)(__int64 *); // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( PopProcessorThrottleLogInterval )
  {
    v2 = *(_QWORD *)(a1 + 33128);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 33136);
      if ( v3 )
      {
        v4 = *(void (__fastcall **)(__int64 *))(v2 + 224);
        if ( v4 )
        {
          if ( *(_BYTE *)(a1 + 33008) )
          {
            v4(&v6);
            if ( *(_DWORD *)(v3 + 72) < *(_DWORD *)(v2 + 324) )
            {
              *(_BYTE *)(a1 + 33016) = 0;
            }
            else if ( *(_BYTE *)(a1 + 33016) )
            {
              if ( *(_QWORD *)(a1 + 33024) != v6 )
              {
                v5 = (unsigned int)++*(_DWORD *)(a1 + 33012);
                if ( !(*(_DWORD *)(a1 + 33012) % (unsigned int)PopProcessorThrottleLogInterval) || (_DWORD)v5 == 1 )
                {
                  LODWORD(v5) = KeGetPcr()->Prcb.Number;
                  PopDiagTraceIllegalProcessorThrottle(v5, v6, a1 + 33032);
                }
              }
            }
            else
            {
              *(_BYTE *)(a1 + 33016) = 1;
            }
            *(_QWORD *)(a1 + 33024) = v6;
          }
        }
      }
    }
  }
}
