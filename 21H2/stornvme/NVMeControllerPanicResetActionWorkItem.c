/*
 * XREFs of NVMeControllerPanicResetActionWorkItem @ 0x1C0018290
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C000A6FC (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C000B3DC (ControllerReset.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x1C000D1D8 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000D7A4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerInitPart1 @ 0x1C000DC0C (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000E014 (NVMeControllerInitPart3.c)
 *     NVMeQueuesReInit @ 0x1C0010990 (NVMeQueuesReInit.c)
 *     NvmSubsystemReset @ 0x1C0010FB8 (NvmSubsystemReset.c)
 */

void __fastcall NVMeControllerPanicResetActionWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r9

  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 3812), 0) )
  {
    StorPortPause(a1, 120LL);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFFEE | 0x10;
    NVMeControllerCompleteAllIORequests(a1, 14, v5, v6);
    NVMeCancelAllCompletionQueueDpc(a1);
    v8 = 10000000LL;
    v9 = 1000 * **(unsigned __int16 **)(a1 + 3992);
    if ( v9 < 0x989680 )
      v8 = v9;
    StorPortExtendedFunction(81LL, a1, v8, v7);
    StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 3992) + 2LL) & 1) == 0 || !ControllerReset(a1, v10, v11, v12) )
    {
      if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 3992) + 2LL) & 2) == 0 || NvmSubsystemReset(a1))
        && ((*(_BYTE *)(*(_QWORD *)(a1 + 3992) + 2LL) & 4) == 0
         || (unsigned int)StorPortExtendedFunction(102LL, a1, 0LL, v12)) )
      {
LABEL_19:
        *(_DWORD *)(a1 + 3812) &= ~1u;
        StorPortResume(a1);
        NVMeControllerStartFailureEventLog(a1);
        StorPortExtendedFunction(31LL, a1, a3, v17);
        return;
      }
      *(_BYTE *)(a1 + 3792) |= 4u;
    }
    *(_DWORD *)(a1 + 24) &= ~0x10u;
    NVMeQueuesReInit(a1);
    if ( NVMeControllerInitPart1(a1, 0) )
    {
      LOBYTE(v13) = 1;
      if ( NVMeControllerInitPart2(a1, 0LL, v13, v14) )
      {
        if ( NVMeControllerInitPart3(a1) )
        {
          v15 = 0;
          if ( *(int *)(a1 + 208) > 0 )
          {
            v16 = a1 + 1736;
            do
            {
              if ( *(_QWORD *)v16 )
                ++*(_DWORD *)(*(_QWORD *)v16 + 44LL);
              ++v15;
              v16 += 8LL;
            }
            while ( v15 < *(_DWORD *)(a1 + 208) );
          }
        }
      }
    }
    goto LABEL_19;
  }
}
