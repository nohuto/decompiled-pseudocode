/*
 * XREFs of ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01F7A00
 * Callers:
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C01F7F94 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00C9BF0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetPointerInfoSize @ 0x1C00EEA9A (GetPointerInfoSize.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C00F2568 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C01E8508 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01F155C (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C01F7868 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01F81F0 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C01FAD18 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C01FB96C (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameDataWithHistory(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned __int8 *a8)
{
  unsigned int v10; // r12d
  int v11; // edx
  __int64 PointerInfoSize; // rsi
  int v13; // r8d
  char v14; // bl
  CTouchProcessor *v15; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v17; // edx
  struct CPointerMsgData *v18; // rdi
  PDEVICE_OBJECT v19; // rcx
  __int16 v20; // ax
  void *v21; // r8
  const struct CPointerInputFrame *FrameById; // rax
  const struct CPointerInputFrame *v23; // r14
  CPointerInfoNode *v24; // rbp
  unsigned int PointerHistoryFrameData; // edi
  unsigned int v26; // r13d
  unsigned int PointerFrameData; // eax
  int v28; // edx
  unsigned int v29; // r15d
  unsigned __int64 v30; // rsi
  unsigned int HistoryCount; // eax
  unsigned int v32; // ebp
  unsigned int v33; // r15d
  const struct CPointerInputFrame *PreviousFrameByDevice; // r14
  CPointerInfoNode *v35; // rbp
  unsigned int v36; // eax
  void *v37; // r8
  __int16 v39; // [rsp+30h] [rbp-78h]
  unsigned int v40[4]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 *v41; // [rsp+50h] [rbp-58h]
  CInpLockGuard *v42; // [rsp+58h] [rbp-50h] BYREF
  int v43; // [rsp+60h] [rbp-48h]

  v41 = a8;
  v40[0] = 0;
  v10 = a5;
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v14 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v13) = 0;
  }
  if ( (_BYTE)v11 || (_BYTE)v13 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v13,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      128,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v42, (struct CInpLockGuard *)(this + 4), 1);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v15, a2);
  v18 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v17) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v14 = 0;
    if ( !(_BYTE)v17 && !v14 )
      goto LABEL_50;
    v20 = 129;
    goto LABEL_22;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(
                                                   this,
                                                   *((_DWORD *)NonConstMsgData + 7),
                                                   4);
  v23 = FrameById;
  if ( !FrameById )
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v17) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v14 = 0;
    if ( !(_BYTE)v17 && !v14 )
      goto LABEL_50;
    v20 = 130;
LABEL_22:
    v21 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    v39 = v20;
LABEL_49:
    LOBYTE(v21) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      v19->AttachedDevice,
      v17,
      (_DWORD)v21,
      v19->DeviceExtension,
      5,
      7,
      v39,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
LABEL_50:
    PointerHistoryFrameData = 0;
    goto LABEL_84;
  }
  if ( *((_DWORD *)v18 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5281);
  v24 = (CPointerInfoNode *)(*((_QWORD *)v23 + 30) + 480LL * *((unsigned int *)v18 + 8));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5283);
  if ( (unsigned int)CPointerInfoNode::IsFullyReleased(v24) )
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v17) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v14 = 0;
    if ( !(_BYTE)v17 && !v14 )
      goto LABEL_50;
    v21 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    v39 = 131;
    goto LABEL_49;
  }
  v26 = 1;
  PointerFrameData = CTouchProcessor::GetPointerFrameData(
                       (PERESOURCE *)this,
                       v23,
                       v24,
                       a3,
                       a5,
                       v40,
                       (struct tagPOINTER_INFO *)a8);
  v28 = 0;
  PointerHistoryFrameData = PointerFrameData;
  if ( PointerFrameData )
  {
    v29 = v40[0];
    v30 = v40[0] * PointerInfoSize;
    if ( v30 > 0xFFFFFFFF )
    {
      PointerHistoryFrameData = 0;
    }
    else
    {
      PointerHistoryFrameData = 1;
      if ( a5 >= (unsigned int)v30 )
      {
        if ( !(_DWORD)v30 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5317);
          v28 = 0;
        }
        v41 = &a8[(unsigned int)v30];
        v10 = a5 - v30;
      }
      if ( a4 )
      {
        HistoryCount = CPointerInfoNode::GetHistoryCount(v24);
        v32 = *((_DWORD *)v24 + 86);
        v33 = HistoryCount;
        PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, v23);
        while ( PreviousFrameByDevice )
        {
          if ( v33 > 1 )
          {
            if ( v32 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5334);
            v35 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v32);
            if ( !(unsigned int)CPointerInfoNode::IsValid(v35) )
            {
              v40[1] = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5336);
            }
            ++v26;
            if ( v10 >= (unsigned int)v30 )
            {
              PointerHistoryFrameData = CTouchProcessor::GetPointerHistoryFrameData(
                                          (CTouchProcessor *)this,
                                          PreviousFrameByDevice,
                                          a3,
                                          v40[0],
                                          v30,
                                          a8,
                                          v41);
              if ( PointerHistoryFrameData )
              {
                v41 += (unsigned int)v30;
                v10 -= v30;
              }
            }
            if ( (unsigned int)CPointerInfoNode::GetHistoryCount(v35) != v33 - 1 )
            {
              v40[2] = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5356);
            }
            v36 = CPointerInfoNode::GetHistoryCount(v35);
            v32 = *((_DWORD *)v35 + 86);
            v33 = v36;
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                      (CTouchProcessor *)this,
                                      PreviousFrameByDevice);
            if ( PointerHistoryFrameData )
              continue;
          }
          if ( !PointerHistoryFrameData )
            goto LABEL_74;
          break;
        }
        v29 = v40[0];
      }
      *a6 = v26;
      *a7 = v29;
    }
  }
LABEL_74:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v28) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v28) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v14 = 0;
  if ( (_BYTE)v28 || v14 )
  {
    v37 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    LOBYTE(v37) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v28,
      (_DWORD)v37,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      132,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
LABEL_84:
  if ( !v43 )
    CInpLockGuard::UnLock(v42);
  return PointerHistoryFrameData;
}
