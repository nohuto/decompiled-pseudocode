/*
 * XREFs of ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800D9720
 * Callers:
 *     ?ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION_TYPE@@PEAH@Z @ 0x1800D8840 (-ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION.c)
 *     std::_Func_impl_no_alloc__lambda_99a211cd72333f59c49615b9c7b5d521__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x1800D8F20 (std--_Func_impl_no_alloc__lambda_99a211cd72333f59c49615b9c7b5d521__bool_APP_LAYOUT__ea_1800D8F20.c)
 *     ?_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800D9A74 (-_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800D9BEC (-_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INS.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z @ 0x1800D95A4 (-_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18040BA58 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

bool __fastcall PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(
        PPIWin32VtcLayoutOperation *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rax
  HWND v5; // r14
  bool v6; // bl
  DWORD WindowThreadProcessId; // esi
  PPIWin32VtcLayoutOperation *v9; // rcx
  int ViewThreadId; // eax
  struct IApplicationView *v11; // rdx
  const char *v12; // r9
  bool result; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *))(*(_QWORD *)this + 216LL))(this);
  v5 = (HWND)v4;
  v6 = 0;
  if ( !a2 )
    return 0;
  if ( !v4 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *))(*(_QWORD *)this
                                                                                                  + 168LL))(
         this,
         a2) )
  {
    return 0;
  }
  try
  {
    WindowThreadProcessId = GetWindowThreadProcessId(v5, 0LL);
    ViewThreadId = PPIWin32VtcLayoutOperation::_GetViewThreadId(v9, a2, &v15);
    if ( ViewThreadId < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        845LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)ViewThreadId);
      JUMPOUT(0x1800D97E2LL);
    }
    if ( TabletModePositionerHelpers::IsOperableView(a2, v11) )
      v6 = WindowThreadProcessId == v15;
    result = v6;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x351,
      (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      v12);
    return 0;
  }
  return result;
}
