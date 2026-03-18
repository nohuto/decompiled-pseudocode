/*
 * XREFs of NVMeControllerPanicResetActionWorkItem @ 0x1C0021E00
 * Callers:
 *     <none>
 * Callees:
 *     ControllerReset @ 0x1C0007A88 (ControllerReset.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0017A04 (FillControllerRuntimeLog.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0017B68 (NVMeControllerStartFailureEventLog.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x1C00185E0 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0018AD4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeHardwareReset @ 0x1C00197E8 (NVMeHardwareReset.c)
 *     NvmSubsystemReset @ 0x1C001A000 (NvmSubsystemReset.c)
 *     NVMeControllerReinitialize @ 0x1C00220A4 (NVMeControllerReinitialize.c)
 */

__int64 __fastcall NVMeControllerPanicResetActionWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // di
  __int64 v6; // r9
  __int64 v7; // r9
  char v8; // dl
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD v19[24]; // [rsp+70h] [rbp-78h] BYREF

  v5 = 0;
  memset(v19, 0, 0x58uLL);
  if ( (*(_DWORD *)(a1 + 32) & 0x8008) != 0
    || !*(_QWORD *)(a1 + 4008)
    || _interlockedbittestandset((volatile signed __int32 *)(a1 + 3828), 0) )
  {
    return StorPortExtendedFunction(31LL, a1, a3, v6);
  }
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 32) &= 0xFFFFFDFE;
  StorPortExtendedFunction(81LL, a1, 20000LL, v7);
  *(_DWORD *)(a1 + 32) |= 0x10u;
  NVMeCancelAllCompletionQueueDpc(a1, v8);
  StorPortExtendedFunction(81LL, a1, 20000LL, v9);
  NVMeControllerCompleteAllIORequests(a1, 14, v10, v11);
  v13 = 10000000LL;
  v14 = 1000 * **(unsigned __int16 **)(a1 + 4008);
  if ( v14 < 0x989680 )
    v13 = v14;
  StorPortExtendedFunction(81LL, a1, v13, v12);
  StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 4008) + 2LL) & 1) == 0 || (unsigned int)ControllerReset(a1, 0) )
  {
    if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 4008) + 2LL) & 2) == 0 || !NvmSubsystemReset(a1))
      && ((*(_BYTE *)(*(_QWORD *)(a1 + 4008) + 2LL) & 4) == 0 || (unsigned int)NVMeHardwareReset(a1, v15, v16, v17)) )
    {
      goto LABEL_15;
    }
    *(_BYTE *)(a1 + 3808) |= 4u;
  }
  else
  {
    *(_BYTE *)(a1 + 3808) &= ~4u;
  }
  v5 = NVMeControllerReinitialize(a1);
LABEL_15:
  *(_DWORD *)(a1 + 32) &= ~0x10u;
  *(_DWORD *)(a1 + 3828) &= ~1u;
  StorPortResume(a1);
  if ( !v5 && !*(_BYTE *)(a1 + 20) )
  {
    NVMeControllerStartFailureEventLog(a1);
    FillControllerRuntimeLog(a1, v19);
    StorPortNotification(4109LL, a1, 0LL, 0LL);
  }
  return StorPortExtendedFunction(31LL, a1, a3, v6);
}
