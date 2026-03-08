/*
 * XREFs of ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BF570
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BF400 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectCompos.c)
 *     ?ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BF520 (-ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 *     ?ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0269FC0 (-ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 * Callees:
 *     ?ReleaseResourceMarshalers@CCompositionLightMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C00BF5D8 (-ReleaseResourceMarshalers@CCompositionLightMarshaler@DirectComposition@@IEAAXPEAVCApplicationCh.c)
 */

void __fastcall DirectComposition::CCompositionLightMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CCompositionLightMarshaler *v4; // rcx

  DirectComposition::CCompositionLightMarshaler::ReleaseResourceMarshalers(
    this,
    a2,
    *((struct DirectComposition::CResourceMarshaler ***)this + 7),
    (unsigned int *)this + 16);
  DirectComposition::CCompositionLightMarshaler::ReleaseResourceMarshalers(
    v4,
    a2,
    *((struct DirectComposition::CResourceMarshaler ***)this + 9),
    (unsigned int *)this + 20);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
}
