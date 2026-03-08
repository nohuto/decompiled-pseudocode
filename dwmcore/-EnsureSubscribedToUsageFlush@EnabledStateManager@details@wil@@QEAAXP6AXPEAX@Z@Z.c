/*
 * XREFs of ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x1800AFA24
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180039364 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(RTL_SRWLOCK *this, void (*a2)(void *))
{
  RTL_SRWLOCK *v4; // rdi
  RTL_SRWLOCK *v5; // rcx

  if ( LOBYTE(this->Ptr) )
  {
    v4 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    v5 = this + 5;
    if ( !this[5].Ptr )
    {
      v5->Ptr = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification )
      {
        g_wil_details_internalSubscribeFeatureStateChangeNotification(v5, a2, -1LL);
      }
      else if ( g_wil_details_apiSubscribeFeatureStateChangeNotification )
      {
        g_wil_details_apiSubscribeFeatureStateChangeNotification(v5, a2, -1LL);
      }
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
