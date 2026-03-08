/*
 * XREFs of ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C00F2F30
 * Callers:
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F64F0 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C01F7250 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C01F7868 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01F81F0 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C00F2294 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z @ 0x1C01F878C (-GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z @ 0x1C01F92E8 (-GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z.c)
 *     ?GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x1C01FA1F0 (-GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     ApiSetPointerInfoCopyOutHelperInternal @ 0x1C0245808 (ApiSetPointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall CTouchProcessor::PointerInfoCopyOutHelper(
        PERESOURCE *this,
        struct CPointerInfoNode *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  int v7; // ebp
  unsigned int v9; // esi
  int v10; // ebx

  v7 = (int)a3;
  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13926);
  v9 = ApiSetPointerInfoCopyOutHelperInternal((int)a2 + 160, *(_QWORD *)((char *)a2 + 148), v7, a4, a5, (__int64)a6);
  if ( v9 )
  {
    v10 = a4 - 2;
    if ( v10 )
    {
      if ( v10 == 1 )
        InputTraceLogging::Pointer::GetPointerPenInfo(a6);
      else
        InputTraceLogging::Pointer::GetPointerInfo(a6);
    }
    else
    {
      InputTraceLogging::Pointer::GetPointerTouchInfo(a6);
    }
  }
  return v9;
}
