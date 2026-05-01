/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAA@XZ @ 0x18011AFF0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::dtor$18 @ 0x1801228A8 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageU_ea_1801228A8.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18011813C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,bool>>::~list<std::pair<winrt::hstring const,bool>>(
        __int64 *a1)
{
  std::_List_node<std::pair<winrt::hstring const,bool>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)0x20);
}
