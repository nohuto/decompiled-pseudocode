/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@V12@@2@AEBQEBVCResource@@@Z @ 0x18004F43C
 * Callers:
 *     ??1CWeakResourceReference@@MEAA@XZ @ 0x180065334 (--1CWeakResourceReference@@MEAA@XZ.c)
 *     ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800CCFC4 (-OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x180048CC8 (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800C3864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::equal_range(
        unsigned __int64 a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  __int64 v4; // rsi
  __int64 i; // r10
  __int64 v6; // rbp
  __int64 **v7; // rax
  __int64 *v8; // r10
  __int64 *v9; // r11
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = a1;
  v4 = xmmword_18034B4B0 & std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  for ( i = *(_QWORD *)(qword_18034B498 + 16 * v4); ; i = *v8 )
  {
    v6 = i;
    v7 = (__int64 **)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
                       (__int64)&CWeakResourceReference::s_weakReferenceMap,
                       &v16,
                       v4);
    if ( v8 == *v7 )
      break;
    v10 = *v9;
    if ( v8[2] == *v9 )
    {
      do
        v11 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
                (__int64)&CWeakResourceReference::s_weakReferenceMap,
                &v16,
                v4);
      while ( v12 != *v11 && v10 == *(_QWORD *)(v12 + 16) );
      if ( v6 != v12 )
      {
        *a2 = v13;
        a2[1] = v12;
        return a2;
      }
      break;
    }
  }
  v15 = qword_18034B488;
  *a2 = qword_18034B488;
  a2[1] = v15;
  return a2;
}
