/*
 * XREFs of ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0191124
 * Callers:
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C019A67C (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0072210 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018FC3C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01A15E0 (WPP_RECORDER_SF_LL.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedReleasedMessage(
        CTouchProcessor *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 **a7)
{
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v11; // rbx
  _BOOL8 v12; // rdi
  CInputDest *v13; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // [rsp+20h] [rbp-D8h]
  _BYTE v18[128]; // [rsp+50h] [rbp-A8h] BYREF

  v8 = a3;
  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      226,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  v11 = *(_QWORD *)(v9 + 136) + 480 * v8;
  v12 = *(_DWORD *)(v11 + 168) != 5;
  if ( (*(_DWORD *)(v11 + 180) & 0x40000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6964);
  v13 = CInputDest::CInputDest((CInputDest *)v18, a7);
  if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                        a1,
                        v11,
                        v12 - 1,
                        (const struct CPointerInputFrame *)v9,
                        0x253u,
                        a4,
                        a5,
                        a6,
                        v13) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_LL(v15, v14, v16, 227, v17, *(_DWORD *)(v11 + 172), *(_WORD *)(v11 + 160));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      7,
      228,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
LABEL_12:
  CInputDest::SetEmpty((CInputDest *)a7);
}
