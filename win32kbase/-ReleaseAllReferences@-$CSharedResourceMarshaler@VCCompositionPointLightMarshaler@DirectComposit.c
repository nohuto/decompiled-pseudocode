/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCCompositionPointLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CB50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0269FC0 (-ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionPointLightMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CCompositionPointLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 20) - 24LL));
    *((_QWORD *)this + 20) = 0LL;
  }
  DirectComposition::CCompositionPointLightMarshaler::ReleaseAllReferences(this, a2);
}
