/*
 * XREFs of ?ViewChangedTabGroup@CDesktopPositioner@@UEAAJPEAUIApplicationView@@AEBU_GUID@@W4VIEW_CHANGED_TAB_GROUP_FLAGS@@@Z @ 0x18045E000
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18004E01C (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A1998 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802C380C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_pol.c)
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x18045AFD4 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 */

__int64 __fastcall CDesktopPositioner::ViewChangedTabGroup(__int64 a1, struct IApplicationView *a2, __int64 a3, int a4)
{
  CDesktopPositioner *v6; // r12
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  int v8; // r14d
  struct IViewGroup *v9; // rbx
  int v10; // eax
  int v11; // eax
  __int64 *v12; // rbx
  int updated; // ebx
  __int64 v14; // rdx
  int v16; // eax
  struct IViewGroup *v17; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v18; // [rsp+38h] [rbp-28h] BYREF
  int v19; // [rsp+40h] [rbp-20h]
  __int128 v20; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v19 = a4;
  *(_QWORD *)&v20 = a3;
  v6 = (CDesktopPositioner *)(a1 - 128);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 56) & -(__int64)(a1 != 128));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v9 = **(struct IViewGroup ***)(a1 + 208);
  v17 = v9;
  while ( v9 != *(struct IViewGroup **)(a1 + 208) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)v9 + 6) + 64LL))(
           *((_QWORD *)v9 + 6),
           a2) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)v9 + 6) + 32LL))(
              *((_QWORD *)v9 + 6),
              a2,
              1LL);
      if ( v10 >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 6) + 72LL))(*((_QWORD *)v9 + 6)) )
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 200) + 32LL))(
                  *(_QWORD *)(a1 + 200),
                  *((_QWORD *)v9 + 6));
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1C9,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v11);
          v12 = std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Extract(
                  (_QWORD *)(a1 + 208),
                  (__int64)v9);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12 + 6);
          std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)0x38);
          break;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1C7,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v10);
      }
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++((__int64 *)&v17);
    v9 = v17;
  }
  v18 = 0LL;
  v17 = 0LL;
  v20 = *(_OWORD *)v20;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  updated = CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup(
              v6,
              a2,
              (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)&v20,
              &v17,
              (struct IApplicationView **)&v18);
  if ( updated < 0 )
  {
    v14 = 467LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)updated);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    if ( v8 >= 0 )
      LeaveCriticalSection(v7);
    return (unsigned int)updated;
  }
  if ( (v19 & 1) == 0 )
  {
    if ( (unsigned int)SHIsSameObject((struct IUnknown *)a2, v18) )
    {
      v16 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D8,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v16);
    }
  }
  updated = CDesktopPositioner::_UpdateViewTabState(v6, a2);
  if ( updated < 0 )
  {
    v14 = 476LL;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return 0LL;
}
