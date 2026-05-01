/*
 * XREFs of ?_GetViewWrapper@SearchAppExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18007E02C
 * Callers:
 *     ?_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x18007DC84 (-_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x18007DDD8 (-_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x18007DF20 (-_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_GetHwnd@SearchAppExperienceManager@@AEAAPEAUHWND__@@XZ @ 0x18007DFEC (-_GetHwnd@SearchAppExperienceManager@@AEAAPEAUHWND__@@XZ.c)
 *     ?CompleteFullActivationTest@SearchAppExperienceManager@@AEAAX_NV?$optional@W4FullActivationTestSource@@@std@@@Z @ 0x1800A28B8 (-CompleteFullActivationTest@SearchAppExperienceManager@@AEAAX_NV-$optional@W4FullActivationTestS.c)
 *     ?StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A9D38 (-StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall SearchAppExperienceManager::_GetViewWrapper(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 512);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a2);
  v5 = v4(v3, a2);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x612,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  return a2;
}
