/*
 * XREFs of ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x1804CCDF8
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1804CC0A0 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180087854 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A1998 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ??0ExeData@@QEAA@AEBU0@@Z @ 0x1804CB3C0 (--0ExeData@@QEAA@AEBU0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExeDataCache::TryGetWindowFromAppId(PSRWLOCK SRWLock, __int64 a2, __int64 *a3)
{
  __int64 *Ptr; // rbx
  __int64 v7; // rdx
  unsigned __int16 *v8; // r8
  __int64 v9; // rcx
  __int64 v11[2]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v12; // [rsp+30h] [rbp-29h]
  _BYTE v13[8]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp+7h] BYREF

  AcquireSRWLockShared(SRWLock);
  v11[1] = (__int64)SRWLock;
  Ptr = (__int64 *)SRWLock[1].Ptr;
  v7 = *Ptr;
  v11[0] = *Ptr;
  while ( (__int64 *)v7 != Ptr )
  {
    v12 = *(_QWORD *)(v7 + 32);
    ExeData::ExeData((ExeData *)v13, (const struct ExeData *)(v7 + 40));
    v8 = (unsigned __int16 *)v15;
    if ( v15[3] >= 8uLL )
      v8 = (unsigned __int16 *)v15[0];
    v9 = (__int64)a3;
    if ( (unsigned __int64)a3[3] >= 8 )
      v9 = *a3;
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(v9, a3[2], v8, v15[2]) )
    {
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 1;
      std::wstring::_Tidy_deallocate(v15);
      std::wstring::_Tidy_deallocate(v14);
      goto LABEL_11;
    }
    std::wstring::_Tidy_deallocate(v15);
    std::wstring::_Tidy_deallocate(v14);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(v11);
    v7 = v11[0];
  }
  *(_OWORD *)a2 = 0LL;
LABEL_11:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return a2;
}
