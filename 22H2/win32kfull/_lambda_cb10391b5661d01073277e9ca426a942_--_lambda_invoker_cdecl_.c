/*
 * XREFs of _lambda_cb10391b5661d01073277e9ca426a942_::_lambda_invoker_cdecl_ @ 0x1C00DA7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0035260 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0066A2C (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetTopLevelWindow @ 0x1C006FC20 (_GetTopLevelWindow.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C00DA840 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ?GetGroupActiveWindow@CWindowGroupManager@@QEAAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@WindowGroupingWindowManagement@@@Z @ 0x1C023FF50 (-GetGroupActiveWindow@CWindowGroupManager@@QEAAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@.c)
 */

bool __fastcall lambda_cb10391b5661d01073277e9ca426a942_::_lambda_invoker_cdecl_(__int64 a1, _OWORD *a2)
{
  __int64 GroupActiveWindow; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  struct tagWND *RootOwner; // rax
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-18h]
  char v13; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  GroupActiveWindow = 0LL;
  v5 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v5 )
    v6 = ***(_QWORD ***)(v5 + 8);
  else
    v6 = -1LL;
  if ( (unsigned __int8)anonymous_namespace_::GroupManagementEnabledForDesktop(v6) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
    if ( TopLevelWindow )
    {
      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow);
      RootOwner = GetRootOwner(CompositeAppFrameWindowOrSelf);
      if ( *((_DWORD *)RootOwner + 77) )
        GroupActiveWindow = CWindowGroupManager::GetGroupActiveWindow(v11, RootOwner);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
    if ( GroupActiveWindow )
    {
      *(_QWORD *)&v12 = GroupActiveWindow;
      DWORD2(v12) = 6;
      *a2 = v12;
    }
  }
  return *(_QWORD *)a2 != 0LL;
}
