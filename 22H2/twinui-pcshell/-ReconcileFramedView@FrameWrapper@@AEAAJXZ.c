/*
 * XREFs of ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x1801F4A74
 * Callers:
 *     ?PrepareFrameForDestroy@FrameWrapper@@UEAAJXZ @ 0x1801F4710 (-PrepareFrameForDestroy@FrameWrapper@@UEAAJXZ.c)
 *     ?PresentFramedView@FrameWrapper@@UEAAJXZ @ 0x1801F47F0 (-PresentFramedView@FrameWrapper@@UEAAJXZ.c)
 *     ?SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z @ 0x1801F4DA0 (-SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSystemVisual@FrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1801F5480 (-SetSystemVisual@FrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFramedViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFramedViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801F3ECC (--$As@UIFramedViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 */

__int64 __fastcall FrameWrapper::ReconcileFramedView(FrameWrapper *this)
{
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 72);
  if ( *v2
    && (int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<IFramedViewWrapper>(
              v2,
              &v7) >= 0
    && (v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, *((_QWORD *)this + 8)),
        v4 = v3,
        v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
    v4 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v4;
}
