__int64 __fastcall CInteractionTracker::ProcessDwmStarted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_DWMSTARTED *a3)
{
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 12);
  if ( *((_BYTE *)a3 + 8) )
  {
    *((_DWORD *)this + 20) = *((_DWORD *)a3 + 3);
    *(_QWORD *)((char *)this + 84) = *((unsigned int *)a3 + 4);
    CResource::InvalidateAnimationSources(this, 1);
    CResource::InvalidateAnimationSources(this, 58);
    *((_DWORD *)this + 34) = *((_DWORD *)a3 + 5);
    CResource::InvalidateAnimationSources(this, 2);
    CResource::InvalidateAnimationSources(this, 59);
    *((_BYTE *)this + 540) |= 0x22u;
  }
  return 0LL;
}
