/*
 * XREFs of ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C01F821C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00557D8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9484 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FA328 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     SendMessageTo @ 0x1C006A100 (SendMessageTo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C01F7048 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C01F70AC (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C01F72C8 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01F7A00 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z @ 0x1C01F835C (-InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z.c)
 *     ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1C01FC8F4 (-IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ.c)
 */

void __fastcall CMouseProcessor::InformUMObservers(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 ExtraInfoForHook; // rax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int WheelMessage; // eax
  __int64 v16; // r9
  _QWORD v17[10]; // [rsp+30h] [rbp-50h] BYREF

  if ( CMasterInputThread::IsInputThreadDesktopActive(this) && (*((_DWORD *)this + 2) & 6) != 0 )
  {
    memset(v17, 0, 0x48uLL);
    v8 = *((_QWORD *)a2 + 1);
    LODWORD(v17[0]) = 72;
    v9 = *(_QWORD *)(v8 + 88);
    v17[3] = *a3;
    v10 = (__int64)*a4;
    v17[1] = v9;
    *(_QWORD *)((char *)&v17[7] + 4) = v10;
    ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
    v12 = *((_DWORD *)a2 + 4);
    v17[5] = ExtraInfoForHook;
    LODWORD(v17[6]) = 4;
    v13 = v12 - 1;
    if ( !v13 )
    {
      LODWORD(v17[7]) = 0;
      LODWORD(v17[4]) = 512;
      goto LABEL_11;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3524);
LABEL_11:
        LODWORD(v17[2]) ^= (LOBYTE(v17[2]) ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) >> 7)) & 1;
        InputTraceLogging::Mouse::InformUMObservers((const struct _MIT_MOUSE_INPUT_OBSERVER_PACKET *)v17);
        SendMessageTo(11LL, (__int64)v17, 72LL, v16);
        return;
      }
      LODWORD(v17[7]) = *((unsigned __int16 *)a2 + 16);
      WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
    }
    else
    {
      LODWORD(v17[7]) = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
      WheelMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    }
    LODWORD(v17[4]) = WheelMessage;
    goto LABEL_11;
  }
}
