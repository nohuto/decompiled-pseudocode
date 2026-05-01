/*
 * XREFs of ??$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIUnknown@@@3@XZ @ 0x1800E58A4
 * Callers:
 *     ?CreateInstance@?$wrl_class_factory@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E8C50 (-CreateInstance@-$wrl_class_factory@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?CreateInstance@?$wrl_class_factory@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180120AB0 (-CreateInstance@-$wrl_class_factory@UAppBackupListener@implementation@Shell@Internal@Windows@win.c)
 *     ?CreateInstance@?$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180138880 (-CreateInstance@-$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winrt@@@wi.c)
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x180149CAC (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::as<IUnknown>(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, _QWORD **),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, __int64 *, _QWORD **); // rcx
  __int64 (__fastcall **v4)(_QWORD, __int64 *, _QWORD **); // rax
  unsigned int v5; // eax
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *a1;
  if ( v2 )
  {
    v4 = *v2;
    v7 = 0LL;
    v5 = (*v4)(v2, &winrt::impl::guid_storage<IUnknown>::value, &v7);
    winrt::check_hresult(v5);
    *a2 = v7;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
