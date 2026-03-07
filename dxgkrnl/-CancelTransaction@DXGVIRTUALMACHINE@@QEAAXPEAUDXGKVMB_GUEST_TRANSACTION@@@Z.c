void __fastcall DXGVIRTUALMACHINE::CancelTransaction(DXGVIRTUALMACHINE *this, struct DXGKVMB_GUEST_TRANSACTION ***a2)
{
  char *v2; // rdi
  struct DXGKVMB_GUEST_TRANSACTION **v4; // rdx
  struct DXGKVMB_GUEST_TRANSACTION **v5; // rax

  v2 = (char *)this + 344;
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 344));
  v4 = *a2;
  if ( (*a2)[1] != (struct DXGKVMB_GUEST_TRANSACTION *)a2 || (v5 = a2[1], *v5 != (struct DXGKVMB_GUEST_TRANSACTION *)a2) )
    __fastfail(3u);
  *v5 = (struct DXGKVMB_GUEST_TRANSACTION *)v4;
  v4[1] = (struct DXGKVMB_GUEST_TRANSACTION *)v5;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
