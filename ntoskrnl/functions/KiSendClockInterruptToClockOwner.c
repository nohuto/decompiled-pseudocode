__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[68]; // [rsp+20h] [rbp-128h] BYREF

  v1[0] = 2097153;
  memset(&v1[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
