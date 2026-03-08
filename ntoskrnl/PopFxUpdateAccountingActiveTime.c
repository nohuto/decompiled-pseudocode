/*
 * XREFs of PopFxUpdateAccountingActiveTime @ 0x140306C00
 * Callers:
 *     PopFxUpdateComponentAccountingEnhanced @ 0x1402F28E0 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopFxIdleWorkerTail @ 0x140306748 (PopFxIdleWorkerTail.c)
 *     PopFxPauseDeviceAccounting @ 0x140588B84 (PopFxPauseDeviceAccounting.c)
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x140589D38 (PopFxUpdateDeviceAccountingEnhanced.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxUpdateAccountingActiveTime(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 *i; // r10
  __int64 v7; // r8

  v3 = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( a2 > v4 )
    {
      v5 = a2 - v4;
      *(_QWORD *)(a1 + 128) += v5;
      if ( v5 < a3 )
      {
        *(_QWORD *)(a1 + 136) += v5;
      }
      else
      {
        for ( i = PopFxAccountingBucketLimits; ; ++i )
        {
          v7 = v3 + 1;
          if ( v5 >= *i && v5 < PopFxAccountingBucketLimits[v7] )
            break;
          ++v3;
          if ( (unsigned int)v7 >= 5 )
            return;
        }
        ++*(_QWORD *)(a1 + 8LL * v3 + 144);
        *(_QWORD *)(a1 + 8LL * v3 + 184) += v5;
      }
    }
  }
}
