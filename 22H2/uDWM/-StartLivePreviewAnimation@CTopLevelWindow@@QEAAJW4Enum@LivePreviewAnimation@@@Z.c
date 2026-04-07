/*
 * XREFs of ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180095540
 * Callers:
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x1800834F4 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x180083CEC (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180083E24 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000C8E8 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180040C58 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x18004B178 (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800817F0 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x180085158 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180094A98 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::StartLivePreviewAnimation(__int64 a1, int a2)
{
  unsigned int v3; // edi
  int v4; // edx
  struct CVisual *v5; // rcx
  int v6; // ecx
  double AnimationDuration; // xmm6_8
  CLivePreviewTimeline *v8; // rax
  CLivePreviewTimeline *v9; // rax

  v3 = 0;
  *(_DWORD *)(a1 + 248) = a2;
  if ( !CTopLevelWindow::HasAnimation((CTopLevelWindow *)a1) )
  {
    CDesktopManager::RegisterForGlobalTimeChangeNotification(v5);
    v4 = *(_DWORD *)(a1 + 248);
  }
  ++*(_DWORD *)(a1 + 244);
  v6 = 3;
  AnimationDuration = 0.0;
  if ( v4 == 3 )
  {
    v6 = 2;
  }
  else if ( v4 != 4 )
  {
    goto LABEL_8;
  }
  AnimationDuration = CLivePreview::GetAnimationDuration(v6);
LABEL_8:
  v8 = *(CLivePreviewTimeline **)(a1 + 680);
  if ( v8 )
  {
LABEL_15:
    CLivePreviewTimeline::RestartTimeline((__int64)v8, v4, AnimationDuration);
    return v3;
  }
  v9 = (CLivePreviewTimeline *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 96LL);
  if ( v9 )
    v8 = CLivePreviewTimeline::CLivePreviewTimeline(v9);
  else
    v8 = 0LL;
  *(_QWORD *)(a1 + 680) = v8;
  if ( v8 )
  {
    v4 = *(_DWORD *)(a1 + 248);
    goto LABEL_15;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1146u);
  CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)a1);
  return v3;
}
