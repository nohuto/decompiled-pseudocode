void __fastcall CExpressionManager::~CExpressionManager(CExpressionManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CTargetMapEntry *v6; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CExpressionManager::`vftable';
  std::_Deallocate<16,0>(
    *((void **)this + 85),
    (*((_QWORD *)this + 86) - *((_QWORD *)this + 85)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  std::_List_node<CBaseExpression *,void *>::_Free_non_head<std::allocator<std::_List_node<CBaseExpression *,void *>>>(
    v2,
    *((_QWORD ***)this + 83));
  std::_Deallocate<16,0>(*((void **)this + 83), 0x18uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 77),
    (*((_QWORD *)this + 78) - *((_QWORD *)this + 77)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  std::_List_node<CBaseExpression *,void *>::_Free_non_head<std::allocator<std::_List_node<CBaseExpression *,void *>>>(
    v3,
    *((_QWORD ***)this + 75));
  std::_Deallocate<16,0>(*((void **)this + 75), 0x18uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 69),
    (*((_QWORD *)this + 70) - *((_QWORD *)this + 69)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  std::_List_node<CBaseExpression *,void *>::_Free_non_head<std::allocator<std::_List_node<CBaseExpression *,void *>>>(
    v4,
    *((_QWORD ***)this + 67));
  std::_Deallocate<16,0>(*((void **)this + 67), 0x18uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 61),
    (*((_QWORD *)this + 62) - *((_QWORD *)this + 61)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>>>(
    v5,
    *((_QWORD ***)this + 59));
  std::_Deallocate<16,0>(*((void **)this + 59), 0x20uLL);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 52);
  std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
    (__int64)this + 400,
    (__int64)this + 400,
    *(_QWORD *)(*((_QWORD *)this + 50) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 50), 0x20uLL);
  while ( 1 )
  {
    RestartKey = 0LL;
    v6 = (CTargetMapEntry *)RtlEnumerateGenericTableWithoutSplaying(
                              (PRTL_GENERIC_TABLE)((char *)this + 328),
                              &RestartKey);
    if ( !v6 )
      break;
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 328),
      v6);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 37);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 33);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 29);
  `vector destructor iterator'(
    (char *)this + 168,
    32LL,
    2LL,
    (void (__fastcall *)(char *))DynArray<CBaseExpression *,1>::~DynArray<CBaseExpression *,1>);
  *((_QWORD *)this + 4) = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 7);
}
