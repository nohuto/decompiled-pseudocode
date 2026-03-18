/*
 * XREFs of ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C00E4A70
 * Callers:
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01C76D0 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C01C8440 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C01C8A58 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01C93E0 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C00E3DA4 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z @ 0x1C01C997C (-GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z @ 0x1C01CA4D8 (-GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z.c)
 *     ?GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x1C01CB3F4 (-GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::PointerInfoCopyOutHelper(
        PERESOURCE *this,
        struct CPointerInfoNode *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  unsigned int v9; // edi
  __int64 v10; // rbx
  unsigned int v11; // esi

  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13835);
  v9 = 0;
  v10 = *(_QWORD *)((char *)a2 + 148);
  if ( qword_1C0296A50 )
  {
    if ( (int)qword_1C0296A50() >= 0 )
    {
      if ( qword_1C0296A58 )
      {
        v9 = qword_1C0296A58((char *)a2 + 160, v10, a3, a4, a5, a6);
        if ( v9 )
        {
          v11 = a4 - 2;
          if ( v11 )
          {
            if ( v11 == 1 )
              InputTraceLogging::Pointer::GetPointerPenInfo(a6);
            else
              InputTraceLogging::Pointer::GetPointerInfo(a6);
          }
          else
          {
            InputTraceLogging::Pointer::GetPointerTouchInfo(a6);
          }
        }
      }
    }
  }
  return v9;
}
