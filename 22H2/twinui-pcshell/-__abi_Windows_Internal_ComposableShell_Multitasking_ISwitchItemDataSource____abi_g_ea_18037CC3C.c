/*
 * XREFs of ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_get_ZOrderSort@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJPEAPE$AAUISwitchItemSort@2345@@Z @ 0x18037CC3C
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_get_ZOrderSort@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@WBA@E$AAAJPEAPE$AAUISwitchItemSort@2345@@Z @ 0x18016C360 (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_get_ZOrderSort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_get_ZOrderSort__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAJPEAPE_AAUISwitchItemSort_2345__Z(
        __int64 a1,
        _QWORD *a2)
{
  if ( *(_BYTE *)(a1 + 152) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0LL;
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 96LL))(a1 + 16);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
