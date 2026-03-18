/*
 * XREFs of ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C0042514
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00364E4 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FBCD8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C0041B14 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C0041B3C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00423CC (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1C00549D4 (-IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01FAA48 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z @ 0x1C01FAD90 (-InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::InformUMObservers(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  __int64 v8; // r8
  __int64 ExtraInfoForHook; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  unsigned int WheelMessage; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD v19[10]; // [rsp+20h] [rbp-50h] BYREF

  if ( CMasterInputThread::IsInputThreadDesktopActive(this) && (*((_DWORD *)this + 2) & 6) != 0 )
  {
    memset(v19, 0, 0x48uLL);
    v8 = *((_QWORD *)a2 + 1);
    LODWORD(v19[0]) = 72;
    v19[1] = *(_QWORD *)(v8 + 88);
    v19[3] = *a3;
    *(struct tagPOINT *)((char *)&v19[7] + 4) = *a4;
    ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
    v12 = *((_DWORD *)a2 + 4);
    v19[5] = ExtraInfoForHook;
    LODWORD(v19[6]) = 4;
    v13 = v12 - 1;
    if ( !v13 )
    {
      LODWORD(v19[7]) = 0;
      LODWORD(v19[4]) = 512;
      goto LABEL_12;
    }
    v14 = (unsigned int)(v13 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v10, v11);
LABEL_12:
        LODWORD(v19[2]) ^= (LOBYTE(v19[2]) ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) >> 7)) & 1;
        InputTraceLogging::Mouse::InformUMObservers((const struct _MIT_MOUSE_INPUT_OBSERVER_PACKET *)v19);
        InputExtensibilityCallout::CoreMsgSendMessage(v18, 12);
        return;
      }
      LODWORD(v19[7]) = *(unsigned __int16 *)(v11 + 30);
      WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
    }
    else
    {
      LODWORD(v19[7]) = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2, v10, v11);
      WheelMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2, v16, v17);
    }
    LODWORD(v19[4]) = WheelMessage;
    goto LABEL_12;
  }
}
