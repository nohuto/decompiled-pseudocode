/*
 * XREFs of ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@std@@@1@AEB_K@Z @ 0x18010CC64
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18010AE44 (--$_Try_emplace@AEB_K$$V@-$map@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@std@@@2@@std@@AEA.c)
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x18010C108 (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Find_lower_bound<unsigned __int64>(
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
