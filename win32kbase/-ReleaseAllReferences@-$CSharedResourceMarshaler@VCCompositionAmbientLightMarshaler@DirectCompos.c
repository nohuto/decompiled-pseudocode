/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BF400
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BF570 (-ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionAmbientLightMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 15) - 24LL));
    *((_QWORD *)this + 15) = 0LL;
  }
  DirectComposition::CCompositionLightMarshaler::ReleaseAllReferences(this, a2);
}
