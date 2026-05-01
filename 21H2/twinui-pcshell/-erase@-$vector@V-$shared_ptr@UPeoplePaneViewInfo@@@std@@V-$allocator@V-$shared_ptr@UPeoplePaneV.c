/*
 * XREFs of ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x1802D1F50
 * Callers:
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1802D0F3C (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1802D0FE4 (-RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802D1134 (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // rdi
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a3 + 16);
  v8 = v3;
  if ( (__int64 *)(a3 + 16) != v3 )
  {
    do
    {
      v9 = *v4;
      *v4 = 0LL;
      v10 = v4[1];
      v4[1] = 0LL;
      v11 = (std::_Ref_count_base *)*(v4 - 1);
      *(v4 - 2) = v9;
      *(v4 - 1) = v10;
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      v4 += 2;
    }
    while ( v4 != v3 );
    v3 = *(__int64 **)(a1 + 8);
    v8 = v3;
  }
  v12 = (std::_Ref_count_base *)*(v3 - 1);
  if ( v12 )
  {
    std::_Ref_count_base::_Decref(v12);
    v8 = *(__int64 **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 2;
  result = a2;
  *a2 = a3;
  return result;
}
