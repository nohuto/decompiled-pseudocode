/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18027C748
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C2C8 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11.c)
 *     ?GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C680 (-GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonR.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180033E90 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18003EEF0 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005052C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?QueryInterface@CDeviceTextureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800516E0 (-QueryInterface@CDeviceTextureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180051800 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800527A0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052890 (-QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180055F08 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078A28 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18007B7E4 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BB54 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddDrawList@CCpuClipAntialiasSinkContext@@QEAAXPEAVCDrawListEntry@@MW4Enum@BlendMode@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18007BE34 (-AddDrawList@CCpuClipAntialiasSinkContext@@QEAAXPEAVCDrawListEntry@@MW4Enum@BlendMode@@PEAVCHwLi.c)
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x18007C1A8 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18008D934 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x18008F820 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800974D4 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x18009BAB0 (-ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x18009C2C8 (-ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATION.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800AACD4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ @ 0x1800D4DA0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@VCRenderingEffect@@@@UEAAKXZ @ 0x1800D55C0 (-Release@-$CMILRefCountBaseT@VCRenderingEffect@@@@UEAAKXZ.c)
 *     ?AddRef@?$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ @ 0x1800D5C80 (-AddRef@-$CMILRefCountBaseT@UIMILRefCount@@@@UEAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@UEAAKXZ @ 0x1800DA5F0 (-AddRef@CDxHandleBitmapRealization@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DBB94 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?AddRef@CDrawListEntryBatch@@UEAAKXZ @ 0x1800E27E0 (-AddRef@CDrawListEntryBatch@@UEAAKXZ.c)
 *     ?AddRef@CAtlasBitmapResource@@UEAAKXZ @ 0x1800E7B8C (-AddRef@CAtlasBitmapResource@@UEAAKXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801D18B0 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     DebugInspectSysMemSurface_NoOpt @ 0x180272E44 (DebugInspectSysMemSurface_NoOpt.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18027C4CC (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1802AA294 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1803E4394;
  if ( !(_BYTE)word_1803E4394 )
    return 0;
  v1 = HIBYTE(word_1803E4394);
  v2 = 1;
  if ( HIBYTE(word_1803E4394) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1803E4394, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1803E4394);
      v0 = word_1803E4394;
    }
    else
    {
      v0 = 1;
      word_1803E4394 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
