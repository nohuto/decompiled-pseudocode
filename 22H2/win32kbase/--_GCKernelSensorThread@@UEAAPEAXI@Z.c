/*
 * XREFs of ??_GCKernelSensorThread@@UEAAPEAXI@Z @ 0x1C0080770
 * Callers:
 *     <none>
 * Callees:
 *     ??1CKernelSensorThread@@UEAA@XZ @ 0x1C0080C00 (--1CKernelSensorThread@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

CKernelSensorThread *__fastcall CKernelSensorThread::`scalar deleting destructor'(CKernelSensorThread *this, char a2)
{
  CKernelSensorThread::~CKernelSensorThread(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
