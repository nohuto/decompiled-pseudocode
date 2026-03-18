/*
 * XREFs of ?InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z @ 0x1C0054E28
 * Callers:
 *     UserKSTInitialize @ 0x1C0054360 (UserKSTInitialize.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ConvertUserToKernelEventHandle @ 0x1C0054F50 (ConvertUserToKernelEventHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CKernelSensorThread::InitializeEventHandles(CKernelSensorThread *this, void *a2, void *a3)
{
  CKernelSensorThread *v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  NTSTATUS v8; // edi
  __int64 v9; // r8

  v3 = gpKernelSensorThread;
  RIMLockExclusive((__int64)gpKernelSensorThread + 8);
  v8 = ConvertUserToKernelEventHandle(a2, (char *)v3 + 56);
  if ( v8 < 0
    || (v8 = ConvertUserToKernelEventHandle(a3, (char *)v3 + 64), v8 < 0)
    || (v8 = ObOpenObjectByPointer(
               gpevtPTPOperation,
               0x200u,
               0LL,
               0x1F0003u,
               (POBJECT_TYPE)ExEventObjectType,
               0,
               (PHANDLE)v3 + 9),
        v8 < 0)
    || (v8 = ObOpenObjectByPointer(
               gpevtSynthesizedContainerMouseInput,
               0x200u,
               0LL,
               0x1F0003u,
               (POBJECT_TYPE)ExEventObjectType,
               0,
               (PHANDLE)v3 + 10),
        v8 < 0) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
  }
  *((_QWORD *)v3 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v3 + 8, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
