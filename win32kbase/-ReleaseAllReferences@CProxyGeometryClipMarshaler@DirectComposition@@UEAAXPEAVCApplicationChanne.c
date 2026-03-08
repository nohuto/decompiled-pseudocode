/*
 * XREFs of ?ReleaseAllReferences@CProxyGeometryClipMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CGeometryMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BD870 (-ReleaseAllReferences@CGeometryMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CProxyGeometryClipMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[12]);
  v4 = this[13];
  this[12] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  this[13] = 0LL;
  DirectComposition::CGeometryMarshaler::ReleaseAllReferences((DirectComposition::CGeometryMarshaler *)this, a2);
}
