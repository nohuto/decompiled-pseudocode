/*
 * XREFs of PopPowerAggregatorNotifySuspendResume @ 0x140775D28
 * Callers:
 *     PopIssueActionRequest @ 0x140775A08 (PopIssueActionRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775E14 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140776334 (PopPowerAggregatorDiagTraceEvent.c)
 */

void __fastcall PopPowerAggregatorNotifySuspendResume(unsigned __int8 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  int v3; // [rsp+30h] [rbp-48h] BYREF
  int v4; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  v1 = a1;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  UserData.Reserved = 0;
  v8 = 0;
  v4 = dword_140C218B0;
  UserData.Ptr = (ULONGLONG)&v3;
  UserData.Size = 4;
  v7 = 4;
  v6 = &v4;
  v3 = v1;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_SUSPEND_RESUME, 2u, &UserData);
  if ( (_BYTE)v1 )
  {
    if ( ++dword_140C218B0 != 1 )
      goto LABEL_5;
    v2 = 7LL;
    goto LABEL_4;
  }
  if ( !--dword_140C218B0 )
  {
    v2 = 8LL;
LABEL_4:
    PopPowerAggregatorHandleIntentUnsafe(v2, 0LL, 20LL);
  }
LABEL_5:
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_BYTE)v1 )
    KeWaitForSingleObject(&word_140C21898, Executive, 0, 0, 0LL);
}
