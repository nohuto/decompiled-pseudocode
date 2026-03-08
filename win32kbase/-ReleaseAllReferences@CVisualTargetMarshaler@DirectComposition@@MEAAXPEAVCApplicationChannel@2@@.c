/*
 * XREFs of ?ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B36F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B3740 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@Dire.c)
 *     ?UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C00B37FC (-UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVC.c)
 */

void __fastcall DirectComposition::CVisualTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  bool v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 8) )
    DirectComposition::CVisualTargetMarshaler::UpdateRootVisual(this, a2, 0LL, &v4);
  DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::ReleaseAllReferences(this, a2);
}
