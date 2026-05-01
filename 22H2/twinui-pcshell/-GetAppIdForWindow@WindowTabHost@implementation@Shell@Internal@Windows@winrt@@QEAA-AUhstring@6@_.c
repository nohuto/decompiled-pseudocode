/*
 * XREFs of ?GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@_K@Z @ 0x1800EAF40
 * Callers:
 *     _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x1800E3ABC (_lambda_8ded4d93739c225b374c706a19b0781a_--operator()_std--pair_unsigned___int64_const__winrt--W.c)
 *     ?GetAppIdForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x1800EAEC0 (-GetAppIdForWindow@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008F020 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18025693C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAppIdForWindow(
        __int64 a1,
        winrt::hstring *a2,
        __int64 a3)
{
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, __int64, __int64 *); // rbx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, const unsigned __int16 **); // rdi
  int v9; // eax
  const unsigned __int16 *v10; // rdx
  const unsigned __int16 *v12; // [rsp+40h] [rbp+20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v5 = *(_QWORD *)(a1 + 168);
  v6 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v13);
  if ( v6(v5, a3, &v13) < 0
    || (v7 = v13) == 0
    || (v8 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 **))(*(_QWORD *)v13 + 136LL),
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&v12,
          0LL),
        v9 = v8(v7, &v12),
        v10 = v12,
        v9 < 0) )
  {
    v10 = &szAgent;
  }
  winrt::hstring::hstring(a2, v10);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  return a2;
}
