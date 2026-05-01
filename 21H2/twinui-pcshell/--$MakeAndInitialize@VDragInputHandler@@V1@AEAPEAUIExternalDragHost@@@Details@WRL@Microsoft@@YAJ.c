/*
 * XREFs of ??$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJPEAPEAVDragInputHandler@@AEAPEAUIExternalDragHost@@@Z @ 0x1804267D4
 * Callers:
 *     ?DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z @ 0x180426930 (-DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180087A9C (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A2210 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ??0DragInputHandler@@QEAA@XZ @ 0x180426860 (--0DragInputHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DragInputHandler@@QEAAJPEAUIExternalDragHost@@@Z @ 0x180426A8C (-RuntimeClassInitialize@DragInputHandler@@QEAAJPEAUIExternalDragHost@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DragInputHandler,DragInputHandler,IExternalDragHost * &>(
        __int64 *a1,
        struct IExternalDragHost **a2)
{
  DragInputHandler *v4; // rax
  int v5; // ebx
  DragInputHandler *v6; // rax
  struct IExternalDragHost *v7; // rdx
  __int64 v8; // rdi
  volatile int *v9; // rdx
  DragInputHandler *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (DragInputHandler *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = DragInputHandler::DragInputHandler(v4);
    v7 = *a2;
    v8 = (__int64)v6;
    v11 = v6;
    v5 = DragInputHandler::RuntimeClassInitialize(v6, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
          v8,
          v9);
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
