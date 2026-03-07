void __fastcall HUBMUX_EnableResetHub(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al

  v1 = (KSPIN_LOCK *)(a1 + 2320);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2320));
  _InterlockedOr((volatile signed __int32 *)(a1 + 2352), 4u);
  KeReleaseSpinLock(v1, v3);
}
