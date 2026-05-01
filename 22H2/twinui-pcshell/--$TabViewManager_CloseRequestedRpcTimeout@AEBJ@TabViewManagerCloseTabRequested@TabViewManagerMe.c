/*
 * XREFs of ??$TabViewManager_CloseRequestedRpcTimeout@AEBJ@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXAEBJ@Z @ 0x1802D4FB8
 * Callers:
 *     _lambda_4b23a44972d25bfc52aa58256fd4c9b9_::operator() @ 0x1802DA520 (_lambda_4b23a44972d25bfc52aa58256fd4c9b9_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

int __fastcall TabViewManagerMeasures::TabViewManagerCloseTabRequested::TabViewManager_CloseRequestedRpcTimeout<long const &>(
        __int64 a1,
        int *a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  int v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-40h] BYREF
  int *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  v4 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         a1,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 3u )
  {
    v6 = *a2;
    v7 = *(_QWORD *)(a1 + 48);
    v13 = 0;
    v9 = v6;
    v11 = &v9;
    v12 = 4;
    LODWORD(v4) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v5,
                    (unsigned __int8 *)dword_180584222,
                    (const GUID *)(v7 + 8),
                    0LL,
                    3u,
                    &v10);
  }
  return (int)v4;
}
