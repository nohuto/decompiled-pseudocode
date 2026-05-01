/*
 * XREFs of std::_Func_impl_no_alloc__lambda_99a211cd72333f59c49615b9c7b5d521__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x1800D9090
 * Callers:
 *     <none>
 * Callees:
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800D9890 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_99a211cd72333f59c49615b9c7b5d521__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call(
        __int64 a1,
        __int64 a2)
{
  struct IApplicationView *v2; // rdx
  bool IsViewMeetingWindow; // al
  char v5; // cl

  v2 = *(struct IApplicationView **)(a2 + 16);
  if ( *(struct IApplicationView **)(a1 + 16) == v2 )
    return 1;
  IsViewMeetingWindow = PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(*(PPIWin32VtcLayoutOperation **)(a1 + 8), v2);
  v5 = 0;
  if ( !IsViewMeetingWindow )
    return 1;
  **(_DWORD **)(a1 + 24) = 1;
  return v5;
}
