/*
 * XREFs of floor_0 @ 0x18005814A
 * Callers:
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x180004F94 (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180006A90 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000BF90 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x180019FA8 (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B510 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B930 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001C420 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C900 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001F390 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180021BC0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x1800222A8 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800225C8 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?RoundToNearestInt@@YAHN@Z @ 0x1800954D8 (-RoundToNearestInt@@YAHN@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x1800982F8 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl floor_0(double X)
{
  return floor(X);
}
