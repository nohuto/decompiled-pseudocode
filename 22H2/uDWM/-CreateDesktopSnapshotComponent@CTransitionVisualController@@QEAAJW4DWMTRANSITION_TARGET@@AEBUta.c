/*
 * XREFs of ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AA96C
 * Callers:
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800AFE10 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18000A374 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000ADB8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000AF24 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BE34 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000C19C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180019DAC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180034158 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18003419C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x1800347D4 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::CreateDesktopSnapshotComponent(
        CTransitionVisualController *a1,
        __int64 a2,
        const struct tagRECT *a3,
        _DWORD *a4,
        __int64 *a5)
{
  int v5; // eax
  CAnimatedTransitionVisual *v9; // r14
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // r15
  unsigned int v14; // esi
  struct CVisual *RootVisualForDesktop; // rbx
  int v16; // r9d
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  int v20; // edi
  bool v21; // zf
  __int64 *v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-20h]
  unsigned __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  __int64 v26; // [rsp+38h] [rbp-8h] BYREF
  CAnimatedTransitionVisual *v27; // [rsp+80h] [rbp+40h] BYREF

  v5 = a3->right - a3->left;
  v27 = 0LL;
  if ( v5 < 0 )
    v5 = 0;
  v25 = 0LL;
  LODWORD(v26) = v5;
  v9 = 0LL;
  v10 = a3->bottom - a3->top;
  if ( v10 < 0 )
    v10 = 0;
  HIDWORD(v26) = v10;
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
    v13 = CAnimationComponent::CAnimationComponent(v11, -1LL, 10, v12, (__int64)a4);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x517u);
    return v14;
  }
  *(_DWORD *)(v13 + 60) = 0x7FFFFFFF;
  GetDesktopID(1LL, &v25);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v25);
  if ( !RootVisualForDesktop )
  {
    v24 = 1309;
LABEL_12:
    v16 = -2147024882;
    v14 = -2147024882;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v16,
      v24);
    goto LABEL_29;
  }
  v17 = CTransitionVisualController::_SetDesktopId(a1, v25);
  v14 = v17;
  if ( v17 < 0 )
  {
    v24 = 1312;
LABEL_16:
    v16 = v17;
    goto LABEL_13;
  }
  v18 = CAnimatedTransitionVisual::Create(&v27);
  v14 = v18;
  if ( v18 >= 0 )
  {
    v9 = v27;
    if ( !v27 )
    {
      v24 = 1316;
      goto LABEL_12;
    }
    v17 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v27, RootVisualForDesktop, 1, a3);
    v14 = v17;
    if ( v17 < 0 )
    {
      v24 = 1319;
      goto LABEL_16;
    }
    v17 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual((CCachedVisualImageProxy **)v9, RootVisualForDesktop, a3);
    v14 = v17;
    if ( v17 < 0 )
    {
      v24 = 1320;
      goto LABEL_16;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v9, a3);
    *((struct tagRECT *)v9 + 54) = *a3;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v9 + 8), 4096);
    v19 = v26;
    (*(void (__fastcall **)(__int64, __int64 *))(*((_QWORD *)v9 + 1) + 96LL))((__int64)v9 + 8, &v26);
    *((_QWORD *)v9 + 118) = v19;
    CVisual::SetInterpolationMode((unsigned int *)v9 + 2, 1u);
    v20 = a4[18];
    *((_DWORD *)v9 + 183) = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
    *((_DWORD *)v9 + 182) = v20;
    *((_BYTE *)v9 + 964) = CStoryboard::IsRTL();
    *(_QWORD *)(v13 + 40) = v9;
    _InterlockedIncrement((volatile signed __int32 *)v9 + 4);
    v21 = *(_DWORD *)(v13 + 68) == 2;
    *(struct tagRECT *)(v13 + 88) = *a3;
    if ( !v21 )
      *(_DWORD *)(v13 + 68) = 1;
    *((_QWORD *)v27 + 117) = 0LL;
    v22 = a5;
    *((_QWORD *)v9 + 118) = v19;
    *v22 = v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v18,
      0x523u);
  }
  v9 = v27;
LABEL_29:
  CBaseObject::Release((CBaseObject *)v13);
  if ( v9 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v9 + 8));
  return v14;
}
