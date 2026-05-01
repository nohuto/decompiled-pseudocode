/*
 * XREFs of ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@_K@Z @ 0x1800EE860
 * Callers:
 *     _std::vector_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____int64________std::allocator_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____int64___________::_Reallocate_exactly_::_1_::catch$39 @ 0x1800EE3B0 (_std--vector_std--_List_unchecked_iterator_std--_List_val_std--_List_simple_types_std--pair_std-.c)
 *     _std::vector_wil::unique_any_t_wil::registry_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::registry_watcher_state___void_(__cdecl_)(wil::details::registry_watcher_state__)_&wil::details::delete_registry_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::registry_watcher_state___wil::details::registry_watcher_state___0_std::nullptr_t____wil::err_returncode_policy____std::allocator_wil::unique_any_t_wil::registry_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::registry_watcher_state___void_(__cdecl_)(wil::details::registry_watcher_state__)_&wil::details::delete_registry_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::registry_watcher_state___wil::details::registry_watcher_state___0_std::nullptr_t____wil::err_returncode_policy_______::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$20 @ 0x18011974F (_std--vector_wil--unique_any_t_wil--registry_watcher_t_wil--details--unique_storage_wil--details.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,std::wstring>>>>>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(8 * a3));
}
