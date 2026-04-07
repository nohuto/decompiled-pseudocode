/*
 * XREFs of ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180002CE0
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18003FD6C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180003070 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180003328 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180003358 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18000B118 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000B8F0 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001A5EC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024BC0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180026ED0 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800305DC (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180034960 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180035014 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18003A030 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x180041718 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800520B4 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180095960 (McTemplateU0p_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CTransitionVisualController::EnsureSnapshot(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  int v2; // eax
  volatile signed __int32 *v3; // rdi
  int v6; // r13d
  char v7; // r12
  int v8; // eax
  int v9; // ebx
  struct tagRECT *v10; // r15
  unsigned int Clone; // r15d
  int inserted; // eax
  struct CTopLevelWindow *v13; // rdx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  struct CVisual *v18; // rdx
  __int64 v19; // rcx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CVisual *v22; // r14
  CDesktopManager *v23; // rcx
  int v24; // r9d
  int v25; // eax
  unsigned int v26; // [rsp+20h] [rbp-30h]
  unsigned int v27; // [rsp+20h] [rbp-30h]
  void *v28; // [rsp+28h] [rbp-28h]
  __int128 v29; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject *v30; // [rsp+98h] [rbp+48h] BYREF
  CBaseObject *v31; // [rsp+A0h] [rbp+50h] BYREF
  struct tagRECT *v32; // [rsp+A8h] [rbp+58h]

  v2 = *((_DWORD *)a2 + 154);
  v3 = 0LL;
  v30 = 0LL;
  if ( (v2 & 0x40000) != 0 )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    if ( (v2 & 0x10000000) == 0 || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) <= 0 )
    {
      v7 = 0;
      goto LABEL_4;
    }
  }
  v7 = 1;
LABEL_4:
  v31 = 0LL;
  v8 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  v9 = v8;
  if ( v8 < 0 )
  {
    v26 = 2715;
LABEL_46:
    v24 = v8;
LABEL_48:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v24,
      v26,
      v28);
    return (unsigned int)v9;
  }
  if ( !*((_QWORD *)a2 + 5) )
  {
    v9 = -2147024809;
    v26 = 2719;
    v24 = -2147024809;
    goto LABEL_48;
  }
  v8 = CTransitionVisualController::_SetDesktopId(this, *((_QWORD *)a2 + 15));
  v9 = v8;
  if ( v8 < 0 )
  {
    v26 = 2723;
    goto LABEL_46;
  }
  if ( (int)CTransitionVisualController::_GetSnapshotIndex(this, *((HWND *)a2 + 5)) >= 0 )
    return (unsigned int)v9;
  v10 = (struct tagRECT *)(((unsigned __int64)a2 + 620) & -(__int64)((*((_DWORD *)a2 + 154) & 0x1000000) != 0));
  v32 = v10;
  v29 = 0LL;
  if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot(a2) )
  {
    v25 = CTransitionWindowSnapshot::Create(*((struct CTopLevelWindow **)a2 + 48), 0LL, v10, &v30);
    v3 = (volatile signed __int32 *)v30;
    if ( v25 >= 0 )
    {
LABEL_19:
      *(_QWORD *)&v29 = *((_QWORD *)a2 + 5);
      *((_QWORD *)&v29 + 1) = v3;
      goto LABEL_20;
    }
  }
  if ( (*((_BYTE *)a2 + 612) & 0x20) != 0 )
  {
    v9 = -2147483638;
  }
  else
  {
    Clone = CTransitionVisualController::_FindClone(this, a2, 0);
    if ( Clone >= *((_DWORD *)this + 12) )
    {
      inserted = CVisual::Create(&v31);
      v9 = inserted;
      if ( inserted < 0 )
      {
        v27 = 2744;
        goto LABEL_66;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v31, 0LL, 0, 1);
      v9 = inserted;
      if ( inserted < 0 )
      {
        v27 = 2745;
        goto LABEL_66;
      }
      v13 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 48);
      if ( v7 )
      {
        inserted = CTransitionVisualController::_StageCloneWithOwnedWindows(this, v13, v31, 0xFFFFFFFFLL, v6);
        v9 = inserted;
        if ( inserted < 0 )
        {
          v27 = 2750;
          goto LABEL_66;
        }
        Clone = CTransitionVisualController::_FindClone(this, a2, 0);
      }
      else
      {
        inserted = CTransitionVisualController::_StageCloneRelative(this, v13, v31, 0, 0LL, 1, 1, 0LL);
        v9 = inserted;
        if ( inserted < 0 )
        {
          v27 = 2757;
          goto LABEL_66;
        }
      }
    }
    if ( Clone < *((_DWORD *)this + 12) )
    {
      _mm_lfence();
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * Clone) + 728LL) + 40LL) == *((_QWORD *)a2 + 5) )
      {
        _mm_lfence();
        v14 = CTransitionWindowSnapshot::Create(
                *((struct CTopLevelWindow **)a2 + 48),
                *(struct CVisual **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * Clone + 8) + 24LL),
                v32,
                &v30);
        v9 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v14,
            0xAD1u,
            v28);
          v3 = (volatile signed __int32 *)v30;
          goto LABEL_33;
        }
        v3 = (volatile signed __int32 *)v30;
        *((_BYTE *)v30 + 356) = *(_BYTE *)(*((_QWORD *)this + 3) + 24LL * Clone + 18);
        goto LABEL_19;
      }
      v3 = (volatile signed __int32 *)v30;
    }
    v9 = -2147467259;
  }
LABEL_20:
  if ( v3 )
  {
    if ( v9 < 0 )
      goto LABEL_33;
    v15 = *((_DWORD *)this + 20);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v28);
    }
    else
    {
      if ( v16 <= *((_DWORD *)this + 19) )
      {
        *(_OWORD *)(*((_QWORD *)this + 7) + 16LL * *((unsigned int *)this + 20)) = v29;
        *((_DWORD *)this + 20) = v16;
        goto LABEL_27;
      }
      v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 56, 16LL, 1LL, &v29);
      v9 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u, v28);
      if ( v9 >= 0 )
      {
LABEL_27:
        _InterlockedIncrement(v3 + 2);
        if ( (*((_DWORD *)a2 + 154) & 0x100000) != 0 )
        {
          RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                   *((_QWORD *)a2 + 15));
          v3 = (volatile signed __int32 *)v30;
          v22 = RootVisualForDesktop;
          inserted = VisualCollection::InsertRelative(
                       (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                       v30,
                       *((struct CVisual **)a2 + 48),
                       1,
                       1);
          v9 = inserted;
          if ( inserted >= 0 )
          {
            CTransitionVisualController::_MoveOwnedWindowTreeOffscreen(a2);
            CDesktopManager::UpdateSceneImpl(v23, v22);
            goto LABEL_30;
          }
          v27 = 2797;
        }
        else
        {
          v3 = (volatile signed __int32 *)v30;
          v18 = v30;
          *((__m128i *)v30 + 21) = _mm_load_si128((const __m128i *)&_xmm);
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 18) + 32LL),
                       v18,
                       0LL,
                       0,
                       1);
          v9 = inserted;
          if ( inserted >= 0 )
          {
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 64LL))(*((_QWORD *)this + 18));
LABEL_30:
            if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
              McTemplateU0p_EtwEventWriteTransfer(v19, &CommitChannel_Transition_Snapshot, v3);
            inserted = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 5)
                                                                       + 16LL)
                                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                              + 5)
                                                                            + 16LL));
            v9 = inserted;
            if ( inserted >= 0 )
              goto LABEL_33;
            v27 = 2818;
            goto LABEL_66;
          }
          v27 = 2812;
        }
LABEL_66:
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          inserted,
          v27,
          v28);
LABEL_33:
        if ( v3 )
          CBaseObject::Release((CBaseObject *)v3);
        goto LABEL_35;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v9,
      0xAE4u,
      v28);
    goto LABEL_33;
  }
LABEL_35:
  if ( v31 )
    CBaseObject::Release(v31);
  return (unsigned int)v9;
}
