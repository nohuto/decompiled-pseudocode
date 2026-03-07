char __fastcall CMouseProcessor::ShouldDeliverWheelEventToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        const struct CInputDest *a3)
{
  char v3; // bl
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v7; // rax

  v3 = 0;
  if ( !*(_DWORD *)a3 )
    return 0;
  if ( *((_DWORD *)a2 + 6) == 2 || (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) != 0 )
    return 1;
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4804);
  if ( CInputDest::IsCompositionInput(a3) )
    return 1;
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( !ThreadInfo || (*(_DWORD *)(*((_QWORD *)ThreadInfo + 53) + 812LL) & 0x30) != 0 )
  {
    v7 = CInputDest::GetThreadInfo(a3);
    if ( !v7 || !(unsigned int)IsShellProcess(*((_QWORD *)v7 + 53)) )
      return 1;
  }
  return v3;
}
