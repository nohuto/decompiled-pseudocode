__int64 __fastcall Bulk_EP_ReclaimTransfers(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r9
  __int64 v4; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = a1 + 368;
  *(_BYTE *)(a1 + 104) = v2;
  v4 = *(_QWORD *)(a1 + 368);
  if ( v4 != a1 + 368 )
  {
    **(_QWORD **)(a1 + 408) = v4;
    *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(a1 + 408);
    **(_QWORD **)(a1 + 376) = a1 + 400;
    *(_QWORD *)(a1 + 408) = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(a1 + 376) = a1 + 368;
    *(_QWORD *)v3 = v3;
  }
  *(_DWORD *)(a1 + 324) |= 0x40u;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return TR_QueueDpcForTransferCompletion(a1);
}
