/*
 * XREFs of ?Shutdown@DragInputHandler@@UEAAJXZ @ 0x180426C20
 * Callers:
 *     ?RuntimeClassInitialize@DragInputHandler@@QEAAJPEAUIExternalDragHost@@@Z @ 0x180426A8C (-RuntimeClassInitialize@DragInputHandler@@QEAAJPEAUIExternalDragHost@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DragInputHandler::Shutdown(DragInputHandler *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  }
  DestroyWindow(*((HWND *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  return 0LL;
}
