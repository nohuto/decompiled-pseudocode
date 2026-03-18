/*
 * XREFs of ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01D2B28
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01BF98C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C01C04E0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C01C8518 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C01CF3B4 (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessRoutedAwayList(
        CTouchProcessor *this,
        __int64 a2,
        __int64 a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v7; // esi
  unsigned __int16 v8; // bp
  __int64 **v10; // rax
  _QWORD *v11; // rax
  __int64 *v12[16]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v13[128]; // [rsp+C0h] [rbp-88h] BYREF

  v7 = a3;
  v8 = a2;
  if ( (_DWORD)a3 && !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v12, v8);
  while ( LODWORD(v12[0]) )
  {
    if ( v7 )
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
    v11 = (_QWORD *)CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v13, v8);
    CInputDest::operator=((__int64)v12, v11);
    CInputDest::SetEmpty((CInputDest *)v13);
  }
  CInputDest::SetEmpty((CInputDest *)v12);
}
