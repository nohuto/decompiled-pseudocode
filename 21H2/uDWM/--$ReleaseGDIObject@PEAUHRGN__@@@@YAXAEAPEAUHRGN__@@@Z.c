/*
 * XREFs of ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180040204
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180011E14 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x1800171C4 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x18008491C (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x180084DD4 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReleaseGDIObject<HRGN__ *>(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = DeleteObject(v2);
    *a1 = 0LL;
  }
  return result;
}
