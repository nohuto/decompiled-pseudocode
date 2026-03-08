/*
 * XREFs of ??$_Find_lower_bound@W4Enum@SceneMaterialInputType@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@AEBW4Enum@SceneMaterialInputType@@@Z @ 0x18024BAFC
 * Callers:
 *     ??$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@?$map@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@_N@1@AEBW4Enum@SceneMaterialInputType@@@Z @ 0x18024BB4C (--$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@-$map@W4Enum@SceneMaterialInputType@@IU-$l.c)
 *     ?ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z @ 0x18024C7CC (-ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Find_lower_bound<enum SceneMaterialInputType::Enum>(
        __int64 *a1,
        __int64 a2,
        int *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  int v5; // r8d
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( *((_DWORD *)v4 + 7) >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
