/*
 * XREFs of ExAcquireSharedStarveExclusive @ 0x1402DE340
 * Callers:
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     DifExAcquireSharedStarveExclusiveWrapper @ 0x1405D4ED0 (DifExAcquireSharedStarveExclusiveWrapper.c)
 *     CcPinMappedData @ 0x1406A7750 (CcPinMappedData.c)
 * Callees:
 *     ExpAcquireSharedStarveExclusive @ 0x1402213C0 (ExpAcquireSharedStarveExclusive.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x140608144 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

BOOLEAN __stdcall ExAcquireSharedStarveExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  USHORT Flag; // r8
  unsigned __int8 v4; // r9
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 v7; // dl
  struct _KTHREAD *v8; // r8

  Flag = Resource->Flag;
  v4 = 2 - (Wait != 0);
  if ( FeatureFastResource2 )
  {
    if ( (Flag & 0x41) != 1 )
    {
      if ( (Flag & 1) == 0 )
        return ExpAcquireSharedStarveExclusive((__int64)Resource, Wait);
      CurrentIrql = KeGetCurrentIrql();
      CurrentThread = KeGetCurrentThread();
      if ( CurrentIrql > v4 )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v4, 0LL);
      if ( CurrentIrql < 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        if ( (CurrentThread->ApcState.InProgressFlags & 2) == 0 )
        {
          if ( CurrentIrql || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
          {
            Flag = Resource->Flag;
            goto LABEL_22;
          }
LABEL_30:
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        }
LABEL_29:
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      }
LABEL_28:
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    }
LABEL_26:
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( (Flag & 0x41) == 1 )
    goto LABEL_26;
  if ( (Flag & 1) != 0 )
  {
    v7 = KeGetCurrentIrql();
    v8 = KeGetCurrentThread();
    if ( v7 > v4 )
      KeBugCheckEx(0x1C6u, 0LL, v7, v4, 0LL);
    if ( v7 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      goto LABEL_28;
    if ( (v8->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_29;
    if ( !v7 && (v8->MiscFlags & 0x400) == 0 && !v8->WaitBlock[3].SpareLong )
      goto LABEL_30;
    LOBYTE(Flag) = Resource->Flag;
  }
LABEL_22:
  if ( (Flag & 1) != 0 )
    return ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)Resource);
  return ExpAcquireSharedStarveExclusive((__int64)Resource, Wait);
}
