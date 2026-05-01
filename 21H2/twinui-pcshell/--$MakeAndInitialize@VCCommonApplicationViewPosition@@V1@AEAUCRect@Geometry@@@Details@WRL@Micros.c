/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewPosition@@V1@AEAUCRect@Geometry@@@Details@WRL@Microsoft@@YAJPEAPEAVCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@Z @ 0x180449578
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@wil@@YA?AV?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@AEAUCRect@Geometry@@@Z @ 0x180449744 (--$MakeAndInitializeOrThrow@VCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@wil@@YA-AV-$Co.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x1801F42D0 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x1801F44FC (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801F4860 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x1801F4870 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,CCommonApplicationViewPosition,Geometry::CRect &>(
        _QWORD *a1,
        _OWORD *a2)
{
  unsigned int v2; // ebx
  CCommonApplicationViewPosition *v5; // rax
  CCommonApplicationViewPosition *v6; // rax
  __int64 v7; // rcx
  volatile int *v8; // rdx
  __int64 v9; // r10
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (CCommonApplicationViewPosition *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CCommonApplicationViewPosition::CCommonApplicationViewPosition(v5);
    v11 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v11, (__int64)v6);
    v7 = v11;
    *(_OWORD *)(v11 + 16) = *a2;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
      v7,
      v8);
    *a1 = v9;
    Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
