/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUHWND__@@UExeData@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x1804CB184
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHWND__@@UExeData@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x1804CAC6C (--$_Insert_hint@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UExe.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@AEAU?$pair@QEAUHWND__@@UExeData@@@1@1@Z @ 0x1804CAAF8 (--$_Insert_at@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UExeDa.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_nohint<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v8; // rsi
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
    if ( *a4 >= *(_QWORD *)(v10 + 32) )
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
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
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
    if ( *(_QWORD *)(v12 + 32) >= *a4 )
    {
      std::wstring::_Tidy_deallocate(a5 + 10);
      std::wstring::_Tidy_deallocate(v8 + 6);
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x70);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
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
    std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Destroy_if_node(
      v13,
      a5);
    throw;
  }
  return result;
}
