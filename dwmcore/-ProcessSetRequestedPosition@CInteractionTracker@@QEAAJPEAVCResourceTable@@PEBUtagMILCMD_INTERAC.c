__int64 __fastcall CInteractionTracker::ProcessSetRequestedPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4
  __int64 v6; // r9
  __int64 v8; // r8
  int v9; // eax
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  v4 = *((_DWORD *)a3 + 3);
  v6 = *((unsigned int *)a3 + 5);
  v8 = *((unsigned int *)a3 + 4);
  v11[0] = v3;
  v11[2] = 0;
  v11[1] = v4;
  if ( (unsigned __int8)((__int64 (__fastcall *)(CInteractionTracker *, _DWORD *, __int64, __int64))CInteractionTracker::SetRequestedPosition)(
                          this,
                          v11,
                          v8,
                          v6) )
  {
    v9 = *((_DWORD *)this + 47);
    if ( v9 <= *((_DWORD *)a3 + 7) )
      v9 = *((_DWORD *)a3 + 7);
    *((_BYTE *)this + 540) |= 4u;
    *((_DWORD *)this + 47) = v9;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  return 0LL;
}
