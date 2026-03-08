/*
 * XREFs of ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4
 * Callers:
 *     ?GetDesktopTree@CComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x180032AC0 (-GetDesktopTree@CComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034A84 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D644 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A4D90 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A6830 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A6C60 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z @ 0x1800C7434 (-RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?Initialize@CVisualTree@@MEAAJXZ @ 0x1800C7540 (-Initialize@CVisualTree@@MEAAJXZ.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1800CD738 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800CD9D0 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CDC70 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800CE1BC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x1800E2FC4 (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800E3414 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ @ 0x1800EA81C (-HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x1800F1A70 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x1800F1B00 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x1800F1B70 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetPixelFormatInfo@CBitmapLock@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800F8490 (-GetPixelFormatInfo@CBitmapLock@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800F90B8 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x1800FB0C0 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180102FFC (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?MilCompositionEngine_CreateCursorController@@YAJ_KPEAPEAUIDwmCursorController@@@Z @ 0x1801B0400 (-MilCompositionEngine_CreateCursorController@@YAJ_KPEAPEAUIDwmCursorController@@@Z.c)
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x1801B90C4 (--1CEffectCompilationService@@UEAA@XZ.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x1801CB18C (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x1801F6AF0 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 *     ?TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z @ 0x180274714 (-TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z.c)
 *     ??1CCursorState@@UEAA@XZ @ 0x180275B1C (--1CCursorState@@UEAA@XZ.c)
 *     ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x18027E110 (-GetResolution@CBitmap@@UEAAJPEAN0@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x18027E1A0 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x18027E660 (-Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x18027E900 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x18027EAD0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 *     ?EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x180282718 (-EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ.c)
 *     ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x18028280C (-GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x1802828DC (-LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ.c)
 *     ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x18028293C (-TrimAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?Resolve@CMILCOMWeakRef@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802884D0 (-Resolve@CMILCOMWeakRef@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802A2AE8 (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA?BVCMILMatrix@@PEBVCVisualTree@@IIHH@Z @ 0x1802A3594 (-CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA-BVCMILMatrix@@PEBVCVisual.c)
 *     ?CalculateViewTransformsForSlate@CStereoscopicContentManager@@AEAAXW4StereoscopicContentMode@@MMAEBUStereoscopicSlateData@@PEAUStereoscopicViewData@@@Z @ 0x1802A377C (-CalculateViewTransformsForSlate@CStereoscopicContentManager@@AEAAXW4StereoscopicContentMode@@MM.c)
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802A3C14 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802B83B0 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetPixelFormatInfo@CFormatConverter@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802B8940 (-GetPixelFormatInfo@CFormatConverter@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetResolution@CFormatConverter@@UEAAJPEAN0@Z @ 0x1802B89A0 (-GetResolution@CFormatConverter@@UEAAJPEAN0@Z.c)
 *     ?GetSize@CFormatConverter@@UEAAJPEAI0@Z @ 0x1802B8A30 (-GetSize@CFormatConverter@@UEAAJPEAI0@Z.c)
 *     ?GetSourceState@CFormatConverter@@UEAA?AW4BitmapSourceState@IBitmapSource@@XZ @ 0x1802B8AF0 (-GetSourceState@CFormatConverter@@UEAA-AW4BitmapSourceState@IBitmapSource@@XZ.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802B8CE8 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGuard<CCriticalSection>::~CGuard<CCriticalSection>(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *a1 = 0LL;
  }
}
