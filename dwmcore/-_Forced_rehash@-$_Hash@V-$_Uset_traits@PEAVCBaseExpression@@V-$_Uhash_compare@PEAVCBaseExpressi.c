/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180024C88
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x180024DA4 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpressio.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVIBatchProcessingCompleteListener@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVIBatchProcessingCompleteListener@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800245B4 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_v_ea_1800245B4.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
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
  v4 = *(_QWORD *)(a1 + 8);
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IBatchProcessingCompleteListener *>>,std::_Iterator_base0>>>::_Assign_grow(
    (unsigned __int64 **)(a1 + 24),
    2 * v6,
    v4);
  *(_QWORD *)(a1 + 56) = v6;
  result = v6 - 1;
  *(_QWORD *)(a1 + 48) = v6 - 1;
  v9 = **(_QWORD ***)(a1 + 8);
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    result = std::_Fnv1a_append_bytes((unsigned __int64)v7, (const unsigned __int8 *const)v9 + 16, 8uLL);
    v13 = *(_QWORD *)(a1 + 24);
    v14 = 2 * (*(_QWORD *)(a1 + 48) & result);
    if ( *(_QWORD *)(v13 + 16 * (*(_QWORD *)(a1 + 48) & result)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (*(_QWORD *)(a1 + 48) & result)) = v12;
LABEL_6:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_7;
    }
    result = *(_QWORD *)(v13 + 16 * (*(_QWORD *)(a1 + 48) & result) + 8);
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
