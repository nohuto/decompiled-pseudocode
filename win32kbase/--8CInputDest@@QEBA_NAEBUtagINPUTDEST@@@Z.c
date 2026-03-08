/*
 * XREFs of ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C007A190
 * Callers:
 *     HandleInputDestDestruction @ 0x1C0079C40 (HandleInputDestDestruction.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C007D1C4 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C01E3834 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01FE86C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0201850 (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C02034BC (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     IsCapturedBySystem @ 0x1C0217F70 (IsCapturedBySystem.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C022DAB8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C023042C (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputDest::operator==(int *a1, __int64 a2)
{
  int v4; // ecx
  int v5; // eax
  char v6; // cl
  bool v7; // zf

  v4 = *a1;
  if ( v4 || *(_DWORD *)a2 )
  {
    v5 = v4 & *(_DWORD *)a2;
    if ( !v5 )
      return v5;
    v6 = 1;
    if ( (v5 & 1) != 0 )
    {
      if ( a1[2] != *(_DWORD *)(a2 + 8) )
        goto LABEL_10;
      v7 = a1[3] == *(_DWORD *)(a2 + 12);
LABEL_9:
      if ( v7 )
      {
LABEL_11:
        LOBYTE(v5) = v6;
        return v5;
      }
LABEL_10:
      v6 = 0;
      goto LABEL_11;
    }
    if ( (v5 & 2) != 0 )
    {
      if ( a1[8] != *(_DWORD *)(a2 + 32) || a1[9] != *(_DWORD *)(a2 + 36) )
        goto LABEL_10;
      v7 = *((_QWORD *)a1 + 3) == *(_QWORD *)(a2 + 24);
      goto LABEL_9;
    }
    if ( (v5 & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 461LL);
    LOBYTE(v5) = *((_QWORD *)a1 + 10) == *(_QWORD *)(a2 + 80);
  }
  else
  {
    LOBYTE(v5) = 1;
  }
  return v5;
}
