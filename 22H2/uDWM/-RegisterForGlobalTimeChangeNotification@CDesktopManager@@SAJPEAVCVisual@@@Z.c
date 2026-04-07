/*
 * XREFs of ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000C8E8
 * Callers:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x1800077B4 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000F100 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18002548C (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180082CC0 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180082D38 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180095500 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180095540 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009B570 (-RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?RegisterGlobalTimer@CRippleEffect@@AEAAJXZ @ 0x18009C064 (-RegisterGlobalTimer@CRippleEffect@@AEAAJXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800A752C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800ACF54 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z @ 0x18003EDB8 (-AddMultipleAndSet@-$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z.c)
 */

__int64 __fastcall CDesktopManager::RegisterForGlobalTimeChangeNotification(struct CVisual *a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  struct CVisual *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v1 = DynArray<CVisual *,0>::AddMultipleAndSet((char *)CDesktopManager::s_pDesktopManagerInstance + 576, &v4, 1LL);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x738u);
  else
    _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
  return v2;
}
