/*
 * XREFs of ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x1C0250670
 * Callers:
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02503C8 (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C0250750 (-RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 *     ?SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0250880 (-SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DirectComposition::CGenericInkMarshaler::GetSegmentCount(
        DirectComposition::CGenericInkMarshaler *this)
{
  unsigned __int64 v1; // r8

  v1 = *((_QWORD *)this + 17);
  if ( v1 )
    return *((_QWORD *)this + 15) / v1;
  else
    return 0LL;
}
