/*
 * XREFs of ??_GCDeviceAcceleration@@UEAAPEAXI@Z @ 0x1C0232DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

CDeviceAcceleration *__fastcall CDeviceAcceleration::`scalar deleting destructor'(CDeviceAcceleration *this, char a2)
{
  *(_QWORD *)this = &CDeviceAcceleration::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
