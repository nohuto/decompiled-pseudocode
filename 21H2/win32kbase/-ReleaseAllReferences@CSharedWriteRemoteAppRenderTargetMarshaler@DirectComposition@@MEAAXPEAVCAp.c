/*
 * XREFs of ?ReleaseAllReferences@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C023A600
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C022C970 (-ReleaseAllReferences@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAAXPEAVCApplicatio.c)
 */

void __fastcall DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 14);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 14) = 0LL;
  }
  DirectComposition::CHolographicExclusiveViewMarshaler::ReleaseAllReferences(this, a2);
}
