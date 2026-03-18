/*
 * XREFs of ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C01CD5C8
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01D866C (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C01D8CE0 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerMsgData *__fastcall CTouchProcessor::GetPrevMsgId(CTouchProcessor *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  const struct CPointerMsgData *MsgData; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx

  MsgData = CTouchProcessor::GetMsgData(this, a2, a3);
  v6 = *((unsigned int *)MsgData + 9);
  if ( (v6 & 0x80u) != 0LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v3, v5);
  while ( 1 )
  {
    MsgData = *(const struct CPointerMsgData **)MsgData;
    if ( !*((_WORD *)MsgData + 8) )
      break;
    if ( (*((_DWORD *)MsgData + 9) & 0x20) == 0 )
      return MsgData;
  }
  return 0LL;
}
