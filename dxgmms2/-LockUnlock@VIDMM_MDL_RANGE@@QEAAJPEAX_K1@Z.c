__int64 __fastcall VIDMM_MDL_RANGE::LockUnlock(PMDL *this, void *a2, struct _MDL *a3, struct _MDL *a4)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v8; // rbx
  __int64 v10; // rcx

  Mdl = IoAllocateMdl(a2, (int)a4 - (int)a3, 0, 0, 0LL);
  v8 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    MmUnlockPages(*this);
    IoFreeMdl(*this);
    *this = v8;
    this[1] = a3;
    this[2] = a4;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry1(6LL, 5995LL);
    DxgkLogInternalTriageEvent(v10, 262145LL);
    return 3223191809LL;
  }
}
