/*
 * XREFs of rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C004949C
 * Callers:
 *     rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C0049690 (rimNormalApcIoUnregisterPlugPlayNotificationEx.c)
 *     rimRundownApcIoUnregisterPlugPlayNotificationEx @ 0x1C01A1E80 (rimRundownApcIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C004763C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0047C7C (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C0049594 (rimHandlePnpWaitersOnOwnedDevices.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimApcIoUnregisterPlugPlayNotificationExWorker(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1[11];
  v3 = *((unsigned int *)a1 + 24);
  RIMLockExclusive(v1 + 104);
  rimHandlePnpWaitersOnOwnedDevices(v1, (unsigned int)v3);
  *(_QWORD *)(v1 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 104, 0LL);
  KeLeaveCriticalRegion();
  IoUnregisterPlugPlayNotificationEx(*(PVOID *)(v1 + 8 * v3 + 224));
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v9, 1LL, v4);
  if ( !*(_QWORD *)(v1 + 8 * v3 + 224) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  *(_QWORD *)(v1 + 8 * v3 + 224) = 0LL;
  *(_DWORD *)(v1 + 4 * v3 + 296) = 0;
  if ( *(_BYTE *)(v1 + 80) || *(_BYTE *)(v1 + 81) )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      a1);
    *(_QWORD *)(v1 + 8 * v3 + 312) = 0LL;
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v9);
  return ObfDereferenceObject((PVOID)v1);
}
