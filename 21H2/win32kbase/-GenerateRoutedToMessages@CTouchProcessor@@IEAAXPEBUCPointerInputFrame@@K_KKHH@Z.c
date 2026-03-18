/*
 * XREFs of ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C8770
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01C6D20 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01D3B64 (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C01DA994 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedToMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v8; // rdi
  const struct CPointerInputFrame *v9; // rsi
  PDEVICE_OBJECT v11; // rcx
  char v12; // bl
  __int64 v13; // rdi
  int v14; // edx
  int v15; // r8d
  CInputDest *v16; // rax
  const int *v17; // r8
  int v18; // [rsp+28h] [rbp-C0h]
  int v19; // [rsp+38h] [rbp-B0h]
  _BYTE v20[113]; // [rsp+50h] [rbp-98h] BYREF
  int v21; // [rsp+C1h] [rbp-27h]
  __int16 v22; // [rsp+C5h] [rbp-23h]
  char v23; // [rsp+C7h] [rbp-21h]

  v8 = (unsigned int)a3;
  v9 = a2;
  v11 = WPP_GLOBAL_Control;
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
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      214,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v13 = *((_QWORD *)v9 + 30) + 480 * v8;
  if ( (*(_DWORD *)v13 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)(v13 + 180) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, a2, a3);
    v21 = 0;
    v22 = 0;
    v23 = 0;
    memset(v20, 0, sizeof(v20));
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                          (__int64)this,
                          v13,
                          a4,
                          v9,
                          0x251u,
                          a5,
                          a6,
                          a7,
                          (CInputDest *)v20) )
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
        WPP_RECORDER_AND_TRACE_SF_LL(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          v18,
          215,
          v19,
          *(_DWORD *)(v13 + 172),
          *(_WORD *)(v13 + 160));
      }
    }
    v16 = CInputDest::CInputDest((CInputDest *)v20, (__int64 **)(v13 + 352));
    CTouchProcessor::RemoveRoutedAwayTarget(this, *(unsigned __int16 *)(v13 + 172), v16);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( (_BYTE)a2 || v12 )
  {
    v17 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
    LOBYTE(v17) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)v17,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      216,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
}
