/*
 * XREFs of ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8878
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01BD900 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01BF98C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C649C (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C01D0660 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01D866C (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8A20 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8B80 (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C01D8CE0 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C01D9DC8 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C00E7E48 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C01C6030 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Lq @ 0x1C01DAB60 (WPP_RECORDER_AND_TRACE_SF_Lq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UnreferenceMsgData(PDEVICE_OBJECT a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  struct _KTHREAD **v4; // rsi
  __int64 v5; // rbp
  int v6; // eax
  char v7; // al
  int v8; // r9d
  int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+28h] [rbp-40h]
  int v11; // [rsp+38h] [rbp-30h]

  v3 = a2;
  v4 = (struct _KTHREAD **)a1;
  v5 = (int)a3;
  if ( a1->Timer != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_DWORD *)(v3 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 24));
  if ( (_DWORD)v5 == 1 )
  {
    v6 = *(_DWORD *)(v3 + 36);
    if ( (v6 & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      v6 = *(_DWORD *)(v3 + 36);
      if ( (v6 & 0x40) == 0 )
      {
        a1 = WPP_GLOBAL_Control;
        LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            a2,
            a3,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            7,
            284,
            (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
            v3);
        v6 = *(_DWORD *)(v3 + 36);
      }
    }
    *(_DWORD *)(v3 + 36) = v6 & 0xFFFFFFBF;
  }
  if ( (int)v5 > 8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = *(_BYTE *)(v5 + v3 + 48);
  if ( !v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v7 = *(_BYTE *)(v5 + v3 + 48);
    if ( !v7 )
    {
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_Lq(WPP_GLOBAL_Control->AttachedDevice, a2, a3, v8, v9, v10, 285, v11, v5, v3);
      v7 = *(_BYTE *)(v5 + v3 + 48);
    }
  }
  *(_BYTE *)(v5 + v3 + 48) = v7 - 1;
  if ( !*(_DWORD *)(v3 + 24) )
  {
    if ( (*(_DWORD *)(v3 + 36) & 0x20) == 0 )
      CTouchProcessor::FreePointerInfoNode(v4, a2, *(unsigned int *)(v3 + 28), *(_DWORD *)(v3 + 32));
    CTouchProcessor::FreeMsgData(v4, (_DWORD *)v3, a3);
  }
}
