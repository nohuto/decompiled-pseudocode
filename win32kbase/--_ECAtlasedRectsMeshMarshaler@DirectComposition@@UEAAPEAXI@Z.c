/*
 * XREFs of ??_ECAtlasedRectsMeshMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C730
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00B9868 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

DirectComposition::CAtlasedRectsMeshMarshaler *__fastcall DirectComposition::CAtlasedRectsMeshMarshaler::`vector deleting destructor'(
        DirectComposition::CAtlasedRectsMeshMarshaler *this,
        char a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CAtlasedRectsMeshMarshaler *)((char *)this + 88));
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CAtlasedRectsMeshMarshaler *)((char *)this + 64));
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
