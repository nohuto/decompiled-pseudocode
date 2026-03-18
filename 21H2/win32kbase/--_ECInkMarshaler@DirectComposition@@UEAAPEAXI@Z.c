/*
 * XREFs of ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0214430
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CInkMarshaler@DirectComposition@@UEAA@XZ @ 0x1C021851C (--1CInkMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInkMarshaler *__fastcall DirectComposition::CInkMarshaler::`vector deleting destructor'(
        DirectComposition::CInkMarshaler *this,
        char a2)
{
  DirectComposition::CInkMarshaler::~CInkMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
