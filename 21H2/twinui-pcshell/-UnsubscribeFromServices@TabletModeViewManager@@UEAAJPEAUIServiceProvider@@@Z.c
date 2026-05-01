/*
 * XREFs of ?UnsubscribeFromServices@TabletModeViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180473300
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeViewManager::UnsubscribeFromServices(
        TabletModeViewManager *this,
        struct IServiceProvider *a2)
{
  (*(void (__fastcall **)(char *, struct IServiceProvider *))(*((_QWORD *)this + 8) + 64LL))((char *)this + 64, a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  return 0LL;
}
