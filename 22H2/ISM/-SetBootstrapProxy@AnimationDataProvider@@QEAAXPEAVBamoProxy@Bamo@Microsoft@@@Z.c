/*
 * XREFs of ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180038994
 * Callers:
 *     ?SetBootstrapProxy@AnimationDataProviderConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180038970 (-SetBootstrapProxy@AnimationDataProviderConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ??0DataProviderPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z @ 0x18002FF74 (--0DataProviderPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180068450 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800757C0 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AnimationDataProvider::SetBootstrapProxy(
        AnimationDataProvider *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  DataProviderPrincipal **v6; // r14
  DataProviderPrincipal *v7; // rdi
  const char *v8; // r9
  const char *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF
  _LUID Luid; // [rsp+50h] [rbp+18h] BYREF
  DataProviderPrincipal *v20; // [rsp+58h] [rbp+20h]

  v18 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, __int64 *))(*(_QWORD *)a2 + 16LL))(
         a2,
         &GUID_a9fa7235_98d0_fd42_aad0_f9b4ffe7b130,
         &v18);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v4,
      v16);
    __debugbreak();
  }
  if ( *((struct Microsoft::Bamo::BamoProxy **)this + 3) != a2 )
  {
    (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoProxy *))a2)(a2);
    v5 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v6 = (DataProviderPrincipal **)((char *)this + 32);
  v20 = (DataProviderPrincipal *)operator new(0x40uLL);
  v7 = DataProviderPrincipal::DataProviderPrincipal(v20, *((struct dataprovider_AutoBamos::BamoConnection **)this + 2));
  if ( *((_QWORD *)this + 4) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
  *v6 = v7;
  if ( !v7 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v8);
    __debugbreak();
  }
  if ( !AllocateLocallyUniqueId(&Luid) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x63,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v9);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, _LUID *))(*((_QWORD *)*v6 + 1) + 48LL))((__int64)*v6 + 8, &Luid);
  v10 = (*(__int64 (__fastcall **)(__int64, DataProviderPrincipal *))(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 24LL))(
          *((_QWORD *)this + 3) + 8LL,
          *v6);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v10,
      v16);
    __debugbreak();
  }
  v12 = *((_QWORD *)this + 6);
  v13 = *((_QWORD *)this + 5);
  if ( v13 != v12 )
  {
    do
    {
      std::_Func_class<void,>::operator()(v13, (char *)this + 32);
      v13 += 64LL;
    }
    while ( v13 != v12 );
    v12 = *((_QWORD *)this + 6);
  }
  v14 = *((_QWORD *)this + 5);
  if ( v14 != v12 )
  {
    do
    {
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v14, v11);
      v14 += 64LL;
    }
    while ( v14 != v12 );
    v14 = *((_QWORD *)this + 5);
  }
  *((_QWORD *)this + 6) = v14;
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
}
