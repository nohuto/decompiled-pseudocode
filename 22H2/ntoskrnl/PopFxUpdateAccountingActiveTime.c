/*
 * XREFs of PopFxUpdateAccountingActiveTime @ 0x140260C04
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140260720 (PopFxIdleWorkerTail.c)
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x14038C354 (PopFxUpdateDeviceAccountingEnhanced.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x1403A00E4 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopFxPauseDeviceAccounting @ 0x14056B6A4 (PopFxPauseDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x14056CF7C (PopFxStopDeviceAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxUpdateAccountingActiveTime(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 *i; // r8

  v3 = 0LL;
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
        for ( i = PopFxAccountingBucketLimits; v5 < *i || v5 >= PopFxAccountingBucketLimits[(unsigned int)(v3 + 1)]; ++i )
        {
          v3 = (unsigned int)(v3 + 1);
          if ( (unsigned int)v3 >= 5 )
            return;
        }
        ++*(_QWORD *)(a1 + 8 * v3 + 144);
        *(_QWORD *)(a1 + 8 * v3 + 184) += v5;
      }
    }
  }
}
