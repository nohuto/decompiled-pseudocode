__int64 __fastcall CInteractionTracker::ProcessSetMinScale(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETMINSCALE *a3)
{
  CInteractionTracker::SetMinScale(this, *((float *)a3 + 2));
  return 0LL;
}
