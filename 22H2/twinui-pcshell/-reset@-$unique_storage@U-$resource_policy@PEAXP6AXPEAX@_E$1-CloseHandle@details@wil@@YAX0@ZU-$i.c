/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18015F14C
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801A8FE8 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801A97D4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        wil::details **a1,
        wil::details *a2)
{
  wil::details *v4; // rsi
  void *v5; // rdx
  _BYTE v6[4]; // [rsp+20h] [rbp-18h] BYREF
  DWORD LastError; // [rsp+24h] [rbp-14h]

  v4 = *a1;
  if ( *a1 )
  {
    v6[0] = 0;
    LastError = GetLastError();
    wil::details::CloseHandle(v4, v5);
    wil::last_error_context::~last_error_context((wil::last_error_context *)v6);
  }
  *a1 = a2;
}
