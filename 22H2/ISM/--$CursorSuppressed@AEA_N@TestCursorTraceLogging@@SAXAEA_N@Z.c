/*
 * XREFs of ??$CursorSuppressed@AEA_N@TestCursorTraceLogging@@SAXAEA_N@Z @ 0x18013DB7C
 * Callers:
 *     ?SetSuppressionState@SystemCursor@@QEAAJ_N@Z @ 0x180140864 (-SetSuppressionState@SystemCursor@@QEAAJ_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTestCursorTraceLogging@@@details@wil@@QEAAPEAVTestCursorTraceLogging@@P6AXXZ@Z @ 0x180140E88 (-get@-$static_lazy@VTestCursorTraceLogging@@@details@wil@@QEAAPEAVTestCursorTraceLogging@@P6AXXZ.c)
 */

int __fastcall TestCursorTraceLogging::CursorSuppressed<bool &>(char *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rcx
  char v4; // al
  char v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  char *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<TestCursorTraceLogging>::get(
         a1,
         _lambda_f8a530405e8d431733881e929c3e0226_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(v2 + 8);
  if ( *v3 > 4u )
  {
    v4 = *a1;
    v10 = 0;
    v6 = v4;
    v9 = 1;
    v8 = &v6;
    LODWORD(v2) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v3,
                    (unsigned __int8 *)dword_1801CF52D,
                    0LL,
                    0LL,
                    3u,
                    &v7);
  }
  return v2;
}
