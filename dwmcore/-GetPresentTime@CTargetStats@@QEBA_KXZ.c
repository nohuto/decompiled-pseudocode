unsigned __int64 __fastcall CTargetStats::GetPresentTime(CTargetStats *this)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v2; // rdx

  CurrentFrameId = GetCurrentFrameId();
  if ( *(_QWORD *)(v2 + 64) == CurrentFrameId )
    return *(_QWORD *)(v2 + 56);
  else
    return 0LL;
}
