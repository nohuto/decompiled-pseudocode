/*
 * XREFs of ??$make_shared@VWin32ProcessInfo@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VWin32ProcessInfo@@@0@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x1804CB340
 * Callers:
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1804CD824 (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Ref_count_obj@VWin32ProcessInfo@@@std@@QEAA@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1804C9E5C (--$-0AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Ref_count_obj@VWin.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Win32ProcessInfo,unsigned int &,std::wstring const &>(_QWORD *a1, int *a2)
{
  __int64 v4; // rax
  void *v6; // [rsp+30h] [rbp+8h]

  v6 = operator new(0x48uLL);
  v4 = std::_Ref_count_obj<Win32ProcessInfo>::_Ref_count_obj<Win32ProcessInfo>((__int64)v6, a2);
  *a1 = v4 + 16;
  a1[1] = v4;
  return a1;
}
