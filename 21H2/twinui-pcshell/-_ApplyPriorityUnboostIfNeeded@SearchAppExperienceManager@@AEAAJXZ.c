/*
 * XREFs of ?_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x18007DDD8
 * Callers:
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18007DB10 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180015CA0 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$OnPriorityUnboostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z @ 0x18007DE7C (--$OnPriorityUnboostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z.c)
 *     ?_GetViewWrapper@SearchAppExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18007E02C (-_GetViewWrapper@SearchAppExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@Sh.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppExperienceManager::_ApplyPriorityUnboostIfNeeded(SearchAppExperienceManager *this)
{
  int v1; // ebx
  char *v2; // rdi
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  int v7; // [rsp+40h] [rbp+20h] BYREF
  __int64 v8; // [rsp+48h] [rbp+28h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64); // [rsp+50h] [rbp+30h] BYREF

  v1 = 0;
  v7 = 0;
  v2 = (char *)this + 540;
  if ( !*((_DWORD *)this + 135) )
  {
    SearchAppExperienceManager::_GetViewWrapper(this, &v9);
    if ( v9 )
    {
      v8 = 0LL;
      v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             &v9,
             (__int64)&v8);
      v1 = v3;
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x822,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
      v7 = v1;
      if ( v1 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
        v1 = v4;
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x825,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
        v7 = v1;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
  }
  CortanaProactiveTelemetry::OnPriorityUnboostProcessed<long &,unsigned int &>(&v7, v2);
  return (unsigned int)v1;
}
