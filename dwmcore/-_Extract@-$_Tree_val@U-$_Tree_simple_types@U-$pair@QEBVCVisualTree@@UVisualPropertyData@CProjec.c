/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180216A40
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEBVCVisualTree@@@Z @ 0x180216D00 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001EBD8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCVisualTree@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801A416C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801A41E0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 *v5; // rax
  __int64 v6; // r9
  __int64 i; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 **v11; // rcx
  char v12; // dl
  __int64 v13; // rdi
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = v3[2];
  if ( *(_BYTE *)(*v3 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v4 + 25) )
  {
    v4 = *v3;
LABEL_5:
    v6 = v3[1];
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    if ( *(__int64 **)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( *(__int64 **)v6 == v3 )
    {
      *(_QWORD *)v6 = v4;
    }
    else
    {
      *(_QWORD *)(v6 + 16) = v4;
    }
    if ( *(__int64 **)*a1 == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
      {
        i = v6;
      }
      else
      {
        v8 = *(_QWORD *)v4;
        for ( i = v4; !*(_BYTE *)(v8 + 25); v8 = *(_QWORD *)v8 )
          i = v8;
      }
      *(_QWORD *)*a1 = i;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
      {
        v9 = v6;
      }
      else
      {
        v10 = *(_QWORD *)(v4 + 16);
        v9 = v4;
        while ( !*(_BYTE *)(v10 + 25) )
        {
          v9 = v10;
          v10 = *(_QWORD *)(v10 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v9;
    }
    goto LABEL_36;
  }
  v5 = v18;
  v4 = v18[2];
  if ( v18 == v3 )
    goto LABEL_5;
  *(_QWORD *)(*v3 + 8) = v18;
  *v5 = *v3;
  if ( v5 == (__int64 *)v3[2] )
  {
    v6 = (__int64)v5;
  }
  else
  {
    v6 = v5[1];
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    *(_QWORD *)v6 = v4;
    v5[2] = v3[2];
    *(_QWORD *)(v3[2] + 8) = v5;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v5;
  }
  else
  {
    v11 = (__int64 **)v3[1];
    if ( *v11 == v3 )
      *v11 = v5;
    else
      v11[2] = v5;
  }
  v12 = *((_BYTE *)v5 + 24);
  v5[1] = v3[1];
  *((_BYTE *)v5 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v12;
LABEL_36:
  if ( *((_BYTE *)v3 + 24) == 1 )
  {
    if ( v4 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v13 = v6;
        if ( *(_BYTE *)(v4 + 24) != 1 )
          break;
        v14 = *(_BYTE **)v6;
        if ( v4 == *(_QWORD *)v6 )
        {
          v14 = *(_BYTE **)(v6 + 16);
          if ( !v14[24] )
          {
            v14[24] = 1;
            *(_BYTE *)(v6 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
              (__int64)a1,
              v6);
            v14 = *(_BYTE **)(v6 + 16);
          }
          if ( v14[25] )
            goto LABEL_54;
          if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
              v14[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
                (__int64)a1,
                v14);
              v14 = *(_BYTE **)(v6 + 16);
            }
            v14[24] = *(_BYTE *)(v6 + 24);
            *(_BYTE *)(v6 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
              (__int64)a1,
              v6);
            break;
          }
        }
        else
        {
          if ( !v14[24] )
          {
            v14[24] = 1;
            *(_BYTE *)(v6 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v6);
            v14 = *(_BYTE **)v6;
          }
          if ( v14[25] )
            goto LABEL_54;
          v15 = *((_QWORD *)v14 + 2);
          if ( *(_BYTE *)(v15 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) == 1 )
            {
              *(_BYTE *)(v15 + 24) = 1;
              v14[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
                (__int64)a1,
                (__int64)v14);
              v14 = *(_BYTE **)v6;
            }
            v14[24] = *(_BYTE *)(v6 + 24);
            *(_BYTE *)(v6 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v6);
            break;
          }
        }
        v14[24] = 0;
LABEL_54:
        v4 = v13;
        v6 = *(_QWORD *)(v6 + 8);
      }
      while ( v13 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v4 + 24) = 1;
  }
  v16 = a1[1];
  if ( v16 )
    a1[1] = v16 - 1;
  return v3;
}
