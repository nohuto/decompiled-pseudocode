/*
 * XREFs of ?IsResizeAllowedOnLayout@TabletModeViewManager@@AEAA_NXZ @ 0x1800D75E8
 * Callers:
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1804720D0 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall TabletModeViewManager::IsResizeAllowedOnLayout(TabletModeViewManager *this)
{
  __int64 v2; // rbx
  bool v3; // bl
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( IsPPIEdition() )
  {
    v5 = 0LL;
    v2 = *((_QWORD *)this + 15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL))(v2, &v5) >= 0 )
    {
      v3 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 88LL))(v5, 4LL) == 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
      return v3;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
  return 1;
}
