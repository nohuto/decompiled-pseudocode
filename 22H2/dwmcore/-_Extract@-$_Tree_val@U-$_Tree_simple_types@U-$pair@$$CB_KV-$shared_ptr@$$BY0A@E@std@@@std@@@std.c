/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@@Z @ 0x1801F0030
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@0@Z @ 0x1801F0448 (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801525D0 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180152620 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180167734 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r10
  __int64 *v5; // rdi
  __int64 *v6; // r11
  __int64 *i; // rax
  __int64 v8; // r9
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // dl
  __int64 **v15; // rcx
  __int64 v16; // rdi
  _BYTE *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx

  v2 = a2 + 2;
  v3 = a2[2];
  v5 = a2;
  v6 = a2;
  if ( *(_BYTE *)(v3 + 25) )
  {
    for ( i = (__int64 *)a2[1]; !*((_BYTE *)i + 25) && a2 == (__int64 *)i[2]; i = (__int64 *)i[1] )
      a2 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)a2[2]);
  }
  if ( *(_BYTE *)(*v6 + 25) )
    goto LABEL_12;
  if ( *(_BYTE *)(v3 + 25) )
  {
    v3 = *v6;
LABEL_12:
    v8 = v6[1];
    if ( !*(_BYTE *)(v3 + 25) )
      *(_QWORD *)(v3 + 8) = v8;
    if ( *(__int64 **)(*a1 + 8LL) == v6 )
    {
      *(_QWORD *)(*a1 + 8LL) = v3;
    }
    else if ( *(__int64 **)v8 == v6 )
    {
      *(_QWORD *)v8 = v3;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v3;
    }
    v9 = (_QWORD *)*a1;
    v10 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v6 )
    {
      if ( *(_BYTE *)(v3 + 25) )
        v11 = (_QWORD *)v8;
      else
        v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v3);
      *v9 = v11;
      v9 = (_QWORD *)*a1;
      v10 = (_QWORD *)*a1;
    }
    if ( (__int64 *)v10[2] == v6 )
    {
      if ( *(_BYTE *)(v3 + 25) )
      {
        v12 = v8;
      }
      else
      {
        v13 = *(_QWORD *)(v3 + 16);
        v12 = v3;
        if ( !*(_BYTE *)(v13 + 25) )
        {
          do
          {
            v12 = v13;
            v13 = *(_QWORD *)(v13 + 16);
          }
          while ( !*(_BYTE *)(v13 + 25) );
          v10 = v9;
        }
      }
      v10[2] = v12;
    }
    v14 = *((_BYTE *)v5 + 24);
    goto LABEL_43;
  }
  v3 = i[2];
  if ( i == v6 )
    goto LABEL_12;
  *(_QWORD *)(*v6 + 8) = i;
  *i = *v6;
  if ( i == (__int64 *)*v2 )
  {
    v8 = (__int64)i;
  }
  else
  {
    v8 = i[1];
    if ( !*(_BYTE *)(v3 + 25) )
      *(_QWORD *)(v3 + 8) = v8;
    *(_QWORD *)v8 = v3;
    i[2] = *v2;
    *(_QWORD *)(*v2 + 8LL) = i;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = i;
  }
  else
  {
    v15 = (__int64 **)v6[1];
    if ( *v15 == v6 )
      *v15 = i;
    else
      v15[2] = i;
  }
  v14 = *((_BYTE *)i + 24);
  i[1] = v6[1];
  *((_BYTE *)i + 24) = *((_BYTE *)v6 + 24);
  *((_BYTE *)v6 + 24) = v14;
LABEL_43:
  if ( v14 == 1 )
  {
    if ( v3 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v16 = v8;
        if ( *(_BYTE *)(v3 + 24) != 1 )
          break;
        v17 = *(_BYTE **)v8;
        if ( v3 == *(_QWORD *)v8 )
        {
          v17 = *(_BYTE **)(v8 + 16);
          if ( !v17[24] )
          {
            v17[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
              (__int64)a1,
              v8);
            v17 = *(_BYTE **)(v8 + 16);
          }
          if ( v17[25] )
            goto LABEL_61;
          if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
              v17[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
                (__int64)a1,
                v17);
              v17 = *(_BYTE **)(v8 + 16);
            }
            v17[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
              (__int64)a1,
              v8);
            break;
          }
        }
        else
        {
          if ( !v17[24] )
          {
            v17[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v8);
            v17 = *(_BYTE **)v8;
          }
          if ( v17[25] )
            goto LABEL_61;
          v18 = *((_QWORD *)v17 + 2);
          if ( *(_BYTE *)(v18 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) == 1 )
            {
              *(_BYTE *)(v18 + 24) = 1;
              v17[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
                (__int64)a1,
                (__int64)v17);
              v17 = *(_BYTE **)v8;
            }
            v17[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v8);
            break;
          }
        }
        v17[24] = 0;
LABEL_61:
        v3 = v16;
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v16 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v3 + 24) = 1;
  }
  v19 = a1[1];
  if ( v19 )
    a1[1] = v19 - 1;
  return v6;
}
