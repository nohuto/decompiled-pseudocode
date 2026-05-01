/*
 * XREFs of ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18020DC58
 * Callers:
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18020FE24 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x18025BA90 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804D6D18 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1804D7404 (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1801B1038 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

char wil::details::in1diag3::Log_HrIfMsg(
        wil::details::in1diag3 *this,
        __int64 a2,
        unsigned int a3,
        const char *a4,
        char a5,
        bool a6,
        const char *a7,
        ...)
{
  if ( a5 )
    wil::details::ReportFailure_HrMsg((__int64)this, a2);
  return a5;
}
