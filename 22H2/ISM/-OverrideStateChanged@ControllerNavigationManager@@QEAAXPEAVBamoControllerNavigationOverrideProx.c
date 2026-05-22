/*
 * XREFs of ?OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18011D3E4
 * Callers:
 *     ?OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18011E920 (-OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ControllerNavigationManager::OverrideStateChanged(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationOverrideProxy *a2,
        __int64 a3,
        const char *a4)
{
  struct BamoControllerNavigationOverrideProxy **v4; // r14
  struct BamoControllerNavigationOverrideProxy **i; // rbx
  struct BamoControllerNavigationOverrideProxy *v8; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct BamoControllerNavigationOverrideProxy *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct BamoControllerNavigationOverrideProxy **)*((_QWORD *)this + 26);
  for ( i = (struct BamoControllerNavigationOverrideProxy **)*((_QWORD *)this + 25); i != v4; ++i )
  {
    v10 = *i;
    v8 = v10;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v10);
    if ( v8 )
      (*(void (__fastcall **)(struct BamoControllerNavigationOverrideProxy *))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v8 == a2 )
      break;
  }
  if ( i == *((struct BamoControllerNavigationOverrideProxy ***)this + 26) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      397LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      a4);
    __debugbreak();
  }
  ControllerNavigationManager::SetCurrentStateWithOverride(this, a2);
}
