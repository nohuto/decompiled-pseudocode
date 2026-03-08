/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1802A3E30
 * Callers:
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802A2AE8 (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801A3B98 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801A3D88 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@@Z @ 0x1802A3218 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@std@@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*a1;
  v4 = *a1;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_DWORD *)(v6 + 28) >= v7 )
      {
        if ( *(_BYTE *)(v5 + 25) && v7 < *(_DWORD *)(v6 + 28) )
          v5 = v6;
        v4 = v6;
        v6 = *(_QWORD *)v6;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  if ( *(_BYTE *)(v5 + 25) )
    v8 = v2[1];
  else
    v8 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    if ( *a2 >= *(_DWORD *)(v8 + 28) )
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
    else
    {
      v5 = v8;
      v8 = *(_QWORD *)v8;
    }
  }
  v9 = v4;
  v10 = 0LL;
  v14 = v4;
  while ( v9 != v5 )
  {
    ++v10;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v14);
    v9 = v14;
  }
  v14 = v4;
  if ( v4 == *v2 && *(_BYTE *)(v5 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicSlateData>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      v2[1]);
    v2[1] = v2;
    *v2 = v2;
    v2[2] = v2;
    a1[1] = 0LL;
  }
  else
  {
    while ( v4 != v5 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v14);
      v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
              a1,
              v12);
      std::_Deallocate<16,0>(v13, 0x68uLL);
      v4 = v14;
    }
  }
  return v10;
}
