/*
 * XREFs of ?SendConsolidated@CTaskWindow@@UEAAXW4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x1801F6020
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1801CA020 (WPP_SF_qd.c)
 */

void __fastcall CTaskWindow::SendConsolidated(__int64 a1, int a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 120) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_57aa434970eb334441637f8eaa75da73_Traceguids, v6, a2);
    }
    *(_BYTE *)(a1 + 92) = 1;
    *(_DWORD *)(a1 + 96) = a2;
  }
  else
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_57aa434970eb334441637f8eaa75da73_Traceguids, v4, a2);
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 520LL))(
           *(_QWORD *)(a1 + 48),
           (a2 & 1u) + 1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2FB,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
        (const char *)(unsigned int)v5);
  }
}
