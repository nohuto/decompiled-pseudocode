void __fastcall RIMQueueAndSignalAsyncPnpWorkItem(__int64 a1, __int64 a2)
{
  int v4; // r8d
  char v5; // di
  __int64 v6; // rsi
  __int64 *v7; // rax
  NTSTATUS v8; // eax
  int v9; // edx
  char v10; // r13
  _QWORD *v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // [rsp+28h] [rbp-90h]
  __int64 v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+70h] [rbp-48h]
  __int64 v18; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+20h] BYREF

  v17 = a1 + 352;
  RIMLockExclusive(a1 + 352);
  v5 = 1;
  if ( *(_BYTE *)(a1 + 10) )
  {
    v11 = (_QWORD *)a2;
    v10 = -69;
  }
  else
  {
    v6 = a1 + 376;
    v7 = *(__int64 **)(a1 + 384);
    if ( *v7 != a1 + 376 )
      goto LABEL_29;
    *(_QWORD *)a2 = v6;
    *(_QWORD *)(a2 + 8) = v7;
    *v7 = a2;
    *(_QWORD *)(a1 + 384) = a2;
    v8 = ZwReleaseSemaphore(*(HANDLE *)(a1 + 368), 1, 0LL);
    v10 = v8;
    if ( v8 >= 0 )
    {
      if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
      {
        v18 = InputTraceLogging::WorkItemTypeToString(*(unsigned int *)(a2 + 16));
        v19 = a2;
        v20 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
          (int)&dword_1C02CA7E0,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18);
      }
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qq(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v4,
          (_DWORD)gRimLog,
          4,
          1,
          11,
          (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
          a1,
          a2);
      }
      v11 = 0LL;
      goto LABEL_12;
    }
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v4,
        (_DWORD)gRimLog,
        2,
        1,
        10,
        (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
        v8);
    }
    v11 = *(_QWORD **)(a1 + 384);
    if ( *v11 != v6 || (v12 = (__int64 *)v11[1], (_QWORD *)*v12 != v11) )
LABEL_29:
      __fastfail(3u);
    *(_QWORD *)(a1 + 384) = v12;
    *v12 = v6;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(_QWORD *)(a2 + 56);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 288);
    else
      v14 = *(_QWORD *)(a2 + 48);
    v16 = v14;
    LOBYTE(v14) = v5;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qqqDSd(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v4,
      (unsigned int)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      2,
      v15,
      12,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      *(_QWORD *)(a1 + 72),
      *(_QWORD *)(a1 + 32),
      *(_QWORD *)(a1 + 40),
      *(_DWORD *)(a1 + 84),
      v16,
      v10);
  }
LABEL_12:
  *(_QWORD *)(v17 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v17, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 )
    RIMFreeAsyncPnpWorkItem(v11);
}
