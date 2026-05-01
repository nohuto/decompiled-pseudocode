/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VWin32AppInfo@@@std@@EEAAXXZ @ 0x1804CD9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@1@@Z @ 0x1804BCE54 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@.c)
 */

__int64 __fastcall std::_Ref_count_obj<Win32AppInfo>::_Destroy(__int64 a1)
{
  _QWORD *v1; // rdi
  void **v2; // rbx

  v1 = (_QWORD *)(a1 + 16);
  v2 = (void **)(a1 + 48);
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>,void *>>>(
    a1 + 48,
    a1 + 48,
    *(__int64 **)(*(_QWORD *)(a1 + 48) + 8LL));
  std::_Deallocate<16,0>(*v2, (const struct std::nothrow_t *)0x38);
  return std::wstring::_Tidy_deallocate(v1);
}
