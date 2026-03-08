/*
 * XREFs of ??_GIPTPEngine@@UEAAPEAXI@Z @ 0x1C0234FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

IPTPEngine *__fastcall IPTPEngine::`scalar deleting destructor'(IPTPEngine *this, char a2)
{
  *(_QWORD *)this = &IPTPEngine::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
