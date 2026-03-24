/*
 * XREFs of ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C019A5AC
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0189420 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0189AB0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0190000 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019BBCC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0044A10 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0072CC0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0191054 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0197B20 (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 */

void __fastcall CTouchProcessor::ProcessRoutedAwayList(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        int a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v10; // ebx
  __int64 **v11; // rax
  _QWORD *v12; // rax
  __int64 *v13[16]; // [rsp+40h] [rbp-118h] BYREF
  _BYTE v14[128]; // [rsp+C0h] [rbp-98h] BYREF

  if ( a3 && !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9894);
  CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v13, a2);
  while ( LODWORD(v13[0]) )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        v10 = *(_DWORD *)(*((_QWORD *)a4 + 19) + 312LL);
        v11 = (__int64 **)CInputDest::CInputDest((CInputDest *)v14, v13);
        CTouchProcessor::GenerateRoutedReleasedMessage(
          (CTouchProcessor *)this,
          (__int64)a4,
          a5,
          a6,
          -__CFSHR__(v10, 4),
          -__CFSHR__(v10, 5),
          v11);
      }
    }
    v12 = (_QWORD *)CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v14, a2);
    CInputDest::operator=((__int64)v13, v12);
    CInputDest::SetEmpty((CInputDest *)v14);
  }
  CInputDest::SetEmpty((CInputDest *)v13);
}
