/*
 * XREFs of ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800D6560
 * Callers:
 *     ??$_Emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800D648C (--$_Emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tset_trai.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Find_lower_bound<std::wstring>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 *v5; // rcx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  char *v8; // rax
  char *v9; // r8
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r11
  unsigned __int16 v12; // r9
  signed __int64 v13; // rax
  bool v14; // cc
  unsigned __int16 v15; // r9
  int v16; // eax
  int v17; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v5 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v6 = *(_QWORD *)(a3 + 24);
    v7 = *(_QWORD *)(a3 + 16);
    do
    {
      *(_QWORD *)a2 = v5;
      v8 = (char *)(v5 + 4);
      v9 = (char *)a3;
      if ( v6 >= 8 )
        v9 = *(char **)a3;
      v10 = v5[6];
      if ( (unsigned __int64)v5[7] >= 8 )
        v8 = *(char **)v8;
      v11 = v5[6];
      if ( v7 < v10 )
        v11 = v7;
      if ( v11 )
      {
        v12 = *(_WORD *)v8;
        if ( *(_WORD *)v8 >= *(_WORD *)v9 )
        {
          v13 = v8 - v9;
          v14 = v12 <= *(_WORD *)v9;
          while ( v14 )
          {
            if ( v11 == 1 )
              goto LABEL_22;
            v9 += 2;
            --v11;
            v15 = *(_WORD *)&v9[v13];
            v14 = v15 <= *(_WORD *)v9;
            if ( v15 < *(_WORD *)v9 )
              goto LABEL_15;
          }
          v16 = 1;
          goto LABEL_16;
        }
      }
      else
      {
LABEL_22:
        if ( v10 >= v7 )
        {
          v16 = v10 > v7;
          goto LABEL_16;
        }
      }
LABEL_15:
      v16 = -1;
LABEL_16:
      if ( v16 < 0 )
      {
        v5 = (__int64 *)v5[2];
        v17 = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 16) = v5;
        v17 = 1;
        v5 = (__int64 *)*v5;
      }
      *(_DWORD *)(a2 + 8) = v17;
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  return a2;
}
