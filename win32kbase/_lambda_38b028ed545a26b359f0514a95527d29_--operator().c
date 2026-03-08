/*
 * XREFs of _lambda_38b028ed545a26b359f0514a95527d29_::operator() @ 0x1C00E011C
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C002F3AC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00397E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

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
