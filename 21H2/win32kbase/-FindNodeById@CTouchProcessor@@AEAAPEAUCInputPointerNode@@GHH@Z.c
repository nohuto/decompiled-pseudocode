/*
 * XREFs of ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2
 * Callers:
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01BD784 (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x1C01BFD54 (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C01C04E0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C01C35F4 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 *     ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C01C4010 (-DelegateCapture@CTouchProcessor@@QEAA-AUtagINPUTDEST@@GKH@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C5AE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z @ 0x1C01C9360 (-GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C01C9470 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01CBDE4 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C01CC070 (-GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z.c)
 *     ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C01CD420 (-GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z.c)
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C01CF3B4 (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01D3B64 (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z @ 0x1C01D5440 (-SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z.c)
 *     ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C01D7110 (-SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C01D71B0 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ?SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z @ 0x1C01D7200 (-SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z.c)
 *     ?ThreadHasPrimaryCaptureExternal@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z @ 0x1C01D7D60 (-ThreadHasPrimaryCaptureExternal@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01D8E38 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01BE95C (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::FindNodeById(
        CTouchProcessor *this,
        unsigned __int16 a2,
        int a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD **v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  bool v14; // zf
  bool v15; // zf

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = (_QWORD **)((char *)this + (a3 != 0 ? 80LL : 64LL));
  v12 = *v11;
  if ( *v11 == v11 )
    return 0LL;
  do
  {
    v13 = v12 - 2;
    if ( !a3 )
      v13 = v12;
    if ( a4 )
      v14 = *((_WORD *)v13 + 17) == a2;
    else
      v14 = *((_WORD *)v13 + 16) == a2;
    if ( v14 )
      break;
    v12 = (_QWORD *)*v12;
  }
  while ( v12 != v11 );
  if ( v12 == v11 )
    return 0LL;
  if ( a4 )
    v15 = *((_WORD *)v13 + 17) == a2;
  else
    v15 = *((_WORD *)v13 + 16) == a2;
  if ( !v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8, v10);
  return (struct CInputPointerNode *)v13;
}
