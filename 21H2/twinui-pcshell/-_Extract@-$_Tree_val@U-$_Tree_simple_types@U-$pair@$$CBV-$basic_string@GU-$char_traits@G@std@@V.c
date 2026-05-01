/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@2@@Z @ 0x1800DBF28
 * Callers:
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@std@@X@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@1@V21@@Z @ 0x1800DBABC (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$ch.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@2@@Z @ 0x1800AB30C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@I.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x1800AB35C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1800AB3E8 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 *v5; // r11
  __int64 *i; // rax
  __int64 v7; // r10
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 **v13; // rcx
  char v14; // dl
  bool j; // zf
  __int64 v16; // rdi
  _BYTE *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx

  v2 = a2 + 2;
  v3 = a2[2];
  v5 = a2;
  if ( *(_BYTE *)(v3 + 25) )
  {
    for ( i = (__int64 *)a2[1]; !*((_BYTE *)i + 25) && a2 == (__int64 *)i[2]; i = (__int64 *)i[1] )
      a2 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min((_QWORD *)a2[2]);
  }
  if ( !*(_BYTE *)(*v5 + 25) )
  {
    if ( *(_BYTE *)(v3 + 25) )
    {
      v3 = *v5;
    }
    else
    {
      v3 = i[2];
      if ( i != v5 )
      {
        *(_QWORD *)(*v5 + 8) = i;
        *i = *v5;
        if ( i == (__int64 *)*v2 )
        {
          v7 = (__int64)i;
        }
        else
        {
          v7 = i[1];
          if ( !*(_BYTE *)(v3 + 25) )
            *(_QWORD *)(v3 + 8) = v7;
          *(_QWORD *)v7 = v3;
          i[2] = *v2;
          *(_QWORD *)(*v2 + 8LL) = i;
        }
        if ( *(__int64 **)(*a1 + 8LL) == v5 )
        {
          *(_QWORD *)(*a1 + 8LL) = i;
        }
        else
        {
          v13 = (__int64 **)v5[1];
          if ( *v13 == v5 )
            *v13 = i;
          else
            v13[2] = i;
        }
        v14 = *((_BYTE *)i + 24);
        i[1] = v5[1];
        *((_BYTE *)i + 24) = *((_BYTE *)v5 + 24);
        *((_BYTE *)v5 + 24) = v14;
        goto LABEL_42;
      }
    }
  }
  v7 = v5[1];
  if ( !*(_BYTE *)(v3 + 25) )
    *(_QWORD *)(v3 + 8) = v7;
  if ( *(__int64 **)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = v3;
  }
  else if ( *(__int64 **)v7 == v5 )
  {
    *(_QWORD *)v7 = v3;
  }
  else
  {
    *(_QWORD *)(v7 + 16) = v3;
  }
  v8 = (_QWORD *)*a1;
  v9 = (_QWORD *)*a1;
  if ( *(__int64 **)*a1 == v5 )
  {
    if ( *(_BYTE *)(v3 + 25) )
      v10 = (_QWORD *)v7;
    else
      v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min((_QWORD *)v3);
    *v8 = v10;
    v8 = (_QWORD *)*a1;
    v9 = (_QWORD *)*a1;
  }
  if ( (__int64 *)v9[2] == v5 )
  {
    if ( *(_BYTE *)(v3 + 25) )
    {
      v11 = v7;
    }
    else
    {
      v12 = *(_QWORD *)(v3 + 16);
      v11 = v3;
      if ( !*(_BYTE *)(v12 + 25) )
      {
        do
        {
          v11 = v12;
          v12 = *(_QWORD *)(v12 + 16);
        }
        while ( !*(_BYTE *)(v12 + 25) );
        v9 = v8;
      }
    }
    v9[2] = v11;
  }
LABEL_42:
  if ( *((_BYTE *)v5 + 24) != 1 )
    goto LABEL_66;
  for ( j = v3 == *(_QWORD *)(*a1 + 8LL); !j; j = v16 == *(_QWORD *)(*a1 + 8LL) )
  {
    v16 = v7;
    if ( *(_BYTE *)(v3 + 24) != 1 )
      break;
    v17 = *(_BYTE **)v7;
    if ( v3 == *(_QWORD *)v7 )
    {
      v17 = *(_BYTE **)(v7 + 16);
      if ( !v17[24] )
      {
        v17[24] = 1;
        *(_BYTE *)(v7 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
          (__int64)a1,
          v7);
        v17 = *(_BYTE **)(v7 + 16);
      }
      if ( !v17[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
            v17[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
              (__int64)a1,
              v17);
            v17 = *(_BYTE **)(v7 + 16);
          }
          v17[24] = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
            (__int64)a1,
            v7);
          break;
        }
LABEL_60:
        v17[24] = 0;
      }
    }
    else
    {
      if ( !v17[24] )
      {
        v17[24] = 1;
        *(_BYTE *)(v7 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v7);
        v17 = *(_BYTE **)v7;
      }
      if ( !v17[25] )
      {
        v18 = *((_QWORD *)v17 + 2);
        if ( *(_BYTE *)(v18 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) == 1 )
          {
            *(_BYTE *)(v18 + 24) = 1;
            v17[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
              (__int64)a1,
              (__int64)v17);
            v17 = *(_BYTE **)v7;
          }
          v17[24] = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v7);
          break;
        }
        goto LABEL_60;
      }
    }
    v3 = v16;
    v7 = *(_QWORD *)(v7 + 8);
  }
  *(_BYTE *)(v3 + 24) = 1;
LABEL_66:
  v19 = a1[1];
  if ( v19 )
    a1[1] = v19 - 1;
  return v5;
}
