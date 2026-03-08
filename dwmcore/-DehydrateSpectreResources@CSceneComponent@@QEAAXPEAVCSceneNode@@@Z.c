/*
 * XREFs of ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x180267ED8
 * Callers:
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x18024D7D8 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x18024DC28 (-SetComponents@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneComponent@@$0-0@gsl@@@Z.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x180267F84 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801A3D88 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std.c)
 *     ??$_Find@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x180267C88 (--$_Find@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@@s.c)
 */

void __fastcall CSceneComponent::DehydrateSpectreResources(CSceneComponent *this, struct CSceneNode *a2)
{
  _QWORD *v2; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, __int64); // rbx
  __int64 v8; // rax
  __int64 *v9; // rax
  struct CSceneNode *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (_QWORD *)((char *)this + 64);
  v5 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Find<CSceneNode *>(
         (__int64)this + 64,
         (__int64)&v10);
  if ( v5 != *v2 )
  {
    v6 = *((_QWORD *)a2 + 17);
    v7 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL);
    v8 = (*(__int64 (__fastcall **)(CSceneComponent *))(*(_QWORD *)this + 192LL))(this);
    v7(v6, v8);
    v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
           v2,
           v5);
    std::_Deallocate<16,0>(v9, 0x30uLL);
  }
}
