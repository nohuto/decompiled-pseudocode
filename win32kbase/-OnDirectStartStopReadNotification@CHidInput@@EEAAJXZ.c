__int64 __fastcall CHidInput::OnDirectStartStopReadNotification(CHidInput *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v7; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v7, "OnDirectStartStopReadNotification", 0LL);
  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  if ( !RIMApiSetIsRemoteConnection(v3, v2, v4, v5) && *((_QWORD *)this + 1) != -1LL )
    RIMDirectStartStopDeviceRead();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v7);
  return 0LL;
}
