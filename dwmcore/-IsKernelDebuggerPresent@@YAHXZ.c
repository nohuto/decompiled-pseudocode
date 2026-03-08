/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C1D8 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11.c)
 *     ?GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C590 (-GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonR.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180033DA0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18003EE00 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005035C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?QueryInterface@CDeviceTextureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180051510 (-QueryInterface@CDeviceTextureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180051630 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051B00 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800525D0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800526C0 (-QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180055D38 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18007B614 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddDrawList@CCpuClipAntialiasSinkContext@@QEAAXPEAVCDrawListEntry@@MW4Enum@BlendMode@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18007BC64 (-AddDrawList@CCpuClipAntialiasSinkContext@@QEAAXPEAVCDrawListEntry@@MW4Enum@BlendMode@@PEAVCHwLi.c)
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x18007BFD8 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18008D764 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x18008F650 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800972E4 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x18009B970 (-ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x18009C188 (-ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATION.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800AA5B4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ @ 0x1800D42F0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@VCRenderingEffect@@@@UEAAKXZ @ 0x1800D4B10 (-Release@-$CMILRefCountBaseT@VCRenderingEffect@@@@UEAAKXZ.c)
 *     ?AddRef@?$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ @ 0x1800D51D0 (-AddRef@-$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@UEAAKXZ @ 0x1800D9B40 (-AddRef@CDxHandleBitmapRealization@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?AddRef@CDrawListEntryBatch@@UEAAKXZ @ 0x1800E1C10 (-AddRef@CDrawListEntryBatch@@UEAAKXZ.c)
 *     ?AddRef@CAtlasBitmapResource@@UEAAKXZ @ 0x1800E6FBC (-AddRef@CAtlasBitmapResource@@UEAAKXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801CE680 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     DebugInspectSysMemSurface_NoOpt @ 0x18026F714 (DebugInspectSysMemSurface_NoOpt.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180278D8C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1802A6B14 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1803E1394;
  if ( !(_BYTE)word_1803E1394 )
    return 0;
  v1 = HIBYTE(word_1803E1394);
  v2 = 1;
  if ( HIBYTE(word_1803E1394) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1803E1394, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1803E1394);
      v0 = word_1803E1394;
    }
    else
    {
      v0 = 1;
      word_1803E1394 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
