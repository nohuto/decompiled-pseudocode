/*
 * XREFs of ?Invoke@?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@UE$AAAXPE$AAU?$IObservableVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@PE$AAUIVectorChangedEventArgs@234@@Z @ 0x1803736C0
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@2345@UE$AAAJPE$AAU?$IObservableVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@345@PE$AAUIVectorChangedEventArgs@345@@Z @ 0x18037C720 (-__abi_Windows_Foundation_Collections_-$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BCB0 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x180373702LL);
  }
  return result;
}
