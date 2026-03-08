/*
 * XREFs of ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00F4962
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C007A654 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C007B668 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C022D3A0 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C022D62C (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 */

void __fastcall CMouseProcessor::GetMouseCoord(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT *a3,
        struct _SUBPIXELS *a4)
{
  unsigned int v6; // ebp
  BOOL v9; // r10d
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx

  *(_QWORD *)a4 = 0LL;
  v6 = *((unsigned __int16 *)a2 + 1);
  v9 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16);
  v10 = v9 | 2;
  if ( (v6 & 0x80u) == 0 )
    v10 = v9;
  if ( (v10 & 1) == 0 && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2696);
  v11 = *((unsigned int *)a2 + 5);
  v12 = *((_QWORD *)a2 + 6);
  v13 = *((unsigned int *)a2 + 4);
  v14 = *((unsigned int *)a2 + 3);
  if ( (v6 & 1) != 0 )
    CMouseProcessor::GetMouseCoordinateAbsolute(this, v14, v13, v6, a3, a4, v12, v11, v10);
  else
    CMouseProcessor::GetMouseCoordinateRelative(this, v14, v13, a3, a4, v12, v11, v10);
}
