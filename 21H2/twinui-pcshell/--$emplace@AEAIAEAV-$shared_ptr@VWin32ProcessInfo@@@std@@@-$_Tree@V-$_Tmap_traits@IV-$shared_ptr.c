/*
 * XREFs of ??$emplace@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@std@@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@1@@Z @ 0x1804CB2E8
 * Callers:
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1804CDBB4 (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@1@@Z @ 0x1804CAE7C (--$_Insert_nohint@AEAU-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAU-$_Tree_node@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::emplace<unsigned int &,std::shared_ptr<Win32ProcessInfo> &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rdi
  _QWORD *v9; // r8
  __int64 v10; // rax
  __int64 v12; // [rsp+60h] [rbp+8h]

  v8 = *a1;
  v12 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *((_DWORD *)v9 + 8) = *a3;
  v9[5] = 0LL;
  v9[6] = 0LL;
  v10 = a4[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v8 = v12;
  }
  v9[5] = *a4;
  v9[6] = a4[1];
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>> &,std::_Tree_node<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>,void *> *>(
    a1,
    a2,
    (__int64)v9,
    (_DWORD *)v9 + 8,
    v9);
  return a2;
}
