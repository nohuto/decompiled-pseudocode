/*
 * XREFs of ??$MakeAndInitialize@VCIconLoadingFunctions@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCIconLoadingFunctions@@@Z @ 0x1803F4074
 * Callers:
 *     ?CIconLoadingFunctions_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803F47B0 (-CIconLoadingFunctions_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoadingFunctions@@VFtmBase@23@@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1803F4230 (--0-$RuntimeClass@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoadingFunctions@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CIconLoadingFunctions,CIconLoadingFunctions,>(_QWORD *a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoadingFunctions,Microsoft::WRL::FtmBase>>::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoadingFunctions,Microsoft::WRL::FtmBase>>(v3);
    v6 = v4;
    *v4 = &CIconLoadingFunctions::`vftable'{for `IInspectable'};
    v4[1] = &CIconLoadingFunctions::`vftable'{for `IIconLoadingFunctions'};
    v4[2] = &CIconLoadingFunctions::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v4[7] = &CIconLoadingFunctions::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoadingFunctions,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>'};
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    *a1 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
