/*
 * XREFs of ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x18028B410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x1801B4F2C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-.c)
 *     ??$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVObjectArray@Discover@PenWorkspace@@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180289730 (--$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV-$vector@V-$ComPtr@UIDiscoverR.c)
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18028F82C (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1804DA07C (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenWorkspaceDiscoverBroker::GetRecentItems(
        PenWorkspace::Discover::RecentAppsCache **this,
        __int64 a2,
        struct IObjectArray **a3)
{
  int IsShellExperience; // eax
  unsigned int v6; // ebx
  int MRUApps; // eax
  int v8; // eax
  PenWorkspace::Discover::ObjectArray *v9; // rax
  void *v10; // rdi
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  PenWorkspace::Discover::ObjectArray *v15; // [rsp+70h] [rbp+30h] BYREF

  *a3 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience((CallerIdentity *)this);
  v6 = IsShellExperience;
  if ( IsShellExperience >= 0 )
  {
    v12 = 0LL;
    v13 = 0LL;
    MRUApps = PenWorkspace::Discover::RecentAppsCache::GetMRUApps(this[5]);
    v6 = MRUApps;
    if ( MRUApps >= 0 )
    {
      v15 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      v8 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::ObjectArray,PenWorkspace::Discover::ObjectArray,std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>> &>(
             &v15,
             (struct IUnknown ***)&v12);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v9 = v15;
        v15 = 0LL;
        *a3 = (struct IObjectArray *)(((unsigned __int64)v9 + 32) & -(__int64)(v9 != 0LL));
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x26,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
          (const char *)(unsigned int)v8);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)MRUApps);
    }
    v10 = (void *)v12;
    if ( (_QWORD)v12 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
        (__int64 *)v12,
        *((__int64 **)&v12 + 1));
      std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)((v13 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
  }
  return v6;
}
