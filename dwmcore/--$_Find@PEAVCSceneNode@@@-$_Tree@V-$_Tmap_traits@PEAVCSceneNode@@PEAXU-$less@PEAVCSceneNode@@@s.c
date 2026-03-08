/*
 * XREFs of ??$_Find@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x180267C88
 * Callers:
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x180267ED8 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x180267F84 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@std@@@1@AEBQEAVCSceneNode@@@Z @ 0x180267CC4 (--$_Find_lower_bound@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCS.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Find<CSceneNode *>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r10
  _QWORD *v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Find_lower_bound<CSceneNode *>(
    a1,
    v5,
    a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *v3 < *(_QWORD *)(v6 + 32) )
    return *(_QWORD *)v2;
  return result;
}
