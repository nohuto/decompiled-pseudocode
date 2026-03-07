unsigned __int64 __fastcall UserCritTelemetry::UpdateUserCritInfo(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rtt
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 *v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 result; // rax
  _QWORD v11[16]; // [rsp+20h] [rbp-59h] BYREF

  v11[14] = -1LL;
  v11[0] = 10LL;
  v5 = 1000000 * a2;
  v4 = (unsigned __int64)(1000000 * a2) % gliQpcFreq.QuadPart;
  v11[1] = 25LL;
  v6 = v5 / gliQpcFreq.QuadPart;
  v11[2] = 50LL;
  v7 = 0LL;
  v8 = v11;
  v11[3] = 100LL;
  v11[4] = 250LL;
  v11[5] = 500LL;
  v11[6] = 1000LL;
  v11[7] = 2500LL;
  v11[8] = 5000LL;
  v11[9] = 10000LL;
  v11[10] = 25000LL;
  v11[11] = 50000LL;
  v11[12] = 100000LL;
  v11[13] = 200000LL;
  while ( v6 > *v8 )
  {
    v7 = (unsigned int)(v7 + 1);
    ++v8;
    if ( (unsigned int)v7 >= 0xF )
    {
      v9 = a3;
      goto LABEL_6;
    }
  }
  v9 = a3;
  v8 = (unsigned __int64 *)(v7 + 15LL * a3);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8LL * (_QWORD)v8 + 4400));
LABEL_6:
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8 * v9 + 4760), v6);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * v9 + 4808));
  result = Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledDeviceUsage(v8, v4);
  if ( (_DWORD)result )
  {
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v9 + 4784), 0LL, 0LL);
    if ( v6 > result )
      _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v9 + 4784), v6);
  }
  return result;
}
