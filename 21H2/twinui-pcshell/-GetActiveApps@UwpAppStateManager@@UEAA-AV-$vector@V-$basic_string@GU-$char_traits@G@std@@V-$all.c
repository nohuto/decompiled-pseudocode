/*
 * XREFs of ?GetActiveApps@UwpAppStateManager@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x1804C8F10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x18008F4AC (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A19B8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x1804C8030 (--$_Emplace_reallocate@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vecto.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall UwpAppStateManager::GetActiveApps(RTL_SRWLOCK *a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // r15
  RTL_SRWLOCK *v6; // r14
  __int64 *Ptr; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-18h]
  _QWORD *v12; // [rsp+30h] [rbp-10h]
  _QWORD *v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = a2;
  v10 = 0LL;
  v4 = 0LL;
  v11 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v6 = a1 + 6;
  AcquireSRWLockShared(a1 + 6);
  Ptr = (__int64 *)a1[7].Ptr;
  v8 = *Ptr;
  v13 = (_QWORD *)*Ptr;
  while ( (__int64 *)v8 != Ptr )
  {
    if ( v5 == v4 )
    {
      std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(&v10, v4);
      v5 = v12;
      v4 = v11;
    }
    else
    {
      std::wstring::wstring((__int64)v4);
      v4 += 4;
      v11 = v4;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++((__int64 *)&v13);
    v8 = (__int64)v13;
  }
  *a2 = v10;
  a2[1] = v4;
  a2[2] = v5;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  std::vector<std::wstring>::_Tidy(&v10);
  return a2;
}
