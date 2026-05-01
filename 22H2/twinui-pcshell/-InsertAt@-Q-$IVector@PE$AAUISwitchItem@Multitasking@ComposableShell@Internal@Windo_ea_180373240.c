/*
 * XREFs of ?InsertAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXIPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x180373240
 * Callers:
 *     ?InsertAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAXIPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x18016AEF0 (-InsertAt@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collecti.c)
 *     ?BindableInsertAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAAXIPE$AAVObject@8@@Z @ 0x18036F54C (-BindableInsertAt@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitch_ea_18036F54C.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_InsertAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJIPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x18037C238 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_18037C238.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$emplace@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@1@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803695D0 (--$emplace@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$vector@V-$Agil.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x180372138 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x18037499C (-Notify@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 *     ?ValidateBounds@Details@Collections@Platform@@YAX_N@Z @ 0x1803781F4 (-ValidateBounds@Details@Collections@Platform@@YAX_N@Z.c)
 *     ?ValidateSize@Details@Collections@Platform@@YAX_K@Z @ 0x180378310 (-ValidateSize@Details@Collections@Platform@@YAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall _InsertAt__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAXIPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_4__Z(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  bool v7; // dl
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF
  void *Exception; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  v3 = a2;
  v5 = __abi_winrt_ptr_ctor(a3);
  v13 = v5;
  try
  {
    Platform::Collections::Details::IncrementCounter((_QWORD *)(a1 + 80));
    v6 = (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) - **(_QWORD **)(a1 + 96)) >> 5;
    LOBYTE(v6) = v3 <= v6;
    Platform::Collections::Details::ValidateBounds((Platform::Collections::Details *)v6, v7);
    Platform::Collections::Details::ValidateSize(
      (Platform::Collections::Details *)(((__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) - **(_QWORD **)(a1 + 96)) >> 5)
                                       + 1),
      v8);
    std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::emplace<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * &>(
      *(__int64 **)(a1 + 96),
      &Exception,
      **(_QWORD **)(a1 + 96) + 32LL * (unsigned int)v3,
      &v13);
    result = Platform::Collections::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::Notify(
               a1,
               1LL,
               (unsigned int)v3);
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v10 = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::OutOfMemoryException **)&v10;
  }
  catch ( std::exception )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::FailureException::FailureException(Exception);
    v11 = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::FailureException **)&v11;
  }
  if ( v13 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return result;
}
