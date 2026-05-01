/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180152D20
 * Callers:
 *     _CPinnedList::InternalModify_::_1_::dtor$3 @ 0x180158FD3 (_CPinnedList--InternalModify_--_1_--dtor$3.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$4 @ 0x180158FDF (_CPinnedList--InternalModify_--_1_--dtor$4.c)
 * Callees:
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1801AB9A4 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall __1__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__QEAA_XZ(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::ReleaseMutex(v2, a2);
}
