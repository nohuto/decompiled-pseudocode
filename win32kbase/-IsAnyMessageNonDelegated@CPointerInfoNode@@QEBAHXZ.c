__int64 __fastcall CPointerInfoNode::IsAnyMessageNonDelegated(CPointerInfoNode *this)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  result = CPointerInfoNode::IsValid(this);
  v4 = 0;
  if ( (_DWORD)result )
  {
    if ( !gbIgnoreStressedOutStuff && (*v3 & 0x80000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 401);
    v5 = *(_DWORD *)this;
    if ( (*(_DWORD *)this & 0x100000) == 0
      || (v5 & 0x400000) != 0
      || (v5 & 0x800000) != 0 && ((v5 & 0x1000000) == 0 || (v5 & 0x4000000) != 0) )
    {
      return 1;
    }
    if ( (v5 & 0x8000000) != 0 && ((v5 & 0x10000000) == 0 || (v5 & 0x40000000) != 0) )
      return 1;
    if ( v5 < 0 )
    {
      v6 = *((_DWORD *)this + 1);
      if ( (v6 & 1) == 0 || (v6 & 4) != 0 )
        return 1;
    }
    v7 = *((_DWORD *)this + 1);
    if ( (v7 & 8) != 0 && ((v7 & 0x10) == 0 || (v7 & 0x40) != 0) )
      return 1;
    return v4;
  }
  return result;
}
