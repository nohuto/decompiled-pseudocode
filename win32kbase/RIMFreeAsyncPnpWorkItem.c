/*
 * XREFs of RIMFreeAsyncPnpWorkItem @ 0x1C003A278
 * Callers:
 *     RIMDeleteAllAsyncPnpWorkNotificationItems @ 0x1C0032BB8 (RIMDeleteAllAsyncPnpWorkNotificationItems.c)
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C00376B0 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01A1388 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?WorkItemTypeToString@InputTraceLogging@@CAPEBDW4tagASYNCPNP_TYPE@@@Z @ 0x1C01A144C (-WorkItemTypeToString@InputTraceLogging@@CAPEBDW4tagASYNCPNP_TYPE@@@Z.c)
 */

void __fastcall RIMFreeAsyncPnpWorkItem(_QWORD *a1)
{
  void *v2; // rdx
  void *v3; // rdx
  void *v4; // rcx
  void *v5; // rdx
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
  {
    v6 = InputTraceLogging::WorkItemTypeToString(*((unsigned int *)a1 + 4));
    v8 = a1[3];
    v7 = (__int64)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (int)&dword_1C02CA7E0,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6);
  }
  if ( *((_DWORD *)a1 + 4) == 2 )
  {
    v5 = (void *)a1[12];
    if ( v5 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  }
  v2 = (void *)a1[6];
  if ( v2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
  v3 = (void *)a1[15];
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  v4 = (void *)a1[7];
  if ( v4 )
    ObfDereferenceObject(v4);
  ObfDereferenceObject((PVOID)a1[3]);
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
}
