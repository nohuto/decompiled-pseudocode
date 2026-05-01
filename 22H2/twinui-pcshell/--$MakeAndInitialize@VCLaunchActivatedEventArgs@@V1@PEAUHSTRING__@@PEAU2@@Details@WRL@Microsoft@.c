/*
 * XREFs of ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x180078194
 * Callers:
 *     ??R_lambda_c8b199a0feb076873244f725fed1af37_@@QEBAXXZ @ 0x180078100 (--R_lambda_c8b199a0feb076873244f725fed1af37_@@QEBAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x18007823C (-RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??0CLaunchActivatedEventArgs@@QEAA@XZ @ 0x1800782F4 (--0CLaunchActivatedEventArgs@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ *,HSTRING__ *>(
        CLaunchActivatedEventArgs **a1,
        HSTRING *a2,
        HSTRING *a3)
{
  CLaunchActivatedEventArgs *v6; // rax
  CLaunchActivatedEventArgs *v7; // rax
  HSTRING v8; // r8
  HSTRING v9; // rdx
  CLaunchActivatedEventArgs *v10; // rbx
  int v11; // edi
  CLaunchActivatedEventArgs *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (CLaunchActivatedEventArgs *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = CLaunchActivatedEventArgs::CLaunchActivatedEventArgs(v6);
    v8 = *a3;
    v9 = *a2;
    v10 = v7;
    v13 = v7;
    v11 = CLaunchActivatedEventArgs::RuntimeClassInitialize(v7, v9, v8);
    if ( v11 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(CLaunchActivatedEventArgs *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
