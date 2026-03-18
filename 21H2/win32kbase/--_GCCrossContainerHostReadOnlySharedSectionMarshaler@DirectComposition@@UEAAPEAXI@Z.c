/*
 * XREFs of ??_GCCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0229010
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00B6EC8 (--1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *__fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::`scalar deleting destructor'(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::`vftable';
  DirectComposition::CSharedSectionBaseMarshaler::~CSharedSectionBaseMarshaler(this);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
