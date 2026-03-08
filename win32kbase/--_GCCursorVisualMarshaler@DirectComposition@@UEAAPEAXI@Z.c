/*
 * XREFs of ??_GCCursorVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024AA30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0068CC8 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CCursorVisualMarshaler *__fastcall DirectComposition::CCursorVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CCursorVisualMarshaler *this,
        char a2)
{
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
