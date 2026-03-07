__int64 __fastcall CHidInput::OnPTPInertiaHandleEvent(CHidInput *this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnPTPInertiaHandleEvent", 0LL);
  CPTPProcessor::EndInertiaForContainer(*((void **)this + 187), *((_QWORD *)this + 188));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return 0LL;
}
