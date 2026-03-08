/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A1110
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00A216C (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInteractionMarshaler *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CInteractionMarshaler,2>::`scalar deleting destructor'(
        DirectComposition::CInteractionMarshaler *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CInteractionMarshaler,2>::`vftable';
  DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(a1);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a1);
  return a1;
}
