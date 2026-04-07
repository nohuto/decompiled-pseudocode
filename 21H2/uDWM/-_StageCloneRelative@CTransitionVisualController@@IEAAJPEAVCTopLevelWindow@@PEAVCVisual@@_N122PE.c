/*
 * XREFs of ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x180041718
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180002CE0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18002B558 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180033E24 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800520B4 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     _lambda_bf936d7524fffe447915a29aa2e3ab18_::operator() @ 0x18005227C (_lambda_bf936d7524fffe447915a29aa2e3ab18_--operator().c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180009548 (-SetHitTestVisibility@CVisual@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024BC0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B1E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002CDC4 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002CED0 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B1F0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180053100 (-AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneRelative(
        CTransitionVisualController *this,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        __int64 a4,
        struct CVisual *a5,
        bool a6,
        bool a7,
        bool *a8)
{
  __int64 v8; // rax
  int v9; // ebx
  char v10; // r14
  __int128 v12; // rdi
  int v14; // eax
  struct tagPOINT *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  VisualCollection *v18; // rcx
  int inserted; // eax
  __int64 v20; // rax
  bool *v21; // rbx
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v27; // eax
  bool v28; // al
  int v29; // r9d
  unsigned int v30; // [rsp+20h] [rbp-30h]
  struct tagPOINT v31; // [rsp+30h] [rbp-20h] BYREF
  __int128 v32; // [rsp+38h] [rbp-18h] BYREF
  __int64 v33; // [rsp+48h] [rbp-8h]
  CBaseObject *v34; // [rsp+88h] [rbp+38h] BYREF

  v8 = *((_QWORD *)a2 + 91);
  v9 = 0;
  v34 = 0LL;
  v10 = a4;
  *(_QWORD *)&v12 = a2;
  if ( (*(_BYTE *)(v8 + 608) & 4) != 0 )
    return (unsigned int)v9;
  v14 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2, 0, (__int64)a3, a4, &v34);
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v14,
      0x8Au);
    goto LABEL_18;
  }
  v15 = *(struct tagPOINT **)(v12 + 728);
  if ( v15 )
    v31 = v15[6];
  else
    v31 = *(struct tagPOINT *)(v12 + 112);
  *((_QWORD *)&v12 + 1) = v34;
  CVisual::SetOffset((struct tagPOINT *)v34, &v31);
  if ( v10 )
    CVisual::SetHitTestVisibility(*((CVisual **)&v12 + 1), v16, v17);
  v18 = (struct CVisual *)((char *)a3 + 32);
  if ( !a6 )
  {
    inserted = VisualCollection::InsertRelative(v18, *((struct CVisual **)&v12 + 1), a5, 0, 1);
    v9 = inserted;
    if ( inserted >= 0 )
      goto LABEL_9;
    v30 = 164;
LABEL_34:
    v29 = inserted;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v29,
      v30);
    goto LABEL_19;
  }
  inserted = VisualCollection::InsertRelative(v18, *((struct CVisual **)&v12 + 1), a5, 1u, 1);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v30 = 160;
    goto LABEL_34;
  }
LABEL_9:
  if ( a7 )
  {
    v20 = *(_QWORD *)(v12 + 728);
    if ( !v20 || (*(_DWORD *)(v20 + 616) & 0x20000000) == 0 )
      CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)v12, 1);
  }
  v21 = a8;
  v32 = v12;
  LOBYTE(v33) = v10;
  *(_WORD *)((char *)&v33 + 1) = 257;
  if ( a8 )
  {
    v28 = *a8 && CTransitionVisualController::AllowSnapshotForSWR(*(HWND *)(*(_QWORD *)(v12 + 728) + 40LL));
    *v21 = v28;
    BYTE2(v33) = v28;
  }
  v22 = *((unsigned int *)this + 12);
  v23 = v22 + 1;
  if ( (int)v22 + 1 < (unsigned int)v22 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_36:
    v30 = 182;
    v29 = v9;
    goto LABEL_37;
  }
  if ( v23 > *((_DWORD *)this + 11) )
  {
    v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 24, 0x18u, 1, &v32);
    v9 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xC0u);
    if ( v9 >= 0 )
      goto LABEL_17;
    goto LABEL_36;
  }
  v24 = 3 * v22;
  v9 = 0;
  v25 = *((_QWORD *)this + 3);
  *(_OWORD *)(v25 + 8 * v24) = v32;
  *(_QWORD *)(v25 + 8 * v24 + 16) = v33;
  *((_DWORD *)this + 12) = v23;
LABEL_17:
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
LABEL_18:
  *((_QWORD *)&v12 + 1) = v34;
LABEL_19:
  if ( v9 < 0 && *((_QWORD *)&v12 + 1) )
  {
    CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)v12, 0);
    VisualCollection::Remove((struct CVisual *)((char *)a3 + 32), *((struct CVisual **)&v12 + 1));
    CBaseObject::Release(*((CBaseObject **)&v12 + 1));
  }
  return (unsigned int)v9;
}
