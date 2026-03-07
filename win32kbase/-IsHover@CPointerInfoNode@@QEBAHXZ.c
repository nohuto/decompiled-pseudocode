__int64 __fastcall CPointerInfoNode::IsHover(CPointerInfoNode *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 219);
  LOBYTE(v2) = (*((_DWORD *)this + 45) & 0x40004) == 0;
  return v2;
}
