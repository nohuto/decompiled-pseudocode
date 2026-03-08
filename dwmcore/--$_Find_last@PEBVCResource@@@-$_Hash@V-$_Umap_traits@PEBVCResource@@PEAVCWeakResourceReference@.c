/*
 * XREFs of ??$_Find_last@PEBVCResource@@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@@1@AEBQEBVCResource@@_K@Z @ 0x1800251D0
 * Callers:
 *     ??$_Try_emplace@AEBQEBVCResource@@$$V@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@_N@1@AEBQEBVCResource@@@Z @ 0x180024EF8 (--$_Try_emplace@AEBQEBVCResource@@$$V@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceRe.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEBVCResource@@@Z @ 0x180025108 (-erase@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Find_last<CResource const *>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v4; // rcx

  v4 = *(_QWORD **)(qword_1803E3078 + 16 * (a4 & xmmword_1803E3090) + 8);
  if ( v4 == (_QWORD *)qword_1803E3068 )
  {
    *a2 = qword_1803E3068;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == v4[2] )
      {
        *a2 = *v4;
        a2[1] = v4;
        return a2;
      }
      if ( v4 == *(_QWORD **)(qword_1803E3078 + 16 * (a4 & xmmword_1803E3090)) )
        break;
      v4 = (_QWORD *)v4[1];
    }
    *a2 = v4;
  }
  a2[1] = 0LL;
  return a2;
}
