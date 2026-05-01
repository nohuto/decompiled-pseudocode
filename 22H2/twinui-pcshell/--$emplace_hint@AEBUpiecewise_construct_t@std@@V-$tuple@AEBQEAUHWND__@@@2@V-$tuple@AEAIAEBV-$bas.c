/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@2@V?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@Z @ 0x1804CB278
 * Callers:
 *     ?SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x1804CCA38 (-SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHWND__@@UExeData@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x1804CA8DC (--$_Insert_hint@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UExe.c)
 *     ??0ExeData@@QEAA@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1804CB41C (--0ExeData@@QEAA@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<HWND__ * const &>,std::tuple<unsigned int &,std::wstring const &,std::wstring const &>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        _QWORD **a5,
        __int64 *a6)
{
  __int64 v9; // rbp
  __int64 v10; // r9
  __int64 v11; // r8
  unsigned int *v12; // r10
  _QWORD *v14; // [rsp+38h] [rbp-20h]

  v9 = *a1;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x70uLL);
  v10 = *a6;
  v11 = a6[1];
  v12 = (unsigned int *)a6[2];
  v14[4] = **a5;
  ExeData::ExeData(v14 + 5, *v12, v11, v10);
  *v14 = v9;
  v14[1] = v9;
  v14[2] = v9;
  *((_WORD *)v14 + 12) = 0;
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_hint<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
    a1,
    a2,
    a3,
    v14 + 4,
    (__int64)v14);
  return a2;
}
