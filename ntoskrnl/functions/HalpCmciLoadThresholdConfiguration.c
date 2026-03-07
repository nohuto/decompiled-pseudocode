__int64 HalpCmciLoadThresholdConfiguration()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  PVOID SystemRoutineAddress; // rax
  int v3; // eax
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v5; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+44h] [rbp-BCh] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v12[28]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = 0;
  v6 = 0;
  v5 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  result = (unsigned int)_InterlockedCompareExchange(&HalpCmciConfigurationLoaded, 1, 0);
  if ( !(_DWORD)result )
  {
    memset(v12, 0, sizeof(v12));
    v9 = -1;
    v12[2] = L"CMCThresholdCount";
    LODWORD(v12[4]) = 67108868;
    LODWORD(v12[11]) = 67108868;
    v12[3] = &v4;
    v1 = 100;
    LODWORD(v12[18]) = 67108868;
    v12[5] = &v7;
    v8 = 60;
    v12[9] = L"CMCThresholdSeconds";
    LODWORD(v12[6]) = 4;
    v12[10] = &v5;
    LODWORD(v12[13]) = 4;
    v12[12] = &v8;
    v12[16] = L"CMCPollingLimit";
    v12[17] = &v6;
    LODWORD(v12[20]) = 4;
    v12[19] = &v9;
    v7 = 100;
    LODWORD(v12[1]) = 304;
    LODWORD(v12[8]) = 304;
    LODWORD(v12[15]) = 304;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    if ( ((int (__fastcall *)(__int64, const wchar_t *, _QWORD *, _QWORD, _QWORD))SystemRoutineAddress)(
           2147483650LL,
           L"Session Manager",
           v12,
           0LL,
           0LL) < 0 )
    {
      v6 = -1;
      v4 = 100;
      v5 = 60;
    }
    else
    {
      v1 = v4;
    }
    v3 = 2;
    if ( v1 > 2 )
      v3 = v1;
    HalpCmciThresholdCount = v3;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    HalpCmciThresholdTime = PerformanceFrequency.QuadPart * v5;
    result = v6;
    HalpCmcPollCount = v6;
  }
  return result;
}
