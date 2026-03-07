void __fastcall CInteractionTracker::TelemetrySetPosition(CInteractionTracker *this)
{
  unsigned __int64 v2; // rdi

  if ( dword_1803E0798 && tlgKeywordOn((__int64)&dword_1803E0798, 0x400000000002LL) )
  {
    v2 = 0LL;
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
      v2 = *(_QWORD *)(*((_QWORD *)this + 41) + 592LL);
    InteractionSourceManager::TelemetrySetPosition((CInteractionTracker *)((char *)this + 200), v2);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      if ( v2 )
        *(_QWORD *)(*((_QWORD *)this + 41) + 592LL) = 0LL;
    }
  }
}
