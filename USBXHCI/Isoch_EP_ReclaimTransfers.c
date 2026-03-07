__int64 __fastcall Isoch_EP_ReclaimTransfers(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r9
  __int64 v4; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(a1 + 328) |= 8u;
  v3 = a1 + 384;
  *(_BYTE *)(a1 + 104) = v2;
  v4 = *(_QWORD *)(a1 + 384);
  if ( v4 != a1 + 384 )
  {
    **(_QWORD **)(a1 + 424) = v4;
    *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(a1 + 424);
    **(_QWORD **)(a1 + 392) = a1 + 416;
    *(_QWORD *)(a1 + 424) = *(_QWORD *)(a1 + 392);
    *(_QWORD *)(a1 + 392) = a1 + 384;
    *(_QWORD *)v3 = v3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return TR_QueueDpcForTransferCompletion(a1);
}
