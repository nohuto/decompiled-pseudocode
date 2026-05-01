/*
 * XREFs of ?TryCleanupReplacedView@TabViewManager@@AEAAXPEAUIApplicationView@@@Z @ 0x1802ED774
 * Callers:
 *     ?OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerCancellableEventArgs@3456@@Z @ 0x1802E2870 (-OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 *     ?SelectViewInTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1802E6C10 (-SelectViewInTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802DC3AC (-CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@@Z @ 0x1802F0AD4 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabViewManager::TryCleanupReplacedView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  struct IApplicationView *v4; // rbx
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK *v6; // rcx
  _QWORD *Ptr; // r8
  __int64 *v8; // rax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    v5 = this + 179;
    AcquireSRWLockExclusive(this + 179);
    v6 = this + 168;
    Ptr = this[168].Ptr;
    v8 = (__int64 *)Ptr[1];
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_9;
    do
    {
      if ( v8[4] >= (unsigned __int64)a2 )
      {
        Ptr = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    if ( Ptr == v6->Ptr || (unsigned __int64)a2 < Ptr[4] )
LABEL_9:
      Ptr = v6->Ptr;
    if ( Ptr != v6->Ptr )
    {
      v4 = (struct IApplicationView *)Ptr[5];
      Ptr[5] = 0LL;
      v11 = v4;
      std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::erase(
        v6,
        &v12);
    }
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    if ( v4 )
    {
      v9 = TabViewManager::CloseView((TabViewManager *)this, v4);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3636LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v9);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
}
