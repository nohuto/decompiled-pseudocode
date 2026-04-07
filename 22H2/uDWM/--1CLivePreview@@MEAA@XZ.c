/*
 * XREFs of ??1CLivePreview@@MEAA@XZ @ 0x18008142C
 * Callers:
 *     ??_GCLivePreview@@MEAAPEAXI@Z @ 0x180081540 (--_GCLivePreview@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180082504 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x180083830 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 */

void __fastcall CLivePreview::~CLivePreview(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rax
  bool v9; // zf
  char v10; // al
  CBaseObject *v11; // rcx

  *this = (CBaseObject *)&CLivePreview::`vftable';
  CLivePreview::_ClearAnimationOpaqueVisuals((CLivePreview *)this);
  v2 = this[59];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[60];
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = this[61];
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = this[62];
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = this[63];
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = this[64];
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = this[58];
  if ( v8 )
  {
    v9 = (*((_DWORD *)v8 + 2))-- == 1;
    v10 = CDesktopManager::s_fTimelineDirty;
    if ( v9 )
      v10 = 1;
    CDesktopManager::s_fTimelineDirty = v10;
  }
  v11 = this[67];
  if ( v11 )
    CBaseObject::Release(v11);
  CLivePreview::_ReleasePerMonitorResources((CLivePreview *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 54);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 50);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 46);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 42);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 38);
  CRenderDataVisual::~CRenderDataVisual(this);
}
