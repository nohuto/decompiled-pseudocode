/*
 * XREFs of ??1CCompositionLight@@UEAA@XZ @ 0x180012668
 * Callers:
 *     ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x1800125A0 (--_ECCompositionAmbientLight@@UEAAPEAXI@Z.c)
 *     ??1CCompositionSpotLight@@UEAA@XZ @ 0x180012634 (--1CCompositionSpotLight@@UEAA@XZ.c)
 *     ??_GCCompositionLight@@UEAAPEAXI@Z @ 0x180215500 (--_GCCompositionLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x18021FFD0 (--_GCCompositionDistantLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionPointLight@@UEAAPEAXI@Z @ 0x180221500 (--_ECCompositionPointLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionEnvironmentLight@@UEAAPEAXI@Z @ 0x18026ABA0 (--_GCCompositionEnvironmentLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x180012760 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BA31C (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CCompositionLight::~CCompositionLight(CCompositionLight *this)
{
  bool v1; // zf
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r9
  __int64 v7; // rcx

  v1 = *((_BYTE *)this + 252) == 0;
  *(_QWORD *)this = &CCompositionLight::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 10) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  if ( !v1 )
    CSceneResourceManager::UnregisterSceneListener(
      *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
      (CCompositionLight *)((char *)this + 80));
  if ( *((_BYTE *)this + 171) )
  {
    v3 = *((_QWORD *)this + 2);
    v4 = 0LL;
    v5 = *(_DWORD *)(v3 + 1072);
    v6 = *(_QWORD *)(v3 + 1048);
    if ( v5 )
    {
      do
      {
        if ( this == *(CCompositionLight **)(v6 + 8 * v4) )
          break;
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < v5 );
    }
    if ( (unsigned int)v4 < v5 )
    {
      while ( (unsigned int)v4 < v5 - 1 )
      {
        *(_QWORD *)(v6 + 8 * v4) = *(_QWORD *)(v6 + 8LL * (unsigned int)(v4 + 1));
        v4 = (unsigned int)(v4 + 1);
        v5 = *(_DWORD *)(v3 + 1072);
      }
      *(_DWORD *)(v3 + 1072) = v5 - 1;
    }
  }
  CCompositionLight::RemoveAllTargets(this, 0LL);
  CCompositionLight::RemoveAllTargets(this, 1LL);
  v7 = *((_QWORD *)this + 22);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 128);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 88);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
