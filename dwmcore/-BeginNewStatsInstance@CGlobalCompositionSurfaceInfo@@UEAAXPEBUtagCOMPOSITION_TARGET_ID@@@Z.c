void __fastcall CGlobalCompositionSurfaceInfo::BeginNewStatsInstance(
        CGlobalCompositionSurfaceInfo *this,
        const struct tagCOMPOSITION_TARGET_ID *a2)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11

  if ( *((_QWORD *)this + 15) )
  {
    CurrentFrameId = GetCurrentFrameId();
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(v3 + 24))(v4, CurrentFrameId, v5);
  }
}
