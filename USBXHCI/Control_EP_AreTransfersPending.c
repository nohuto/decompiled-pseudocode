bool __fastcall Control_EP_AreTransfersPending(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al
  __int64 v4; // rbx

  v1 = (KSPIN_LOCK *)(a1 + 96);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_BYTE *)(a1 + 104) = v3;
  v4 = *(_QWORD *)(a1 + 344);
  KeReleaseSpinLock(v1, v3);
  return v4 != 0;
}
