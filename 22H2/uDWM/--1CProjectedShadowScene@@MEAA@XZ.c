/*
 * XREFs of ??1CProjectedShadowScene@@MEAA@XZ @ 0x1800BB628
 * Callers:
 *     ??_GCProjectedShadowScene@@MEAAPEAXI@Z @ 0x1800BB6D0 (--_GCProjectedShadowScene@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180019DAC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B140 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DCDC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CProjectedShadowScene::~CProjectedShadowScene(CProjectedShadowScene *this)
{
  struct CVisual *v1; // rdi
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx

  v1 = (struct CVisual *)*((_QWORD *)this + 7);
  *(_QWORD *)this = &CProjectedShadowScene::`vftable';
  if ( v1 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                             *((_QWORD *)this + 2));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32), v1);
    v4 = (CBaseObject *)*((_QWORD *)this + 7);
    if ( v4 )
      CBaseObject::Release(v4);
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v6 )
    CBaseObject::Release(v6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
