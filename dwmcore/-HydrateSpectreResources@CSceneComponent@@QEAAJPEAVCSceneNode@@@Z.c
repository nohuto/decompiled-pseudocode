/*
 * XREFs of ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x180267F84
 * Callers:
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x18024D8A0 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?OnComponentsChanged@CSceneNode@@QEAAXXZ @ 0x18024DAF4 (-OnComponentsChanged@CSceneNode@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x180267C88 (--$_Find@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@@s.c)
 *     ??$_Try_emplace@AEBQEAVCSceneNode@@$$V@?$map@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@std@@_N@1@AEBQEAVCSceneNode@@@Z @ 0x180267D14 (--$_Try_emplace@AEBQEAVCSceneNode@@$$V@-$map@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@@std@@V.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x180267ED8 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 */

__int64 __fastcall CSceneComponent::HydrateSpectreResources(CSceneComponent *this, struct CSceneNode *a2)
{
  __int64 *v2; // rbp
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, struct CSceneNode **); // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct CSceneNode *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF
  struct CSceneNode *v16; // [rsp+60h] [rbp+8h] BYREF
  struct CSceneNode *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v2 = (__int64 *)((char *)this + 64);
  v16 = a2;
  if ( std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Find<CSceneNode *>(
         (__int64)this + 64,
         (__int64)&v16) != *((_QWORD *)this + 8) )
    return 0;
  v5 = *((_QWORD *)a2 + 17);
  v6 = *(__int64 (__fastcall **)(__int64, __int64, struct CSceneNode **))(*(_QWORD *)v5 + 48LL);
  v7 = (*(__int64 (__fastcall **)(CSceneComponent *))(*(_QWORD *)this + 192LL))(this);
  v8 = v6(v5, v7, &v16);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x28u, 0LL);
    goto LABEL_6;
  }
  v11 = v16;
  *(_QWORD *)(*(_QWORD *)std::map<CSceneNode *,void *>::_Try_emplace<CSceneNode * const &,>(
                           v2,
                           (__int64)v15,
                           (unsigned __int64 *)&v17)
            + 40LL) = v11;
  v12 = (*(__int64 (__fastcall **)(CSceneComponent *, struct CSceneNode *))(*(_QWORD *)this + 200LL))(this, v16);
  v10 = v12;
  if ( v12 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x2Bu, 0LL);
LABEL_6:
  CSceneComponent::DehydrateSpectreResources(this, v17);
  return v10;
}
