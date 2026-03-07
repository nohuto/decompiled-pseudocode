__int64 __fastcall CTouchProcessor::IsCoalescedMsgData(CTouchProcessor *this, __int64 a2)
{
  struct CPointerMsgData *NonConstMsgData; // rdi

  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(this, a2);
  if ( *((struct _KTHREAD **)this + 5) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12704);
  return (unsigned int)-__CFSHR__(*((_DWORD *)NonConstMsgData + 9), 6);
}
