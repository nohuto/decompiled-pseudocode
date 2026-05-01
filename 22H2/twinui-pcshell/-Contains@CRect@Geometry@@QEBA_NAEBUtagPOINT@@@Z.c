/*
 * XREFs of ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180410168
 * Callers:
 *     ?HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x180410560 (-HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?HitTest@CMultitaskingViewElementBase@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1804127C0 (-HitTest@CMultitaskingViewElementBase@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180413DB8 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z @ 0x1804165CC (-GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z.c)
 *     ?HitTestForLightDismiss@CMultitaskingViewFrameElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x18041A1A0 (-HitTestForLightDismiss@CMultitaskingViewFrameElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x18041A984 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?HitTest@CVirtualDesktopBarElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x18041DA10 (-HitTest@CVirtualDesktopBarElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?HitTest@CScrollViewer@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x18042AAC0 (-HitTest@CScrollViewer@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x18042D524 (-IsExternalDrag@ElementDragData@@AEAA_NXZ.c)
 *     ?v_OnDragOver@CVirtualDesktopContainerElement@@MEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180430B20 (-v_OnDragOver@CVirtualDesktopContainerElement@@MEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMult.c)
 *     ?PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z @ 0x18047E6F0 (-PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z.c)
 *     ?HitTest@DragData@@UEAA?AUDropTarget@WindowArrangementViewDragData@@AEBUCPoint@Geometry@@@Z @ 0x180487580 (-HitTest@DragData@@UEAA-AUDropTarget@WindowArrangementViewDragData@@AEBUCPoint@Geometry@@@Z.c)
 *     ?Update@DragData@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x180487CB0 (-Update@DragData@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateDropTarget@AppResizeData@@UEAAXAEBUCPoint@Geometry@@PEAUResizeDropTarget@@@Z @ 0x18048A770 (-UpdateDropTarget@AppResizeData@@UEAAXAEBUCPoint@Geometry@@PEAUResizeDropTarget@@@Z.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180495770 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180497138 (-_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnMouseHover@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180497490 (-_OnMouseHover@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1804975B4 (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x1804978FC (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180497A54 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     ?ContainsPt@CPlaceModeButtonAcc@@UEAA_NUtagPOINT@@@Z @ 0x18049CAD0 (-ContainsPt@CPlaceModeButtonAcc@@UEAA_NUtagPOINT@@@Z.c)
 *     ?PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z @ 0x18049DD80 (-PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Geometry::CRect::Contains(Geometry::CRect *this, const struct tagPOINT *a2)
{
  LONG y; // eax
  bool result; // al

  result = 0;
  if ( a2->x >= *(_DWORD *)this && a2->x < *((_DWORD *)this + 2) )
  {
    y = a2->y;
    if ( y >= *((_DWORD *)this + 1) && y < *((_DWORD *)this + 3) )
      return 1;
  }
  return result;
}
