/*
 * XREFs of _lambda_930e6c0bbd7055e995c252388846b508_::operator() @ 0x1800D7D60
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_930e6c0bbd7055e995c252388846b508__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x1800D9050 (std--_Func_impl_no_alloc__lambda_930e6c0bbd7055e995c252388846b508__bool_APP_LAYOUT__ea_1800D9050.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?_GetVtcAppPanelWidth@PPIWin32VtcLayoutOperation@@AEAAHXZ @ 0x1800D97E4 (-_GetVtcAppPanelWidth@PPIWin32VtcLayoutOperation@@AEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

char __fastcall lambda_930e6c0bbd7055e995c252388846b508_::operator()(PPIWin32VtcLayoutOperation **a1, __int64 a2)
{
  char v4; // al
  PPIWin32VtcLayoutOperation *v5; // rcx
  int VtcAppPanelWidth; // r8d
  PPIWin32VtcLayoutOperation *v7; // rcx
  int v8; // eax
  PPIWin32VtcLayoutOperation *v9; // rcx
  int v10; // eax
  char result; // al
  int v12[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD))(*(_QWORD *)*a1 + 168LL))(
         *a1,
         *(_QWORD *)(a2 + 16));
  v5 = *a1;
  if ( v4 )
  {
    VtcAppPanelWidth = PPIWin32VtcLayoutOperation::_GetVtcAppPanelWidth(v5);
    *(_QWORD *)a1[1] = *(_QWORD *)(a2 + 16);
  }
  else
  {
    VtcAppPanelWidth = *((_DWORD *)a1 + 8) - *((_DWORD *)a1 + 9) - PPIWin32VtcLayoutOperation::_GetVtcAppPanelWidth(v5);
  }
  v7 = a1[3];
  v12[1] = *((_DWORD *)v7 + 1);
  v12[3] = *((_DWORD *)v7 + 3);
  v8 = *((_DWORD *)v7 + 2);
  v9 = *a1;
  v12[0] = v8;
  v12[2] = VtcAppPanelWidth + v8;
  v10 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64, int *))(*(_QWORD *)v9 + 184LL))(v9, a2, v12);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v10);
  *(_OWORD *)a1[3] = *(_OWORD *)v12;
  *((_DWORD *)a1[3] + 2) += *((_DWORD *)a1 + 9);
  result = 1;
  ++*(_DWORD *)a1[2];
  return result;
}
