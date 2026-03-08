/*
 * XREFs of ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x180232380
 * Callers:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x18012F062 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18012E802 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x180271D0C (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 */

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
