/*
 * XREFs of ??_GCTouchpadAcceleration@@UEAAPEAXI@Z @ 0x1C00C3050
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

CTouchpadAcceleration *__fastcall CTouchpadAcceleration::`scalar deleting destructor'(
        CTouchpadAcceleration *this,
        char a2)
{
  *(_QWORD *)this = &CDeviceAcceleration::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
