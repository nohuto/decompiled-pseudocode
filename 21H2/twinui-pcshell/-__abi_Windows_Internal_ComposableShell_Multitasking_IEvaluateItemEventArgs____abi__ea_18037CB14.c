/*
 * XREFs of ?__abi_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs____abi_get_EvaluationState@?QIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@EvaluateItemEventArgs@2345@UE$AAAJPEAW4SwitchItemInclusion@2345@@Z @ 0x18037CB14
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs____abi_get_EvaluationState@?QIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@EvaluateItemEventArgs@2345@W7E$AAAJPEAW4SwitchItemInclusion@2345@@Z @ 0x18016C470 (-__abi_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs____abi_get_Evaluatio.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs____abi_get_EvaluationState__QIEvaluateItemEventArgs_Multitasking_ComposableShell_Internal_Windows__EvaluateItemEventArgs_2345_UE_AAAJPEAW4SwitchItemInclusion_2345__Z(
        __int64 a1,
        _DWORD *a2)
{
  if ( *(_BYTE *)(a1 + 72) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0;
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 72LL))(a1 + 8);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
