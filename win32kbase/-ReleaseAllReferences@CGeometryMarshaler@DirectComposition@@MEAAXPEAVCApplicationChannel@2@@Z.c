/*
 * XREFs of ?ReleaseAllReferences@CGeometryMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BD870
 * Callers:
 *     ?ReleaseAllReferences@CProxyGeometryClipMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000DAF0 (-ReleaseAllReferences@CProxyGeometryClipMarshaler@DirectComposition@@UEAAXPEAVCApplicationChanne.c)
 *     ?ReleaseAllReferences@CPathGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BD7E0 (-ReleaseAllReferences@CPathGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@.c)
 *     ?ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BD830 (-ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CGeometryMarshaler::ReleaseAllReferences(
        DirectComposition::CGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 9) = 0LL;
  }
}
