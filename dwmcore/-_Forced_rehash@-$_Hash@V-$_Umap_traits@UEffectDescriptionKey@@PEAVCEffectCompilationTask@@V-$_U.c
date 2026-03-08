/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E2E88
 * Callers:
 *     ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x1800E3074 (--$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$_Hash@V-$_Umap_traits@UEffec.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x180024768 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$?RUEffectDescriptionKey@@U0@@?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@QEBA_NAEBUEffectDescriptionKey@@0@Z @ 0x1800E37E8 (--$-RUEffectDescriptionKey@@U0@@-$_Uhash_compare@UEffectDescriptionKey@@U-$hash@UEffectDescripti.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Forced_rehash(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  __int64 *v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *result; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  _QWORD *v14; // rsi
  _QWORD **v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // r8
  _QWORD *v20; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  v5 = (__int64 *)(a1 + 3);
  _BitScanReverse64(&v6, (a2 - 1) | 1);
  v7 = 1LL << ((unsigned __int8)v6 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource const * const,CWeakResourceReference *>>>>>>::_Assign_grow(
    (unsigned __int64 **)a1 + 3,
    2 * v7,
    v4);
  result = (_QWORD *)(v7 - 1);
  a1[7] = v7;
  a1[6] = v7 - 1;
  v10 = *(_QWORD **)a1[1];
  v11 = v10;
  while ( v10 != (_QWORD *)v4 )
  {
    v12 = *v5;
    v11 = (_QWORD *)*v11;
    v13 = 2 * (a1[6] & (unsigned int)v10[2]);
    if ( *(_QWORD *)(*v5 + 16 * (a1[6] & (unsigned int)v10[2])) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (a1[6] & (unsigned int)v10[2])) = v10;
      *(_QWORD *)(v12 + 8 * v13 + 8) = v10;
    }
    else
    {
      v14 = *(_QWORD **)(v12 + 16 * (a1[6] & (unsigned int)v10[2]) + 8);
      result = (_QWORD *)std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>::operator()<EffectDescriptionKey,EffectDescriptionKey>(
                           v8,
                           v10 + 2,
                           v14 + 2);
      if ( (_BYTE)result )
      {
        while ( 1 )
        {
          v15 = (_QWORD **)(v14 + 1);
          if ( *(_QWORD **)(v12 + 8 * v13) == v14 )
            break;
          v14 = *v15;
          if ( !(unsigned __int8)std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>::operator()<EffectDescriptionKey,EffectDescriptionKey>(
                                   v8,
                                   v10 + 2,
                                   *v15 + 2) )
          {
            v19 = (_QWORD *)*v14;
            v20 = (_QWORD *)v10[1];
            *v20 = v11;
            v8 = (_QWORD *)v11[1];
            *v8 = v19;
            result = (_QWORD *)v19[1];
            *result = v10;
            v19[1] = v8;
            v11[1] = v20;
            v10[1] = result;
            goto LABEL_10;
          }
        }
        v16 = (_QWORD *)v10[1];
        *v16 = v11;
        result = (_QWORD *)v11[1];
        *result = v14;
        v8 = *v15;
        *v8 = v10;
        *v15 = result;
        v11[1] = v16;
        v10[1] = v8;
        *(_QWORD *)(v12 + 8 * v13) = v10;
      }
      else
      {
        v17 = (_QWORD *)*v14;
        if ( (_QWORD *)*v14 != v10 )
        {
          v18 = (_QWORD *)v10[1];
          *v18 = v11;
          v8 = (_QWORD *)v11[1];
          *v8 = v17;
          result = (_QWORD *)v17[1];
          *result = v10;
          v17[1] = v8;
          v11[1] = v18;
          v10[1] = result;
        }
        *(_QWORD *)(v12 + 8 * v13 + 8) = v10;
      }
LABEL_10:
      v5 = (__int64 *)(a1 + 3);
    }
    v10 = v11;
  }
  return result;
}
