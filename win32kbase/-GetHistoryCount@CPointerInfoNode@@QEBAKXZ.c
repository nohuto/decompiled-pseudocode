__int64 __fastcall CPointerInfoNode::GetHistoryCount(CPointerInfoNode *this)
{
  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 190);
  if ( *((_DWORD *)this + 59) <= 1u && *((_DWORD *)this + 86) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 192);
  return *((unsigned int *)this + 59);
}
