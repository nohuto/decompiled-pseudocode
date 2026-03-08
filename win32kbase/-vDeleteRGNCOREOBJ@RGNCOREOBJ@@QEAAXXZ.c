/*
 * XREFs of ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x1C001CA1C
 * Callers:
 *     ?GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z @ 0x1C001C5D0 (-GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z.c)
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C001C9E0 (-SetEmpty@CRegion@@UEAAXXZ.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C003E660 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C003E764 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003E878 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     RGNCOREOBJ::bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___ @ 0x1C0042368 (RGNCOREOBJ--bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@K@Z @ 0x1C00A8764 (--0RGNCOREMEMOBJ@@QEAA@K@Z.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x1C00BBEC0 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x1C019A510 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNCOREOBJ::vDeleteRGNCOREOBJ(PVOID *this)
{
  void *v2; // rcx

  if ( *this )
  {
    v2 = (void *)*((_QWORD *)*this + 1);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(*this, 0);
  }
}
