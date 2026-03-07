void __fastcall CCompositionRefreshRateBooster::HandleRefreshRateUnboostTimer(CCompositionRefreshRateBooster *this)
{
  int v2; // eax
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-30h] BYREF

  CPushLock::AcquireLockExclusive(this);
  if ( !gbIgnoreStressedOutStuff && !*((_BYTE *)this + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 509);
  *((_BYTE *)this + 16) = 0;
  v2 = DCompositionBoostCompositionClockForInput(0);
  if ( !gbIgnoreStressedOutStuff && v2 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 513);
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 512LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C029DFB3, 0LL, 0LL, 2u, &v3);
  CPushLock::ReleaseLock(this);
}
