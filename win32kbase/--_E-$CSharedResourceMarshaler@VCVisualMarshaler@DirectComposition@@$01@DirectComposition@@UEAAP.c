/*
 * XREFs of ??_E?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C150
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0068CC8 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CVisualMarshaler *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::`vector deleting destructor'(
        DirectComposition::CVisualMarshaler *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(a1);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a1);
  return a1;
}
