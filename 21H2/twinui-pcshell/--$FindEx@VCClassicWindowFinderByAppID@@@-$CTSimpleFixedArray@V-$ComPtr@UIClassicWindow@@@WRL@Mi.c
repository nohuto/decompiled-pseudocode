/*
 * XREFs of ??$FindEx@VCClassicWindowFinderByAppID@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByAppID@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801D1CE8
 * Callers:
 *     ?SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z @ 0x1801D3B80 (-SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIClassicWindow@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801D1C98 (--$As@UIClassicWindow@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIClassi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByAppID>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v9; // rbx
  int v10; // edi
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+48h] BYREF

  *a4 = 0LL;
  v9 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    a5 = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&a5);
    v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*a1 + 8 * v9);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    v12 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IClassicWindow>(&v13, &v12) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 184LL))(v12, *a2)
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 136LL))(v12) )
    {
      v10 = 0;
    }
    else
    {
      v10 = -1;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
    if ( !v10 )
      break;
    if ( (unsigned __int64)++v9 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v9;
  return 0LL;
}
