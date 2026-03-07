__int64 __fastcall CPointerInfoNode::IsTargetSetForRetrieval(CPointerInfoNode *this, struct tagTHREADINFO *a2)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 455);
  if ( (*((_DWORD *)a2 + 318) & 0x2000) != 0 || (*((_DWORD *)a2 + 319) & 0x40) != 0 )
    return (unsigned int)-__CFSHR__(*(_DWORD *)this, 9);
  if ( (*(_DWORD *)this & 0x100) != 0 && (*(_DWORD *)this & 0x200) == 0 )
    return 1;
  return v4;
}
