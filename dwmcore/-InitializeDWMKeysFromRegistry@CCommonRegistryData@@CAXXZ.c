/*
 * XREFs of ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x1800ADEF8
 * Callers:
 *     ?Startup@@YAJXZ @ 0x1800AD854 (-Startup@@YAJXZ.c)
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800AE198 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

void CCommonRegistryData::InitializeDWMKeysFromRegistry(void)
{
  char DwmDwordHelper; // al
  unsigned int v1; // ecx
  LONGLONG v2; // rcx
  char v3; // al
  unsigned int v4; // ecx
  char v5; // al
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // [rsp+30h] [rbp+10h] BYREF

  v11 = 0;
  DwmDwordHelper = RegGetDwmDwordHelper(L"OverlayTestMode", &v11, 0LL);
  v1 = CCommonRegistryData::m_dwOverlayTestMode;
  if ( DwmDwordHelper )
    v1 = v11;
  CCommonRegistryData::m_dwOverlayTestMode = v1;
  v11 = 0;
  RegGetDwmDwordHelper(L"DisableAdvancedDirectFlip", &v11, 0LL);
  v11 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"DisableIndependentFlip", &v11, 0LL) )
    CCommonRegistryData::m_fDisableIndependentFlip = v11 != 0;
  v11 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"FrameCounterPosition", &v11, 0LL) )
    CCommonRegistryData::m_fDebugFrameCounterIsVertical = v11 != 0;
  v11 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"FlattenVirtualSurfaceEffectInput", &v11, 0LL) )
    CCommonRegistryData::m_fFlattenVirtualSurfaceBrush = v11 != 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"CpuClipFlatteningTolerance", &v11, 0LL) )
    CCommonRegistryData::m_flCpuClipFlatteningTolerance = (float)(int)v11 / 1000.0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"InteractionOutputPredictionDisabled", &v11, 0LL) )
    CCommonRegistryData::m_fDisableInteractionOutputPrediction = v11 != 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"BackdropBlurCachingThrottleMs", &v11, 0LL) )
  {
    v7 = v11;
    if ( v11 > 0x3E8 )
      v7 = 1000;
    v2 = g_qpcFrequency.QuadPart * v7;
  }
  else
  {
    v2 = 25 * g_qpcFrequency.QuadPart;
  }
  v11 = 0;
  CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta = v2 / 1000;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"ForceNonPrimaryDisplayAdapter", &v11, 1LL) )
    CCommonRegistryData::m_fSceneForceNonPrimaryDisplayAdapter = v11 != 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"ImageProcessingResizeThreshold", &v11, 1LL) )
    CCommonRegistryData::m_flSceneImageProcessingResizeThreshold = (float)(int)v11 / 100.0;
  v11 = 0;
  RegGetDwmDwordHelper(L"EnableRenderPathTestMode", &v11, 0LL);
  v11 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"ForceEffectMode", &v11, 0LL) )
  {
    v8 = CCommonRegistryData::m_forceEffectMode;
    if ( v11 <= 2 )
      v8 = v11;
    CCommonRegistryData::m_forceEffectMode = v8;
  }
  v11 = 1;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"ParallelModePolicy", &v11, 0LL) )
  {
    v9 = v11;
    if ( v11 >= 3 )
      v9 = 1;
    CCommonRegistryData::m_parallelModePolicy = v9;
  }
  v11 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"CustomRefreshRateMode", &v11, 0LL) )
  {
    v10 = CCommonRegistryData::m_customRefreshRateMode;
    if ( v11 <= 2 )
      v10 = v11;
    CCommonRegistryData::m_customRefreshRateMode = v10;
  }
  v11 = 0;
  if ( (unsigned __int8)RegGetDwmDwordHelper(L"SDRBoostPercentOverride", &v11, 0LL) )
    CCommonRegistryData::m_flSDRBoostOverride = (float)(int)v11 / 100.0;
  v11 = 0;
  RegGetDwmDwordHelper(L"DisableProjectedShadowsRendering", &v11, 0LL);
  v11 = 0;
  v3 = RegGetDwmDwordHelper(L"ResampleModeOverride", &v11, 0LL);
  v4 = CCommonRegistryData::m_dwResampleModeOverride;
  if ( v3 )
    v4 = v11;
  CCommonRegistryData::m_dwResampleModeOverride = v4;
  v11 = 0;
  v5 = RegGetDwmDwordHelper(L"ResampleInLinearSpace", &v11, 0LL);
  v6 = CCommonRegistryData::m_fResampleInLinearSpace;
  if ( v5 )
    v6 = v11;
  CCommonRegistryData::m_fResampleInLinearSpace = v6;
}
