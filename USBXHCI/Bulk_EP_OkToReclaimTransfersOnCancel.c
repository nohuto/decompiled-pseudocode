/*
 * XREFs of Bulk_EP_OkToReclaimTransfersOnCancel @ 0x1C0046CA0
 * Callers:
 *     <none>
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x1C000F284 (TR_QueueDpcForTransferCompletion.c)
 */

void __fastcall Bulk_EP_OkToReclaimTransfersOnCancel(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // di

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v2 = *(_DWORD *)(a1 + 324);
  if ( (v2 & 0x10) != 0 )
  {
    v3 = a1 + 368;
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
    v5 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 324) = v2 | 0x20;
    v5 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v5 )
    TR_QueueDpcForTransferCompletion(a1);
}
