/*
 * XREFs of ?ReleaseAllReferences@CGradientBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00C2640
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C006B238 (-ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CGradientBrushMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[11]);
  this[11] = 0LL;
  DirectComposition::CGradientBrushMarshaler::ClearStops((DirectComposition::CGradientBrushMarshaler *)this, a2);
}
