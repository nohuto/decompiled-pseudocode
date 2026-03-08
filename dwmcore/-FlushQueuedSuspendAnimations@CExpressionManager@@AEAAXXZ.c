/*
 * XREFs of ?FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ @ 0x1800538E0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180051314 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 * Callees:
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x180012AF4 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@@Z @ 0x18021352C (--$_Erase_tree@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@I@.c)
 */

void __fastcall CExpressionManager::FlushQueuedSuspendAnimations(CExpressionManager *this)
{
  _QWORD *v1; // rsi
  __int64 *v3; // rdi
  __int64 *j; // rbx
  _QWORD *v5; // rbx
  __int64 *v6; // rdi
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *v9; // rcx
  __int64 *v10; // rcx

  v1 = (_QWORD *)((char *)this + 400);
  v3 = (__int64 *)*((_QWORD *)this + 50);
  j = (__int64 *)*v3;
  while ( j != v3 )
  {
    CExpressionManager::SuspendAnimations(this, *((_DWORD *)j + 7), 1, 0);
    v7 = (__int64 **)j[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v9 = *v7;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v9 + 25); v9 = (__int64 *)*v9 )
        j = v9;
    }
  }
  v5 = (_QWORD *)*v1;
  v6 = *(__int64 **)(*v1 + 8LL);
  while ( !*((_BYTE *)v6 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
      v1,
      v1,
      v6[2]);
    v10 = v6;
    v6 = (__int64 *)*v6;
    std::_Deallocate<16,0>(v10, 32LL);
  }
  v5[1] = v5;
  *v5 = v5;
  v5[2] = v5;
  v1[1] = 0LL;
}
