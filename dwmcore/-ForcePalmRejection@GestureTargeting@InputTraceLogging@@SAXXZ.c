/*
 * XREFs of ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x1801ADEA8
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B524 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::ForcePalmRejection(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 4u )
  {
    if ( tlgKeywordOn((__int64)v1, 2048LL) )
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18037BA6B, 0LL, 0LL, 2u, &v3);
  }
}
