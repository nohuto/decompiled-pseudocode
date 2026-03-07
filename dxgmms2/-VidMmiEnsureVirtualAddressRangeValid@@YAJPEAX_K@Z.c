__int64 __fastcall VidMmiEnsureVirtualAddressRangeValid(unsigned __int64 a1, SIZE_T a2)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v3; // rdi
  __int64 v4; // rcx

  Mdl = VidMmiAllocateMdl(a1, a2);
  v3 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    MmUnlockPages(v3);
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry1(6LL, 1200LL);
    DxgkLogInternalTriageEvent(v4, 262145LL);
    return 3221225495LL;
  }
}
