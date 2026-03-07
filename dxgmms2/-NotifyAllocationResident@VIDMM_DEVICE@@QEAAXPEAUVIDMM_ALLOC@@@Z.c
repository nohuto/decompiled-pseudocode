void __fastcall VIDMM_DEVICE::NotifyAllocationResident(VIDMM_DEVICE ***this, __int64 **a2)
{
  _QWORD *v3; // r11
  VIDMM_DEVICE *v4; // rax
  VIDMM_DEVICE *v5; // rdx
  VIDMM_DEVICE **v6; // rcx
  VIDMM_DEVICE **v7; // rdx

  if ( VidMmiShouldChargeAllocationAgainstBudget(a2) )
    VIDMM_DEVICE::IncrementCurrentUsage((VIDMM_DEVICE *)this, (struct VIDMM_ALLOC *)v3);
  v4 = (VIDMM_DEVICE *)(v3 + 14);
  v5 = (VIDMM_DEVICE *)v3[14];
  if ( *((_QWORD **)v5 + 1) != v3 + 14
    || (v6 = (VIDMM_DEVICE **)v3[15], *v6 != v4)
    || (*v6 = v5, *((_QWORD *)v5 + 1) = v6, v7 = this[21], *v7 != (VIDMM_DEVICE *)(this + 20)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v4 = this + 20;
  v3[15] = v7;
  *v7 = v4;
  this[21] = (VIDMM_DEVICE **)v4;
}
