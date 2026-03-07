void __fastcall CMouseProcessor::InformUMObservers(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  __int64 v8; // r8
  __int64 ExtraInfoForHook; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int WheelMessage; // eax
  __int64 v15; // r9
  _QWORD v16[10]; // [rsp+30h] [rbp-50h] BYREF

  if ( CMasterInputThread::IsInputThreadDesktopActive(this) && (*((_DWORD *)this + 2) & 6) != 0 )
  {
    memset(v16, 0, 0x48uLL);
    v8 = *((_QWORD *)a2 + 1);
    LODWORD(v16[0]) = 72;
    v16[1] = *(_QWORD *)(v8 + 88);
    v16[3] = *a3;
    *(struct tagPOINT *)((char *)&v16[7] + 4) = *a4;
    ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
    v11 = *((_DWORD *)a2 + 4);
    v16[5] = ExtraInfoForHook;
    LODWORD(v16[6]) = 4;
    v12 = v11 - 1;
    if ( !v12 )
    {
      LODWORD(v16[7]) = 0;
      LODWORD(v16[4]) = 512;
      goto LABEL_11;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3517);
LABEL_11:
        LODWORD(v16[2]) ^= (LOBYTE(v16[2]) ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) >> 7)) & 1;
        InputTraceLogging::Mouse::InformUMObservers((const struct _MIT_MOUSE_INPUT_OBSERVER_PACKET *)v16);
        SendMessageTo(11LL, (__int64)v16, 72LL, v15);
        return;
      }
      LODWORD(v16[7]) = *(unsigned __int16 *)(v10 + 30);
      WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
    }
    else
    {
      LODWORD(v16[7]) = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
      WheelMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    }
    LODWORD(v16[4]) = WheelMessage;
    goto LABEL_11;
  }
}
