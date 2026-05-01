/*
 * XREFs of ?query_interface@?$root_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800EF618
 * Callers:
 *     ?GetTabProxyWindowFactory@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUITabProxyWindowFactoryInternal@345@@Z @ 0x1800EB350 (-GetTabProxyWindowFactory@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEA.c)
 *     ?QueryInterface@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EBCB0 (-QueryInterface@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabP.c)
 *     ?CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJ_KPEAPEAUITabProxyWindowInternal@345@@Z @ 0x1800F08C0 (-CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x18006C6C8 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::query_interface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9

  v3 = (volatile signed __int32 *)a1;
  if ( !a1 )
    a1 = 8LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  *a3 = v6;
  if ( v6 )
    goto LABEL_4;
  if ( *a2 == winrt::impl::guid_storage<winrt::impl::IAgileObject>::value && a2[1] == 0x905B8FCA64EEFFC0uLL )
  {
    v8 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
LABEL_8:
    *a3 = v8;
LABEL_4:
    _InterlockedExchangeAdd(v3 + 2, 1u);
    return 0LL;
  }
  if ( *a2 == winrt::impl::guid_storage<winrt::impl::IMarshal>::value && a2[1] == 0x46000000000000C0LL )
  {
    v9 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    return winrt::impl::make_marshaler(v9, a3);
  }
  else
  {
    v10 = *a2 - winrt::impl::guid_storage<IUnknown>::value;
    if ( *a2 == winrt::impl::guid_storage<IUnknown>::value )
      v10 = a2[1] - 0x46000000000000C0LL;
    v11 = *(_QWORD *)v3;
    if ( !v10 )
    {
      v8 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(v11 + 16))(v3);
      goto LABEL_8;
    }
    return (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD *, __int64 *))v11)(v3, a2, a3);
  }
}
