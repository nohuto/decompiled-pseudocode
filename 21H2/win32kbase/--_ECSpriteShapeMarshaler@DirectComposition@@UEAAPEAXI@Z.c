/*
 * XREFs of ??_ECSpriteShapeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0214640
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CSpriteShapeMarshaler@DirectComposition@@UEAA@XZ @ 0x1C021E2B8 (--1CSpriteShapeMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CSpriteShapeMarshaler *__fastcall DirectComposition::CSpriteShapeMarshaler::`vector deleting destructor'(
        DirectComposition::CSpriteShapeMarshaler *this,
        char a2)
{
  DirectComposition::CSpriteShapeMarshaler::~CSpriteShapeMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
