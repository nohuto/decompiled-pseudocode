/*
 * XREFs of ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BA31C
 * Callers:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x180012668 (--1CCompositionLight@@UEAA@XZ.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1802208F0 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 *     ??1CSceneMesh@@MEAA@XZ @ 0x18024B470 (--1CSceneMesh@@MEAA@XZ.c)
 *     ??1CSceneMaterial@@MEAA@XZ @ 0x18024C6F8 (--1CSceneMaterial@@MEAA@XZ.c)
 *     ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x18024DDF0 (--1CSceneSurfaceMaterialInput@@MEAA@XZ.c)
 *     ?DetachFromChannel@CSpatialRemarshaler@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18024E6F0 (-DetachFromChannel@CSpatialRemarshaler@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ??1CSceneWorld@@MEAA@XZ @ 0x180260250 (--1CSceneWorld@@MEAA@XZ.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1801B9E78 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 */

void __fastcall CSceneResourceManager::UnregisterSceneListener(
        CSceneResourceManager *this,
        struct ISceneNotificationListener *a2)
{
  struct ISceneNotificationListener **i; // rbx
  struct ISpectreRenderer *SpectreRenderer; // rdx
  __int64 v5; // r8

  for ( i = (struct ISceneNotificationListener **)*((_QWORD *)this + 5);
        i != *((struct ISceneNotificationListener ***)this + 6);
        ++i )
  {
    if ( *i == a2 )
    {
      SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
      if ( SpectreRenderer )
        (*(void (__fastcall **)(__int64, struct ISpectreRenderer *))(*(_QWORD *)v5 + 8LL))(v5, SpectreRenderer);
      memmove_0(i, i + 1, *((_QWORD *)this + 6) - (_QWORD)(i + 1));
      *((_QWORD *)this + 6) -= 8LL;
      return;
    }
  }
}
