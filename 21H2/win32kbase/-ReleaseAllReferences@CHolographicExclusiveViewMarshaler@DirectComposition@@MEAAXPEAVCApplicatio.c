/*
 * XREFs of ?ReleaseAllReferences@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C022C970
 * Callers:
 *     ?ReleaseAllReferences@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C023A600 (-ReleaseAllReferences@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCAp.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::ReleaseAllReferences(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 13) = 0LL;
  }
}
