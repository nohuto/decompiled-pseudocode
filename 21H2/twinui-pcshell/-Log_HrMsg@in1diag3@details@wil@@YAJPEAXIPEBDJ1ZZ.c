/*
 * XREFs of ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1801B07DC
 * Callers:
 *     ??$ZeroStateDataIfSizeInconsistent@U_SEB_EVENT_HEADER@@@details@wil@@YAXPEAU_SEB_EVENT_HEADER@@KK@Z @ 0x180096430 (--$ZeroStateDataIfSizeInconsistent@U_SEB_EVENT_HEADER@@@details@wil@@YAXPEAU_SEB_EVENT_HEADER@@K.c)
 *     ??$ZeroStateDataIfSizeInconsistent@K@details@wil@@YAXPEAKKK@Z @ 0x18009A9E0 (--$ZeroStateDataIfSizeInconsistent@K@details@wil@@YAXPEAKKK@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@_N@details@wil@@YAXPEA_NKK@Z @ 0x1800C71F4 (--$ZeroStateDataIfSizeInconsistent@_N@details@wil@@YAXPEA_NKK@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@YAXPEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@KK@Z @ 0x1800C8214 (--$ZeroStateDataIfSizeInconsistent@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@det.c)
 *     ??$ZeroStateDataIfSizeInconsistent@H@details@wil@@YAXPEAHKK@Z @ 0x1800C9B50 (--$ZeroStateDataIfSizeInconsistent@H@details@wil@@YAXPEAHKK@Z.c)
 *     ??$InternalCallback@$$BY0CA@E@?$wnf_subscription_state@$$BY0CA@E@details@wil@@QEAAXPEAY0CA@$$CBEK@Z @ 0x1800CDDC4 (--$InternalCallback@$$BY0CA@E@-$wnf_subscription_state@$$BY0CA@E@details@wil@@QEAAXPEAY0CA@$$CBE.c)
 *     ??$InternalCallback@U_SEB_EVENT_HEADER@@@?$wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@QEAAXPEBU_SEB_EVENT_HEADER@@K@Z @ 0x1801AF2FC (--$InternalCallback@U_SEB_EVENT_HEADER@@@-$wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@w.c)
 *     ??$InternalCallback@K@?$wnf_subscription_state@K@details@wil@@QEAAXPEBKK@Z @ 0x180250F1C (--$InternalCallback@K@-$wnf_subscription_state@K@details@wil@@QEAAXPEBKK@Z.c)
 *     ??$InternalCallback@W4ShellState@Holographic@Shell@Internal@Windows@@@?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@QEAAXPEBW4ShellState@Holographic@Shell@Internal@Windows@@K@Z @ 0x1802AC858 (--$InternalCallback@W4ShellState@Holographic@Shell@Internal@Windows@@@-$wnf_subscription_state@W.c)
 *     ??$InternalCallback@E@?$wnf_subscription_state@E@details@wil@@QEAAXPEBEK@Z @ 0x18033815C (--$InternalCallback@E@-$wnf_subscription_state@E@details@wil@@QEAAXPEBEK@Z.c)
 *     ??$InternalCallback@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@QEAAXPEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@K@Z @ 0x1803B4364 (--$InternalCallback@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@-$wnf_subscription.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1801B1038 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_HrMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5,
        const char *a6,
        ...)
{
  unsigned int v6; // ebx

  v6 = (unsigned int)a4;
  wil::details::ReportFailure_HrMsg(this, a2);
  return v6;
}
