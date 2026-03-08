/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCVisualReferenceControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

char *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualReferenceControllerMarshaler,2>::`scalar deleting destructor'(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualReferenceControllerMarshaler,2>::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
  return a1;
}
