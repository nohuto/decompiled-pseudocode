/*
 * XREFs of ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_get_DefaultEvaluationState@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJPEAW4SwitchItemInclusion@2345@@Z @ 0x18037CEB0
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_get_DefaultEvaluationState@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@W7E$AAAJPEAW4SwitchItemInclusion@2345@@Z @ 0x18016C3B0 (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_get_DefaultEvalu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_get_DefaultEvaluationState__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAJPEAW4SwitchItemInclusion_2345__Z(
        __int64 a1,
        _DWORD *a2)
{
  if ( *(_BYTE *)(a1 + 152) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0;
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 96LL))(a1 + 8);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
