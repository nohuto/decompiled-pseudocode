/*
 * XREFs of ?ContainsView@CAppLayout@@UEAAHPEAUIApplicationView@@@Z @ 0x1804F1310
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByView@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804F07C0 (--$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CAppLayout::ContainsView(CAppLayout *this, struct IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rsi
  struct IUnknown *v5; // r8
  BOOL v6; // ebx
  struct IUnknown *v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 16);
  AcquireSRWLockShared((PSRWLOCK)this + 2);
  v9 = 0LL;
  v8 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  v6 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByView>(
              (__int64 *)this + 8,
              &v8,
              v5,
              &v10) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v6;
}
