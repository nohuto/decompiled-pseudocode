/*
 * XREFs of ?InitializePowerWatchdogTimeoutDefaults@@YAXXZ @ 0x1C00C6528
 * Callers:
 *     InitializePowerRequestList @ 0x1C031F97C (InitializePowerRequestList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall InitializePowerWatchdogTimeoutDefaults(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  _QWORD v7[16]; // [rsp+28h] [rbp-39h] BYREF

  v7[0] = 16LL;
  v7[1] = L"PowerWatchdogRequestQueueTimeoutMsec";
  v4 = v7;
  v7[2] = 30000LL;
  v7[4] = L"PowerWatchdogPoCalloutTimeoutMsec";
  v5 = 0;
  v7[3] = 32LL;
  v7[7] = L"PowerWatchdogPowerOnGdiTimeoutMsec";
  v7[5] = 10000LL;
  v7[10] = L"PowerWatchdogDwmSyncFlushTimeoutMsec";
  v7[13] = L"PowerWatchdogDrvSetMonitorTimeoutMsec";
  v7[6] = 48LL;
  v7[8] = 30000LL;
  v7[9] = 64LL;
  v7[11] = 30000LL;
  v7[12] = 80LL;
  v7[14] = 10000LL;
  do
  {
    ++v5;
    v6 = 552LL - (_QWORD)v7 + SGDGetUserSessionState(a1, a2, a3, a4);
    *(_DWORD *)((char *)v4 + v6) = *(_DWORD *)v4;
    *(_QWORD *)((char *)v4 + v6 + 8) = v4[1];
    a1 = *((unsigned int *)v4 + 4);
    *(_DWORD *)((char *)v4 + v6 + 16) = a1;
    v4 += 3;
  }
  while ( v5 < 5 );
}
