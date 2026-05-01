/*
 * XREFs of ??$FindEx@VCImmersiveAppFinderByAppId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByAppId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18007E3C4
 * Callers:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18007E330 (--$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007E4BC (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByAppId>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v9; // rbx
  int v10; // r14d
  __int64 v12[2]; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v9 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v12[0] = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
    a5 = *(_QWORD *)(*a1 + 8 * v9);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&a5);
    v10 = -1;
    v14 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&a5, &v14) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v14 + 88LL))(v14, *a2, &v13);
      v10 = (v13 != 0) - 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
    if ( !v10 )
      break;
    if ( (unsigned __int64)++v9 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v9;
  return 0LL;
}
