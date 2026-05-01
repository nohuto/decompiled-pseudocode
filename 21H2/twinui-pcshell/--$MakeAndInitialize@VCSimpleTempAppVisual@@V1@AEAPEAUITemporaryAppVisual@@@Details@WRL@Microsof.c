/*
 * XREFs of ??$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEAPEAUITemporaryAppVisual@@@Details@WRL@Microsoft@@YAJPEAPEAVCSimpleTempAppVisual@@AEAPEAUITemporaryAppVisual@@@Z @ 0x18049BF8C
 * Callers:
 *     ?CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualArray@@@Z @ 0x18049C1D4 (-CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualAr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1801B03D8 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??0CSimpleTempAppVisual@@QEAA@XZ @ 0x18049C110 (--0CSimpleTempAppVisual@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJPEAUITemporaryAppVisual@@@Z @ 0x18049C55C (-RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJPEAUITemporaryAppVisual@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSimpleTempAppVisual,CSimpleTempAppVisual,ITemporaryAppVisual * &>(
        CSimpleTempAppVisual **a1,
        struct ITemporaryAppVisual **a2)
{
  CSimpleTempAppVisual *v4; // rax
  int v5; // edi
  CSimpleTempAppVisual *v6; // rax
  struct ITemporaryAppVisual *v7; // rdx
  CSimpleTempAppVisual *v8; // rbx
  CSimpleTempAppVisual *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CSimpleTempAppVisual *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CSimpleTempAppVisual::CSimpleTempAppVisual(v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach((__int64 *)&v10, (__int64)v6);
    v7 = *a2;
    v8 = v10;
    v5 = CSimpleTempAppVisual::RuntimeClassInitialize(v10, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(CSimpleTempAppVisual *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
