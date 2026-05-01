/*
 * XREFs of ??$MakeAndInitialize@VCWinRTAppIconLoader@@V1@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@AEBU3@AEBU3@AEAIAEAPEAUIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@YAJPEAPEAVCWinRTAppIconLoader@@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@22AEAIAEAPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x1803F9848
 * Callers:
 *     ?LoadWinRTIcon@@YAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x1803F9DFC (-LoadWinRTIcon@@YAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNoti.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x1800159EC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x1803F9EB0 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CWinRTAppIconLoader,CWinRTAppIconLoader,IWinRTApplicationView * &,tagSIZE const &,tagSIZE const &,tagSIZE const &,unsigned int &,IApplicationViewIconLoaderNotifications * &>(
        __int64 *a1,
        struct IWinRTApplicationView **a2,
        const struct tagSIZE *a3,
        const struct tagSIZE *a4,
        struct tagSIZE *a5,
        _DWORD *a6,
        struct IApplicationViewIconLoaderNotifications **a7)
{
  void *v11; // rax
  __int64 v12; // rbx
  int v13; // edi
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = (__int64)v11;
  if ( v11 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)v11);
    v15 = v12;
    *(_QWORD *)v12 = &CWinRTAppIconLoader::`vftable';
    v13 = CWinRTAppIconLoader::RuntimeClassInitialize(
            (CWinRTAppIconLoader *)(unsigned int)*a6,
            *a2,
            a3,
            a4,
            a5,
            *a6,
            *a7);
    if ( v13 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = 0;
      *a1 = v12;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
