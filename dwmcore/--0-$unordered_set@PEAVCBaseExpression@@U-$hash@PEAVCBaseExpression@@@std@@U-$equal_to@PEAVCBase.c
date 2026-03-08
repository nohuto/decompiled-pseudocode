/*
 * XREFs of ??0?$unordered_set@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@V?$allocator@PEAVCBaseExpression@@@3@@std@@QEAA@XZ @ 0x180024C5C
 * Callers:
 *     ??0CExpressionManager@@AEAA@XZ @ 0x180024A50 (--0CExpressionManager@@AEAA@XZ.c)
 * Callees:
 *     ??0?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@1@AEBV?$allocator@PEAVIBatchProcessingCompleteListener@@@1@@Z @ 0x180024914 (--0-$_Hash@V-$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V-$_Uhash_compare@PEAVIBatchPro.c)
 */

__int64 __fastcall std::unordered_set<CBaseExpression *>::unordered_set<CBaseExpression *>(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>(
    a1,
    &v3);
  return a1;
}
