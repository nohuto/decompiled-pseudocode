/*
 * XREFs of ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C01F56D4
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C01FE0EC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01F375C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C0200BB4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C02070EC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x1C0209608 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 */

void __fastcall CTouchProcessor::GenerateWindowLeaveMessage(
        __int64 a1,
        unsigned __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  CInputDest *v8; // r13
  unsigned __int64 v9; // r15
  CTouchProcessor *v11; // rcx
  char v12; // bl
  struct CPointerMsgData *NonConstMsgData; // rax
  int v14; // edx
  int v15; // r8d
  struct CPointerMsgData *v16; // rdi
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rax
  __int64 v20; // rbp
  CPointerInfoNode *v21; // rsi
  int v22; // edx
  int v23; // r8d
  int v24; // [rsp+28h] [rbp-D0h]
  int v25; // [rsp+38h] [rbp-C0h]
  _BYTE v26[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v27; // [rsp+C1h] [rbp-37h]
  __int16 v28; // [rsp+C5h] [rbp-33h]
  char v29; // [rsp+C7h] [rbp-31h]

  v8 = a3;
  v9 = a2;
  v11 = (CTouchProcessor *)WPP_GLOBAL_Control;
  v12 = 1;
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
      209,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  if ( *(struct _KTHREAD **)(a1 + 40) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7215);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, v9);
  v16 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v19 = CTouchProcessor::ReferenceFrame(a1, *((unsigned int *)NonConstMsgData + 7));
    v20 = v19;
    if ( v19 )
    {
      if ( *((_DWORD *)v16 + 8) >= *(_DWORD *)(v19 + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7233);
      v21 = (CPointerInfoNode *)(*(_QWORD *)(v20 + 240) + 480LL * *((unsigned int *)v16 + 8));
      if ( !(unsigned int)CPointerInfoNode::IsValid(v21) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7235);
      if ( *((_WORD *)v21 + 86) != *((_WORD *)v16 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7236);
      if ( !a5 )
      {
        v27 = 0;
        v28 = 0;
        v29 = 0;
        memset(v26, 0, sizeof(v26));
        if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                              a1,
                              (__int64)v21,
                              v9,
                              (const struct CPointerInputFrame *)v20,
                              0x24Au,
                              a4,
                              a6,
                              a7,
                              (CInputDest *)v26) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v22) = 0;
          }
          if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_HL(
              WPP_GLOBAL_Control->AttachedDevice,
              v22,
              v23,
              214,
              2,
              v24,
              214,
              v25,
              *((_WORD *)v16 + 8),
              *((_WORD *)v21 + 80));
          }
        }
      }
      CTouchProcessor::UnreferenceFrame(a1, v20);
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v12 = 0;
      if ( (_BYTE)v14 || v12 )
      {
        v18 = 215;
        goto LABEL_74;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          7,
          212,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      }
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v12 = 0;
      if ( (_BYTE)v14 || v12 )
      {
        v18 = 213;
        goto LABEL_74;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        7,
        210,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v12 = 0;
    if ( (_BYTE)v14 || v12 )
    {
      v18 = 211;
LABEL_74:
      LOBYTE(v15) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        v17->AttachedDevice,
        v14,
        v15,
        v17->DeviceExtension,
        5,
        7,
        v18,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
  }
  CInputDest::SetEmpty(v8);
}
