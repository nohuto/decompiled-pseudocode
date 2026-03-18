/*
 * XREFs of ??1CKernelSensorThread@@UEAA@XZ @ 0x1C0052D84
 * Callers:
 *     ??_GCKernelSensorThread@@UEAAPEAXI@Z @ 0x1C0052D40 (--_GCKernelSensorThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x1C00540A4 (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKernelSensorThread::~CKernelSensorThread(CKernelSensorThread *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  bool v5; // zf

  *(_QWORD *)this = &CKernelSensorThread::`vftable';
  CKernelSensorThread::DestroyEventHandles(this);
  v5 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &CInputThreadBase::`vftable';
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
}
