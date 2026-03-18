/*
 * XREFs of ??_ECSharedWriteScalarMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0239B68
 * Callers:
 *     ??_ECSharedWriteScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00DFF20 (--_ECSharedWriteScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedWriteScalarMarshaler *__fastcall DirectComposition::CSharedWriteScalarMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedWriteScalarMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CSharedWriteScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
