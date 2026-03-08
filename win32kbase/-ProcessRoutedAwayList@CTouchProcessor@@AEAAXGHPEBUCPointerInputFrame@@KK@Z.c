/*
 * XREFs of ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C02004C4
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00C9900 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01EB07C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C0202354 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C007E768 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01E31F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C01F51AC (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C01FCCDC (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 */

void __fastcall CTouchProcessor::ProcessRoutedAwayList(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        int a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 **v10; // rax
  _QWORD *v11; // rax
  __int64 *v12[16]; // [rsp+40h] [rbp-118h] BYREF
  _BYTE v13[128]; // [rsp+C0h] [rbp-98h] BYREF

  if ( a3 && !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10590);
  CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v12, a2);
  while ( LODWORD(v12[0]) )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        v10 = (__int64 **)CInputDest::CInputDest((CInputDest *)v13, v12);
        CTouchProcessor::GenerateRoutedReleasedMessage(
          (__int64)this,
          (__int64)a4,
          a5,
          a6,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a4 + 32) + 360LL), 4),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a4 + 32) + 360LL), 5),
          v10);
      }
    }
    v11 = (_QWORD *)CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v13, a2);
    CInputDest::operator=((__int64)v12, v11);
    CInputDest::SetEmpty((CInputDest *)v13);
  }
  CInputDest::SetEmpty((CInputDest *)v12);
}
