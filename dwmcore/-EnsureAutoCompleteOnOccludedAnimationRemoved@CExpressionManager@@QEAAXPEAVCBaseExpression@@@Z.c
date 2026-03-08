/*
 * XREFs of ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800BC29C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800561C0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x180096D48 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18009AF40 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800BC454 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x1800BD110 (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ??$_Find_last@PEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAVCBaseExpression@@PEAX@std@@@1@AEBQEAVCBaseExpression@@_K@Z @ 0x1800BC384 (--$_Find_last@PEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
        CExpressionManager *this,
        struct CBaseExpression *a2)
{
  char *v3; // rbx
  unsigned __int64 appended; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r11
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  _QWORD *v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  struct CBaseExpression *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v3 = (char *)this + 528;
  appended = std::_Fnv1a_append_bytes((unsigned __int64)this, (const unsigned __int8 *const)&v14, 8uLL);
  v6 = *(_QWORD *)(std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Find_last<CBaseExpression *>(
                     v3,
                     v13,
                     &v14,
                     appended)
                 + 8);
  if ( !v6 )
    v6 = *((_QWORD *)v3 + 1);
  v7 = *((_QWORD *)this + 67);
  if ( v6 != v7 )
  {
    v8 = std::_Fnv1a_append_bytes(v5, (const unsigned __int8 *const)(v6 + 16), 8uLL);
    v10 = *((_QWORD *)this + 69);
    v11 = 2 * (*((_QWORD *)this + 72) & v8);
    if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 72) & v8) + 8) == v9 )
    {
      if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 72) & v8)) == v9 )
        *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 72) & v8)) = v7;
      else
        v7 = v9[1];
      *(_QWORD *)(v10 + 8 * v11 + 8) = v7;
    }
    else if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 72) & v8)) == v9 )
    {
      *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 72) & v8)) = *v9;
    }
    v12 = *v9;
    --*((_QWORD *)this + 68);
    *(_QWORD *)v9[1] = v12;
    *(_QWORD *)(v12 + 8) = v9[1];
    std::_Deallocate<16,0>(v9, 24LL);
  }
}
