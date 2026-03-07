unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 *v7; // rcx
  __int64 v8; // rsi
  const unsigned __int8 *v9; // r11
  const unsigned __int8 *v10; // rbx
  unsigned __int64 **v11; // rdx
  unsigned __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 *v15; // r10
  const unsigned __int8 **v16; // rdx
  unsigned __int64 v17; // r10
  const unsigned __int8 **v18; // rdx
  unsigned __int64 v19; // r8
  const unsigned __int8 **v20; // rdx

  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  v3 = qword_1803E3068;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  result = (unsigned __int64)std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource const * const,CWeakResourceReference *>>>>>>::_Assign_grow(
                               (unsigned __int64 **)&qword_1803E3078,
                               2 * v5,
                               qword_1803E3068);
  v8 = v5 - 1;
  *((_QWORD *)&xmmword_1803E3090 + 1) = v5;
  *(_QWORD *)&xmmword_1803E3090 = v5 - 1;
  v9 = *(const unsigned __int8 **)qword_1803E3068;
  v10 = *(const unsigned __int8 **)qword_1803E3068;
  while ( v9 != (const unsigned __int8 *)v3 )
  {
    v10 = *(const unsigned __int8 **)v10;
    result = std::_Fnv1a_append_bytes((unsigned __int64)v7, v9 + 16, 8uLL);
    v13 = qword_1803E3078;
    v14 = 2 * (v8 & result);
    if ( *(_QWORD *)(qword_1803E3078 + 16 * (v8 & result)) == v3 )
    {
      *(_QWORD *)(qword_1803E3078 + 16 * (v8 & result)) = v12;
LABEL_6:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_7;
    }
    result = *(_QWORD *)(qword_1803E3078 + 16 * (v8 & result) + 8);
    v7 = *v11;
    if ( *v11 == *(unsigned __int64 **)(result + 16) )
    {
      v17 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v12 )
      {
        v18 = *(const unsigned __int8 ***)(v12 + 8);
        *v18 = v10;
        v7 = (unsigned __int64 *)*((_QWORD *)v10 + 1);
        *v7 = v17;
        result = *(_QWORD *)(v17 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v17 + 8) = v7;
        *((_QWORD *)v10 + 1) = v18;
        *(_QWORD *)(v12 + 8) = result;
      }
      goto LABEL_6;
    }
    do
    {
      v15 = (unsigned __int64 *)(result + 8);
      if ( *(_QWORD *)(qword_1803E3078 + 8 * v14) == result )
      {
        v16 = *(const unsigned __int8 ***)(v12 + 8);
        *v16 = v10;
        v7 = (unsigned __int64 *)*((_QWORD *)v10 + 1);
        *v7 = result;
        result = *v15;
        *(_QWORD *)result = v12;
        *v15 = (unsigned __int64)v7;
        *((_QWORD *)v10 + 1) = v16;
        *(_QWORD *)(v12 + 8) = result;
        *(_QWORD *)(v13 + 8 * v14) = v12;
        goto LABEL_7;
      }
      result = *v15;
    }
    while ( v7 != *(unsigned __int64 **)(*v15 + 16) );
    v19 = *(_QWORD *)result;
    v20 = *(const unsigned __int8 ***)(v12 + 8);
    *v20 = v10;
    v7 = (unsigned __int64 *)*((_QWORD *)v10 + 1);
    *v7 = v19;
    result = *(_QWORD *)(v19 + 8);
    *(_QWORD *)result = v12;
    *(_QWORD *)(v19 + 8) = v7;
    *((_QWORD *)v10 + 1) = v20;
    *(_QWORD *)(v12 + 8) = result;
LABEL_7:
    v8 = xmmword_1803E3090;
    v9 = v10;
  }
  return result;
}
