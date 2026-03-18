/*
 * XREFs of ??_ECComponentTransform2DMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0007B20
 * Callers:
 *     ??_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00DFF00 (--_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CComponentTransform2DMarshaler *__fastcall DirectComposition::CComponentTransform2DMarshaler::`vector deleting destructor'(
        DirectComposition::CComponentTransform2DMarshaler *this,
        char a2)
{
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      this);
  return this;
}
