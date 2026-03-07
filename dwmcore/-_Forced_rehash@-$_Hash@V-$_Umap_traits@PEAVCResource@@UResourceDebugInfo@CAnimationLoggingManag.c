unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 *v7; // rcx
  unsigned __int64 result; // rax
  _QWORD *v9; // r11
  _QWORD *v10; // rbx
  unsigned __int64 **v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 *v15; // r10
  _QWORD *v16; // rdx
  unsigned __int64 v17; // r10
  _QWORD *v18; // rdx
  unsigned __int64 v19; // r8
  _QWORD *v20; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = (_QWORD *)a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>>>>>::_Assign_grow(
    a1 + 3,
    2 * v6,
    v4);
  a1[7] = v6;
  result = v6 - 1;
  a1[6] = v6 - 1;
  v9 = *(_QWORD **)a1[1];
  v10 = v9;
  while ( v9 != v4 )
  {
    v10 = (_QWORD *)*v10;
    result = std::_Fnv1a_append_bytes((unsigned __int64)v7, (const unsigned __int8 *const)v9 + 16, 8uLL);
    v13 = a1[3];
    v14 = 2 * (a1[6] & result);
    if ( *(_QWORD **)(v13 + 16 * (a1[6] & result)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (a1[6] & result)) = v12;
LABEL_6:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_7;
    }
    result = *(_QWORD *)(v13 + 16 * (a1[6] & result) + 8);
    v7 = *v11;
    if ( *v11 == *(unsigned __int64 **)(result + 16) )
    {
      v17 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v12 )
      {
        v18 = *(_QWORD **)(v12 + 8);
        *v18 = v10;
        v7 = (unsigned __int64 *)v10[1];
        *v7 = v17;
        result = *(_QWORD *)(v17 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v17 + 8) = v7;
        v10[1] = v18;
        *(_QWORD *)(v12 + 8) = result;
      }
      goto LABEL_6;
    }
    do
    {
      v15 = (unsigned __int64 *)(result + 8);
      if ( *(_QWORD *)(v13 + 8 * v14) == result )
      {
        v16 = *(_QWORD **)(v12 + 8);
        *v16 = v10;
        v7 = (unsigned __int64 *)v10[1];
        *v7 = result;
        result = *v15;
        *(_QWORD *)result = v12;
        *v15 = (unsigned __int64)v7;
        v10[1] = v16;
        *(_QWORD *)(v12 + 8) = result;
        *(_QWORD *)(v13 + 8 * v14) = v12;
        goto LABEL_7;
      }
      result = *v15;
    }
    while ( v7 != *(unsigned __int64 **)(*v15 + 16) );
    v19 = *(_QWORD *)result;
    v20 = *(_QWORD **)(v12 + 8);
    *v20 = v10;
    v7 = (unsigned __int64 *)v10[1];
    *v7 = v19;
    result = *(_QWORD *)(v19 + 8);
    *(_QWORD *)result = v12;
    *(_QWORD *)(v19 + 8) = v7;
    v10[1] = v20;
    *(_QWORD *)(v12 + 8) = result;
LABEL_7:
    v9 = v10;
  }
  return result;
}
