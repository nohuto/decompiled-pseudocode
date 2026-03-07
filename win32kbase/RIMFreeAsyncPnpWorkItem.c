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
