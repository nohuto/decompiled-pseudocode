void __fastcall SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED(SYSMM_AUTO_DOMAIN_LOCK_SHARED *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  if ( *((_BYTE *)this + 8) >= 2u )
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v1 + 8));
  else
    ExReleasePushLockSharedEx(v1 + 16, 0LL);
}
