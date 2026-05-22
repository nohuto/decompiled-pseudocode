/*
 * XREFs of ?RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z @ 0x180013900
 * Callers:
 *     ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015300 (-UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x180009640 (-lower_bound@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-$_U.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 */

void __fastcall InputSiteHierarchyManager::RemoveInputSinkFromParentList(
        InputSiteHierarchyManager *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  char *v6; // rdx
  _QWORD *v7; // rdi
  __int64 v8; // r8
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax
  size_t v11; // rsi
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h]
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  v3 = a2;
  std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::lower_bound(
    (_QWORD *)this + 2,
    &v12,
    (unsigned __int8 *)&v14);
  v5 = v12;
  if ( v12 != *((_QWORD *)this + 3) )
  {
    v6 = *(char **)(v12 + 48);
    v7 = *(_QWORD **)(v12 + 40);
    if ( v7 != (_QWORD *)v6 )
    {
      do
      {
        if ( *v7 == v3 )
          break;
        ++v7;
      }
      while ( v7 != (_QWORD *)v6 );
      if ( v7 != (_QWORD *)v6 )
      {
        v8 = 0LL;
        v9 = v7 + 1;
        v10 = (unsigned __int64)(v6 - (char *)(v7 + 1) + 7) >> 3;
        if ( v7 + 1 > (_QWORD *)v6 )
          v10 = 0LL;
        if ( v10 )
        {
          do
          {
            if ( *v9 != v3 )
            {
              *v7++ = *v9;
              v3 = v13;
            }
            ++v9;
            ++v8;
          }
          while ( v8 != v10 );
        }
      }
    }
    v11 = *(_QWORD *)(v5 + 48) - (_QWORD)v6;
    memmove_0(v7, v6, v11);
    *(_QWORD *)(v5 + 48) = (char *)v7 + v11;
  }
}
