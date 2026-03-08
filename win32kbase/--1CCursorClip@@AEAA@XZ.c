/*
 * XREFs of ??1CCursorClip@@AEAA@XZ @ 0x1C00950B4
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0094C50 (UnInitializeInputComponents.c)
 * Callees:
 *     ?Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ @ 0x1C00159A4 (-Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall CCursorClip::~CCursorClip(CCursorClip *this)
{
  void *v1; // rdx

  v1 = (void *)*((_QWORD *)this + 33);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  CCursorClip::DeadzoneJumping::Cleanup((CCursorClip *)((char *)this + 280));
}
