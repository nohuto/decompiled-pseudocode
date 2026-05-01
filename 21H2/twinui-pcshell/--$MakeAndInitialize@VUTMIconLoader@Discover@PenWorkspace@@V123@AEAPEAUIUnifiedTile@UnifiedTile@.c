/*
 * XREFs of ??$MakeAndInitialize@VUTMIconLoader@Discover@PenWorkspace@@V123@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVUTMIconLoader@Discover@PenWorkspace@@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1802944F0
 * Callers:
 *     ?RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180294AB0 (-RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@S.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801B5E1C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801E9CA8 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::UTMIconLoader,PenWorkspace::Discover::UTMIconLoader,WindowsInternal::Shell::UnifiedTile::IUnifiedTile * &>(
        __int64 **a1,
        __int64 *a2)
{
  unsigned int v2; // edi
  Microsoft::WRL::FtmBase *v5; // rax
  __int64 *v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (Microsoft::WRL::FtmBase *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (__int64 *)v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>(v5);
    v9 = v6;
    *v6 = (__int64)&PenWorkspace::Discover::UTMIconLoader::`vftable';
    v6[5] = 0LL;
    if ( *a2 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=(v6 + 5, *a2);
      (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
      *a1 = v6;
    }
    else
    {
      v2 = -2147467261;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
        (const char *)0x80004003LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
