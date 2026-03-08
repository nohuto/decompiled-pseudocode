/*
 * XREFs of ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18021203C
 * Callers:
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x180211EE8 (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180210F30 (--$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

void __noreturn wil::details::in1diag3::FailFast_UnexpectedMsg(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const char *a5,
        ...)
{
  int v5; // [rsp+20h] [rbp-38h]
  int v6; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  wil::details::ReportFailure_HrMsg<3>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6, (__int64)a4, (char *)&a5);
}
