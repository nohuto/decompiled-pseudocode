/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18005CB70
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18003A310 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x180291404 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  unsigned __int64 v3; // r15
  char *v4; // rbx
  __int64 v5; // r11
  char *v8; // r10
  unsigned __int64 v9; // rax
  __int64 i; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbp
  __int64 v15; // rdx
  _QWORD *v16; // rsi
  __int64 v17; // r14
  _QWORD *j; // rcx
  _QWORD *v19; // rax
  char *v20; // rdx
  char *v21; // r8
  unsigned __int64 v22; // rdi
  char *v23; // r10
  __int64 v24; // r9
  signed __int64 v25; // r10
  signed __int64 v26; // rbx
  _QWORD *result; // rax

  v3 = *((_QWORD *)a3 + 3);
  v4 = a3;
  v5 = *((_QWORD *)a3 + 2);
  v8 = a3;
  if ( v3 >= 8 )
    v8 = *(char **)a3;
  v9 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v9 < 2 * v5; i = 0x100000001B3LL * (v11 ^ i) )
    v11 = (unsigned __int8)v8[v9++];
  v12 = a1[3];
  v13 = a1[6];
  v14 = (_QWORD *)a1[1];
  v15 = 2 * (i & v13);
  v16 = *(_QWORD **)(v12 + 8 * v15);
  v17 = v12 + 8 * v15;
  for ( j = v16; ; j = (_QWORD *)*j )
  {
    v19 = v16 == v14 ? v14 : **(_QWORD ***)(v17 + 8);
    if ( j == v19 )
      break;
    v20 = (char *)(j + 2);
    v21 = v4;
    if ( v3 >= 8 )
      v21 = *(char **)v4;
    v22 = j[5];
    v23 = (char *)(j + 2);
    v24 = j[4];
    if ( v22 >= 8 )
      v23 = *(char **)v20;
    if ( v24 == v5 )
    {
      if ( !v24 )
      {
LABEL_18:
        if ( v22 >= 8 )
          v20 = *(char **)v20;
        if ( v3 >= 8 )
          v4 = *(char **)v4;
        if ( v5 )
        {
          v26 = v4 - v20;
          while ( *(_WORD *)&v20[v26] == *(_WORD *)v20 )
          {
            v20 += 2;
            if ( !--v5 )
              goto LABEL_26;
          }
        }
        else
        {
LABEL_26:
          v14 = j;
        }
        break;
      }
      v25 = v23 - v21;
      while ( *(_WORD *)&v21[v25] == *(_WORD *)v21 )
      {
        v21 += 2;
        if ( !--v24 )
          goto LABEL_18;
      }
    }
  }
  result = a2;
  *a2 = v14;
  return result;
}
