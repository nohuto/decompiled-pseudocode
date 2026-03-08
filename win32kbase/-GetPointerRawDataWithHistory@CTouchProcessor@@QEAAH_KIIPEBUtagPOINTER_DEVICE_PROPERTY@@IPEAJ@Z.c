/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01F9750
 * Callers:
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01F96B8 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00C9BF0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00DF6C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C00F2568 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01F155C (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01F95BC (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C01FAD18 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C020989C (WPP_RECORDER_AND_TRACE_SF_LL.c)
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
  __int64 v8; // r12
  char v9; // di
  _UNKNOWN **v10; // r8
  int v11; // edx
  CTouchProcessor *v12; // rcx
  int v13; // r8d
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v17; // r14
  const struct CPointerInputFrame *FrameById; // rax
  const struct CPointerInputFrame *v19; // r13
  __int64 v21; // r14
  unsigned int HistoryCount; // eax
  int v23; // edx
  _UNKNOWN **v24; // r8
  unsigned int PointerRawData; // r12d
  _UNKNOWN **v26; // r8
  PDEVICE_OBJECT v27; // rcx
  __int16 v28; // ax
  unsigned int v29; // r14d
  const struct CPointerInputFrame *PreviousFrameByDevice; // r15
  __int64 v31; // r14
  unsigned int v32; // edx
  _UNKNOWN **v33; // r8
  int v34; // [rsp+28h] [rbp-90h]
  int v35; // [rsp+38h] [rbp-80h]
  size_t Size; // [rsp+58h] [rbp-60h]
  int *v37; // [rsp+60h] [rbp-58h]
  CInpLockGuard *v38; // [rsp+70h] [rbp-48h] BYREF
  int v39; // [rsp+78h] [rbp-40h]
  unsigned int v43; // [rsp+E8h] [rbp+30h]
  int *v44; // [rsp+F0h] [rbp+38h]

  v8 = a2;
  Size = a6;
  v37 = &a7[Size];
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
  {
    LOBYTE(a2) = 0;
    v9 = 1;
  }
  else
  {
    v9 = 1;
    LOBYTE(a2) = 1;
  }
  v10 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v10,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      133,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v38, (struct CInpLockGuard *)(this + 4));
  if ( a6 != a4 * a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5416);
  if ( a6 < a4 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        7,
        134,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v11 && !v9 )
      goto LABEL_69;
    v15 = 135;
LABEL_68:
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      v14->AttachedDevice,
      v11,
      v13,
      v14->DeviceExtension,
      5,
      7,
      v15,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
LABEL_69:
    if ( !v39 )
      CInpLockGuard::UnLock(v38);
    return 0LL;
  }
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v12, v8);
  v17 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        7,
        136,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v11 && !v9 )
      goto LABEL_69;
    v15 = 137;
    goto LABEL_68;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(
                                                   this,
                                                   *((_DWORD *)NonConstMsgData + 7),
                                                   4);
  v19 = FrameById;
  if ( !FrameById )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        7,
        138,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v11 && !v9 )
      goto LABEL_69;
    v15 = 139;
    goto LABEL_68;
  }
  if ( *((_DWORD *)v17 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5444);
  v21 = *((_QWORD *)v19 + 30) + 480LL * *((unsigned int *)v17 + 8);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v21) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5446);
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v21);
  v43 = HistoryCount;
  if ( a3 == 1 || (PointerRawData = 0, a3 == HistoryCount) )
    PointerRawData = 1;
  if ( !PointerRawData )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v23) = 0;
    }
    v24 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_LL(
        WPP_GLOBAL_Control->AttachedDevice,
        v23,
        (_DWORD)v24,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        v34,
        140,
        v35,
        a3,
        HistoryCount);
    }
  }
  if ( *((void **)v19 + 8) == TouchExtensibility::hDeviceUser )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v23) = 0;
    }
    v26 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v23,
        (_DWORD)v26,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        7,
        141,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    memset(a7, 0, Size * 4);
    v27 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v23) = 0;
    }
    v24 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v23 && !v9 )
      goto LABEL_158;
    v28 = 143;
  }
  else
  {
    if ( PointerRawData )
    {
      PointerRawData = CTouchProcessor::GetPointerRawData(
                         (PERESOURCE *)this,
                         v19,
                         *(_DWORD *)(v21 + 156),
                         *(_WORD *)(v21 + 162),
                         a4,
                         a5,
                         a7);
      if ( !PointerRawData )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v23) = 0;
        }
        v24 = &WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v23,
            (_DWORD)v24,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            7,
            144,
            (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
        }
      }
      if ( PointerRawData )
      {
        v44 = &a7[a4];
        if ( a3 > 1 )
        {
          v29 = *(_DWORD *)(v21 + 344);
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, v19);
          do
          {
            if ( !PreviousFrameByDevice || v43 <= 1 )
              break;
            if ( v29 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5515);
            v31 = *((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v29;
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v31) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5517);
            v32 = a4;
            if ( &v44[a4] > v37 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
                || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v32) = 0;
              }
              v33 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v32,
                  (_DWORD)v33,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  3,
                  7,
                  145,
                  (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
              }
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = CTouchProcessor::GetPointerRawData(
                                 (PERESOURCE *)this,
                                 PreviousFrameByDevice,
                                 *(_DWORD *)(v31 + 156),
                                 *(_WORD *)(v31 + 162),
                                 a4,
                                 a5,
                                 v44);
              if ( PointerRawData )
                v44 += a4;
            }
            if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v31) != v43 - 1 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5539);
            v43 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v31);
            v29 = *(_DWORD *)(v31 + 344);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                      (CTouchProcessor *)this,
                                      PreviousFrameByDevice);
          }
          while ( PointerRawData );
        }
      }
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v23) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v24) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v24) = 0;
    }
    if ( (_BYTE)v23 || (_BYTE)v24 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v23,
        (_DWORD)v24,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        7,
        146,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    v27 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v23) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v23 && !v9 )
      goto LABEL_158;
    v28 = 147;
  }
  LOBYTE(v24) = v9;
  WPP_RECORDER_AND_TRACE_SF_(
    v27->AttachedDevice,
    v23,
    (_DWORD)v24,
    v27->DeviceExtension,
    5,
    7,
    v28,
    (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
LABEL_158:
  if ( !v39 )
    CInpLockGuard::UnLock(v38);
  return PointerRawData;
}
