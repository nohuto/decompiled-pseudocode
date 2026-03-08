/*
 * XREFs of ??_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C000F070
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00B9868 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

DirectComposition::CRegionGeometryMarshaler *__fastcall DirectComposition::CRegionGeometryMarshaler::`scalar deleting destructor'(
        DirectComposition::CRegionGeometryMarshaler *this,
        char a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CRegionGeometryMarshaler *)((char *)this + 96));
  *(_QWORD *)this = &DirectComposition::CGeometryMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
