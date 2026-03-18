/*
 * XREFs of ?GetTopByReference@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800E2740
 * Callers:
 *     ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x180014D34 (-Clip@CBaseClipStack@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x180021A90 (-DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005E950 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180081D8C (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z @ 0x1801E7040 (-CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::GetTopByReference(
        __int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 16) + 16LL * (unsigned int)(*(_DWORD *)a1 - 1);
  return result;
}
