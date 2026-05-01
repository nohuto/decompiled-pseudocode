/*
 * XREFs of ?OnViewPropertiesChanging@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BD100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ @ 0x1800BD424 (-PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewPropertiesChanging(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 98) = (int)*((float *)a2 + 11);
  *((_DWORD *)this + 99) = (int)*((float *)a2 + 12);
  v4 = CBaseTrayFlyoutExperienceManager::PositionFlyoutCore((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *((_QWORD *)this + 42);
    if ( v7 )
      (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v7 + 16LL))(v7, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x131,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
