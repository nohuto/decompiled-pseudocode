/*
 * XREFs of ??$_Find_lower_bound@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@1@AEBQEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18010D294
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18010B170 (_anonymous_namespace_--SendFramesReport.c)
 *     ??$_Try_emplace@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@_N@1@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18010D1D4 (--$_Try_emplace@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@PEBV-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Find_lower_bound<std::wstring const *>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( v4[4] < v5 )
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
