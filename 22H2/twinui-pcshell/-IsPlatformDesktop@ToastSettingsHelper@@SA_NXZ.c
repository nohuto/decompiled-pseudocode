/*
 * XREFs of ?IsPlatformDesktop@ToastSettingsHelper@@SA_NXZ @ 0x18009AE4C
 * Callers:
 *     ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x18009AFCC (-IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E864 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020684 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?IsWindowsLite@ToastSettingsHelper@@CA_NXZ @ 0x18009B008 (-IsWindowsLite@ToastSettingsHelper@@CA_NXZ.c)
 */

bool ToastSettingsHelper::IsPlatformDesktop(void)
{
  bool v0; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v3; // [rsp+38h] [rbp+10h] BYREF

  wil::srwlock::lock_exclusive(&ToastSettingsHelper::m_platformCheckLock, &v3);
  if ( !ToastSettingsHelper::m_platformCached )
  {
    if ( IsPPIEdition() || ToastSettingsHelper::IsWindowsLite() || (RtlGetDeviceFamilyInfoEnum(0LL, &v2, 0LL), v2 == 10) )
      ToastSettingsHelper::m_isDesktopPlatform = 0;
    ToastSettingsHelper::m_platformCached = 1;
  }
  v0 = ToastSettingsHelper::m_isDesktopPlatform;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v3);
  return v0;
}
