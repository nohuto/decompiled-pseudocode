/*
 * XREFs of ??$?0V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x18024C420
 * Callers:
 *     ?ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z @ 0x18024C7CC (-ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z.c)
 * Callees:
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x180036340 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEA.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18024C4D4 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // rdx
  __int64 **v8; // r8
  __int64 *i; // rcx
  __int64 v10; // rax
  __int64 j; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>();
  LOBYTE(v6) = a3;
  *a1 = v5;
  *(_QWORD *)(*a1 + 8) = std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Copy_tag>(
                           a1,
                           *(_QWORD *)(*a2 + 8LL),
                           v5,
                           v6);
  v7 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v8 = (__int64 **)v7[1];
  if ( *((_BYTE *)v8 + 25) )
  {
    *v7 = v7;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    for ( i = *v8; !*((_BYTE *)i + 25); i = (__int64 *)*i )
      v8 = (__int64 **)i;
    *v7 = v8;
    v10 = *(_QWORD *)(*a1 + 8);
    for ( j = *(_QWORD *)(v10 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
      v10 = j;
    *(_QWORD *)(*a1 + 16) = v10;
  }
  return a1;
}
