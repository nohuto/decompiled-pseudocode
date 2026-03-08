/*
 * XREFs of ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C00F2816
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C020714C (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

struct CPointerMsgData *__fastcall CTouchProcessor::GetPrevMsgId(CTouchProcessor *this, unsigned __int64 a2)
{
  struct CPointerMsgData *NonConstMsgData; // rbx

  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(this, a2);
  while ( 1 )
  {
    NonConstMsgData = *(struct CPointerMsgData **)NonConstMsgData;
    if ( !*((_WORD *)NonConstMsgData + 8) )
      break;
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10784);
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x20) == 0 )
      return NonConstMsgData;
  }
  return 0LL;
}
