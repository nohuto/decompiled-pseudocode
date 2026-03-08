/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCRemoteAppRenderTargetMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C02647E0 (-ReleaseAllReferences@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAAXPEAVCApplicatio.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CRemoteAppRenderTargetMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 13) - 24LL));
    *((_QWORD *)this + 13) = 0LL;
  }
  DirectComposition::CHolographicExclusiveViewMarshaler::ReleaseAllReferences(this, a2);
}
