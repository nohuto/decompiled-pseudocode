/*
 * XREFs of ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18002CD04
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18002DBF0 (-RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18007E370 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18002CD70 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18002CDD0 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x18002CE60 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18002CEB0 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details_abi::FeatureStateData::RecordUsage(RTL_SRWLOCK *this)
{
  _BYTE v2[200]; // [rsp+20h] [rbp-C8h] BYREF

  wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v2);
  AcquireSRWLockExclusive(this);
  wil::details_abi::FeatureStateData::RetrieveUsageUnderLock(
    (wil::details_abi::FeatureStateData *)this,
    (struct wil::details_abi::UsageIndexes *)v2);
  if ( this )
    ReleaseSRWLockExclusive(this);
  wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v2);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)v2);
}
