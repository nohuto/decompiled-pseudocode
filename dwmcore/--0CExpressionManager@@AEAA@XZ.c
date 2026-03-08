/*
 * XREFs of ??0CExpressionManager@@AEAA@XZ @ 0x180024A50
 * Callers:
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180024894 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x180024768 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??0?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@1@AEBV?$allocator@PEAVIBatchProcessingCompleteListener@@@1@@Z @ 0x180024914 (--0-$_Hash@V-$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V-$_Uhash_compare@PEAVIBatchPro.c)
 *     ??0?$unordered_set@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@V?$allocator@PEAVCBaseExpression@@@3@@std@@QEAA@XZ @ 0x180024C5C (--0-$unordered_set@PEAVCBaseExpression@@U-$hash@PEAVCBaseExpression@@@std@@U-$equal_to@PEAVCBase.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

CExpressionManager *__fastcall CExpressionManager::CExpressionManager(CExpressionManager *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  int v5; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 3) = -1LL;
  *(_QWORD *)this = &CExpressionManager::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = &CExpressionValueStack::`vftable';
  *((_QWORD *)this + 5) = this;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_QWORD *)this + 2) = 0LL;
  `vector constructor iterator'(
    (char *)this + 168,
    0x20uLL,
    2uLL,
    DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>);
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 328),
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::CompareTableData,
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
    CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
    0LL);
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *((_QWORD *)this + 50) = v2;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 116) = 0;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 59) = v3;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 7LL;
  *((_QWORD *)this + 65) = 8LL;
  *((_DWORD *)this + 116) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource const * const,CWeakResourceReference *>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 61,
    0x10uLL,
    *((_QWORD *)this + 59));
  std::unordered_set<CBaseExpression *>::unordered_set<CBaseExpression *>((char *)this + 528);
  v5 = 0;
  std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>(
    (__int64)this + 592,
    &v5);
  std::unordered_set<CBaseExpression *>::unordered_set<CBaseExpression *>((char *)this + 656);
  return this;
}
