/*
 * XREFs of NVMeControllerPanicResetActionWorkItem @ 0x1C001C690
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0007908 (FillControllerRuntimeLog.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0007C08 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0009668 (ControllerReset.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x1C000C2A8 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000CC54 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeHardwareReset @ 0x1C000F26C (NVMeHardwareReset.c)
 *     NvmSubsystemReset @ 0x1C0010BAC (NvmSubsystemReset.c)
 *     NVMeControllerReinitialize @ 0x1C001C9A0 (NVMeControllerReinitialize.c)
 */

__int64 __fastcall NVMeControllerPanicResetActionWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // si
  __int64 v6; // r9
  char v7; // dl
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // r8
  _DWORD v17[24]; // [rsp+70h] [rbp-78h] BYREF

  v5 = 0;
  memset(v17, 0, 0x58uLL);
  if ( (*(_DWORD *)(a1 + 32) & 0x8008) != 0
    || !*(_QWORD *)(a1 + 4208)
    || _interlockedbittestandset((volatile signed __int32 *)(a1 + 4028), 0) )
  {
    goto LABEL_28;
  }
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 32) &= 0xFFFFFDFE;
  v9 = *(unsigned int *)(a1 + 168);
  if ( (_DWORD)v9 )
    StorPortExtendedFunction(81LL, a1, v9, v8);
  *(_DWORD *)(a1 + 32) |= 0x10u;
  NVMeCancelAllCompletionQueueDpc(a1, v7);
  v11 = *(unsigned int *)(a1 + 168);
  if ( (_DWORD)v11 )
    StorPortExtendedFunction(81LL, a1, v11, v10);
  NVMeControllerCompleteAllIORequests(a1, 14, v11, v10);
  v13 = 10000000LL;
  v14 = 1000 * **(unsigned __int16 **)(a1 + 4208);
  if ( v14 < 0x989680 )
    v13 = v14;
  StorPortExtendedFunction(81LL, a1, v13, v12);
  StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 4208) + 2LL) & 1) == 0 || (unsigned int)ControllerReset(a1, 0) )
  {
    if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 4208) + 2LL) & 2) == 0 || !NvmSubsystemReset(a1))
      && ((*(_BYTE *)(*(_QWORD *)(a1 + 4208) + 2LL) & 4) == 0 || (unsigned int)NVMeHardwareReset(a1, 0, v15))
      && ((*(_BYTE *)(*(_QWORD *)(a1 + 4208) + 2LL) & 0x20) == 0
       || (*(_DWORD *)(a1 + 64) & 0x800) == 0
       || (unsigned int)NVMeHardwareReset(a1, 2u, v15))
      && ((*(_BYTE *)(*(_QWORD *)(a1 + 4208) + 2LL) & 0x10) == 0
       || (*(_DWORD *)(a1 + 64) & 0x1000) == 0
       || (unsigned int)NVMeHardwareReset(a1, 1u, v15)) )
    {
      goto LABEL_25;
    }
    *(_BYTE *)(a1 + 4008) |= 4u;
  }
  else
  {
    *(_BYTE *)(a1 + 4008) &= ~4u;
  }
  v5 = NVMeControllerReinitialize(a1);
LABEL_25:
  *(_DWORD *)(a1 + 32) &= ~0x10u;
  *(_DWORD *)(a1 + 4028) &= ~1u;
  StorPortResume(a1);
  if ( v5 )
  {
    ++*(_DWORD *)(a1 + 4408);
    return StorPortExtendedFunction(31LL, a1, a3, v6);
  }
  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeControllerStartFailureEventLog(a1);
    FillControllerRuntimeLog(a1, v17);
    StorPortNotification(4109LL, a1, 0LL);
  }
LABEL_28:
  ++*(_DWORD *)(a1 + 4412);
  return StorPortExtendedFunction(31LL, a1, a3, v6);
}
