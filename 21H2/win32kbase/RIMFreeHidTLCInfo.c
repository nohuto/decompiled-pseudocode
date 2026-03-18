/*
 * XREFs of RIMFreeHidTLCInfo @ 0x1C0199EA0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C00B7910 (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1C01B5628 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00438D8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0043DEC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreeHidTLCInfo(void ***a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void **v5; // rax
  void **v6; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7, (struct _KTHREAD **)&gTLCInfoLock);
  if ( *((_DWORD *)a1 + 5) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( *((_DWORD *)a1 + 6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( *((_DWORD *)a1 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( *((_DWORD *)a1 + 9) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( *((_DWORD *)a1 + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  v5 = *a1;
  if ( (*a1)[1] != a1 || (v6 = a1[1], *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  if ( !*((_DWORD *)a1 + 11) )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)a1);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7);
}
