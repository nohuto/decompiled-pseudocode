/*
 * XREFs of ??_ECSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00BD380
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00BD3C4 (--1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CSharedSectionMarshaler *__fastcall DirectComposition::CSharedSectionMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedSectionMarshaler *this,
        char a2)
{
  DirectComposition::CSharedSectionBaseMarshaler::~CSharedSectionBaseMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
