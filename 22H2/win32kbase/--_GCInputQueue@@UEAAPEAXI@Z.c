/*
 * XREFs of ??_GCInputQueue@@UEAAPEAXI@Z @ 0x1C009C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x1C00AC7B0 (-MarkInvalid@CInputQueue@@UEAAXXZ.c)
 */

CInputQueue *__fastcall CInputQueue::`scalar deleting destructor'(CInputQueue *this, char a2)
{
  *(_QWORD *)this = &CInputQueue::`vftable';
  CInputQueue::MarkInvalid(this);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
