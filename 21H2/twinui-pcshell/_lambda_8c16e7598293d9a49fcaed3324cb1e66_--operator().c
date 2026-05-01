/*
 * XREFs of _lambda_8c16e7598293d9a49fcaed3324cb1e66_::operator() @ 0x1800D7C9C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_8c16e7598293d9a49fcaed3324cb1e66__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x1800D9010 (std--_Func_impl_no_alloc__lambda_8c16e7598293d9a49fcaed3324cb1e66__bool_APP_LAYOUT__ea_1800D9010.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_8c16e7598293d9a49fcaed3324cb1e66_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 *v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  v3 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v3 + 184LL))(v3, &v7) >= 0
    && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 168LL))(*a1, v3) )
  {
    if ( (v4 = (__int64 *)a1[3], !*v4)
      || *((_DWORD *)a1 + 2) == 1 && v7 < *(_QWORD *)a1[2]
      || !*((_DWORD *)a1 + 2) && v7 > *(_QWORD *)a1[2] )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(v4, &v6);
      *(_QWORD *)a1[2] = v7;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return 1;
}
