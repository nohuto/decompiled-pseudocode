/*
 * XREFs of ?IsAppActive@Win32AppStateManager@@UEAA_NPEBG@Z @ 0x1804CC360
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1804CDAB0 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$s.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Win32AppStateManager::IsAppActive(RTL_SRWLOCK *this, unsigned __int16 *a2)
{
  RTL_SRWLOCK *v4; // rsi
  bool v5; // bl
  RTL_SRWLOCK *v7; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-30h] BYREF

  v4 = this + 7;
  AcquireSRWLockShared(this + 7);
  v7 = v4;
  std::wstring::wstring((__int64)v8, a2);
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::find(
    &this[8],
    &v7,
    v8);
  std::wstring::_Tidy_deallocate(v8);
  v5 = v7 != this[8].Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v5;
}
