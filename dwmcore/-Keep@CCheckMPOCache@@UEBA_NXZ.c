bool __fastcall CCheckMPOCache::Keep(CCheckMPOCache *this)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v2; // rdx

  CurrentFrameId = GetCurrentFrameId();
  return CurrentFrameId - *(_QWORD *)(v2 + 992) <= 0x1E;
}
