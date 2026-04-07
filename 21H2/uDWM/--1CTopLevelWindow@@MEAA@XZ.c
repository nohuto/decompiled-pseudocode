/*
 * XREFs of ??1CTopLevelWindow@@MEAA@XZ @ 0x1800178D8
 * Callers:
 *     ??_GCTopLevelWindow@@MEAAPEAXI@Z @ 0x18003F370 (--_GCTopLevelWindow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x180025254 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x18003FBF0 (-UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180040B98 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180040D08 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081394 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x180094670 (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180098054 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 */

void __fastcall CTopLevelWindow::~CTopLevelWindow(CBaseObject **this)
{
  unsigned int v2; // esi
  CBaseObject **v3; // rdi
  unsigned int v4; // esi
  __int64 *v5; // rdi
  __int64 v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rcx
  CBaseObject *v27; // rax
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  CBaseObject *v31; // rcx
  CBaseObject *v32; // rcx
  int ProjectedShadowSceneForDesktop; // eax
  CBaseObject *v34; // rcx
  bool v35; // zf
  char v36; // al
  int v37; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v39; // [rsp+50h] [rbp+8h] BYREF
  struct CProjectedShadowScene *v40; // [rsp+60h] [rbp+18h] BYREF

  *this = (CBaseObject *)&CTopLevelWindow::`vftable';
  CTopLevelWindow::StopIconicAnimation((CTopLevelWindow *)this);
  CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)this);
  if ( (*((_BYTE *)this + 241) & 0x20) != 0 )
  {
    v40 = 0LL;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v40);
    ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                       *((_QWORD *)this[91] + 15),
                                       0,
                                       &v40);
    if ( ProjectedShadowSceneForDesktop >= 0 )
      CTopLevelWindow::AddProjectedShadowCaster((CTopLevelWindow *)this, v40, 0LL, 0LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)ProjectedShadowSceneForDesktop,
        v37);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v40);
  }
  v2 = 0;
  v3 = this + 61;
  do
  {
    if ( *v3 )
    {
      CBaseObject::Release(*v3);
      *v3 = 0LL;
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  v4 = 0;
  v5 = (__int64 *)(this + 38);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
      *v5 = 0LL;
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0x16 );
  CTopLevelWindow::ReleaseHolographicSlate((CTopLevelWindow *)this);
  v7 = this[103];
  if ( v7 )
  {
    (*(void (__fastcall **)(CBaseObject *, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, 0LL);
    v34 = this[103];
    if ( v34 )
    {
      (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v34 + 16LL))(v34);
      this[103] = 0LL;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL)
                                 + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL));
  CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget((CTopLevelWindow *)this, &v39);
  v8 = this[99];
  if ( v8 )
  {
    CBaseObject::Release(v8);
    this[99] = 0LL;
  }
  v9 = this[69];
  if ( v9 )
  {
    CBaseObject::Release(v9);
    this[69] = 0LL;
  }
  v10 = this[70];
  if ( v10 )
  {
    CBaseObject::Release(v10);
    this[70] = 0LL;
  }
  v11 = this[32];
  if ( v11 )
  {
    CBaseObject::Release(v11);
    this[32] = 0LL;
  }
  v12 = this[33];
  if ( v12 )
  {
    CBaseObject::Release(v12);
    this[33] = 0LL;
  }
  v13 = this[65];
  if ( v13 )
  {
    CBaseObject::Release(v13);
    this[65] = 0LL;
  }
  v14 = this[34];
  if ( v14 )
  {
    CBaseObject::Release(v14);
    this[34] = 0LL;
  }
  v15 = this[67];
  if ( v15 )
  {
    CBaseObject::Release(v15);
    this[67] = 0LL;
  }
  v16 = this[68];
  if ( v16 )
  {
    CBaseObject::Release(v16);
    this[68] = 0LL;
  }
  v17 = this[35];
  if ( v17 )
  {
    CBaseObject::Release(v17);
    this[35] = 0LL;
  }
  v18 = this[60];
  if ( v18 )
  {
    CBaseObject::Release(v18);
    this[60] = 0LL;
  }
  v19 = this[66];
  if ( v19 )
  {
    CBaseObject::Release(v19);
    this[66] = 0LL;
  }
  v20 = this[92];
  if ( v20 )
  {
    CBaseObject::Release(v20);
    this[92] = 0LL;
  }
  v21 = this[93];
  if ( v21 )
  {
    CBaseObject::Release(v21);
    this[93] = 0LL;
  }
  v22 = this[71];
  if ( v22 )
  {
    CBaseObject::Release(v22);
    this[71] = 0LL;
  }
  v23 = this[37];
  if ( v23 )
  {
    CBaseObject::Release(v23);
    this[37] = 0LL;
  }
  v24 = this[36];
  if ( v24 )
  {
    CBaseObject::Release(v24);
    this[36] = 0LL;
  }
  v25 = this[72];
  if ( v25 )
  {
    CBaseObject::Release(v25);
    this[72] = 0LL;
  }
  v26 = this[73];
  if ( v26 )
  {
    CBaseObject::Release(v26);
    this[73] = 0LL;
  }
  v27 = this[85];
  if ( v27 )
  {
    v35 = (*((_DWORD *)v27 + 2))-- == 1;
    v36 = CDesktopManager::s_fTimelineDirty;
    if ( v35 )
      v36 = 1;
    this[85] = 0LL;
    CDesktopManager::s_fTimelineDirty = v36;
  }
  v28 = this[94];
  if ( v28 )
  {
    CBaseObject::Release(v28);
    this[94] = 0LL;
  }
  v29 = this[95];
  if ( v29 )
  {
    CBaseObject::Release(v29);
    this[95] = 0LL;
  }
  v30 = this[96];
  if ( v30 )
  {
    CBaseObject::Release(v30);
    this[96] = 0LL;
  }
  v31 = this[101];
  if ( v31 )
  {
    CBaseObject::Release(v31);
    this[101] = 0LL;
  }
  v32 = this[104];
  if ( v32 )
  {
    CBaseObject::Release(v32);
    this[104] = 0LL;
  }
  CVisual::~CVisual((CVisual *)this);
}
