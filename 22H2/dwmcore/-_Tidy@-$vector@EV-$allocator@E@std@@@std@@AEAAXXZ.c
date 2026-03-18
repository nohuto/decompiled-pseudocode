/*
 * XREFs of ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800F05D8
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x18001523C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18004A164 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     ??1CPathData@@MEAA@XZ @ 0x1800AA22C (--1CPathData@@MEAA@XZ.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x18010BCB0 (_anonymous_namespace_--SendFramesReport.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18010C9DC (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x180253328 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 *     DebugInspectSysMemSurface_NoOpt @ 0x180272E44 (DebugInspectSysMemSurface_NoOpt.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802887F0 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802AF58C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z @ 0x1802B8C60 (-ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E247C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned char>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
