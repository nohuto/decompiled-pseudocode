/*
 * XREFs of ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateAll@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJXZ @ 0x18037CFF8
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateAll@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@W7E$AAAJXZ @ 0x18016C510 (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateAll@-Q.c)
 * Callees:
 *     ?ReevaluateAll@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAXXZ @ 0x1803754FC (-ReevaluateAll@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@_ea_1803754FC.c)
 */

__int64 __fastcall ___abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateAll__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAJXZ(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 152) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    _ReevaluateAll__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAXXZ((RTL_SRWLOCK *)a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
