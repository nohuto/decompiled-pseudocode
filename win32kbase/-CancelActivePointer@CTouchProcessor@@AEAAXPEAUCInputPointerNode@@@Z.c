void __fastcall CTouchProcessor::CancelActivePointer(CTouchProcessor *this, struct CInputPointerNode *a2)
{
  int v2; // r9d
  unsigned int v5; // edi
  int v6; // edx
  char *v7; // rdi
  __int64 v8; // rbx

  v2 = *((_DWORD *)a2 + 14);
  v5 = 0;
  v6 = v2 - 1;
  if ( v2 == 1 )
  {
    v5 = 0x20000;
  }
  else if ( v2 == 2 )
  {
    v5 = 0x40000;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_LHH(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v2);
  }
  CTouchProcessor::SetNewValidState(this, v5, a2);
  if ( *((_DWORD *)a2 + 18) )
  {
    CInputDest::SetEmpty((struct CInputPointerNode *)((char *)a2 + 72));
    *((_DWORD *)a2 + 75) &= 0xFFFFBFCF;
  }
  if ( *((_DWORD *)a2 + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15850);
  v7 = (char *)a2 + 256;
  if ( *((_DWORD *)a2 + 14) == 3 )
  {
    if ( *(char **)v7 == v7 )
    {
      CTouchProcessor::ProcessRoutedAwayList(this, *((_WORD *)a2 + 16), 0, 0LL, 0, 0);
      CTouchProcessor::FreeNode(this, a2);
      return;
    }
  }
  else if ( *(char **)v7 == v7 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15868);
  }
  v8 = *(_QWORD *)v7;
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 36LL) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15870);
  CTouchProcessor::UnreferenceMsgData(this, v8, 1LL);
}
