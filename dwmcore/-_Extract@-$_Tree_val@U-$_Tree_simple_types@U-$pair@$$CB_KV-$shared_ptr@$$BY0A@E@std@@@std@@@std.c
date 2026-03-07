__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rcx
  char v13; // dl
  __int64 v14; // rdi
  __int64 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++((__int64 *)&v19);
  v6 = v5[2];
  if ( *(_BYTE *)(*v5 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v6 + 25) )
  {
    v6 = *v5;
LABEL_5:
    v8 = v5[1];
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v8;
    if ( *(__int64 **)(*a1 + 8LL) == v5 )
    {
      *(_QWORD *)(*a1 + 8LL) = v6;
    }
    else if ( *(__int64 **)v8 == v5 )
    {
      *(_QWORD *)v8 = v6;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v6;
    }
    v4 = *a1;
    if ( *(__int64 **)*a1 == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
        v9 = v8;
      else
        v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
               v6,
               v3,
               v4);
      *(_QWORD *)v4 = v9;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
      {
        v10 = v8;
      }
      else
      {
        v11 = *(_QWORD *)(v6 + 16);
        v10 = v6;
        while ( !*(_BYTE *)(v11 + 25) )
        {
          v10 = v11;
          v11 = *(_QWORD *)(v11 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v10;
    }
    goto LABEL_35;
  }
  v7 = (__int64)v19;
  v6 = v19[2];
  if ( v19 == v5 )
    goto LABEL_5;
  *(_QWORD *)(*v5 + 8) = v19;
  *(_QWORD *)v7 = *v5;
  if ( v7 == v5[2] )
  {
    v8 = v7;
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v8;
    *(_QWORD *)v8 = v6;
    *(_QWORD *)(v7 + 16) = v5[2];
    *(_QWORD *)(v5[2] + 8) = v7;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = v7;
  }
  else
  {
    v12 = (__int64 *)v5[1];
    if ( (__int64 *)*v12 == v5 )
      *v12 = v7;
    else
      v12[2] = v7;
  }
  v13 = *(_BYTE *)(v7 + 24);
  *(_QWORD *)(v7 + 8) = v5[1];
  *(_BYTE *)(v7 + 24) = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = v13;
LABEL_35:
  if ( *((_BYTE *)v5 + 24) == 1 )
  {
    if ( v6 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v14 = v8;
        if ( *(_BYTE *)(v6 + 24) != 1 )
          break;
        v15 = *(__int64 **)v8;
        if ( v6 == *(_QWORD *)v8 )
        {
          v15 = *(__int64 **)(v8 + 16);
          if ( !*((_BYTE *)v15 + 24) )
          {
            *((_BYTE *)v15 + 24) = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
              a1,
              v8,
              v4,
              v8);
            v15 = *(__int64 **)(v8 + 16);
          }
          if ( *((_BYTE *)v15 + 25) )
            goto LABEL_53;
          v4 = *v15;
          if ( *(_BYTE *)(*v15 + 24) != 1 || *(_BYTE *)(v15[2] + 24) != 1 )
          {
            if ( *(_BYTE *)(v15[2] + 24) == 1 )
            {
              *(_BYTE *)(v4 + 24) = 1;
              *((_BYTE *)v15 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
                a1,
                v15,
                v4,
                v8);
              v15 = *(__int64 **)(v8 + 16);
            }
            *((_BYTE *)v15 + 24) = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(v15[2] + 24) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
              a1,
              v8,
              v4,
              v8);
            break;
          }
        }
        else
        {
          if ( !*((_BYTE *)v15 + 24) )
          {
            *((_BYTE *)v15 + 24) = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              a1,
              v8,
              v4,
              v8);
            v15 = *(__int64 **)v8;
          }
          if ( *((_BYTE *)v15 + 25) )
            goto LABEL_53;
          v16 = v15[2];
          if ( *(_BYTE *)(v16 + 24) != 1 || *(_BYTE *)(*v15 + 24) != 1 )
          {
            if ( *(_BYTE *)(*v15 + 24) == 1 )
            {
              *(_BYTE *)(v16 + 24) = 1;
              *((_BYTE *)v15 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
                a1,
                v15,
                v4,
                v8);
              v15 = *(__int64 **)v8;
            }
            *((_BYTE *)v15 + 24) = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*v15 + 24) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              a1,
              v8,
              v4,
              v8);
            break;
          }
        }
        *((_BYTE *)v15 + 24) = 0;
LABEL_53:
        v6 = v14;
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v14 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v6 + 24) = 1;
  }
  v17 = a1[1];
  if ( v17 )
    a1[1] = v17 - 1;
  return v5;
}
