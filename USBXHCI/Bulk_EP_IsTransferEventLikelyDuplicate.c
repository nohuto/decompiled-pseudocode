char __fastcall Bulk_EP_IsTransferEventLikelyDuplicate(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  LOBYTE(a2) = Bulk_IsTransferEventLikelyDuplicate_Internal(a1, a2, a3);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return a2;
}
