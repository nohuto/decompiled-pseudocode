/*
 * XREFs of ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A900
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CInkMarshaler@DirectComposition@@UEAA@XZ @ 0x1C024F99C (--1CInkMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInkMarshaler *__fastcall DirectComposition::CInkMarshaler::`vector deleting destructor'(
        DirectComposition::CInkMarshaler *this,
        char a2)
{
  DirectComposition::CInkMarshaler::~CInkMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
