__int64 __fastcall CInteractionTracker::ProcessSetRequestedScale(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE *a3)
{
  int v5; // eax

  *((_DWORD *)this + 37) = *((_DWORD *)a3 + 3) ^ _xmm;
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 4) ^ _xmm;
  if ( CInteractionTracker::SetRequestedScale(this, *((float *)a3 + 2)) )
  {
    v5 = *((_DWORD *)this + 47);
    if ( v5 <= *((_DWORD *)a3 + 6) )
      v5 = *((_DWORD *)a3 + 6);
    *((_BYTE *)this + 540) |= 4u;
    *((_DWORD *)this + 47) = v5;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  return 0LL;
}
