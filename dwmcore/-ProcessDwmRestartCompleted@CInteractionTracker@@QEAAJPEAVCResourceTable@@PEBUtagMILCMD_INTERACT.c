__int64 __fastcall CInteractionTracker::ProcessDwmRestartCompleted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED *a3)
{
  int v3; // eax
  float v4; // xmm3_4
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  *((_BYTE *)this + 540) &= ~0x20u;
  if ( !*((_DWORD *)this + 44) )
  {
    v3 = *((_DWORD *)this + 22);
    v4 = *((float *)this + 34);
    v6 = *((_QWORD *)this + 10);
    v7 = v3;
    CInteractionTracker::AddPendingStateChange((__int64)this, 0, &v6, v4);
  }
  return 0LL;
}
