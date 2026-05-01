/*
 * XREFs of ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1802EEA20
 * Callers:
 *     ?OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802E20A0 (-OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@.c)
 *     ?OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802E4938 (-OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180022A34 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A19B8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1801B5114 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Ue.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802C10D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVie_ea_1802C10D0.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802C3A7C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_pol.c)
 *     _lambda_7e61992c3925cc81985566f1805ea668_::operator()_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy___ @ 0x1802D2E24 (_lambda_7e61992c3925cc81985566f1805ea668_--operator()_wil--com_ptr_t_Windows--Internal--Composab.c)
 *     ??$InvokeAll@PEAVTabViewManager@@PEAVViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVTabViewManager@@PEAVViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802D3630 (--$InvokeAll@PEAVTabViewManager@@PEAVViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@-$.c)
 *     ??$MakeOrThrow@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIShellTab@2345@@wil@@YA?AV?$ComPtr@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@$$QEAPEAUIApplicationView@@$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802D42F8 (--$MakeOrThrow@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PE.c)
 *     ??$TabViewManager_RemovingViewFromTabGroup@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@I@TabViewManagerTraceLogging@@SAXAEAPEAUIApplicationView@@$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAI@Z @ 0x1802D55C8 (--$TabViewManager_RemovingViewFromTabGroup@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@Comp.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1802D70EC (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??$_Eqrange@PEAUIApplicationView@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@V12@@1@AEBQEAUIApplicationView@@@Z @ 0x1802D7250 (--$_Eqrange@PEAUIApplicationView@@@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x1802D8554 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     ??0TabWrapper@@QEAA@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@W4TabWrapperOptions@@@Z @ 0x1802D9768 (--0TabWrapper@@QEAA@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@W4TabWrapperOptions@@@Z.c)
 *     ?TryGetGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802EE214 (-TryGetGroup@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Wi.c)
 *     ?TryGetLastSelectedTabForView@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802EE2A4 (-TryGetLastSelectedTabForView@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell.c)
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x1802EF618 (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 *     ?UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802EFDE8 (-UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@Co.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802F0694 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1802F0E58 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_polic_ea_1802F0E58.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1802F0FE4 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna_ea_1802F0FE4.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1802F109C (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Window.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall TabViewManager::TryRemoveViewFromTabGroup(TabViewManager *this, struct IApplicationView *a2)
{
  struct IApplicationView *v2; // r12
  __int64 v4; // rcx
  __int64 *v5; // rdi
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v6; // rbx
  __int64 *v7; // rsi
  __int64 *v8; // r8
  __int64 v9; // rcx
  __int64 *v10; // r15
  __int64 *v11; // rbx
  __int64 *v12; // rdi
  __int64 *i; // rdi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 *v17; // rdi
  int v18; // eax
  int v20[2]; // [rsp+20h] [rbp-108h] BYREF
  struct IApplicationView *v21; // [rsp+28h] [rbp-100h] BYREF
  __int64 *v22; // [rsp+30h] [rbp-F8h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v23[2]; // [rsp+38h] [rbp-F0h] BYREF
  __int64 *v24; // [rsp+48h] [rbp-E0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v25; // [rsp+50h] [rbp-D8h] BYREF
  __int64 *v26; // [rsp+58h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+60h] [rbp-C8h] BYREF
  __int64 *v28; // [rsp+70h] [rbp-B8h]
  _BYTE v29[32]; // [rsp+80h] [rbp-A8h] BYREF
  char v30[24]; // [rsp+A0h] [rbp-88h] BYREF
  int v31; // [rsp+B8h] [rbp-70h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v32[3]; // [rsp+D0h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+E8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v2 = a2;
  v21 = a2;
  TabViewManagerTraceLogging::WatchCurrentThread(v29, "TabViewManager_TryRemoveViewFromTabGroup");
  TabViewManager::TryGetLastSelectedTabForView((__int64)this - 136, &v26, (unsigned __int64)v2);
  TabViewManager::TryGetGroup(v4, &v25, v26);
  v27 = 0LL;
  v5 = 0LL;
  v24 = 0LL;
  v28 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)this + 162);
  v22 = (__int64 *)((char *)this + 1296);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,1>>::_Eqrange<IApplicationView *>(
    (__int64 *)this + 143,
    v23,
    (unsigned __int64 *)&v21);
  v6 = v23[0];
  *(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **)v20 = v23[0];
  v7 = (__int64 *)*((_QWORD *)&v27 + 1);
  while ( v6 != v23[1] )
  {
    v8 = (__int64 *)((char *)v6 + 40);
    if ( v5 == v7 )
    {
      std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const &>(
        (__int64 **)&v27,
        v7,
        v8);
      v5 = v28;
      v24 = v28;
      v7 = (__int64 *)*((_QWORD *)&v27 + 1);
    }
    else
    {
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        v7++,
        *v8);
      *((_QWORD *)&v27 + 1) = v7;
    }
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>,0>>::erase(
      (char *)this + 1160,
      (char *)v6 + 40);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++((__int64 *)v20);
    v6 = *(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **)v20;
  }
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    v20,
    (__int64)v2);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,1>>::erase(
    (char *)this + 1144,
    v20);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v20);
  if ( this != (TabViewManager *)-1296LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 162);
  v10 = (__int64 *)v27;
  if ( (__int64)((__int64)v7 - v27) >> 3 )
  {
    v20[0] = (__int64)((__int64)v7 - v27) >> 3;
    v23[0] = v25;
    TabViewManagerTraceLogging::TabViewManager_RemovingViewFromTabGroup<IApplicationView * &,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,unsigned int>(
      &v21,
      v23,
      (unsigned int *)v20);
  }
  v11 = v10;
  v12 = v7;
  while ( v11 != v12 )
  {
    if ( !lambda_7e61992c3925cc81985566f1805ea668_::operator()_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy___(
            v9,
            v11) )
    {
      while ( 1 )
      {
        if ( v11 == --v12 )
          goto LABEL_18;
        if ( lambda_7e61992c3925cc81985566f1805ea668_::operator()_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy___(
               v9,
               v12) )
        {
          v9 = *v11;
          *v11 = *v12;
          *v12 = v9;
          break;
        }
      }
    }
    ++v11;
  }
LABEL_18:
  for ( i = v10; i != v7; ++i )
  {
    TabWrapper::TabWrapper((__int64 **)v32, *i, 5);
    if ( v33 == 1 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 162);
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        v23,
        (__int64)v32[0]);
      std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::erase(
        (char *)this + 1192,
        v23);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v23);
      if ( this != (TabViewManager *)-1296LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 162);
    }
    else if ( v33 > 1 )
    {
      TabViewManager::UpdateFallbackTabForGroup(
        (TabViewManager *)((char *)this - 136),
        v32[0],
        (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)*i);
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 134) + 80LL))(*((_QWORD *)this + 134), *i);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x577,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v14);
    TabViewManager::UpdateViewAnimationStateForTab(
      (TabViewManager *)((char *)this - 136),
      v2,
      (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)*i);
    v22 = (__int64 *)*i;
    wil::MakeOrThrow<Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs,IApplicationView *,Windows::Internal::ComposableShell::Tabs::IShellTab *>(
      v20,
      &v21,
      (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)&v22);
    v15 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<TabViewManager *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>(
            (RTL_SRWLOCK *)this + 20,
            (__int64)this - 136,
            *(__int64 *)v20);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x57D,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v15);
    v16 = *(_QWORD *)v20;
    if ( *(_QWORD *)v20 )
    {
      *(_QWORD *)v20 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(v16);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v32);
    v2 = v21;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 162);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    (__int64 **)this + 147,
    &v22,
    (unsigned __int64 *)&v21);
  if ( v22 != *((__int64 **)this + 147) )
  {
    v17 = std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Extract(
            (_QWORD *)this + 147,
            (__int64)v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v17 + 5);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v17 + 4);
    std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)0x30);
  }
  if ( this != (TabViewManager *)-1296LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 162);
  v18 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)v2 + 464LL))(v2, 8LL);
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x58E,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v18);
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>(
      v10,
      v7);
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)(((char *)v24 - (char *)v10) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
  if ( v31 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v30);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v29);
  return 0LL;
}
