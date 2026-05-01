/*
 * XREFs of ?UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803EDD90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_ShutdownChildServices@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x1803EE214 (-_ShutdownChildServices@CMultitaskingViewServiceProvider@@AEAAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::UnsubscribeFromServices(
        CMultitaskingViewServiceProvider *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx

  CMultitaskingViewServiceProvider::_ShutdownChildServices((CMultitaskingViewServiceProvider *)((char *)this - 24));
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  }
  v4 = (void *)*((_QWORD *)this + 26);
  if ( v4 )
    SetEvent(v4);
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  return 0LL;
}
