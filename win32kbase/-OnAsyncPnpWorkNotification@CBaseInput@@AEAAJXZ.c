/*
 * XREFs of ?OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ @ 0x1C00C9CF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 */

__int64 __fastcall CBaseInput::OnAsyncPnpWorkNotification(CBaseInput *this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnAsyncPnpWorkNotification", 0LL);
  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  LODWORD(this) = RIMOnAsyncPnpWorkNotification(*((_QWORD *)this + 1));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return (unsigned int)this;
}
