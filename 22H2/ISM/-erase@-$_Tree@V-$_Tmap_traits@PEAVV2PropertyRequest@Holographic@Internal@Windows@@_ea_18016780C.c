/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QEAA_KAEBQEAVV2PropertyRequest@Holographic@Internal@Windows@@@Z @ 0x18016780C
 * Callers:
 *     ?HandlePropertyRequestCompletion@Holographic@Internal@Windows@@YAXAEAV?$map@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@@std@@PEAX@Z @ 0x18015F970 (-HandlePropertyRequestCompletion@Holographic@Internal@Windows@@YAXAEAV-$map@PEAVV2PropertyReques.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800694A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x180167750 (-erase@-$_Tree@V-$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V-$unique_ptr.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<Windows::Internal::Holographic::V2PropertyRequest *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>,std::less<Windows::Internal::Holographic::V2PropertyRequest *>,std::allocator<std::pair<Windows::Internal::Holographic::V2PropertyRequest * const,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>,0>>::erase(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  _QWORD *v2; // r10
  __int64 v3; // rbx
  _QWORD *v5; // r9
  __int64 *v6; // rax
  __int64 *v7; // r8
  unsigned __int64 v8; // r11
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*a1;
  v3 = 0LL;
  v5 = (_QWORD *)*a1;
  v6 = *(__int64 **)(*a1 + 8LL);
  v7 = v6;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( v7[4] >= v8 )
      {
        if ( *((_BYTE *)v5 + 25) && v8 < v7[4] )
          v5 = v7;
        v2 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = (__int64 *)*v5;
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( *a2 >= v6[4] )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  v9 = v2;
  v11 = v2;
  while ( v9 != v5 )
  {
    ++v3;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v11);
    v9 = v11;
  }
  std::_Tree<std::_Tmap_traits<Windows::Internal::Holographic::V2PropertyRequest *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>,std::less<Windows::Internal::Holographic::V2PropertyRequest *>,std::allocator<std::pair<Windows::Internal::Holographic::V2PropertyRequest * const,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>,0>>::erase(
    a1,
    &v11,
    v2,
    v5);
  return v3;
}
