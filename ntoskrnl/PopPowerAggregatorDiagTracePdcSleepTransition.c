/*
 * XREFs of PopPowerAggregatorDiagTracePdcSleepTransition @ 0x14099DF84
 * Callers:
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140990C08 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407577FC (PopPowerAggregatorDiagTraceEvent.c)
 */

void __fastcall PopPowerAggregatorDiagTracePdcSleepTransition(
        unsigned __int8 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  int v5; // [rsp+20h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-11h] BYREF
  int *v7; // [rsp+40h] [rbp-1h]
  __int64 v8; // [rsp+48h] [rbp+7h]
  __int64 v9; // [rsp+50h] [rbp+Fh]
  __int64 v10; // [rsp+58h] [rbp+17h]
  __int64 v11; // [rsp+60h] [rbp+1Fh]
  __int64 v12; // [rsp+68h] [rbp+27h]
  char *v13; // [rsp+70h] [rbp+2Fh]
  __int64 v14; // [rsp+78h] [rbp+37h]
  int v15; // [rsp+A8h] [rbp+67h] BYREF

  v15 = a2;
  v5 = a1;
  v9 = a3;
  UserData.Ptr = (ULONGLONG)&v5;
  *(_QWORD *)&UserData.Size = 4LL;
  v7 = &v15;
  v13 = &a5;
  v8 = 4LL;
  v10 = 4LL;
  v11 = a4;
  v12 = 4LL;
  v14 = 4LL;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_PDC_SLEEP_TRANSITION, 5u, &UserData);
}
