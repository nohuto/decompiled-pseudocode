/*
 * XREFs of ?Clear@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXXZ @ 0x18036FA5C
 * Callers:
 *     ?Clear@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAXXZ @ 0x18016AFA0 (-Clear@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections.c)
 *     ?Clear@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@WCI@E$AAAXXZ @ 0x18016AFB0 (-Clear@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@_ea_18016AFB0.c)
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Clear@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@UE$AAAJXZ @ 0x18037C288 (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Clear@-QIBindableVector@Inter_ea_18037C288.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@YAXPEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@0AEAV?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@0@@Z @ 0x180368F04 (--$_Destroy_range@V-$allocator@V-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x180372408 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x180374C6C (-Notify@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall _Clear__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAXXZ(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  void *Exception; // rax
  void *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h]
  __int64 v9; // [rsp+40h] [rbp+8h]

  try
  {
    Platform::Collections::Details::IncrementCounter();
    v2 = *(__int64 **)(a1 + 96);
    std::_Destroy_range<std::allocator<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>(
      *v2,
      v2[1]);
    v2[1] = *v2;
    result = Platform::Collections::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::Notify(
               a1,
               0LL,
               0LL);
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v8 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v6 = __abi_winrt_ptr_ctor(v8);
    throw (Platform::OutOfMemoryException **)&v6;
  }
  catch ( std::exception )
  {
    v5 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v9 = Platform::FailureException::FailureException(v5);
    v7 = __abi_winrt_ptr_ctor(v9);
    throw (Platform::FailureException **)&v7;
  }
  return result;
}
