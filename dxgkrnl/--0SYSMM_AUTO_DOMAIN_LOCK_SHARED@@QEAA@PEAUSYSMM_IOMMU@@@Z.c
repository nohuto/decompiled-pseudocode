SYSMM_AUTO_DOMAIN_LOCK_SHARED *__fastcall SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
        SYSMM_AUTO_DOMAIN_LOCK_SHARED *this,
        struct SYSMM_IOMMU *a2)
{
  KIRQL CurrentIrql; // al
  __int64 v4; // rcx

  *(_QWORD *)this = a2;
  CurrentIrql = KeGetCurrentIrql();
  v4 = *(_QWORD *)this;
  *((_BYTE *)this + 8) = CurrentIrql;
  if ( CurrentIrql >= 2u )
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 8));
  else
    ExAcquirePushLockSharedEx(v4 + 16, 0LL);
  return this;
}
