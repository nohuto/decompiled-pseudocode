/*
 * XREFs of ?ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00CBFB0
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCVisualReferenceControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CEA0 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCVisualReferenceControllerMarshaler@DirectComp.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C005F8A4 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualReferenceControllerMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualReferenceControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase *v4; // rdx

  v4 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v4);
    *((_QWORD *)this + 7) = 0LL;
  }
}
