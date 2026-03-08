/*
 * XREFs of Isoch_EP_OkToReclaimTransfersOnCancel @ 0x1C0044110
 * Callers:
 *     <none>
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x1C000F284 (TR_QueueDpcForTransferCompletion.c)
 */

void __fastcall Isoch_EP_OkToReclaimTransfersOnCancel(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // di

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v2 = *(_DWORD *)(a1 + 328);
  if ( (v2 & 4) != 0 )
  {
    v3 = a1 + 384;
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
    v5 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 328) = v2 | 2;
    v5 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v5 )
    TR_QueueDpcForTransferCompletion(a1);
}
