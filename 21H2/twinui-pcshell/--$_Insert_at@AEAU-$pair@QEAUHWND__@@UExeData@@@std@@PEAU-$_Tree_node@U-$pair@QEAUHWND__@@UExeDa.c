/*
 * XREFs of ??$_Insert_at@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@AEAU?$pair@QEAUHWND__@@UExeData@@@1@1@Z @ 0x1804CAAF8
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHWND__@@UExeData@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x1804CAC6C (--$_Insert_hint@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UExe.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUHWND__@@UExeData@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x1804CB184 (--$_Insert_nohint@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UE.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@2@@Z @ 0x1800AB30C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@I.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1800AB3E8 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@Z @ 0x1804CDDD0 (-_Destroy_if_node@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND__@@@std@@V-$all.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        char a3,
        _QWORD *a4,
        int a5,
        __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 *v7; // r11
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *result; // rax

  v6 = a1[1];
  v7 = a1;
  if ( v6 >= 0x249249249249248LL )
  {
    std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Destroy_if_node(
      0x249249249249248LL,
      a6);
    std::_Xlength_error("map/set<T> too long");
  }
  v9 = a6;
  a1[1] = v6 + 1;
  *(_QWORD *)(a6 + 8) = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8) = a6;
    *(_QWORD *)*a1 = a6;
    v10 = *a1;
LABEL_9:
    *(_QWORD *)(v10 + 16) = a6;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = a6;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = a6;
    goto LABEL_10;
  }
  a4[2] = a6;
  v10 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16) )
    goto LABEL_9;
LABEL_10:
  v11 = *(_QWORD *)(a6 + 8);
  v12 = a6;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v13 = *(_QWORD *)(v12 + 8);
    v14 = *(__int64 **)(v13 + 8);
    v15 = *v14;
    if ( v13 == *v14 )
    {
      v15 = v14[2];
      if ( !*(_BYTE *)(v15 + 24) )
        goto LABEL_17;
      if ( v12 == *(_QWORD *)(v13 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
          (__int64)v7,
          *(_QWORD *)(v12 + 8));
      *(_BYTE *)(*(_QWORD *)(v12 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
        (__int64)v7,
        *(_QWORD **)(*(_QWORD *)(v12 + 8) + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v15 + 24) )
      {
LABEL_17:
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
        v12 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
        goto LABEL_21;
      }
      if ( v12 == *(_QWORD *)v13 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          (__int64)v7,
          *(_QWORD **)(v12 + 8));
      *(_BYTE *)(*(_QWORD *)(v12 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
        (__int64)v7,
        *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL));
    }
LABEL_21:
    v11 = *(_QWORD *)(v12 + 8);
  }
  v16 = *v7;
  *a2 = v9;
  v17 = *(_QWORD *)(v16 + 8);
  result = a2;
  *(_BYTE *)(v17 + 24) = 1;
  return result;
}
