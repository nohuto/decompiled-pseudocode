/*
 * XREFs of ??_ECSharedReadScalarMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0239B30
 * Callers:
 *     ??_ECSharedReadScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00DFF10 (--_ECSharedReadScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedReadScalarMarshaler *__fastcall DirectComposition::CSharedReadScalarMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedReadScalarMarshaler *this,
        char a2)
{
  *((_QWORD *)this + 2) = &DirectComposition::CSharedReadMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
