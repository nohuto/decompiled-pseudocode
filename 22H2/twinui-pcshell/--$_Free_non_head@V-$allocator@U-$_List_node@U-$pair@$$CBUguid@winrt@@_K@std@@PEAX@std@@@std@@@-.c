/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E443C
 * Callers:
 *     ??1?$unordered_map@Uguid@winrt@@_KU?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@@std@@QEAA@XZ @ 0x1800E7DDC (--1-$unordered_map@Uguid@winrt@@_KU-$hash@Uguid@winrt@@@std@@U-$equal_to@Uguid@winrt@@@4@V-$allo.c)
 *     ??1?$list@U?$pair@$$CBUguid@winrt@@_K@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@2@@std@@QEAA@XZ @ 0x1800E7F2C (--1-$list@U-$pair@$$CBUguid@winrt@@_K@std@@V-$allocator@U-$pair@$$CBUguid@winrt@@_K@std@@@2@@std.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E82C4 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@0@Z @ 0x1800EEA44 (-erase@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x28);
      v2 = v3;
    }
    while ( v3 );
  }
}
