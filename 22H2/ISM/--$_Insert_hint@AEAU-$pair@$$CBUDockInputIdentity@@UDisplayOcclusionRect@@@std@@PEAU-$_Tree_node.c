/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x1801466F4
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUDockInputIdentity@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUDockInputIdentity@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180146BDC (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUDockInputIdentity@@@2@V_ea_180146BDC.c)
 * Callees:
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@2@PEAU32@@Z @ 0x18002BEB4 (-_Max@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800694A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@1@1@Z @ 0x18014657C (--$_Insert_at@AEAU-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAU-$_Tree_node@U.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x1801469A8 (--$_Insert_nohint@AEAU-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAU-$_Tree_no.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_hint<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r11
  __int64 v6; // r9
  _QWORD *v9; // rsi
  unsigned int v10; // eax
  bool v11; // cf
  unsigned __int64 v12; // rax
  _QWORD *result; // rax
  __int64 v14; // r9
  bool v15; // cf
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  bool v18; // cf
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // ecx
  bool v24; // cf
  unsigned __int64 v25; // rcx
  unsigned int v26; // eax
  bool v27; // cf
  unsigned __int64 v28; // rax
  _QWORD *v29; // r9
  unsigned int v30; // eax
  bool v31; // cf
  unsigned __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-28h]
  char v34; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp+8h] BYREF

  v5 = a4;
  v6 = a3;
  v9 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      v10 = *(_DWORD *)(a3 + 32);
      v11 = *(_DWORD *)v5 < v10;
      if ( *(_DWORD *)v5 == v10 )
      {
        v12 = *(_QWORD *)(a3 + 40);
        v11 = *(_QWORD *)(v5 + 8) < v12;
        if ( *(_QWORD *)(v5 + 8) == v12 )
          v11 = *(_WORD *)(v5 + 16) < *(_WORD *)(a3 + 48);
      }
      if ( v11 )
      {
        std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_at<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v33,
          a5);
        return a2;
      }
      goto LABEL_49;
    }
    if ( (_QWORD *)a3 == v9 )
    {
      v14 = v9[2];
      v15 = *(_DWORD *)(v14 + 32) < *(_DWORD *)v5;
      if ( *(_DWORD *)(v14 + 32) == *(_DWORD *)v5 )
      {
        v16 = *(_QWORD *)(v5 + 8);
        v15 = *(_QWORD *)(v14 + 40) < v16;
        if ( *(_QWORD *)(v14 + 40) == v16 )
          v15 = *(_WORD *)(v14 + 48) < *(_WORD *)(v5 + 16);
      }
      if ( v15 )
      {
        std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_at<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v14,
          v33,
          a5);
        return a2;
      }
      goto LABEL_49;
    }
    v17 = *(_DWORD *)(a3 + 32);
    v18 = *(_DWORD *)v5 < v17;
    if ( *(_DWORD *)v5 == v17 )
    {
      v19 = *(_QWORD *)(a3 + 40);
      v18 = *(_QWORD *)(v5 + 8) < v19;
      if ( *(_QWORD *)(v5 + 8) == v19 )
        v18 = *(_WORD *)(v5 + 16) < *(_WORD *)(a3 + 48);
    }
    if ( !v18 )
      goto LABEL_36;
    v20 = a3;
    if ( *(_BYTE *)(a3 + 25) )
    {
      v20 = *(_QWORD *)(a3 + 16);
    }
    else if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
    {
      v21 = *(_QWORD *)(a3 + 8);
      if ( !*(_BYTE *)(v21 + 25) )
      {
        v22 = a3;
        do
        {
          LODWORD(a3) = v21;
          if ( v22 != *(_QWORD *)v21 )
            break;
          v20 = v21;
          v21 = *(_QWORD *)(v21 + 8);
          v22 = v20;
        }
        while ( !*(_BYTE *)(v21 + 25) );
      }
      if ( !*(_BYTE *)(v20 + 25) )
        v20 = v21;
    }
    else
    {
      v20 = std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DisplayOcclusionRect>>>::_Max(*(_QWORD *)a3);
    }
    v23 = *(_DWORD *)(v20 + 32);
    v24 = v23 < *(_DWORD *)v5;
    if ( v23 == *(_DWORD *)v5 )
    {
      v25 = *(_QWORD *)(v5 + 8);
      v24 = *(_QWORD *)(v20 + 40) < v25;
      if ( *(_QWORD *)(v20 + 40) == v25 )
        v24 = *(_WORD *)(v20 + 48) < *(_WORD *)(v5 + 16);
    }
    if ( v24 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v20 + 16) + 25LL) )
        std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_at<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v20,
          v33,
          a5);
      else
        std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_at<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)v6,
          v33,
          a5);
      return a2;
    }
    else
    {
LABEL_36:
      v26 = *(_DWORD *)(v6 + 32);
      v27 = v26 < *(_DWORD *)v5;
      if ( v26 == *(_DWORD *)v5 )
      {
        v28 = *(_QWORD *)(v5 + 8);
        v27 = *(_QWORD *)(v6 + 40) < v28;
        if ( *(_QWORD *)(v6 + 40) == v28 )
          v27 = *(_WORD *)(v6 + 48) < *(_WORD *)(v5 + 16);
      }
      if ( !v27 )
        goto LABEL_49;
      v35 = (_QWORD *)v6;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v35);
      if ( v35 != v9 )
      {
        v30 = *((_DWORD *)v35 + 8);
        v31 = *(_DWORD *)v5 < v30;
        if ( *(_DWORD *)v5 == v30 )
        {
          v32 = v35[5];
          v31 = *(_QWORD *)(v5 + 8) < v32;
          if ( *(_QWORD *)(v5 + 8) == v32 )
            v31 = *(_WORD *)(v5 + 16) < *((_WORD *)v35 + 24);
        }
        if ( !v31 )
        {
LABEL_49:
          *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_nohint<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
                             (_DWORD)a1,
                             (unsigned int)&v34,
                             a3,
                             v5,
                             (__int64)a5);
          return a2;
        }
      }
      if ( *(_BYTE *)(v29[2] + 25LL) )
        std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_at<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
          a1,
          a2,
          0,
          v29,
          v33,
          a5);
      else
        std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_at<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
          a1,
          a2,
          1,
          v35,
          v33,
          a5);
      return a2;
    }
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_at<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
        a1,
        a2,
        1,
        v9,
        v33,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0xD0);
      throw;
    }
  }
  return result;
}
