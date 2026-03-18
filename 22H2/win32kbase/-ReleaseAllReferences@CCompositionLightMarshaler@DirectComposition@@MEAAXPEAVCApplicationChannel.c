/*
 * XREFs of ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B3BF0
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B3A80 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectCompos.c)
 *     ?ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B3BA0 (-ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 *     ?ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C022B480 (-ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C002FCE8 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 */

void __fastcall DirectComposition::CCompositionLightMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CPrimitiveGroupMarshaler *v4; // rcx

  DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
    this,
    a2,
    *((struct DirectComposition::CResourceMarshaler ***)this + 7),
    (unsigned int *)this + 16);
  DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
    v4,
    a2,
    *((struct DirectComposition::CResourceMarshaler ***)this + 9),
    (unsigned int *)this + 20);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
}
