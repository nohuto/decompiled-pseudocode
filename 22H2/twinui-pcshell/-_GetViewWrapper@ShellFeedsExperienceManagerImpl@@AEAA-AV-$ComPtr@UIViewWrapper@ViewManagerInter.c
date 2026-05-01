/*
 * XREFs of ?_GetViewWrapper@ShellFeedsExperienceManagerImpl@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800B85E4
 * Callers:
 *     ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B67A0 (-Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?_ApplyPriorityBoostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B7FB0 (-_ApplyPriorityBoostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B80DC (-_ApplyPriorityUnboostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ShellFeedsExperienceManagerImpl::_GetViewWrapper(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 104);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a2);
  v5 = v4(v3, a2);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x382,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  return a2;
}
