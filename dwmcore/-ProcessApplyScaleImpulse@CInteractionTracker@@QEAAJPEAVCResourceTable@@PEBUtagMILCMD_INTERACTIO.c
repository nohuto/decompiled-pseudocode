__int64 __fastcall CInteractionTracker::ProcessApplyScaleImpulse(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE *a3)
{
  float v5; // xmm1_4
  int v6; // eax
  struct CResourceTable *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *((_BYTE *)this + 540) |= 0x10u;
  LODWORD(v8) = *((_DWORD *)a3 + 3) ^ _xmm;
  v5 = *((float *)a3 + 2);
  HIDWORD(v8) = *((_DWORD *)a3 + 4) ^ _xmm;
  if ( CInteractionTracker::ApplyScaleImpulse(this, v5, (const struct D2DVector2 *)&v8) )
  {
    v6 = *((_DWORD *)this + 47);
    if ( v6 <= *((_DWORD *)a3 + 5) )
      v6 = *((_DWORD *)a3 + 5);
    *((_DWORD *)this + 47) = v6;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  *((_BYTE *)this + 540) &= ~0x10u;
  return 0LL;
}
