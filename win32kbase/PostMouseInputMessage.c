bool __fastcall PostMouseInputMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 MouseProcessor; // rax
  bool v13; // zf
  int v14; // eax

  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1537);
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v9, v8, v10, v11);
  if ( !MouseProcessor
    || (v13 = (unsigned __int8)CMouseProcessor::PostMouseInputMessage(MouseProcessor, a1, a2, a3, a4) == 0, v14 = 0, v13) )
  {
    v14 = -1073741823;
  }
  return v14 != 0;
}
