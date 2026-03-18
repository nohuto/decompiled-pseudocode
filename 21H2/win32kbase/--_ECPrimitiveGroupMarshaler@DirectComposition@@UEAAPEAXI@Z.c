/*
 * XREFs of ??_ECPrimitiveGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00AEA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CPrimitiveGroupMarshaler *__fastcall DirectComposition::CPrimitiveGroupMarshaler::`vector deleting destructor'(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
