__int64 __fastcall UmfdQueryFontData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // r14
  __int64 *RequestContext; // rdi
  int IsReady__lambda_eef90ce73a6a62b5089d029612c95735; // ebx
  __int64 v17; // rsi
  bool v18; // zf
  __int64 v19; // rbx
  __int64 v20; // r14
  unsigned __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // [rsp+38h] [rbp-D0h] BYREF
  int v29; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v30; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+44h] [rbp-C4h] BYREF
  void ***v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v34[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v35[4]; // [rsp+68h] [rbp-A0h] BYREF
  void **v36; // [rsp+88h] [rbp-80h] BYREF
  int v37; // [rsp+90h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-68h]
  char v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  int v42; // [rsp+B8h] [rbp-50h]
  int v43; // [rsp+BCh] [rbp-4Ch]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  __int64 v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp-38h]
  int v47; // [rsp+D8h] [rbp-30h]
  unsigned int v48; // [rsp+DCh] [rbp-2Ch]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  __int128 v50; // [rsp+E8h] [rbp-20h]
  __int128 ThreadInformation; // [rsp+F8h] [rbp-10h] BYREF

  v37 = 2;
  CurrentThread = KeGetCurrentThread();
  v40 = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v39 = ThreadInformation;
    v40 = 1;
  }
  v49 = 0LL;
  v48 = -1;
  v36 = &QueryFontDataRequest::`vftable';
  v45 = a5;
  v46 = a6;
  v47 = a7;
  v50 = 0LL;
  v41 = a1;
  v44 = a2;
  v42 = a3;
  v43 = a4;
  v12 = *(int *)(*(_QWORD *)(a2 + 24) + 8LL);
  v32 = &v36;
  if ( (unsigned int)v12 > 3 )
    return 0xFFFFFFFFLL;
  v13 = *(_QWORD *)(SGDGetSessionState(v11) + 40);
  _mm_lfence();
  v14 = *(_QWORD **)(v13 + 8 * v12 + 16);
  RequestContext = (__int64 *)UmfdCreateRequestContext();
  if ( !RequestContext )
    return 0xFFFFFFFFLL;
  v35[0] = v14;
  v35[1] = &v32;
  v35[2] = RequestContext;
  IsReady__lambda_eef90ce73a6a62b5089d029612c95735 = UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c95735___(v35);
  if ( IsReady__lambda_eef90ce73a6a62b5089d029612c95735 >= 0 )
  {
    v17 = *RequestContext;
    if ( *RequestContext )
    {
      if ( (unsigned int)WdSetEventAndWaitForSingleObject(
                           **(_QWORD **)(*v14 + 8LL),
                           **(_QWORD **)(*(_QWORD *)(v17 + 40) + 8LL),
                           0LL,
                           0LL,
                           "0u") == 258 )
      {
        v22 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000000LL) )
        {
          v28 = 0;
          v29 = v22;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v23,
            (int)&unk_1C0320210,
            v24,
            v25,
            (__int64)&v29,
            (__int64)&v28);
        }
        IsReady__lambda_eef90ce73a6a62b5089d029612c95735 = UmfdClientSignalServerAndWaitForCompletion(
                                                             v14,
                                                             RequestContext,
                                                             0LL);
        if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000000LL) )
        {
          v31 = IsReady__lambda_eef90ce73a6a62b5089d029612c95735;
          v30 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v22;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v30,
            (int)&unk_1C032023E,
            v26,
            v27,
            (__int64)&v31,
            (__int64)&v30);
        }
      }
      else
      {
        v18 = *(_DWORD *)(v17 + 8) == 3;
        v19 = v14[1];
        v20 = *(_QWORD *)(v17 + 40);
        v34[1] = v20;
        v34[0] = v19;
        v33 = v17;
        if ( v18 )
        {
          CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v33);
          CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(v34);
          *RequestContext = 0LL;
          IsReady__lambda_eef90ce73a6a62b5089d029612c95735 = 0;
        }
        else
        {
          EngFreeMem((PVOID)v17);
          if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v19) > 8 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v19);
            CEventPool::CEventPoolEntry::Destroy((_QWORD *)v20);
          }
          else
          {
            KeResetEvent(**(PRKEVENT **)(v20 + 8));
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v19 + 16), (PSLIST_ENTRY)v20);
          }
          *RequestContext = 0LL;
          IsReady__lambda_eef90ce73a6a62b5089d029612c95735 = -1073741823;
        }
      }
    }
    else
    {
      IsReady__lambda_eef90ce73a6a62b5089d029612c95735 = -1073741811;
    }
  }
  EngFreeMem(RequestContext);
  if ( IsReady__lambda_eef90ce73a6a62b5089d029612c95735 >= 0 )
    return v48;
  else
    return 0xFFFFFFFFLL;
}
