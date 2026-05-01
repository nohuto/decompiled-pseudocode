/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@std@@EEAAXXZ @ 0x18014D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801A9984 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall __Destroy____Ref_count_obj_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___std__EEAAXXZ(
        __int64 a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *(wil::details **)(a1 + 16);
  if ( v2 )
    wil::details::CloseHandle(v2, a2);
}
