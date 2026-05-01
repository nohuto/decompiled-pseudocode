/*
 * XREFs of ?Invoke@?$TypedEventHandler@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@UE$AAAXPE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@3@PE$AAUIVirtualDesktopCollectionChangedEventArgs@5673@@Z @ 0x180373670
 * Callers:
 *     ?__abi_Windows_Foundation_?$TypedEventHandler@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopCollectionChangedEventArgs@2345@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$TypedEventHandler@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@234@UE$AAAJPE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@4@PE$AAUIVirtualDesktopCollectionChangedEventArgs@6784@@Z @ 0x18037BAC0 (-__abi_Windows_Foundation_-$TypedEventHandler@PE$AAUIVirtualDesktopDataSource@Multitasking@Compo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BCB0 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs __gc *>::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs __gc *>::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x1803736B2LL);
  }
  return result;
}
