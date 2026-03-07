__int64 __fastcall CInteractionTracker::ProcessSetMaxPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETMAXPOSITION *a3)
{
  int v3; // xmm1_4
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_DWORD *)a3 + 3);
  v5[0] = *((_DWORD *)a3 + 2);
  v5[2] = 0;
  v5[1] = v3;
  CInteractionTracker::SetMaxPosition(this, (const struct D2DVector3 *)v5);
  return 0LL;
}
