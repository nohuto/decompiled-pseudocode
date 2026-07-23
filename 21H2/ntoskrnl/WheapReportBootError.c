/*
 * XREFs of WheapReportBootError @ 0x1405BB0F4
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403BACF8 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x1403BB100 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     WheapAllocErrorRecord @ 0x1405BB87C (WheapAllocErrorRecord.c)
 *     WheapCompressErrorRecord @ 0x1405BBB20 (WheapCompressErrorRecord.c)
 *     WheapGetErrorSource @ 0x1405BBCFC (WheapGetErrorSource.c)
 *     WheapWorkQueueAddItem @ 0x1405BD9D8 (WheapWorkQueueAddItem.c)
 */

char __fastcall WheapReportBootError(__int64 a1)
{
  _QWORD *WheaInfo; // rdi
  __int64 ErrorSource; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  void (__fastcall *ErrorSourceFunction)(__int64, __int64, __int64, _QWORD, _QWORD); // rax
  int v8; // [rsp+58h] [rbp+10h] BYREF

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo )
    return 0;
  ErrorSource = WheapGetErrorSource(WheaInfo[1], *(unsigned int *)(a1 + 24));
  v4 = ErrorSource;
  if ( !ErrorSource )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(ErrorSource + 24));
  v8 = 0;
  v5 = WheapAllocErrorRecord(ErrorSource, &v8);
  if ( !v5 )
    return 0;
  ErrorSourceFunction = (void (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))WheapGetErrorSourceFunction(
                                                                                          v4,
                                                                                          2,
                                                                                          0);
  if ( ErrorSourceFunction )
    ErrorSourceFunction(v4 + 96, a1, v5 + 40, (unsigned int)(v8 - 40), *(_QWORD *)(v4 + 56));
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  WheapCompressErrorRecord(3LL, v5 + 40);
  WheapWorkQueueAddItem(WheaInfo[2], v5);
  return 1;
}
