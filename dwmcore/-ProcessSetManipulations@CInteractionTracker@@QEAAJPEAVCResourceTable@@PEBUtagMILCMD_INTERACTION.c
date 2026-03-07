__int64 __fastcall CInteractionTracker::ProcessSetManipulations(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS *a3,
        const struct MarshaledManipulationInfo *a4,
        unsigned int a5)
{
  if ( 8LL * *((unsigned int *)a3 + 2) == a5 )
    return InteractionSourceManager::ProcessSetManipulations((CInteractionTracker *)((char *)this + 200), a2, a3, a4);
  else
    return 2291663875LL;
}
