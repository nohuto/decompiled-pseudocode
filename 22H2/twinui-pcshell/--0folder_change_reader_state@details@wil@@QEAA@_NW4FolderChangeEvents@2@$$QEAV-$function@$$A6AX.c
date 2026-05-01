/*
 * XREFs of ??0folder_change_reader_state@details@wil@@QEAA@_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x18011ABA0
 * Callers:
 *     ?create_common@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEBG_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x1801276D4 (-create_common@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder_change_r.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::folder_change_reader_state::folder_change_reader_state(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( *(_QWORD *)(a4 + 112) )
  {
    *(_QWORD *)(a1 + 112) = a1 + 8;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a4 + 112) + 16LL))(*(_QWORD *)(a4 + 112));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a4 + 112) + 24LL))(*(_QWORD *)(a4 + 112));
    *(_QWORD *)(a4 + 112) = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 1;
  *(_DWORD *)(a1 + 132) = 287;
  *(_OWORD *)(a1 + 136) = 0LL;
  *(_OWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  return a1;
}
