/*
 * XREFs of ??_GCCursorVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0006EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0016234 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CCursorVisualMarshaler *__fastcall DirectComposition::CCursorVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CCursorVisualMarshaler *this,
        char a2)
{
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      this);
  return this;
}
