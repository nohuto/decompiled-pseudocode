/*
 * XREFs of ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C01C8518
 * Callers:
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01D2B28 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01C6D20 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C01DA994 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedReleasedMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 **a7)
{
  __int64 v8; // rdi
  __int64 v9; // rbp
  PDEVICE_OBJECT v11; // rcx
  char v12; // bl
  __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  CInputDest *v15; // rax
  int v16; // edx
  int v17; // r8d
  const int *v18; // r8
  int v19; // [rsp+28h] [rbp-C0h]
  int v20; // [rsp+38h] [rbp-B0h]
  _BYTE v21[128]; // [rsp+50h] [rbp-98h] BYREF

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
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      224,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v13 = *(_QWORD *)(v9 + 240) + 480 * v8;
  v14 = (*(_DWORD *)(v13 + 168) != 5) - 1LL;
  if ( (*(_DWORD *)(v13 + 180) & 0x40000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, a2, a3);
  v15 = CInputDest::CInputDest((CInputDest *)v21, a7);
  if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                        a1,
                        v13,
                        v14,
                        (const struct CPointerInputFrame *)v9,
                        0x253u,
                        a4,
                        a5,
                        a6,
                        v15) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_LL(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        v19,
        225,
        v20,
        *(_DWORD *)(v13 + 172),
        *(_WORD *)(v13 + 160));
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( (_BYTE)v16 || v12 )
  {
    v18 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
    LOBYTE(v18) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      (_DWORD)v18,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      226,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  CInputDest::SetEmpty((CInputDest *)a7);
}
