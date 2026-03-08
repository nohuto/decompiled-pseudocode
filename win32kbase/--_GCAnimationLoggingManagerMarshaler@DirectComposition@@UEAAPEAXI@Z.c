/*
 * XREFs of ??_GCAnimationLoggingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00BECE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CAnimationLoggingManagerMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00BED24 (--1CAnimationLoggingManagerMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CAnimationLoggingManagerMarshaler *__fastcall DirectComposition::CAnimationLoggingManagerMarshaler::`scalar deleting destructor'(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        char a2)
{
  DirectComposition::CAnimationLoggingManagerMarshaler::~CAnimationLoggingManagerMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
