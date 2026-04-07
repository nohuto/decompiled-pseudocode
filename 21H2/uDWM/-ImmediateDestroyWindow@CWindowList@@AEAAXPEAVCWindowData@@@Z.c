/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180014FCC
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180011594 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180014810 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x18000B07C (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180013884 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180013E28 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18001495C (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180014A30 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180014A54 (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ??1CWindowData@@QEAA@XZ @ 0x180014AB0 (--1CWindowData@@QEAA@XZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180014BBC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180014F2C (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015748 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x1800169E4 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180016D78 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001A5EC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180022900 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x180025254 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180027A5C (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B1F0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18003D484 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?OnHostWindowDying@CWindowList@@CAXPEAVCWindowData@@@Z @ 0x1800577B8 (-OnHostWindowDying@CWindowList@@CAXPEAVCWindowData@@@Z.c)
 *     ?OnProxyWindowDying@CWindowList@@CAXPEAVCWindowData@@@Z @ 0x18005788C (-OnProxyWindowDying@CWindowList@@CAXPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x18008A08C (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x18008A6F0 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 *     ?_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z @ 0x18008AA14 (-_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z.c)
 *     ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x1800B96D4 (-GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800B97A0 (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 */

void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  struct CSecondaryWindowRepresentation **v4; // rax
  struct CSecondaryWindowRepresentation *v5; // rdx
  CBaseObject *v6; // rcx
  __int64 v7; // r8
  unsigned int i; // ebx
  CWindowData *v9; // rcx
  CBaseObject *v10; // rcx
  int v11; // eax
  CDesktopManager *v12; // rbx
  __int64 v13; // rcx
  CTransitionVisualController *v14; // rcx
  unsigned int j; // esi
  __int64 v16; // rcx
  CBaseObject *v17; // rcx
  struct CVisual *v18; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  CTopLevelWindow3D *v20; // rcx
  CBaseObject *v21; // rcx
  struct CVisual *v22; // rbx
  struct CRenderDataVisual *v23; // rax
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  CBaseObject *v28; // rax
  __int64 v29; // rcx
  CBaseObject *v30; // rcx
  __int64 v31; // rbx
  HWND v32; // rdx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v33; // rsi
  unsigned int v34; // edx
  unsigned int k; // esi
  __int64 v36; // rcx
  CIconicBitmapRegistry *v37; // rbx
  CBaseObject *v38; // rcx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+48h] [rbp+10h] BYREF

  IconicResourceNoRef = a2;
  if ( (*((_BYTE *)a2 + 610) & 4) != 0 )
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 58, &IconicResourceNoRef);
  while ( *((_DWORD *)a2 + 124) )
    CWindowList::UnregisterThumbnail(this, **((struct CThumbnailData ***)a2 + 59));
  while ( *((_DWORD *)a2 + 132) )
    CWindowList::UnregisterThumbnail(this, **((struct CThumbnailData ***)a2 + 63));
  CWindowList::SetOwner(this, a2, 0LL);
  while ( *((_DWORD *)a2 + 114) )
  {
    v4 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)a2 + 54);
    v5 = *v4;
    if ( a2 == *((struct CWindowData **)*v4 + 4) )
      *((_QWORD *)v5 + 4) = 0LL;
    CWindowData::RemoveSecondaryWindowRepresentation(a2, v5);
  }
  CWindowData::IsImmersiveWindow(a2);
  v6 = (CBaseObject *)*((_QWORD *)a2 + 52);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)a2 + 52) = 0LL;
    for ( i = 0; i < *((_DWORD *)a2 + 142); ++i )
    {
      v9 = *(CWindowData **)(*((_QWORD *)a2 + 68) + 8LL * i);
      if ( (*((_DWORD *)v9 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v9, 0, v7, 0);
    }
  }
  v10 = (CBaseObject *)*((_QWORD *)a2 + 53);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)a2 + 53) = 0LL;
  }
  while ( 1 )
  {
    v11 = *((_DWORD *)a2 + 142);
    if ( !v11 )
      break;
    CWindowList::SetOwner(v10, *(struct CWindowData **)(*((_QWORD *)a2 + 68) + 8LL * (unsigned int)(v11 - 1)), 0LL);
  }
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64), a2, 0LL, 1);
  v12 = CDesktopManager::s_pDesktopManagerInstance;
  v13 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  if ( v13 )
  {
    CWindowPropertyTracker::StopTrackingWindowImmediately((CWindowPropertyTracker *)(v13 + 48), *((HWND *)a2 + 5));
    v12 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v14 = (CTransitionVisualController *)*((_QWORD *)v12 + 31);
  if ( v14 )
  {
    CTransitionVisualController::RemoveTLWClone(v14, *((const struct CTopLevelWindow **)a2 + 48), 0, 1);
    v12 = CDesktopManager::s_pDesktopManagerInstance;
  }
  for ( j = 0; j < *((_DWORD *)v12 + 194); ++j )
  {
    v16 = *(_QWORD *)(*((_QWORD *)v12 + 94) + 8LL * j);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v16 + 192LL))(v16, a2);
  }
  v17 = (CBaseObject *)*((_QWORD *)a2 + 72);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)a2 + 72) = 0LL;
  }
  v18 = (struct CVisual *)*((_QWORD *)a2 + 49);
  if ( v18 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32), v18);
    v20 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 49);
    if ( v20 )
      CTopLevelWindow3D::StopAnimation(v20);
    v21 = (CBaseObject *)*((_QWORD *)a2 + 49);
    if ( v21 )
    {
      CBaseObject::Release(v21);
      *((_QWORD *)a2 + 49) = 0LL;
    }
  }
  v22 = (struct CVisual *)*((_QWORD *)a2 + 48);
  if ( v22 )
  {
    v23 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)v23 + 32), v22);
    v24 = (CBaseObject *)*((_QWORD *)a2 + 48);
    if ( v24 )
    {
      CBaseObject::Release(v24);
      *((_QWORD *)a2 + 48) = 0LL;
    }
  }
  if ( *((_QWORD *)a2 + 75) )
    CWindowList::OnProxyWindowDying(a2);
  if ( *((_QWORD *)a2 + 74) )
    CWindowList::OnHostWindowDying(a2);
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v25 = (CBaseObject *)*((_QWORD *)a2 + 50);
  if ( v25 )
  {
    v26 = *((_QWORD *)v25 + 3);
    if ( v26 )
    {
      VisualCollection::Remove((VisualCollection *)(v26 + 32), *((struct CVisual **)a2 + 50));
      v25 = (CBaseObject *)*((_QWORD *)a2 + 50);
    }
    if ( v25 )
    {
      CBaseObject::Release(v25);
      *((_QWORD *)a2 + 50) = 0LL;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  v27 = *((_QWORD *)a2 + 48);
  if ( v27 )
  {
    if ( (*(_BYTE *)(v27 + 241) & 2) != 0 )
      CTopLevelWindow::ReleaseHolographicSlate(*((CTopLevelWindow **)a2 + 48));
    v28 = *(CBaseObject **)(v27 + 480);
    if ( v28 )
    {
      v29 = *((_QWORD *)v28 + 3);
      if ( v29 )
      {
        VisualCollection::Remove((VisualCollection *)(v29 + 32), *(struct CVisual **)(v27 + 480));
        v28 = *(CBaseObject **)(v27 + 480);
      }
      if ( v28 )
      {
        CBaseObject::Release(v28);
        *(_QWORD *)(v27 + 480) = 0LL;
      }
    }
  }
  v30 = (CBaseObject *)*((_QWORD *)a2 + 16);
  if ( v30 )
  {
    CBaseObject::Release(v30);
    *((_QWORD *)a2 + 16) = 0LL;
  }
  v31 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 38);
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                          (CImmersiveIconicBitmapRegistry *)v31,
                          *((HWND *)a2 + 5));
  v33 = IconicResourceNoRef;
  if ( IconicResourceNoRef )
  {
    DynArray<CBitmapSource *,0>::Remove(v31 + 16, &IconicResourceNoRef);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v33, v34);
    v32 = (HWND)*((_QWORD *)a2 + 5);
  }
  CImmersiveIconicBitmapRegistry::_ClearBitmap((CImmersiveIconicBitmapRegistry *)v31, v32);
  for ( k = 0; k < *(_DWORD *)(v31 + 72); ++k )
  {
    if ( *((HWND *)a2 + 5) == CIconicAnimatedVisual::GetWindow(*(CIconicAnimatedVisual **)(*(_QWORD *)(v31 + 48)
                                                                                         + 8LL * k)) )
      CIconicAnimatedVisual::SetIconicData(v36, 0LL, 0LL, 0LL);
  }
  v37 = (CIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 37);
  *((_BYTE *)a2 + 610) &= 0xC7u;
  CIconicBitmapRegistry::RequestBitmap(v37, (HWND *)a2, 0);
  CIconicBitmapRegistry::ClearBitmap(v37, (CWindowIconic **)a2);
  v38 = (CBaseObject *)*((_QWORD *)a2 + 46);
  if ( v38 )
  {
    CBaseObject::Release(v38);
    *((_QWORD *)a2 + 46) = 0LL;
  }
  CWindowList::UnregisterAccentState(this, a2);
  CWindowData::~CWindowData((CWindowData **)a2);
  (*(void (__fastcall **)(WPF::HeapBase *, struct CWindowData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a2);
}
