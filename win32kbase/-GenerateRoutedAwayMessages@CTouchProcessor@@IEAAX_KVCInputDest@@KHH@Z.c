/*
 * XREFs of ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C01F4CA8
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C01FE0EC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01E31F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01E8A00 (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01F375C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C0200BB4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C02070EC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x1C0209608 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedAwayMessages(
        struct _KTHREAD **a1,
        unsigned __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  CInputDest *v7; // r13
  unsigned __int64 v8; // r15
  CTouchProcessor *v10; // rcx
  char v11; // bl
  struct CPointerMsgData *NonConstMsgData; // rax
  int v13; // edx
  int v14; // r8d
  struct CPointerMsgData *v15; // rsi
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdi
  int v21; // edx
  int v22; // r8d
  CInputDest *v23; // rax
  int v24; // [rsp+28h] [rbp-140h]
  int v25; // [rsp+38h] [rbp-130h]
  _BYTE v26[113]; // [rsp+50h] [rbp-118h] BYREF
  int v27; // [rsp+C1h] [rbp-A7h]
  __int16 v28; // [rsp+C5h] [rbp-A3h]
  char v29; // [rsp+C7h] [rbp-A1h]
  _BYTE v30[120]; // [rsp+C8h] [rbp-A0h] BYREF

  v7 = a3;
  v8 = a2;
  v10 = (CTouchProcessor *)WPP_GLOBAL_Control;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      225,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  if ( a1[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7521);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, v8);
  v15 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v18 = CTouchProcessor::ReferenceFrame(a1, *((unsigned int *)NonConstMsgData + 7));
    v19 = v18;
    if ( v18 )
    {
      if ( *((_DWORD *)v15 + 8) >= *(_DWORD *)(v18 + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7539);
      v20 = *(_QWORD *)(v19 + 240) + 480LL * *((unsigned int *)v15 + 8);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v20) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7541);
      if ( *(_WORD *)(v20 + 172) != *((_WORD *)v15 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7542);
      v27 = 0;
      v28 = 0;
      v29 = 0;
      memset(v26, 0, sizeof(v26));
      if ( (unsigned int)CTouchProcessor::GenerateMessage(
                           (__int64)a1,
                           v20,
                           v8,
                           (const struct CPointerInputFrame *)v19,
                           0x252u,
                           a4,
                           a5,
                           a6,
                           (CInputDest *)v26) )
      {
        v23 = CInputDest::CInputDest((CInputDest *)v30, (__int64 **)(v20 + 352));
        CTouchProcessor::AddRoutedAwayTarget(a1, *(_WORD *)(v20 + 172), v23);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v21) = 0;
        }
        if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_HL(
            WPP_GLOBAL_Control->AttachedDevice,
            v21,
            v22,
            230,
            2,
            v24,
            230,
            v25,
            *((_WORD *)v15 + 8),
            *(_WORD *)(v20 + 160));
        }
      }
      CTouchProcessor::UnreferenceFrame(a1, v19);
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v11 = 0;
      if ( (_BYTE)v13 || v11 )
      {
        v17 = 231;
        goto LABEL_74;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v14,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          228,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      }
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v11 = 0;
      if ( (_BYTE)v13 || v11 )
      {
        v17 = 229;
        goto LABEL_74;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        7,
        226,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v11 = 0;
    if ( (_BYTE)v13 || v11 )
    {
      v17 = 227;
LABEL_74:
      LOBYTE(v14) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        v16->AttachedDevice,
        v13,
        v14,
        v16->DeviceExtension,
        5,
        7,
        v17,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
  }
  CInputDest::SetEmpty(v7);
}
