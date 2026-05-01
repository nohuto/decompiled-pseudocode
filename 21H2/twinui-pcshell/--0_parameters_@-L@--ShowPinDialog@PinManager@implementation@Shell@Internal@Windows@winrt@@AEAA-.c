/*
 * XREFs of ??0_parameters_@?L@??ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@67@V?$shared_ptr@VPinOperationContext@@@std@@_N@Z@QEAA@QEAU234567@01Ususpend_never@experimental@std@@@Z @ 0x1801350B4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$1 @ 0x1801402D4 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_InitCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall `winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog'::`11'::_parameters_::_parameters_(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        char a4)
{
  std::_Ref_count_base *v5; // rcx

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = a3[1];
  a3[1] = 0LL;
  *a3 = 0LL;
  *(_BYTE *)(a1 + 24) = a4;
  v5 = (std::_Ref_count_base *)a3[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
