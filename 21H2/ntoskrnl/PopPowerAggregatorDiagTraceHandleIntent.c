/*
 * XREFs of PopPowerAggregatorDiagTraceHandleIntent @ 0x140382E58
 * Callers:
 *     PopPowerAggregatorRecordIntent @ 0x140776120 (PopPowerAggregatorRecordIntent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407764F4 (PopPowerAggregatorDiagTraceEvent.c)
 */

__int64 __fastcall PopPowerAggregatorDiagTraceHandleIntent(int a1, int a2, int a3, __int64 a4, __int64 a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-29h] BYREF
  int *v8; // [rsp+38h] [rbp-19h]
  __int64 v9; // [rsp+40h] [rbp-11h]
  int *v10; // [rsp+48h] [rbp-9h]
  __int64 v11; // [rsp+50h] [rbp-1h]
  char *v12; // [rsp+58h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+A8h] [rbp+57h] BYREF
  int v19; // [rsp+B0h] [rbp+5Fh] BYREF
  int v20; // [rsp+B8h] [rbp+67h] BYREF

  v20 = a3;
  v19 = a2;
  v18 = a1;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v18;
  v9 = 4LL;
  v8 = &v19;
  v11 = 4LL;
  v10 = &v20;
  v13 = 4LL;
  v12 = &a6;
  v16 = a5;
  v14 = a4;
  v15 = 4LL;
  v17 = 4LL;
  return PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_HANDLE_INTENT, 6u, &UserData);
}
