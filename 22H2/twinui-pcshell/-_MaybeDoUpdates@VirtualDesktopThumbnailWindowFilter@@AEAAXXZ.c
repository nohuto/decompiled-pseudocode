/*
 * XREFs of ?_MaybeDoUpdates@VirtualDesktopThumbnailWindowFilter@@AEAAXXZ @ 0x1803FAEB4
 * Callers:
 *     ?EndUpdates@VirtualDesktopThumbnailWindowFilter@@UEAAXXZ @ 0x1803FA760 (-EndUpdates@VirtualDesktopThumbnailWindowFilter@@UEAAXXZ.c)
 *     ?ViewVirtualDesktopChanged@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIApplicationView@@@Z @ 0x1803FAD90 (-ViewVirtualDesktopChanged@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VirtualDesktopThumbnailWindowFilter::_MaybeDoUpdates(VirtualDesktopThumbnailWindowFilter *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // rbp
  __int64 v4; // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 10) && *((_BYTE *)this + 44) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 8);
    v3 = &v2[*((_QWORD *)this + 9)];
    while ( v2 != v3 )
    {
      v7 = 0LL;
      v4 = *v2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
             v4,
             &GUID_26416599_c4b3_4461_aa83_8894655817db,
             &v7) >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x6B,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
            (const char *)(unsigned int)v5);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
      ++v2;
    }
    *((_BYTE *)this + 44) = 0;
  }
}
