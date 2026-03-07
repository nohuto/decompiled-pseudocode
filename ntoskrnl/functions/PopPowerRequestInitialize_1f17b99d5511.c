__int64 PopPowerRequestInitialize()
{
  __int64 result; // rax
  __int64 v1; // r8
  char *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v8[16]; // [rsp+40h] [rbp-29h] BYREF

  DestinationString = 0LL;
  memset(v8, 0, 0x78uLL);
  RtlInitUnicodeString(&DestinationString, L"PowerRequest");
  BYTE2(v8[0]) |= 0x14u;
  v8[8] = PopPowerRequestClose;
  LOWORD(v8[0]) = 120;
  v8[9] = PopPowerRequestDelete;
  HIDWORD(v8[4]) = 512;
  HIDWORD(v8[5]) = 168;
  LODWORD(v8[1]) = 402;
  *(_OWORD *)((char *)&v8[1] + 4) = PopPowerRequestMapping;
  HIDWORD(v8[3]) = 2031616;
  result = ObCreateObjectType(&DestinationString, (__int64)v8, 0LL, (__int64)&PopPowerRequestObjectType);
  if ( (int)result >= 0 )
  {
    qword_140C3F148 = 0LL;
    PopPowerRequestLock = 0LL;
    PopPowerRequestSpinLock = 0LL;
    PopInitializeWorkItem(
      (__int64)&PopPowerRequestUpdateWorkItem,
      (__int64)PopPowerRequestCallbackWorker,
      (__int64)&PopPowerRequestUpdateQueue);
    qword_140C3F188 = v1;
    qword_140C3F168 = (__int64)&PopPowerRequestObjectList;
    PopPowerRequestObjectList = &PopPowerRequestObjectList;
    PopPowerRequestUpdateQueue = v1;
    RtlInitializeGenericTableAvl(
      &PopPowerRequestTable,
      (PRTL_AVL_COMPARE_ROUTINE)PopPowerRequestTableCompare,
      (PRTL_AVL_ALLOCATE_ROUTINE)PopPowerRequestStatsDatabaseAllocate,
      (PRTL_AVL_FREE_ROUTINE)PopPowerRequestStatsDatabaseFree,
      0LL);
    v2 = (char *)&unk_140C03569;
    v3 = 6LL;
    do
    {
      *(_WORD *)(v2 - 1) = 0;
      v4 = v2 + 7;
      *(_QWORD *)(v2 + 15) = v2 + 7;
      v2[1] = 6;
      *(_DWORD *)(v2 + 3) = 1;
      v2 += 48;
      *v4 = v4;
      --v3;
    }
    while ( v3 );
    PopExecutionRequiredContext = 0LL;
    PopInitializeTimer(
      (__int64)&PopPowerRequestExecutionRequiredTimeoutTimer,
      (__int64)PopPowerRequestExecutionRequiredTimeoutCallback,
      0LL,
      (__int64)PopPowerRequestExecutionRequiredTimeoutWorker,
      0LL);
    PopInitializeTimer(
      (__int64)&PopPowerRequestDebounceTimer,
      (__int64)PopPowerRequestDebounceTimerCallback,
      0LL,
      (__int64)PopPowerRequestDebounceTimerWorker,
      0LL);
    PopPowerRequestStatsInitialize();
    if ( TtmIsEnabled(v6, v5) )
      PopPowerRequestGlobalOverrideMask = 1;
    return 0LL;
  }
  return result;
}
