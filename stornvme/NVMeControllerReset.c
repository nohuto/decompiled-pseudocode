/*
 * XREFs of NVMeControllerReset @ 0x1C000E4D8
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0003050 (NVMeHwAdapterControl.c)
 *     NVMeHwResetBus @ 0x1C00085C0 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C000CBD0 (NVMeControllerAsyncResetWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0007908 (FillControllerRuntimeLog.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0007C08 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0009668 (ControllerReset.c)
 *     IsNVMeControllerOnFatalError @ 0x1C000C03C (IsNVMeControllerOnFatalError.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x1C000C2A8 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000CC54 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerInitPart1 @ 0x1C000D7A8 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000D9F0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000DCDC (NVMeControllerInitPart3.c)
 *     NVMeHardwareReset @ 0x1C000F26C (NVMeHardwareReset.c)
 *     NVMeQueuesReInit @ 0x1C0010588 (NVMeQueuesReInit.c)
 *     NvmSubsystemReset @ 0x1C0010BAC (NvmSubsystemReset.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v4; // r12
  char v6; // dl
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  int v11; // edx
  char v12; // si
  __int64 v13; // rcx
  __int64 v14; // r9
  bool v15; // bp
  _BYTE v16[4]; // [rsp+60h] [rbp-A8h] BYREF
  int v17; // [rsp+64h] [rbp-A4h]
  int v18; // [rsp+68h] [rbp-A0h]
  int v19; // [rsp+6Ch] [rbp-9Ch]
  _DWORD v20[24]; // [rsp+70h] [rbp-98h] BYREF

  v4 = 0;
  memset(v20, 0, 0x58uLL);
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 4028), 0) )
    return 1;
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 32) &= 0xFFFFFDFE;
  v8 = *(unsigned int *)(a1 + 168);
  if ( (_DWORD)v8 )
    StorPortExtendedFunction(81LL, a1, v8, v7);
  *(_DWORD *)(a1 + 32) |= 0x10u;
  NVMeCancelAllCompletionQueueDpc(a1, v6);
  v10 = *(unsigned int *)(a1 + 168);
  if ( (_DWORD)v10 )
    StorPortExtendedFunction(81LL, a1, v10, v9);
  NVMeControllerCompleteAllIORequests(a1, 14, v10, v9);
  IsNVMeControllerOnFatalError(a1);
  if ( !a2 )
  {
    if ( (unsigned int)ControllerReset(a1, 0) )
    {
      v16[0] = 0;
      v15 = 0;
      if ( !(unsigned int)StorPortExtendedFunction(109LL, a1, v16, v14) )
        v15 = v16[0] == 0;
      v12 = 0;
      if ( ((*(_DWORD *)(a1 + 64) & 0x40) == 0 || !v15 || (unsigned int)NVMeHardwareReset(a1, 0LL))
        && ((*(_DWORD *)(a1 + 64) & 0x800) == 0 || !v15 || (unsigned int)NVMeHardwareReset(a1, 2LL))
        && ((*(_DWORD *)(a1 + 64) & 0x1000) == 0 || !v15 || (unsigned int)NVMeHardwareReset(a1, 1LL)) )
      {
        v4 = 1;
        goto LABEL_22;
      }
    }
    goto LABEL_12;
  }
  if ( _bittest64((const signed __int64 *)(a1 + 200), 0x24u) && (unsigned __int8)NvmSubsystemReset(a1) )
  {
    if ( (*(_BYTE *)(a1 + 4008) & 3) == 3 )
      *(_BYTE *)(a1 + 4008) |= 4u;
LABEL_12:
    *(_DWORD *)(a1 + 32) &= ~0x10u;
    NVMeQueuesReInit(a1);
    if ( !(unsigned int)NVMeControllerInitPart1(a1, 0)
      && !(unsigned int)NVMeControllerInitPart2(a1, 0, 1)
      && NVMeControllerInitPart3(a1) )
    {
      v11 = 0;
      v12 = 1;
      if ( *(int *)(a1 + 232) > 0 )
      {
        v13 = a1 + 1952;
        do
        {
          if ( *(_QWORD *)v13 )
          {
            if ( !a2 )
              ++*(_DWORD *)(*(_QWORD *)v13 + 40LL);
            ++*(_DWORD *)(*(_QWORD *)v13 + 44LL);
          }
          ++v11;
          v13 += 8LL;
        }
        while ( v11 < *(_DWORD *)(a1 + 232) );
      }
      goto LABEL_22;
    }
  }
  v12 = 0;
LABEL_22:
  *(_DWORD *)(a1 + 4028) &= ~1u;
  StorPortResume(a1);
  if ( !v12 )
  {
    NVMeControllerStartFailureEventLog(a1);
    if ( v4 )
    {
      FillControllerRuntimeLog(a1, v20);
      v18 = *(_DWORD *)(a1 + 32);
      v19 = *(_DWORD *)(a1 + 36);
      v17 = -1056964606;
      StorPortNotification(4109LL, a1, 0LL);
    }
  }
  return v12;
}
