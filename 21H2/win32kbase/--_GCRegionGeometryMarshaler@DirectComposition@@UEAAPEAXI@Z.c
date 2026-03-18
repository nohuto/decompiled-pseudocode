/*
 * XREFs of ??_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00AF3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00A2724 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

DirectComposition::CRegionGeometryMarshaler *__fastcall DirectComposition::CRegionGeometryMarshaler::`scalar deleting destructor'(
        DirectComposition::CRegionGeometryMarshaler *this,
        char a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CRegionGeometryMarshaler *)((char *)this + 104));
  *(_QWORD *)this = &DirectComposition::CGeometryMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
