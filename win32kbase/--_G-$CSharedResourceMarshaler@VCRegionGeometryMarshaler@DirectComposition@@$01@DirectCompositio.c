/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00B9868 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

char *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::`scalar deleting destructor'(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::`vftable';
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMarshaledArrayBase *)(a1 + 96));
  *(_QWORD *)a1 = &DirectComposition::CGeometryMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
  return a1;
}
