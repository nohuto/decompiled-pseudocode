__int64 __fastcall CBaseInput::OnRemoteCloseNotification(CBaseInput *this)
{
  unsigned int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v4,
    "OnRemoteCloseNotification",
    0LL);
  v2 = RimInputTypeToDeviceInputType(*((unsigned int *)this + 36));
  LODWORD(this) = RIMDirectPnpRemoveDevicesOfType(*((_QWORD *)this + 1), v2);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v4);
  return (unsigned int)this;
}
