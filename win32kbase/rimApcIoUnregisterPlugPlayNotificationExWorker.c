/*
 * XREFs of rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00C3ACC
 * Callers:
 *     rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C00C3AB0 (rimNormalApcIoUnregisterPlugPlayNotificationEx.c)
 *     rimRundownApcIoUnregisterPlugPlayNotificationEx @ 0x1C01C8BE0 (rimRundownApcIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0039D28 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C003A054 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C00C3BB8 (rimHandlePnpWaitersOnOwnedDevices.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

LONG_PTR __fastcall rimApcIoUnregisterPlugPlayNotificationExWorker(char *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // r8
  char v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v3 = *((unsigned int *)a1 + 24);
  RIMLockExclusive(v1 + 104);
  rimHandlePnpWaitersOnOwnedDevices(v1, (unsigned int)v3);
  *(_QWORD *)(v1 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 104, 0LL);
  KeLeaveCriticalRegion();
  IoUnregisterPlugPlayNotificationEx(*(PVOID *)(v1 + 8 * v3 + 224));
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v6, 1LL, v4);
  if ( !*(_QWORD *)(v1 + 8 * v3 + 224) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1678LL);
  *(_QWORD *)(v1 + 8 * v3 + 224) = 0LL;
  *(_DWORD *)(v1 + 4 * v3 + 296) = 0;
  if ( *(_BYTE *)(v1 + 80) || *(_BYTE *)(v1 + 81) )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
    *(_QWORD *)(v1 + 8 * v3 + 312) = 0LL;
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v6);
  return ObfDereferenceObject((PVOID)v1);
}
