/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@1@@Z @ 0x1803D6794
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@1@@Z @ 0x1803D6404 (--$_Insert_hint@AEAU-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@s.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x1803D605C (--$_Insert_at@AEAU-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::wstring> &,std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  void *v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rax
  char v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v8 = a5;
  v9 = *a1;
  v10 = *(_QWORD *)(*a1 + 8);
  v11 = 1;
  while ( !*(_BYTE *)(v10 + 25) )
  {
    v9 = v10;
    if ( *a4 >= *(_DWORD *)(v10 + 32) )
    {
      v11 = 0;
      v10 = *(_QWORD *)(v10 + 16);
    }
    else
    {
      v11 = 1;
      v10 = *(_QWORD *)v10;
    }
  }
  try
  {
    v12 = v9;
    if ( v11 )
    {
      if ( v9 == *(_QWORD *)*a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::_Insert_at<std::pair<unsigned int const,std::wstring> &,std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *> *>(
                           a1,
                           &v19,
                           1,
                           (_QWORD *)v9,
                           v18,
                           (__int64)a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v9 + 25) )
      {
        v12 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v15 = *(_QWORD *)v9;
        if ( *(_BYTE *)(*(_QWORD *)v9 + 25LL) )
        {
          v16 = *(_QWORD *)(v9 + 8);
          if ( !*(_BYTE *)(v16 + 25) )
          {
            v17 = v9;
            do
            {
              if ( v17 != *(_QWORD *)v16 )
                break;
              v12 = v16;
              v16 = *(_QWORD *)(v16 + 8);
              v17 = v12;
            }
            while ( !*(_BYTE *)(v16 + 25) );
          }
          if ( !*(_BYTE *)(v12 + 25) )
            v12 = v16;
        }
        else
        {
          do
          {
            v12 = v15;
            v15 = *(_QWORD *)(v15 + 16);
          }
          while ( !*(_BYTE *)(v15 + 25) );
        }
      }
    }
    if ( *(_DWORD *)(v12 + 32) >= *a4 )
    {
      std::wstring::_Tidy_deallocate(a5 + 5);
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x48);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::_Insert_at<std::pair<unsigned int const,std::wstring> &,std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *> *>(
                         a1,
                         &v19,
                         v11,
                         (_QWORD *)v9,
                         v18,
                         (__int64)a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::_Destroy_if_node(
      v13,
      a5);
    throw;
  }
  return result;
}
