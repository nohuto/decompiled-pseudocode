__int64 __fastcall CDebugFrameCounter::GetFrameCountInternal(CDebugFrameCounter *this)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  if ( !*((_BYTE *)this + 8) )
    return 0LL;
  v1 = *(_DWORD *)this;
  if ( *(_DWORD *)this == -1 )
    return 0LL;
  result = *((_DWORD *)this + 1) - v1;
  if ( v1 > *((_DWORD *)this + 1) )
    return (unsigned int)(result + 256);
  return result;
}
