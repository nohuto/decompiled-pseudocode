/*
 * XREFs of ?HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ @ 0x18012E92E
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18022E664 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTracker@@@Z @ 0x180234280 (-BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteracti.c)
 * Callees:
 *     <none>
 */

char __fastcall CInteractionTracker::HasActiveCustomAnimation(CInteractionTracker *this)
{
  char result; // al
  int v2; // edx
  char *i; // rcx

  result = 0;
  v2 = 0;
  for ( i = (char *)this + 352; !*(_QWORD *)i || !*(_QWORD *)(*(_QWORD *)i + 16LL); i += 8 )
  {
    if ( (unsigned int)++v2 >= 2 )
      return result;
  }
  return 1;
}
