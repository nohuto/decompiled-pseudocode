/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01CA940
 * Callers:
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01CA8A8 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00B9740 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00D418C (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C00E4078 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A4E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01C26AC (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7440 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01CA7AC (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C01CBF18 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C01DAAEC (WPP_RECORDER_AND_TRACE_SF_LL.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataWithHistory(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagPOINTER_DEVICE_PROPERTY *a5,
        unsigned int a6,
        int *a7)
{
  __int64 v7; // r15
  char v8; // di
  _UNKNOWN **v9; // r8
  int v10; // edx
  CTouchProcessor *v11; // rcx
  int v12; // r8d
  PDEVICE_OBJECT v13; // rcx
  __int16 v14; // ax
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v16; // r14
  const struct CPointerInputFrame *FrameById; // rax
  const struct CPointerInputFrame *v18; // r13
  __int64 v20; // r14
  unsigned int HistoryCount; // eax
  int v22; // edx
  _UNKNOWN **v23; // r8
  unsigned int PointerRawData; // r15d
  _UNKNOWN **v25; // r8
  PDEVICE_OBJECT v26; // rcx
  __int16 v27; // ax
  unsigned int v28; // r14d
  const struct CPointerInputFrame *PreviousFrameByDevice; // r12
  __int64 v30; // r14
  unsigned int v31; // edx
  _UNKNOWN **v32; // r8
  int v33; // [rsp+28h] [rbp-90h]
  __int16 v34; // [rsp+30h] [rbp-88h]
  int v35; // [rsp+38h] [rbp-80h]
  size_t Size; // [rsp+58h] [rbp-60h]
  int *v37; // [rsp+60h] [rbp-58h]
  CInpLockGuard *v38; // [rsp+70h] [rbp-48h] BYREF
  int v39; // [rsp+78h] [rbp-40h]
  unsigned int v43; // [rsp+E8h] [rbp+30h]
  int *v44; // [rsp+F0h] [rbp+38h]

  v7 = a2;
  Size = a6;
  v37 = &a7[Size];
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
  {
    LOBYTE(a2) = 0;
    v8 = 1;
  }
  else
  {
    v8 = 1;
    LOBYTE(a2) = 1;
  }
  v9 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v9) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v9,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      128,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v38, (struct CInpLockGuard *)(this + 4));
  if ( a6 != a4 * a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5333);
  if ( a6 < a4 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        4,
        129,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_70;
    v14 = 130;
    goto LABEL_32;
  }
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, v7);
  v16 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        4,
        131,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_70;
    v14 = 132;
LABEL_32:
    v34 = v14;
LABEL_69:
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v13->AttachedDevice,
      v10,
      v12,
      v13->DeviceExtension,
      5,
      4,
      v34,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
LABEL_70:
    if ( !v39 )
      CInpLockGuard::UnLock(v38);
    return 0LL;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(
                                                   this,
                                                   *((_DWORD *)NonConstMsgData + 7),
                                                   4);
  v18 = FrameById;
  if ( !FrameById )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        4,
        133,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_70;
    v34 = 134;
    goto LABEL_69;
  }
  if ( *((_DWORD *)v16 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5361);
  v20 = *((_QWORD *)v18 + 30) + 480LL * *((unsigned int *)v16 + 8);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v20) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5363);
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v20);
  v43 = HistoryCount;
  if ( a3 == 1 || (PointerRawData = 0, a3 == HistoryCount) )
    PointerRawData = 1;
  if ( !PointerRawData )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v22) = 0;
    }
    v23 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_LL(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        (_DWORD)v23,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        v33,
        135,
        v35,
        a3,
        HistoryCount);
    }
  }
  if ( *((void **)v18 + 8) == TouchExtensibility::hDeviceUser )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v22) = 0;
    }
    v25 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        (_DWORD)v25,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        4,
        136,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    memset(a7, 0, Size * 4);
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v22) = 0;
    }
    v23 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v22 && !v8 )
      goto LABEL_159;
    v27 = 138;
  }
  else
  {
    if ( PointerRawData )
    {
      PointerRawData = CTouchProcessor::GetPointerRawData(
                         (PERESOURCE *)this,
                         v18,
                         *(_DWORD *)(v20 + 156),
                         *(_WORD *)(v20 + 162),
                         a4,
                         a5,
                         a7);
      if ( !PointerRawData )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
          || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v22) = 0;
        }
        v23 = &WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v22,
            (_DWORD)v23,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            4,
            139,
            (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
        }
      }
      if ( PointerRawData )
      {
        v44 = &a7[a4];
        if ( a3 > 1 )
        {
          v28 = *(_DWORD *)(v20 + 344);
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, v18);
          do
          {
            if ( !PreviousFrameByDevice || v43 <= 1 )
              break;
            if ( v28 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5432);
            v30 = *((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v28;
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v30) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5434);
            v31 = a4;
            if ( &v44[a4] > v37 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
                || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v31) = 0;
              }
              v32 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v31,
                  (_DWORD)v32,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  3,
                  4,
                  140,
                  (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
              }
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = CTouchProcessor::GetPointerRawData(
                                 (PERESOURCE *)this,
                                 PreviousFrameByDevice,
                                 *(_DWORD *)(v30 + 156),
                                 *(_WORD *)(v30 + 162),
                                 a4,
                                 a5,
                                 v44);
              if ( PointerRawData )
                v44 += a4;
            }
            if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v30) != v43 - 1 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5456);
            v43 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v30);
            v28 = *(_DWORD *)(v30 + 344);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                      (CTouchProcessor *)this,
                                      PreviousFrameByDevice);
          }
          while ( PointerRawData );
        }
      }
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v22) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v23) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v23) = 0;
    }
    if ( (_BYTE)v22 || (_BYTE)v23 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        (_DWORD)v23,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        4,
        141,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v22) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v22 && !v8 )
      goto LABEL_159;
    v27 = 142;
  }
  LOBYTE(v23) = v8;
  WPP_RECORDER_AND_TRACE_SF_(
    v26->AttachedDevice,
    v22,
    (_DWORD)v23,
    v26->DeviceExtension,
    5,
    4,
    v27,
    (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
LABEL_159:
  if ( !v39 )
    CInpLockGuard::UnLock(v38);
  return PointerRawData;
}
