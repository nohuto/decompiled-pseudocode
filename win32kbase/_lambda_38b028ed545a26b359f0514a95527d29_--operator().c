__int64 __fastcall lambda_38b028ed545a26b359f0514a95527d29_::operator()(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  CInpPushLock *v6; // rbx
  unsigned int v7; // edi

  v4 = 2LL * (unsigned int)(a3 - 1);
  if ( *((_DWORD *)&off_1C02811C0 + 4 * (unsigned int)(a3 - 1) + 2) != a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2255LL);
  v6 = *(CInpPushLock **)(*a1 + 1320LL);
  RIMLockExclusive((__int64)v6);
  v7 = ((__int64 (__fastcall *)(_QWORD, __int64))*(&off_1C02811C0 + v4))(*a1, a2);
  CInpPushLock::UnLockExclusive(v6);
  return v7;
}
