__int64 __fastcall CHidInput::OnPTPMarshalNotification(CHidInput *this)
{
  __int64 *v3; // [rsp+40h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnPTPMarshalNotification", 0LL);
  InputTraceLogging::Mouse::InjectInput();
  SynthesizeMouseInput(
    *((_QWORD *)this + 179),
    (_DWORD)this + 1440,
    *((_QWORD *)this + 183),
    *((_QWORD *)this + 184),
    *((_DWORD *)this + 370));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return 0LL;
}
