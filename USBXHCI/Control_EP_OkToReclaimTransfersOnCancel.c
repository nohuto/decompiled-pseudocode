void __fastcall Control_EP_OkToReclaimTransfersOnCancel(__int64 a1)
{
  bool v2; // di
  KIRQL v3; // al
  __int64 v4; // rdx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 344);
  *(_BYTE *)(a1 + 104) = v3;
  if ( v4 )
    v2 = *(_DWORD *)(v4 + 112) == 3;
  *(_DWORD *)(a1 + 352) |= 8u;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v3);
  if ( v2 )
    TR_QueueDpcForTransferCompletion(a1);
}
