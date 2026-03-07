__int64 __fastcall HalpHvDiscover(__int64 a1)
{
  __int64 v1; // rdx
  int MaximumProcessorCount; // eax
  _QWORD v4[18]; // [rsp+30h] [rbp-39h] BYREF
  char v5; // [rsp+D0h] [rbp+67h] BYREF

  v5 = 0;
  if ( (int)HalSocRequestApi(a1, (__int64)HalpHvCounterUpdateCallback, 3, 8LL, &HalpHvTimerApi) >= 0 )
  {
    memset(v4, 0, sizeof(v4));
    v4[0] = 0x9000000001LL;
    v4[1] = PdcCreateWatchdogAroundClientCall;
    v4[2] = HalpHvCounterQueryCounter;
    HIDWORD(v4[12]) = 64;
    LODWORD(v4[17]) = 7;
    HIDWORD(v4[14]) = 2;
    v4[13] = 10000000LL;
    HalpTimerRegister((__int64)v4, 0LL);
  }
  if ( (int)HalSocRequestConfigurationData(3, v1, &v5) >= 0 && v5 )
  {
    memset(v4, 0, sizeof(v4));
    v4[11] = 0LL;
    v4[0] = 0x9000000001LL;
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    HIDWORD(v4[12]) = 64;
    v4[13] = 10000000LL;
    LODWORD(v4[17]) = 7;
    HIDWORD(v4[14]) = 34913;
    v4[1] = HalpHvTimerInitialize;
    v4[2] = HalpHvCounterQueryCounter;
    v4[9] = HalpHvTimerSetInterruptVector;
    v4[4] = HalpHvTimerArm;
    v4[3] = HalpHvTimerAcknowledgeInterrupt;
    LODWORD(v4[12]) = 24 * MaximumProcessorCount;
    v4[5] = HalpHvTimerStop;
    HalpTimerRegister((__int64)v4, 0LL);
  }
  return 0LL;
}
