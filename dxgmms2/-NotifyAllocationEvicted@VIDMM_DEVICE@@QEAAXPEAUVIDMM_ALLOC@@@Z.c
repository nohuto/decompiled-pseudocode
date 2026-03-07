void __fastcall VIDMM_DEVICE::NotifyAllocationEvicted(VIDMM_DEVICE ***this, VIDMM_DEVICE ***a2)
{
  VIDMM_DEVICE *v4; // rax
  struct VIDMM_ALLOC **v5; // rdx
  VIDMM_DEVICE **v6; // rcx
  VIDMM_DEVICE **v7; // rdx

  if ( VidMmiShouldChargeAllocationAgainstBudget((__int64 **)a2) )
    VIDMM_DEVICE::DecrementCurrentUsage((VIDMM_DEVICE *)this, (struct VIDMM_ALLOC *)a2);
  v4 = (VIDMM_DEVICE *)(a2 + 14);
  v5 = a2[14];
  if ( v5[1] != (struct VIDMM_ALLOC *)(a2 + 14)
    || (v6 = a2[15], *v6 != v4)
    || (*v6 = (VIDMM_DEVICE *)v5, v5[1] = (struct VIDMM_ALLOC *)v6, v7 = this[23], *v7 != (VIDMM_DEVICE *)(this + 22)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v4 = this + 22;
  a2[15] = v7;
  *v7 = v4;
  this[23] = (VIDMM_DEVICE **)v4;
}
