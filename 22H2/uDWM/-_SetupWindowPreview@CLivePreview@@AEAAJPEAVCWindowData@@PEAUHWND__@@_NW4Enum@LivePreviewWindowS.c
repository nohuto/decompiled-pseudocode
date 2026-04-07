/*
 * XREFs of ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180083B0C
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x1800820AC (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x180083A4C (-_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowStat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?IsWindowTab@CWindowData@@QEAA_NXZ @ 0x180056A08 (-IsWindowTab@CWindowData@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x180056D4C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewWindow@@$0A@@@QEAAJPEFBULivePreviewWindow@@I@Z @ 0x18008165C (-AddMultipleAndSet@-$DynArray@ULivePreviewWindow@@$0A@@@QEAAJPEFBULivePreviewWindow@@I@Z.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800832AC (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 *     ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x180083A4C (-_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowStat.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180094758 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 */

__int64 __fastcall CLivePreview::_SetupWindowPreview(
        CLivePreview *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        struct CVisual *a6,
        char a7)
{
  unsigned int v7; // ebx
  volatile signed __int32 *LivePreviewWindow; // rax
  struct CVisual *v12; // rsi
  int LivePreviewVisual; // eax
  CBaseObject *v14; // r15
  int v15; // eax
  CLivePreview *v16; // rax
  VisualCollection *v17; // rcx
  int inserted; // eax
  int v19; // eax
  int v20; // eax
  CBaseObject *v22; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v23; // [rsp+38h] [rbp-38h] BYREF
  __int128 v24; // [rsp+40h] [rbp-30h] BYREF
  CBaseObject *v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+58h] [rbp-18h]
  __int64 v27; // [rsp+60h] [rbp-10h]
  unsigned int v28; // [rsp+68h] [rbp-8h]

  v7 = 0;
  v22 = 0LL;
  v23 = 0LL;
  if ( a4 )
  {
    LivePreviewWindow = (volatile signed __int32 *)CLivePreview::_FindLivePreviewWindow(a1, *(HWND *)(a2 + 40));
    v22 = (CBaseObject *)LivePreviewWindow;
    if ( LivePreviewWindow )
    {
      _InterlockedIncrement(LivePreviewWindow + 2);
      v12 = v22;
      goto LABEL_24;
    }
  }
  LivePreviewVisual = CTopLevelWindow::GetLivePreviewVisual((struct CWindowData *)a2, &v22, &v23);
  v12 = v22;
  v7 = LivePreviewVisual;
  v14 = v23;
  if ( LivePreviewVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LivePreviewVisual, 0x18Eu);
    goto LABEL_22;
  }
  v26 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)&v24 = v22;
  *((_QWORD *)&v24 + 1) = a2;
  v25 = v23;
  v27 = a3;
  v28 = a5;
  v15 = DynArray<LivePreviewWindow,0>::AddMultipleAndSet((__int64)a1 + 336, &v24);
  v7 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x19Cu);
    goto LABEL_22;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
  {
    if ( *(_DWORD *)(a2 + 112) == 1 || CWindowData::IsWindowTab((CWindowData *)a2) )
    {
LABEL_13:
      v16 = a1;
      if ( a1 )
        goto LABEL_15;
    }
  }
  else if ( *(_DWORD *)(a2 + 112) == 1 )
  {
    goto LABEL_13;
  }
  v16 = (CLivePreview *)*((_QWORD *)a1 + 61);
LABEL_15:
  v17 = (CLivePreview *)((char *)v16 + 32);
  if ( a7 )
  {
    inserted = VisualCollection::InsertRelative(v17, v12, a6, 0, 1);
    v7 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x1B5u);
      goto LABEL_22;
    }
  }
  else
  {
    v19 = VisualCollection::InsertRelative(v17, v12, a6, 1u, 1);
    v7 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x1B9u);
      goto LABEL_22;
    }
  }
  v20 = CLivePreview::_SetupOwneePreview((__int64)a1, a2, a3, a5);
  v7 = v20;
  if ( v20 >= 0 )
    goto LABEL_24;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x1BCu);
LABEL_22:
  if ( v14 )
    CBaseObject::Release(v14);
LABEL_24:
  if ( v12 )
    CBaseObject::Release(v12);
  return v7;
}
