void __fastcall PopPowerAggregatorNotifySuspendResume(unsigned __int8 a1)
{
  int v1; // ebx
  int *v2; // rdx
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp-40h] BYREF
  int v5; // [rsp+34h] [rbp-3Ch] BYREF
  int v6; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-30h] BYREF
  int *v8; // [rsp+50h] [rbp-20h]
  int v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+5Ch] [rbp-14h]

  v4 = 0;
  v1 = a1;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  UserData.Reserved = 0;
  v10 = 0;
  v6 = dword_140C3A820;
  UserData.Ptr = (ULONGLONG)&v5;
  UserData.Size = 4;
  v9 = 4;
  v8 = &v6;
  v5 = v1;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_SUSPEND_RESUME, 2u, &UserData);
  if ( (_BYTE)v1 )
  {
    if ( ++dword_140C3A820 != 1 )
      goto LABEL_7;
    v2 = 0LL;
    v3 = 7LL;
  }
  else
  {
    if ( --dword_140C3A820 )
      goto LABEL_7;
    v2 = &v4;
    v4 = dword_140C3A824;
    v3 = 8LL;
  }
  PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v3, (__int64)v2, 0, 0x14u);
LABEL_7:
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_BYTE)v1 )
    KeWaitForSingleObject(&word_140C3A808, Executive, 0, 0, 0LL);
}
