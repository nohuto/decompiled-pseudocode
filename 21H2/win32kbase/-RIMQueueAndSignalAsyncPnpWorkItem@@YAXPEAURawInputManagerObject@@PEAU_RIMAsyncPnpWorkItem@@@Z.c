/*
 * XREFs of ?RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z @ 0x1C01A9FF4
 * Callers:
 *     RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01AA71C (RIMQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01AA8A8 (RIMQueueDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01AB3DC (RIMVirtQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtQueueRimDevChangeAsyncWorkItem @ 0x1C01AB59C (RIMVirtQueueRimDevChangeAsyncWorkItem.c)
 *     RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01AB718 (RIMVirtQueueRootPnpEndSyncAsyncWorkItem.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?RimAsyncPnpWorkQueued@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEAX@Z @ 0x1C01AA2AC (-RimAsyncPnpWorkQueued@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEAX@Z.c)
 *     RIMFreeAsyncPnpWorkItem @ 0x1C01AA66C (RIMFreeAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C01AB894 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

void __fastcall RIMQueueAndSignalAsyncPnpWorkItem(struct RawInputManagerObject *a1, struct _RIMAsyncPnpWorkItem *a2)
{
  char *v2; // r13
  int v5; // r8d
  char v6; // di
  char *v7; // rsi
  struct RawInputManagerObject **v8; // rax
  NTSTATUS v9; // eax
  int v10; // edx
  int v11; // r9d
  struct _RIMAsyncPnpWorkItem *v12; // rbx
  struct _RIMAsyncPnpWorkItem **v13; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // [rsp+28h] [rbp-70h]
  int v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+60h] [rbp-38h]
  NTSTATUS v21; // [rsp+A0h] [rbp+8h]

  v2 = (char *)a1 + 352;
  RIMLockExclusive((__int64)a1 + 352);
  v6 = 1;
  if ( *((_BYTE *)a1 + 10) )
  {
    v12 = a2;
    v11 = -1073741637;
LABEL_26:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *((_QWORD *)a2 + 7);
      if ( v16 )
        v17 = *(_QWORD *)(v16 + 304);
      else
        v17 = *((_QWORD *)a2 + 6);
      v20 = v17;
      LOBYTE(v17) = v6;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v5,
        v11,
        2,
        v18,
        12,
        v19,
        *((_QWORD *)a1 + 9),
        *((_QWORD *)a1 + 4),
        *((_QWORD *)a1 + 5),
        *((_DWORD *)a1 + 21),
        v20,
        v11);
    }
    goto LABEL_36;
  }
  v7 = (char *)a1 + 376;
  v8 = (struct RawInputManagerObject **)*((_QWORD *)a1 + 48);
  if ( *v8 != (struct RawInputManagerObject *)((char *)a1 + 376) )
LABEL_24:
    __fastfail(3u);
  *(_QWORD *)a2 = v7;
  *((_QWORD *)a2 + 1) = v8;
  *v8 = a2;
  *((_QWORD *)a1 + 48) = a2;
  v9 = ZwReleaseSemaphore(*((HANDLE *)a1 + 46), 1, 0LL);
  v21 = v9;
  v11 = v9;
  if ( v9 < 0 )
  {
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v5,
        (_DWORD)gRimLog,
        2,
        1,
        10,
        (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
        v9);
      v11 = v21;
    }
    v12 = (struct _RIMAsyncPnpWorkItem *)*((_QWORD *)a1 + 48);
    if ( *(char **)v12 == v7 )
    {
      v13 = (struct _RIMAsyncPnpWorkItem **)*((_QWORD *)v12 + 1);
      if ( *v13 == v12 )
      {
        *((_QWORD *)a1 + 48) = v13;
        *v13 = (struct _RIMAsyncPnpWorkItem *)v7;
        goto LABEL_26;
      }
    }
    goto LABEL_24;
  }
  InputTraceLogging::RIM::RimAsyncPnpWorkQueued(a1, a2);
  LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v15,
      (_DWORD)gRimLog,
      4,
      1,
      11,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      (char)a1,
      a2);
  }
  v12 = 0LL;
LABEL_36:
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v12 )
    RIMFreeAsyncPnpWorkItem(v12);
}
