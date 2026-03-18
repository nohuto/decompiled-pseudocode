/*
 * XREFs of ??_GCAnimationLoggingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00B3A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CAnimationLoggingManagerMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00B3A94 (--1CAnimationLoggingManagerMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CAnimationLoggingManagerMarshaler *__fastcall DirectComposition::CAnimationLoggingManagerMarshaler::`scalar deleting destructor'(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        char a2)
{
  DirectComposition::CAnimationLoggingManagerMarshaler::~CAnimationLoggingManagerMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
