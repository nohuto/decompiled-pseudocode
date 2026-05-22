/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18013ABCC
 * Callers:
 *     ??1?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18013B5D8 (--1-$list@U-$pair@$$CB_KV-$shared_ptr@VSystemCursor@@@std@@@std@@V-$allocator@U-$pair@$$CB_KV-$s.c)
 *     ??1?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18013B604 (--1-$unordered_map@_KV-$shared_ptr@VSystemCursor@@@std@@U-$hash@_K@2@U-$equal_to@_K@2@V-$allocat.c)
 *     ??1SystemCursorService@@QEAA@XZ @ 0x18013B638 (--1SystemCursorService@@QEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180140D9C (-clear@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor@@@std@@V-$_Uhash_compare@_KU-$hash@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rbx
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // rdi

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (std::_Ref_count_base *)v2[4];
      v4 = (_QWORD *)*v2;
      if ( v3 )
        std::_Ref_count_base::_Decref(v3);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x28);
      v2 = v4;
    }
    while ( v4 );
  }
}
