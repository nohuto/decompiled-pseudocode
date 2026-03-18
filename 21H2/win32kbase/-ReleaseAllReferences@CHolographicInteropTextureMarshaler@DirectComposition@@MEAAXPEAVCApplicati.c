/*
 * XREFs of ?ReleaseAllReferences@CHolographicInteropTextureMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C022D060
 * Callers:
 *     ?ReleaseAllReferences@CSharedHolographicInteropTextureMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C023AA30 (-ReleaseAllReferences@CSharedHolographicInteropTextureMarshaler@DirectComposition@@MEAAXPEAVCApp.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CHolographicInteropTextureMarshaler::ReleaseAllReferences(
        DirectComposition::CHolographicInteropTextureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 12) = 0LL;
  }
}
