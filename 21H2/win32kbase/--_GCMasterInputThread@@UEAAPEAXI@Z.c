/*
 * XREFs of ??_GCMasterInputThread@@UEAAPEAXI@Z @ 0x1C0052CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CMasterInputThread *__fastcall CMasterInputThread::`scalar deleting destructor'(
        CMasterInputThread *this,
        __int64 a2,
        __int64 a3)
{
  bool v3; // zf
  char v4; // di

  v3 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &CInputThreadBase::`vftable';
  v4 = a2;
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( (v4 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      this);
  return this;
}
