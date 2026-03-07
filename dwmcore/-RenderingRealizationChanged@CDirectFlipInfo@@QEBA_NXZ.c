bool __fastcall CDirectFlipInfo::RenderingRealizationChanged(CDirectFlipInfo *this)
{
  unsigned __int64 CurrentFrameId; // rdi
  int v3; // eax
  bool v4; // zf

  CurrentFrameId = GetCurrentFrameId();
  if ( *((_QWORD *)this + 14) != CurrentFrameId )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 288LL))(*((_QWORD *)this + 2));
    v4 = *((_DWORD *)this + 26) == v3;
    *((_DWORD *)this + 26) = v3;
    *((_QWORD *)this + 14) = CurrentFrameId;
    *((_BYTE *)this + 120) = !v4;
  }
  return *((_BYTE *)this + 120);
}
