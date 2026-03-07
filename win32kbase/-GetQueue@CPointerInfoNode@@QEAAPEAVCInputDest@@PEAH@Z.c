struct CInputDest *__fastcall CPointerInfoNode::GetQueue(CPointerInfoNode *this, int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rax
  CInputDest *v10; // rbx
  CInputDest *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
  {
    LODWORD(v11) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 594);
  }
  *a2 = 0;
  if ( !*((_DWORD *)this + 111) )
  {
LABEL_14:
    v11 = 0LL;
    v9 = SGDGetUserSessionState(v5, v4, v6, v7);
    CTouchProcessor::GetPointerCapture(*(CTouchProcessor **)(v9 + 3424), *((_QWORD *)this + 2), 0, &v11, 0LL);
    v10 = v11;
    if ( !v11 )
      return 0LL;
    if ( !CInputDest::GetThreadInfo(v11) )
    {
      LODWORD(v11) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 639);
    }
    if ( !*((_QWORD *)CInputDest::GetThreadInfo(v10) + 54) )
    {
      LODWORD(v11) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 640);
    }
    return v10;
  }
  if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 352, *((_QWORD *)this + 24), 1) )
  {
    if ( (*(_DWORD *)this & 0x400) != 0 )
      return 0LL;
    goto LABEL_14;
  }
  if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 352, *((_QWORD *)this + 24), 2) )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( !CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 352)) )
  {
    LODWORD(v11) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 616);
  }
  if ( !*((_QWORD *)CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 352)) + 54) )
  {
    LODWORD(v11) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 617);
  }
  return (CPointerInfoNode *)((char *)this + 352);
}
