/*
 * XREFs of ??$_Insert_nohint@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x18009DE84
 * Callers:
 *     ?PopulateAllRegistryExtension@@YAXPEAUHKEY__@@AEAV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800A8274 (-PopulateAllRegistryExtension@@YAXPEAUHKEY__@@AEAV-$set@V-$basic_string@GU-$char_traits@G@std@@V.c)
 * Callees:
 *     ??$_Insert_at@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x18009DCEC (--$_Insert_at@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag@.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180267514 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_nohint<std::wstring const &,std::_Not_a_node_tag>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r11
  unsigned int v11; // r14d
  int v12; // eax
  __int64 *v13; // r11
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r11
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v8 = (_QWORD *)*a1;
  v9 = *a1;
  v10 = *(_QWORD *)(*a1 + 8);
  LOBYTE(v11) = 1;
  while ( !*(_BYTE *)(v10 + 25) )
  {
    v9 = v10;
    v12 = std::wstring::compare(a4, v10 + 32);
    v11 = (unsigned int)v12 >> 31;
    if ( v12 >= 0 )
      v10 = v13[2];
    else
      v10 = *v13;
  }
  try
  {
    v14 = v9;
    v15 = v9;
    if ( (_BYTE)v11 )
    {
      if ( v9 == *v8 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_at<std::wstring const &,std::_Not_a_node_tag>(
                           a1,
                           &v22,
                           1,
                           (_QWORD *)v9);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v9 + 25) )
      {
        v17 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v18 = *(_QWORD *)v9;
        if ( *(_BYTE *)(*(_QWORD *)v9 + 25LL) )
        {
          v19 = *(_QWORD *)(v9 + 8);
          if ( !*(_BYTE *)(v19 + 25) )
          {
            v20 = v9;
            do
            {
              v15 = v20;
              if ( v20 != *(_QWORD *)v19 )
                break;
              v14 = v19;
              v19 = *(_QWORD *)(v19 + 8);
              v20 = v14;
              v15 = v14;
            }
            while ( !*(_BYTE *)(v19 + 25) );
          }
          if ( !*(_BYTE *)(v14 + 25) )
            v15 = v19;
          goto LABEL_21;
        }
        do
        {
          v17 = v18;
          v18 = *(_QWORD *)(v18 + 16);
        }
        while ( !*(_BYTE *)(v18 + 25) );
      }
      v15 = v17;
    }
LABEL_21:
    if ( (int)std::wstring::compare(v15 + 32, a4) >= 0 )
    {
      *(_QWORD *)a2 = v21;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_at<std::wstring const &,std::_Not_a_node_tag>(
                         a1,
                         &v22,
                         v11,
                         (_QWORD *)v9);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    throw;
  }
  return result;
}
