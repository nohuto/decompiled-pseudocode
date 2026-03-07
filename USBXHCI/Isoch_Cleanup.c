void __fastcall Isoch_Cleanup(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_BYTE *)(a1 + 104) = v2;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
}
