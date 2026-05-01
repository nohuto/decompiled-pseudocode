/*
 * XREFs of _Platform::IVector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::[Windows::Foundation::Collections::IVector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___]::InsertAt_::_1_::catch$30 @ 0x180373383
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180090964 (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

void __fastcall __noreturn Platform::IVector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::_Windows::Foundation::Collections::IVector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____::InsertAt_::_1_::catch_30(
        __int64 a1,
        __int64 a2)
{
  void *Exception; // rax
  __int64 v4; // rax

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  *(_QWORD *)(a2 + 64) = Exception;
  v4 = Platform::FailureException::FailureException(Exception);
  *(_QWORD *)(a2 + 64) = v4;
  *(_QWORD *)(a2 + 40) = __abi_winrt_ptr_ctor(v4);
  throw (Platform::FailureException **)(a2 + 40);
}
