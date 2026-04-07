/*
 * XREFs of ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180082CC0
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003FA3C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000C8E8 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003E00C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800817F0 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x1800834F4 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x180085158 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 */

__int64 __fastcall CLivePreview::_FadeInToNormal(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  *((_DWORD *)this + 142) = 4;
  CLivePreview::GetAnimationDuration(1);
  CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 58));
  CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
  CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
  v2 = CLivePreview::_HideExistingVisuals(this, 0);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x64Du);
  return v3;
}
