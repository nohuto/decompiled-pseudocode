__int64 __fastcall CHidInput::OnTouchSynthesizeNotification(struct RIMCOMPLETEFRAME **this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnTouchSynthesizeNotification", 0LL);
  SynthesizeTouchInputContainer(this[186]);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return 0LL;
}
