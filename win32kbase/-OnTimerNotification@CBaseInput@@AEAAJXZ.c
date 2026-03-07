__int64 __fastcall CBaseInput::OnTimerNotification(CBaseInput *this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnTimerNotification", 0LL);
  LODWORD(this) = RIMOnTimerNotification(*((_QWORD *)this + 1));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return (unsigned int)this;
}
