void __fastcall ProcessHidRawInput(struct DEVICEINFO *a1)
{
  __int64 *v2[3]; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+58h] [rbp+20h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v3);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v2, "RawHidInput", 0LL);
  xxxProcessHidInput(a1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v2);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v3);
}
