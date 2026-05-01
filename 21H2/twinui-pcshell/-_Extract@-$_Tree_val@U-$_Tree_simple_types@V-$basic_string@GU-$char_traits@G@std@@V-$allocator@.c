/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@2@@Z @ 0x1800AAF84
 * Callers:
 *     ?AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ @ 0x1800A2268 (-AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A19B8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@2@@Z @ 0x1800AB30C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@I.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x1800AB35C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1800AB3E8 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Extract(__int64 **a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 *v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rcx
  char v14; // dl
  bool i; // zf
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 *v21; // [rsp+38h] [rbp+10h] BYREF

  v21 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++((__int64 *)&v21);
  v6 = v5[2];
  if ( !*(_BYTE *)(*v5 + 25) )
  {
    if ( *(_BYTE *)(v6 + 25) )
    {
      v6 = *v5;
    }
    else
    {
      v7 = (__int64)v21;
      v6 = v21[2];
      if ( v21 != v5 )
      {
        *(_QWORD *)(*v5 + 8) = v21;
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
        if ( (__int64 *)(*a1)[1] == v5 )
        {
          (*a1)[1] = v7;
        }
        else
        {
          v13 = (__int64 *)v5[1];
          if ( (__int64 *)*v13 == v5 )
            *v13 = v7;
          else
            v13[2] = v7;
        }
        v14 = *(_BYTE *)(v7 + 24);
        *(_QWORD *)(v7 + 8) = v5[1];
        *(_BYTE *)(v7 + 24) = *((_BYTE *)v5 + 24);
        *((_BYTE *)v5 + 24) = v14;
        goto LABEL_35;
      }
    }
  }
  v8 = v5[1];
  if ( !*(_BYTE *)(v6 + 25) )
    *(_QWORD *)(v6 + 8) = v8;
  if ( (__int64 *)(*a1)[1] == v5 )
  {
    (*a1)[1] = v6;
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
  v9 = *a1;
  if ( (__int64 *)**a1 == v5 )
  {
    if ( *(_BYTE *)(v6 + 25) )
      v10 = v8;
    else
      v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min(
              v6,
              v3,
              v4);
    *v4 = v10;
    v4 = *a1;
    v9 = *a1;
  }
  if ( (__int64 *)v9[2] == v5 )
  {
    if ( *(_BYTE *)(v6 + 25) )
    {
      v11 = v8;
    }
    else
    {
      v12 = *(_QWORD *)(v6 + 16);
      v11 = v6;
      if ( !*(_BYTE *)(v12 + 25) )
      {
        do
        {
          v11 = v12;
          v12 = *(_QWORD *)(v12 + 16);
        }
        while ( !*(_BYTE *)(v12 + 25) );
        v9 = v4;
      }
    }
    v9[2] = v11;
  }
LABEL_35:
  if ( *((_BYTE *)v5 + 24) != 1 )
    goto LABEL_59;
  for ( i = v6 == (*a1)[1]; !i; i = v16 == (*a1)[1] )
  {
    v16 = v8;
    if ( *(_BYTE *)(v6 + 24) != 1 )
      break;
    v17 = *(_QWORD *)v8;
    if ( v6 == *(_QWORD *)v8 )
    {
      v17 = *(_QWORD *)(v8 + 16);
      if ( !*(_BYTE *)(v17 + 24) )
      {
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v8 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
          a1,
          v8);
        v17 = *(_QWORD *)(v8 + 16);
      }
      if ( !*(_BYTE *)(v17 + 25) )
      {
        if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v17 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v17 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
            *(_BYTE *)(v17 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
              a1,
              v17,
              v4,
              v8);
            v17 = *(_QWORD *)(v8 + 16);
          }
          *(_BYTE *)(v17 + 24) = *(_BYTE *)(v8 + 24);
          *(_BYTE *)(v8 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v17 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
            a1,
            v8);
          break;
        }
LABEL_53:
        *(_BYTE *)(v17 + 24) = 0;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v17 + 24) )
      {
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v8 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v8, v4, v8);
        v17 = *(_QWORD *)v8;
      }
      if ( !*(_BYTE *)(v17 + 25) )
      {
        v18 = *(_QWORD *)(v17 + 16);
        if ( *(_BYTE *)(v18 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) == 1 )
          {
            *(_BYTE *)(v18 + 24) = 1;
            *(_BYTE *)(v17 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
              a1,
              v17);
            v17 = *(_QWORD *)v8;
          }
          *(_BYTE *)(v17 + 24) = *(_BYTE *)(v8 + 24);
          *(_BYTE *)(v8 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v8, v4, v8);
          break;
        }
        goto LABEL_53;
      }
    }
    v6 = v16;
    v8 = *(_QWORD *)(v8 + 8);
  }
  *(_BYTE *)(v6 + 24) = 1;
LABEL_59:
  v19 = a1[1];
  if ( v19 )
    a1[1] = (__int64 *)((char *)v19 - 1);
  return v5;
}
