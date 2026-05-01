/*
 * XREFs of ?DismissAllLightDismiss@TabletModeViewManager@@AEAAJXZ @ 0x1804717C8
 * Callers:
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x180472A9C (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeViewManager::DismissAllLightDismiss(IUnknown **this)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  void *v4; // rcx
  void *ppvOut; // [rsp+20h] [rbp-78h] BYREF
  struct tagGUITHREADINFO pgui; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  ppvOut = 0LL;
  v1 = IUnknown_QueryService(
         this[2],
         &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
         &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
         &ppvOut);
  v2 = v1;
  if ( v1 < 0 )
  {
    v3 = 622LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v1);
    goto LABEL_10;
  }
  v1 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
  v2 = v1;
  if ( v1 < 0 )
  {
    v3 = 623LL;
    goto LABEL_5;
  }
  pgui.cbSize = 72;
  memset_0(&pgui.flags, 0, 0x44uLL);
  if ( GetGUIThreadInfo(0, &pgui) && (pgui.flags & 4) != 0 )
    SendNotifyMessageW(pgui.hwndMenuOwner, 0x1Fu, 0LL, 0LL);
  v2 = 0;
LABEL_10:
  v4 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v2;
}
