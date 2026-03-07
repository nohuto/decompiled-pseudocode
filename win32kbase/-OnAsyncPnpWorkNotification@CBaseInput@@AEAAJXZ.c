__int64 __fastcall CBaseInput::OnAsyncPnpWorkNotification(CBaseInput *this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnAsyncPnpWorkNotification", 0LL);
  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  LODWORD(this) = RIMOnAsyncPnpWorkNotification(*((_QWORD *)this + 1));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return (unsigned int)this;
}
