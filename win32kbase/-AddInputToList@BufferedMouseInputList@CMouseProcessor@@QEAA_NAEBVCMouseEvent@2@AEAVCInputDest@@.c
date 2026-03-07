char __fastcall CMouseProcessor::BufferedMouseInputList::AddInputToList(
        CMouseProcessor::BufferedMouseInputList *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4,
        unsigned __int64 *a5)
{
  _QWORD *v9; // rbx
  CMouseProcessor::BufferedMouseInputList **v11; // rcx

  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7011);
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7012);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD, struct CInputDest *, const struct CMouseProcessor::InputDeliveryContext *))(*(_QWORD *)a2 + 24LL))(
                   a2,
                   *(_QWORD *)this,
                   a3,
                   a4);
  if ( *(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7019);
  if ( !v9 )
    return 0;
  v11 = (CMouseProcessor::BufferedMouseInputList **)*((_QWORD *)this + 2);
  if ( *v11 != (CMouseProcessor::BufferedMouseInputList *)((char *)this + 8) )
    __fastfail(3u);
  v9[1] = v11;
  *v9 = (char *)this + 8;
  *v11 = (CMouseProcessor::BufferedMouseInputList *)v9;
  *((_QWORD *)this + 2) = v9;
  *a5 = (*(_QWORD *)this)++;
  InputTraceLogging::Mouse::QueueUserModeInput(*a5, (const struct CInputDest *)(v9 + 3));
  return 1;
}
