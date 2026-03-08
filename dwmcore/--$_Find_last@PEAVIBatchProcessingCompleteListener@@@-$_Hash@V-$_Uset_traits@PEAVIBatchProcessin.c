/*
 * XREFs of ??$_Find_last@PEAVIBatchProcessingCompleteListener@@@?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAVIBatchProcessingCompleteListener@@PEAX@std@@@1@AEBQEAVIBatchProcessingCompleteListener@@_K@Z @ 0x1800237B0
 * Callers:
 *     ?UnRegisterBatchProcessingCompleteListener@CExpressionManager@@QEAAXPEAVIBatchProcessingCompleteListener@@@Z @ 0x180023574 (-UnRegisterBatchProcessingCompleteListener@CExpressionManager@@QEAAXPEAVIBatchProcessingComplete.c)
 *     ??$emplace@AEAPEAVIBatchProcessingCompleteListener@@@?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVIBatchProcessingCompleteListener@@@std@@@std@@@std@@_N@1@AEAPEAVIBatchProcessingCompleteListener@@@Z @ 0x180023654 (--$emplace@AEAPEAVIBatchProcessingCompleteListener@@@-$_Hash@V-$_Uset_traits@PEAVIBatchProcessin.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::_Find_last<IBatchProcessingCompleteListener *>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // r11
  _QWORD *v5; // r10
  __int64 v6; // rax
  _QWORD *v7; // r9

  v4 = a1[3];
  v5 = (_QWORD *)a1[1];
  v6 = 2 * (a4 & a1[6]);
  v7 = *(_QWORD **)(v4 + 16 * (a4 & a1[6]) + 8);
  if ( v7 == v5 )
  {
    *a2 = v5;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == v7[2] )
      {
        *a2 = *v7;
        a2[1] = v7;
        return a2;
      }
      if ( v7 == *(_QWORD **)(v4 + 8 * v6) )
        break;
      v7 = (_QWORD *)v7[1];
    }
    *a2 = v7;
  }
  a2[1] = 0LL;
  return a2;
}
