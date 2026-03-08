/*
 * XREFs of ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180019DA4
 * Callers:
 *     ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180019CE0 (-DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x18012F7EE (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z @ 0x180019DE8 (-DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x180081808 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(COcclusionContext *a1, struct IUnknown *a2, int a3, char a4)
{
  int v5; // ebx
  int v6; // r9d

  v5 = (int)a1;
  if ( !*((_DWORD *)a1 + 358) && COcclusionContext::DoesImageOcclude(a1, a2, a4 & 1) )
    COcclusionContext::CollectRectangleForOcclusion(v5, a3, 0, v6, 0LL);
  return 0LL;
}
