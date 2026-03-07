struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
        CMouseProcessor::BufferedMouseInputList *this,
        __int64 a2)
{
  _QWORD *v4; // rax
  CMouseProcessor::MouseInputMessage *v5; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edx

  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7047);
  v4 = (_QWORD *)((char *)this + 8);
  v5 = (CMouseProcessor::MouseInputMessage *)*((_QWORD *)this + 1);
  if ( v5 == (CMouseProcessor::BufferedMouseInputList *)((char *)this + 8) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7051);
    return 0LL;
  }
  else
  {
    if ( *((_QWORD **)v5 + 1) != v4
      || (v7 = *(_QWORD *)v5, *(CMouseProcessor::MouseInputMessage **)(*(_QWORD *)v5 + 8LL) != v5) )
    {
      __fastfail(3u);
    }
    *v4 = v7;
    *(_QWORD *)(v7 + 8) = v4;
    if ( *((_QWORD *)v5 + 2) != a2 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7076);
      CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v5);
      CMouseProcessor::BufferedMouseInputList::DropAllMouseInput(this, v8);
      v5 = 0LL;
    }
    InputTraceLogging::Mouse::DequeueUserModeInput(
      a2,
      (const struct CInputDest *)(((unsigned __int64)v5 + 24) & -(__int64)(v5 != 0LL)));
    return v5;
  }
}
