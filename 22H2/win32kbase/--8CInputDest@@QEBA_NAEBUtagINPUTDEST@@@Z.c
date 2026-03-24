/*
 * XREFs of ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0043D5C
 * Callers:
 *     HandleInputDestDestruction @ 0x1C0043C1C (HandleInputDestDestruction.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0045EF8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0072BC8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C009F36C (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     IsCapturedBySystem @ 0x1C00B70E0 (IsCapturedBySystem.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0197C28 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0199240 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C019B2E4 (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C019C77C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z @ 0x1C01A3530 (-HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C16DC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputDest::operator==(int *a1, __int64 a2)
{
  int v4; // ecx
  int v5; // eax
  char v6; // cl
  bool v7; // zf

  v4 = *a1;
  if ( !v4 && !*(_DWORD *)a2 )
  {
    LOBYTE(v5) = 1;
    return v5;
  }
  v5 = v4 & *(_DWORD *)a2;
  if ( v5 )
  {
    v6 = 1;
    if ( (v5 & 1) != 0 )
    {
      if ( a1[2] != *(_DWORD *)(a2 + 8) )
        goto LABEL_13;
      v7 = a1[3] == *(_DWORD *)(a2 + 12);
    }
    else
    {
      if ( (v5 & 2) == 0 )
      {
        if ( (v5 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 460LL);
        LOBYTE(v5) = *((_QWORD *)a1 + 10) == *(_QWORD *)(a2 + 80);
        return v5;
      }
      if ( a1[8] != *(_DWORD *)(a2 + 32) || a1[9] != *(_DWORD *)(a2 + 36) )
        goto LABEL_13;
      v7 = *((_QWORD *)a1 + 3) == *(_QWORD *)(a2 + 24);
    }
    if ( v7 )
    {
LABEL_14:
      LOBYTE(v5) = v6;
      return v5;
    }
LABEL_13:
    v6 = 0;
    goto LABEL_14;
  }
  return v5;
}
