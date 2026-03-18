/*
 * XREFs of ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0
 * Callers:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0033FF0 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C003404C (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00343BC (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C00415CC (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x1C004173C (-GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0041A94 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1C0041C38 (-HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z.c)
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1C00CFE28 (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C01BDF70 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C01C5834 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01CFD24 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01D012C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01FC54C (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputDest::GetQueue(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    if ( a2 )
    {
      v4 = (unsigned int)(a2 - 1);
      if ( (_DWORD)v4 )
      {
        if ( (_DWORD)v4 == 1 )
          goto LABEL_5;
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4, a3);
      }
    }
    else if ( *(_DWORD *)(a1 + 92) == 2 )
    {
LABEL_5:
      if ( *(_DWORD *)(a1 + 92) )
      {
        v5 = *(_QWORD *)(a1 + 80);
        if ( v5 )
          v6 = *(_QWORD *)(v5 + 16);
        else
          v6 = 0LL;
        if ( v6 )
          return *(_QWORD *)(v6 + 432);
      }
    }
    return v3;
  }
  return 0LL;
}
