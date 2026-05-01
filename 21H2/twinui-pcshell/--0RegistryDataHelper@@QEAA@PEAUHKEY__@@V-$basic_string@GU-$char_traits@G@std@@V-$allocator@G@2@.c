/*
 * XREFs of ??0RegistryDataHelper@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x18009AA98
 * Callers:
 *     ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x18009AEE8 (-IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall RegistryDataHelper::RegistryDataHelper(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  *a1 = -2147483646LL;
  std::wstring::wstring((__int64)(a1 + 1));
  a1[5] = 0LL;
  std::wstring::_Tidy_deallocate(a3);
  return a1;
}
