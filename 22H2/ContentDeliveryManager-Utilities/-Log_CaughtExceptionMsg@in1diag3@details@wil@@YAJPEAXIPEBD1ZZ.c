/*
 * XREFs of ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x18004AA6C
 * Callers:
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::catch$10 @ 0x1800D38D3 (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--catch$10.c)
 *     __lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator()_::_1_::catch$27 @ 0x1800D3BC9 (__lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator()_--_1_--catch$27.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer_::_1_::catch$9 @ 0x1800D9511 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--GetSubscriptionCo_ea_1800D9511.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::catch$18 @ 0x1800D9665 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800D9665.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$30 @ 0x1800D9784 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800D9784.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$31 @ 0x1800D97F6 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800D97F6.c)
 * Callees:
 *     ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x18004A920 (-ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_CaughtExceptionMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        const char *a5,
        ...)
{
  __int64 v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  return wil::details::ReportFailure_CaughtExceptionMsg(
           (__int64)this,
           (unsigned int)a2,
           a3,
           (__int64)a4,
           v6,
           retaddr,
           v7,
           (__int64)a4,
           (char *)&a5);
}
