/*
 * XREFs of ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_add_SwitchItemCollectionChanged@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJPE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Foundation@5@PEAVEventRegistrationToken@85@@Z @ 0x18037CAF4
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_add_SwitchItemCollectionChanged@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@WBA@E$AAAJPE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Foundation@5@PEAVEventRegistrationToken@85@@Z @ 0x18016C340 (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_add_SwitchItem.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_add_SwitchItemCollectionChanged__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAJPE_AAV__TypedEventHandler_PE_AAUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemCollectionChangedEventArgs_2345__Foundation_5_PEAVEventRegistrationToken_85__Z(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 152) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset_0(&v7, 0, sizeof(v7));
  try
  {
    *a3 = v7;
    (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)(a1 + 16) + 104LL))(a1 + 16, &v7, a2);
    *a3 = v7;
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
