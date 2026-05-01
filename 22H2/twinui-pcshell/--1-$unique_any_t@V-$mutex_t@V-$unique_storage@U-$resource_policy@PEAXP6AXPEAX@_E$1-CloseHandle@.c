/*
 * XREFs of ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x180147AF0
 * Callers:
 *     _wil::details::shared_storage_wil::unique_any_t_wil::event_t_wil::details::unique_storage_wil::details::resource_policy_void___void_(__cdecl_)(void__)_noexcept_&wil::details::CloseHandle_wistd::integral_constant_unsigned___int64_0__void___void___0_std::nullptr_t____wil::err_exception_policy_____::reset_::_1_::dtor$0 @ 0x18014D879 (_wil--details--shared_storage_wil--unique_any_t_wil--event_t_wil--details--unique_storage_wil--d.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$2 @ 0x180158E57 (_CPinnedList--InternalModify_--_1_--dtor$2.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801A97D4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::CloseHandle(v2, a2);
}
