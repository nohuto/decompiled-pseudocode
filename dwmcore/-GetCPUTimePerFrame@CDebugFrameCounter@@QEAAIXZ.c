__int64 __fastcall CDebugFrameCounter::GetCPUTimePerFrame(CDebugFrameCounter *this)
{
  unsigned int FrameCountInternal; // eax
  __int64 v2; // r9
  unsigned __int64 v3; // r10

  if ( !*((_BYTE *)this + 8) || *(_DWORD *)this == -1 )
    return 0LL;
  FrameCountInternal = CDebugFrameCounter::GetFrameCountInternal(this);
  if ( FrameCountInternal )
    v3 = *(_QWORD *)(v2 + 16) / (unsigned __int64)FrameCountInternal;
  return (unsigned int)(v3 / 0x2710);
}
