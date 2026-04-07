/*
 * XREFs of ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180081D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180019C70 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800251AC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x18003A0F4 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003E0BC (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x1800825F4 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800826B4 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180082774 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x180083AA0 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x180085380 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 *     ?Update@CDoubleResourceProxy@@QEAAJN@Z @ 0x1800BE5E8 (-Update@CDoubleResourceProxy@@QEAAJN@Z.c)
 */

__int64 __fastcall CLivePreview::ValidateVisual(CLivePreview *this)
{
  int v2; // edi
  __int64 v3; // rdx
  CLivePreviewTimeline *v5; // rcx
  CBaseObject *v6; // rcx
  double CurrentOpacity; // xmm0_8
  unsigned int i; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = CVisual::ValidateVisual(this);
  if ( v2 < 0 )
  {
    v3 = 1669LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\livepreview.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( (*((_DWORD *)this + 20) & 0x2000) != 0 )
  {
    if ( !*((_DWORD *)this + 137)
      && *((_DWORD *)this + 142) == 3
      && (unsigned __int8)EtwEventEnabled(
                            Microsoft_Windows_Dwm_Udwm_Provider_Context,
                            &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info)
      && !GetSystemMetrics(8193) )
    {
      CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 141);
    }
    v5 = (CLivePreviewTimeline *)*((_QWORD *)this + 58);
    if ( *((_BYTE *)v5 + 72) )
    {
      if ( *((_DWORD *)this + 82)
        && (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLivePreviewAnimation_Stop) )
      {
        CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 140);
      }
      if ( *((_DWORD *)this + 142) == 4 )
      {
        CLivePreview::_ClearAnimatedVisuals(this);
        v2 = CLivePreview::_CleanupClonedVisualTree(this);
        if ( v2 < 0 )
        {
          v3 = 1692LL;
          goto LABEL_3;
        }
        v2 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
        if ( v2 < 0 )
        {
          v3 = 1693LL;
          goto LABEL_3;
        }
        CLivePreview::_ReleasePerMonitorResources(this);
        v6 = (CBaseObject *)*((_QWORD *)this + 67);
        if ( v6 )
        {
          CBaseObject::Release(v6);
          *((_QWORD *)this + 67) = 0LL;
        }
        v2 = CRenderDataVisual::ClearInstructions(this);
        if ( v2 < 0 )
        {
          v3 = 1698LL;
          goto LABEL_3;
        }
      }
      *((_DWORD *)this + 137) = 0;
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
      v5 = (CLivePreviewTimeline *)*((_QWORD *)this + 58);
    }
    else
    {
      ++*((_DWORD *)this + 137);
    }
    CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(v5);
    v2 = CDoubleResourceProxy::Update(*((CDoubleResourceProxy **)this + 59), CurrentOpacity);
    if ( v2 < 0 )
    {
      v3 = 1711LL;
      goto LABEL_3;
    }
    if ( *((_BYTE *)this + 281) )
    {
      for ( i = 0; i < *((_DWORD *)this + 114); ++i )
      {
        v9 = *((_QWORD *)this + 54);
        v10 = 32LL * i;
        if ( *(_BYTE *)(v10 + v9 + 24) )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + v9) + 104LL))(*(_QWORD *)(v10 + v9));
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 104LL))(*((_QWORD *)this + 63));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 61) + 64LL))(*((_QWORD *)this + 61));
    }
    v2 = CDoubleResourceProxy::Update(*((CDoubleResourceProxy **)this + 60), 1.0 - CurrentOpacity);
    if ( v2 < 0 )
    {
      v3 = 1730LL;
      goto LABEL_3;
    }
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
  return 0LL;
}
