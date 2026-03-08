/*
 * XREFs of MiObtainFreePages @ 0x140632B0C
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14034FE70 (MiUnlinkNodeLargePageHelper.c)
 *     MiDecreaseAvailablePages @ 0x1403504C0 (MiDecreaseAvailablePages.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PsReferencePartitionSafe @ 0x140295BC8 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     CcNotifyWriteBehindEx @ 0x140534620 (CcNotifyWriteBehindEx.c)
 *     MiWakeModifiedPageWriter @ 0x14063982C (MiWakeModifiedPageWriter.c)
 */

void __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = *(_QWORD *)(a1 + 16920);
  if ( v1 && !*(_BYTE *)(v1 + 52) )
  {
    v3 = *(_QWORD *)(a1 + 200);
    if ( PsReferencePartitionSafe(v3) )
    {
      CcNotifyWriteBehindEx(1u, v3);
      PsDereferencePartition(v3);
    }
    if ( *(_QWORD *)(a1 + 17600) - *(_QWORD *)(a1 + 17824) >= 0x10uLL )
      KeSetEvent((PRKEVENT)(a1 + 832), 0, 0);
    if ( *(_QWORD *)(a1 + 17824) >= 0x10uLL )
      MiWakeModifiedPageWriter(a1, -1LL);
    if ( *(_BYTE *)(v1 + 98) )
      KeSetEvent((PRKEVENT)(v1 + 96), 0, 0);
  }
}
