bool __fastcall CMergedDirtyRect::IsEmpty(CMergedDirtyRect *this)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v2; // rdx

  CurrentFrameId = GetCurrentFrameId();
  return *(_QWORD *)(v2 + 88) != CurrentFrameId || *(_DWORD *)(v2 + 80) == 0;
}
