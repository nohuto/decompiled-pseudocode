/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180197240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, unsigned int a2, unsigned int a3)
{
  int v4; // edx
  int v5; // eax

  v4 = a2 & 0x7FFFFFFF;
  v5 = a2 >> 31;
  if ( (_DWORD)this || a3 || v4 )
  {
    if ( (v4 & 0x40000000) != 0 )
    {
      wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        &wil::details::g_featureStateManager,
        (int)this,
        v4,
        a3);
    }
    else if ( a3 || v4 == 254 )
    {
      wil::details::FeatureStateManager::RecordFeatureUsage(
        &wil::details::g_featureStateManager,
        (unsigned int)this,
        v4,
        a3);
    }
    else
    {
      wil_RtlStagingConfig_RecordFeatureUsage((int)this, v4, v5);
    }
  }
  else
  {
    wil::details::FeatureStateManager::FlushUsage((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  }
}
