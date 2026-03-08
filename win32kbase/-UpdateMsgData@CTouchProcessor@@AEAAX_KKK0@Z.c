/*
 * XREFs of ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C0208BC0
 * Callers:
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C01EBFCC (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0201170 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0207518 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CTouchProcessor::UpdateMsgData(CTouchProcessor *this, __int64 a2, int a3, int a4, unsigned __int64 a5)
{
  struct CPointerMsgData *NonConstMsgData; // rdi
  CTouchProcessor *v9; // rcx
  struct CPointerMsgData *v10; // rbx

  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(this, a2);
  v10 = CTouchProcessor::GetNonConstMsgData(v9, a5);
  if ( *((struct _KTHREAD **)this + 5) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10687);
  if ( (*((_DWORD *)NonConstMsgData + 9) & 0x20) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10693);
  *((_DWORD *)NonConstMsgData + 7) = a3;
  *((_DWORD *)NonConstMsgData + 8) = a4;
  if ( v10 )
  {
    if ( (*((_DWORD *)v10 + 9) & 0x40) != 0 )
    {
      if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10716);
      CTouchProcessor::ReferenceMsgData(this, (__int64)NonConstMsgData, 1);
      CTouchProcessor::UnreferenceMsgData((struct _KTHREAD **)this, (unsigned __int64)v10, 1);
    }
    *((_DWORD *)v10 + 9) |= 0x20u;
  }
}
