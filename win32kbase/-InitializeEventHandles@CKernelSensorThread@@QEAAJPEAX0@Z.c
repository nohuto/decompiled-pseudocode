/*
 * XREFs of ?InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z @ 0x1C009A844
 * Callers:
 *     UserKSTInitialize @ 0x1C009A090 (UserKSTInitialize.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ConvertUserToKernelEventHandle @ 0x1C009A9C8 (ConvertUserToKernelEventHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CKernelSensorThread::InitializeEventHandles(CKernelSensorThread *this, void *a2, void *a3)
{
  void **CurrentIrp; // rsi
  NTSTATUS v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF

  CurrentIrp = (void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  RIMLockExclusive((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 8);
  v6 = ConvertUserToKernelEventHandle(a2, CurrentIrp + 7);
  if ( v6 < 0 )
    goto LABEL_7;
  v6 = ConvertUserToKernelEventHandle(a3, CurrentIrp + 8);
  if ( v6 < 0 )
    goto LABEL_7;
  v11 = SGDGetUserSessionState(v8, v7, v9, v10);
  v6 = ObOpenObjectByPointer(
         *(PVOID *)(v11 + 16824),
         0x200u,
         0LL,
         0x1F0003u,
         (POBJECT_TYPE)ExEventObjectType,
         0,
         CurrentIrp + 9);
  if ( v6 < 0
    || (v6 = ObOpenObjectByPointer(
               gpevtSynthesizedContainerMouseInput,
               0x200u,
               0LL,
               0x1F0003u,
               (POBJECT_TYPE)ExEventObjectType,
               0,
               CurrentIrp + 10),
        v6 < 0)
    || (*(_QWORD *)&ObjectAttributes.Length = 48LL,
        *(_QWORD *)&ObjectAttributes.Attributes = 512LL,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = 0LL,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v6 = ZwCreateTimer(CurrentIrp + 11, 0x1F0003u, &ObjectAttributes, SynchronizationTimer),
        v6 < 0) )
  {
LABEL_7:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 368LL);
  }
  CurrentIrp[2] = 0LL;
  ExReleasePushLockExclusiveEx(CurrentIrp + 1, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
