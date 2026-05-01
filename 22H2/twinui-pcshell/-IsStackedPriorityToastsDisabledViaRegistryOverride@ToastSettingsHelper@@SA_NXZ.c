/*
 * XREFs of ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x18009AEC8
 * Callers:
 *     ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x18009AFCC (-IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E864 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020684 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$ReadData@K$0BI@@RegistryDataHelper@@AEBAJPEBGKPEAK@Z @ 0x18009A8BC (--$ReadData@K$0BI@@RegistryDataHelper@@AEBAJPEBGKPEAK@Z.c)
 *     ??0RegistryDataHelper@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x18009AA78 (--0RegistryDataHelper@@QEAA@PEAUHKEY__@@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

// Hidden C++ exception states: #wind=1
bool ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride(void)
{
  _QWORD *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ebx
  char v5; // al
  bool v6; // bl
  int v8; // [rsp+20h] [rbp-78h] BYREF
  RTL_SRWLOCK *v9; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v10[32]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v12[5]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  wil::srwlock::lock_exclusive(&ToastSettingsHelper::m_regCheckLock, &v9);
  if ( !ToastSettingsHelper::m_regCached )
  {
    v0 = (_QWORD *)std::wstring::wstring((__int64)v10, L"Software\\Microsoft\\Windows\\CurrentVersion\\Notifications");
    RegistryDataHelper::RegistryDataHelper(&v11, v1, v0);
    v8 = 0;
    v3 = RegistryDataHelper::ReadData<unsigned long,24>((__int64)&v11, v2, 0, &v8);
    v4 = v3;
    if ( v3 >= 0 )
      v4 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"internal\\shellcommonshell\\inc\\RegistryDataHelper.h",
        (const char *)(unsigned int)v3);
    if ( v4 >= 0 )
    {
      v5 = ToastSettingsHelper::m_disabledViaRegistry;
      if ( v8 )
        v5 = 1;
      ToastSettingsHelper::m_disabledViaRegistry = v5;
    }
    ToastSettingsHelper::m_regCached = 1;
    std::wstring::_Tidy_deallocate(v12);
  }
  v6 = ToastSettingsHelper::m_disabledViaRegistry;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  return v6;
}
