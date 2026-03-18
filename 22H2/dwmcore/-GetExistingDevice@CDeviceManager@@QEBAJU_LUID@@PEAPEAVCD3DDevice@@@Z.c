/*
 * XREFs of ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034B74
 * Callers:
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034A2C (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800CDF0C (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CE858 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z @ 0x1800F43D8 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@_N@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D4794 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x180222ADC (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180222D90 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x180223F5C (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18022473C (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18025B6EC (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 * Callees:
 *     ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034C10 (-GetAvailableDevice@CDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034CA4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDeviceManager::GetExistingDevice(CDeviceManager *this, struct _LUID a2, struct CD3DDevice **a3)
{
  unsigned int v3; // esi
  unsigned int v6; // ecx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v8 = &stru_1803EA130;
  EnterCriticalSection(&stru_1803EA130);
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CDeviceManager::GetAvailableDevice)(
                       &g_DeviceManager,
                       a2,
                       a3) != 1 )
  {
    v3 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802EE2F0, 2u, -2003304307, 0xEEu, 0LL);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v3;
}
