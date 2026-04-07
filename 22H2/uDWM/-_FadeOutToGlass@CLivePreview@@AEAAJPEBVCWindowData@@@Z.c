/*
 * XREFs of ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180082D38
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003FA3C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000C8E8 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180018ACC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180019DAC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002B214 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002C690 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003E00C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800817F0 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180081DAC (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x1800834F4 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x1800842F4 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x180084440 (-_UpdateInstructions@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x1800845CC (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x180085158 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x1800954A4 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 */

__int64 __fastcall CLivePreview::_FadeOutToGlass(CLivePreview *this, const struct CWindowData *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CVisual *v7; // r8
  VisualCollection *v8; // rdi
  int inserted; // eax
  struct CVisual *v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r15
  CTopLevelWindow *v19; // rcx
  int v20; // eax
  bool v21; // zf
  CBaseObject *v22; // r15
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  CWindowList *v26; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  __int64 v28; // r8
  struct _LIST_ENTRY *v29; // r9
  struct _LIST_ENTRY *i; // r14
  CWindowData **Flink; // rcx
  char v32; // r13
  unsigned int v33; // r12d
  int v34; // eax
  struct CVisual *v35; // r15
  CWindowData **v36; // rcx
  int v37; // eax
  char v38; // bl
  __int64 v39; // rax
  unsigned int v40; // edx
  int v41; // eax
  __int64 v42; // rbx
  struct _LIST_ENTRY v43; // xmm0
  int v44; // eax
  int updated; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int128 v52; // [rsp+30h] [rbp-30h] BYREF
  __int128 v53; // [rsp+40h] [rbp-20h] BYREF
  int v54; // [rsp+50h] [rbp-10h]
  unsigned int v55; // [rsp+54h] [rbp-Ch]
  unsigned int v56; // [rsp+58h] [rbp-8h]
  CBaseObject *v57; // [rsp+B0h] [rbp+50h] BYREF
  struct _LIST_ENTRY *v58; // [rsp+B8h] [rbp+58h]

  v4 = CLivePreview::_HideExistingVisuals(this, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x5B3u);
    return v5;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 62) + 72LL) )
    goto LABEL_75;
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           *((_QWORD *)this + 36));
  v7 = (struct CVisual *)*((_QWORD *)this + 66);
  if ( v7 )
    v7 = (struct CVisual *)*((_QWORD *)v7 + 48);
  v8 = (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32);
  inserted = VisualCollection::InsertRelative(
               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
               this,
               v7,
               0,
               1);
  v5 = inserted;
  if ( inserted >= 0 )
  {
    v10 = this;
    v11 = *(_QWORD *)(*((_QWORD *)this + 67) + 48LL);
    if ( v11 )
      v10 = *(struct CVisual **)(v11 + 384);
    v12 = VisualCollection::InsertRelative(v8, *((struct CVisual **)this + 61), v10, 1u, 1);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x5BEu);
      return v5;
    }
    v15 = *((_DWORD *)this + 82) - 1;
    v16 = v15;
    if ( v15 >= 0 )
    {
      v17 = 40LL * v15;
      do
      {
        v18 = *(_QWORD *)(v17 + *((_QWORD *)this + 38));
        if ( (*(_BYTE *)(v18 + 611) & 2) == 0 && (!a2 || *(_QWORD *)(v18 + 40) != *((_QWORD *)a2 + 5)) )
        {
          v19 = *(CTopLevelWindow **)(v18 + 384);
          v57 = 0LL;
          v20 = CTopLevelWindow::CloneVisualTreeForLivePreview(v19, 0, v13, v14, &v57);
          v5 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x5C9u);
            return v5;
          }
          v21 = *(_DWORD *)(v18 + 112) == 1;
          v22 = v57;
          if ( v21 )
          {
            v23 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 62) + 32LL), v57, 0LL, 0, 1);
            v5 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x5CDu);
              return v5;
            }
          }
          else
          {
            v24 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 63) + 32LL), v57, 0LL, 0, 1);
            v5 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x5D1u);
              return v5;
            }
          }
          *(_QWORD *)(v17 + *((_QWORD *)this + 38) + 8) = v22;
        }
        v17 -= 40LL;
        --v16;
      }
      while ( v16 >= 0 );
    }
    v54 = 0;
    v55 = 0;
    v25 = *((_QWORD *)this + 36);
    v26 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
    v53 = 0LL;
    v56 = 0;
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(v26, v25);
    v58 = WindowListForDesktop;
    for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
    {
      Flink = (CWindowData **)i[24].Flink;
      if ( Flink && LODWORD(i[7].Flink) == 12 )
      {
        v32 = 0;
        v33 = CAccent::s_clrCurrentAccentBackground;
        if ( LODWORD(i[10].Flink) != CAccent::s_clrCurrentAccentBackground )
        {
          v33 = (unsigned int)i[10].Flink;
          LODWORD(i[10].Flink) = CAccent::s_clrCurrentAccentBackground;
          CTopLevelWindow::OnAccentPolicyUpdated(Flink);
          Flink = (CWindowData **)i[24].Flink;
          v32 = 1;
        }
        v57 = 0LL;
        v34 = CTopLevelWindow::CloneVisualTreeForLivePreview((CTopLevelWindow *)Flink, 0, v28, (__int64)v29, &v57);
        v5 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x5EEu);
          goto LABEL_63;
        }
        v35 = v57;
        if ( v57 && !*((_QWORD *)v57 + 91) )
          *((_QWORD *)v57 + 91) = i;
        if ( v32 )
        {
          v36 = (CWindowData **)i[24].Flink;
          LODWORD(i[10].Flink) = v33;
          CTopLevelWindow::OnAccentPolicyUpdated(v36);
        }
        v37 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 61) + 32LL), v35, 0LL, 0, 1);
        v5 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0x5FBu);
          goto LABEL_63;
        }
        if ( (BYTE4(i[38].Flink) & 2) != 0 )
        {
          v38 = 0;
          CTopLevelWindow::SetLivePreviewAlpha(v35, 0.0);
        }
        else
        {
          v38 = 1;
        }
        *(_QWORD *)&v52 = v35;
        v39 = *((unsigned int *)this + 106);
        BYTE8(v52) = v38;
        v40 = v39 + 1;
        if ( (int)v39 + 1 >= (unsigned int)v39 )
        {
          if ( v40 > *((_DWORD *)this + 105) )
          {
            v41 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 400, 0x10u, 1, &v52);
            if ( v41 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0xC0u);
          }
          else
          {
            *(_OWORD *)(*((_QWORD *)this + 50) + 16 * v39) = v52;
            *((_DWORD *)this + 106) = v40;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v42 = v56;
        v29 = i + 3;
        if ( v56 + 1 >= v56 )
        {
          if ( v56 + 1 > v55 )
          {
            v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v53, 0x10u, 1, v29);
            if ( v44 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0xC0u);
          }
          else
          {
            v43 = *v29;
            ++v56;
            *(struct _LIST_ENTRY *)(v53 + 16 * v42) = v43;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        if ( v35 )
          CBaseObject::Release(v35);
        WindowListForDesktop = v58;
      }
    }
    CLivePreview::_AddImmersiveBackground((__int64)this, (__int64)&v53);
    VisualCollection::InsertRelative(
      (VisualCollection *)(*((_QWORD *)this + 61) + 32LL),
      *((struct CVisual **)this + 63),
      0LL,
      0,
      1);
    updated = CLivePreview::_UpdateGlassVisual(this);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x60Du);
LABEL_63:
      DynArrayImpl<0>::~DynArrayImpl<0>(&v53);
      return v5;
    }
    v46 = CLivePreview::_UpdateResources(this);
    v5 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x60Eu);
      goto LABEL_63;
    }
    v47 = CLivePreview::_UpdateInstructions(this);
    v5 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x60Fu);
      goto LABEL_63;
    }
    v48 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 64LL))(*((_QWORD *)this + 64));
    v5 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0x611u);
      goto LABEL_63;
    }
    v49 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 64LL))(*((_QWORD *)this + 63));
    v5 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v49, 0x612u);
      goto LABEL_63;
    }
    v50 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 64LL))(*((_QWORD *)this + 62));
    v5 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v50, 0x613u);
      goto LABEL_63;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&v53);
LABEL_75:
    *((_DWORD *)this + 142) = 3;
    CLivePreview::GetAnimationDuration(0);
    CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 58));
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x5B8u);
  return v5;
}
