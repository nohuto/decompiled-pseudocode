/*
 * XREFs of NVMeControllerReset @ 0x1C000E684
 * Callers:
 *     NVMeHwResetBus @ 0x1C000AF10 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C000D6B0 (NVMeControllerAsyncResetWorker.c)
 * Callees:
 *     IsNVMeControllerOnFatalError @ 0x1C0005E98 (IsNVMeControllerOnFatalError.c)
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

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v4; // di
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edx
  __int64 *v13; // rcx
  __int64 v14; // rax

  v4 = 1;
  StorPortDebugPrint(3LL, "StorNVMe - Controller Reset START\n");
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3812), 0) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset Already in Progress\n");
    return v4;
  }
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFFEE | 0x10;
  NVMeControllerCompleteAllIORequests(a1, 14, v5, v6);
  NVMeCancelAllCompletionQueueDpc(a1);
  IsNVMeControllerOnFatalError(a1);
  if ( a2 )
  {
    if ( (*(_QWORD *)(a1 + 176) & 0x1000000000LL) == 0 || !(unsigned __int8)NvmSubsystemReset(a1) )
    {
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (CAP.NSSRS == 0)\n");
      goto LABEL_11;
    }
    if ( (*(_BYTE *)(a1 + 3792) & 3) == 3 )
      *(_BYTE *)(a1 + 3792) |= 4u;
  }
  else if ( !ControllerReset(a1, v7, v8, v9) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (ControllerReset() == FALSE)\n");
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 24) &= ~0x10u;
  NVMeQueuesReInit(a1);
  if ( NVMeControllerInitPart1(a1, 0) )
  {
    LOBYTE(v10) = 1;
    if ( NVMeControllerInitPart2(a1, 0LL, v10, v11) )
    {
      if ( NVMeControllerInitPart3(a1) )
      {
        v12 = 0;
        if ( *(int *)(a1 + 208) > 0 )
        {
          v13 = (__int64 *)(a1 + 1736);
          do
          {
            v14 = *v13;
            if ( *v13 )
            {
              if ( !a2 )
              {
                ++*(_DWORD *)(v14 + 40);
                v14 = *v13;
              }
              ++*(_DWORD *)(v14 + 44);
            }
            ++v12;
            ++v13;
          }
          while ( v12 < *(_DWORD *)(a1 + 208) );
        }
        goto LABEL_25;
      }
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart3() == FALSE)\n");
    }
    else
    {
      StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart2() == FALSE)\n");
    }
  }
  else
  {
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset FAILED (NVMeControllerInitPart1() == FALSE)\n");
  }
LABEL_11:
  v4 = 0;
LABEL_25:
  *(_DWORD *)(a1 + 3812) &= ~1u;
  StorPortResume(a1);
  if ( v4 )
    StorPortDebugPrint(3LL, "StorNVMe - Controller Reset SUCCESS\n");
  else
    NVMeControllerStartFailureEventLog(a1);
  return v4;
}
