/*
 * XREFs of ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18011E134
 * Callers:
 *     ?OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18011D3E4 (-OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProx.c)
 *     ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18011DED0 (-RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?PauseNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18011D484 (-PauseNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18011E008 (-ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@.c)
 */

void __fastcall ControllerNavigationManager::SetCurrentStateWithOverride(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationOverrideProxy *a2)
{
  struct BamoControllerNavigationOverrideProxy *v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct BamoControllerNavigationOverrideProxy *)*((_QWORD *)this + 24);
  if ( v2 != a2 )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD))a2;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v7);
    v5 = *((_QWORD *)this + 24);
    v2 = a2;
    *((_QWORD *)this + 24) = a2;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v2 = (struct BamoControllerNavigationOverrideProxy *)*((_QWORD *)this + 24);
    }
  }
  if ( v2 && (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v2 + 1) + 32LL))((__int64)v2 + 8) )
    ControllerNavigationManager::PauseNavigation(this, v6);
  else
    ControllerNavigationManager::ResumeNavigation(this, *((struct BamoControllerNavigationOverrideProxy **)this + 24));
}
