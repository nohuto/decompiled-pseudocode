__int64 __fastcall CInteractionTracker::ProcessSetRequestedDeltaPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION *a3)
{
  float v3; // xmm0_4
  float v5; // xmm1_4
  __int64 v6; // r8
  int v8; // eax
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((float *)this + 20) + *((float *)a3 + 2);
  v5 = *((float *)this + 21) + *((float *)a3 + 3);
  v6 = *((unsigned int *)a3 + 4);
  *(float *)v10 = v3;
  v10[2] = 0;
  *(float *)&v10[1] = v5;
  if ( (unsigned __int8)((__int64 (__fastcall *)(CInteractionTracker *, _DWORD *, __int64, _QWORD))CInteractionTracker::SetRequestedPosition)(
                          this,
                          v10,
                          v6,
                          0LL) )
  {
    v8 = *((_DWORD *)this + 47);
    if ( v8 <= *((_DWORD *)a3 + 6) )
      v8 = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 47) = v8;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  return 0LL;
}
