/*
 * XREFs of ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804D5B68
 * Callers:
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804D3D50 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation@.c)
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804D3D70 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_ea_1804D3D70.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x18006C6C8 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1804D578C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundatio.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Foundation::IAsyncInfo>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  signed __int64 v9; // rdx
  bool v10; // zf
  signed __int64 v11; // rax
  __int64 v12; // rax
  signed __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rax
  signed __int64 v18; // rax
  __int64 v19; // rax
  signed __int64 v20; // rax
  __int64 v21; // rax
  __int64 weak_ref; // rax

  v4 = *a2 - winrt::impl::guid_storage<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::value;
  if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::value )
    v4 = a2[1] + 0x214F5D52D6871056LL;
  if ( !v4 )
  {
    v6 = (unsigned __int64)(a1 + 2);
LABEL_5:
    v7 = v6 & -(__int64)(a1 != 0LL);
    goto LABEL_11;
  }
  v8 = *a2 - *(_QWORD *)L"6";
  if ( *a2 == *(_QWORD *)L"6" )
    v8 = a2[1] - 0x46000000000000C0LL;
  if ( !v8 )
  {
    v6 = (unsigned __int64)(a1 + 3);
    goto LABEL_5;
  }
  v7 = 0LL;
LABEL_11:
  *a3 = v7;
  if ( v7 )
  {
    v9 = *((_QWORD *)a1 + 1);
    while ( v9 >= 0 )
    {
      v11 = _InterlockedCompareExchange64(a1 + 1, v9 + 1, v9);
      v10 = v9 == v11;
      v9 = v11;
      if ( v10 )
        return 0LL;
    }
  }
  else
  {
    v12 = *a2 - winrt::impl::guid_storage<winrt::impl::IAgileObject>::value;
    if ( *a2 == winrt::impl::guid_storage<winrt::impl::IAgileObject>::value )
      v12 = a2[1] + 0x6FA470359B110040LL;
    if ( v12 )
    {
      v14 = *a2 - winrt::impl::guid_storage<winrt::impl::IMarshal>::value;
      if ( *a2 == winrt::impl::guid_storage<winrt::impl::IMarshal>::value )
        v14 = a2[1] - 0x46000000000000C0LL;
      if ( !v14 )
      {
        v15 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 16))(a1);
        return winrt::impl::make_marshaler(v15, a3);
      }
      v17 = *a2 - winrt::impl::guid_storage<winrt::Windows::Foundation::IInspectable>::value;
      if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::IInspectable>::value )
        v17 = a2[1] + 0x6FE1EF9A5528A564LL;
      if ( v17 )
      {
        v19 = *a2 - winrt::impl::guid_storage<IUnknown>::value;
        if ( *a2 == winrt::impl::guid_storage<IUnknown>::value )
          v19 = a2[1] - 0x46000000000000C0LL;
        if ( v19 )
        {
          v21 = *a2 - winrt::impl::guid_storage<winrt::impl::IWeakReferenceSource>::value;
          if ( *a2 == winrt::impl::guid_storage<winrt::impl::IWeakReferenceSource>::value )
            v21 = a2[1] - 0x46000000000000C0LL;
          if ( v21 )
            return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))a1)(a1, a2, a3);
          weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
          *a3 = weak_ref;
          return weak_ref == 0 ? 0x8007000E : 0;
        }
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 16))(a1);
        v9 = *((_QWORD *)a1 + 1);
        while ( v9 >= 0 )
        {
          v20 = _InterlockedCompareExchange64(a1 + 1, v9 + 1, v9);
          v10 = v9 == v20;
          v9 = v20;
          if ( v10 )
            return 0LL;
        }
      }
      else
      {
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
        v9 = *((_QWORD *)a1 + 1);
        while ( v9 >= 0 )
        {
          v18 = _InterlockedCompareExchange64(a1 + 1, v9 + 1, v9);
          v10 = v9 == v18;
          v9 = v18;
          if ( v10 )
            return 0LL;
        }
      }
    }
    else
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 16))(a1);
      v9 = *((_QWORD *)a1 + 1);
      while ( v9 >= 0 )
      {
        v13 = _InterlockedCompareExchange64(a1 + 1, v9 + 1, v9);
        v10 = v9 == v13;
        v9 = v13;
        if ( v10 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v9 + 24), 1u);
  return 0LL;
}
