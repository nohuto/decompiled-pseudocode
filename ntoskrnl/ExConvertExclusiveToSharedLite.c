/*
 * XREFs of ExConvertExclusiveToSharedLite @ 0x1402DCE90
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x140212E3C (FsRtlAcquireFileForModWriteEx.c)
 *     DifExConvertExclusiveToSharedLiteWrapper @ 0x1405D5C00 (DifExConvertExclusiveToSharedLiteWrapper.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407512E4 (PspAllocateAndQueryNotificationChannel.c)
 *     NtMapCMFModule @ 0x140A005D0 (NtMapCMFModule.c)
 *     CmpReplicateKeyToVirtual @ 0x140A17308 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExpConvertExclusiveToSharedLite @ 0x1402DCFAC (ExpConvertExclusiveToSharedLite.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x1403C50F0 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __stdcall ExConvertExclusiveToSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // r8
  unsigned __int8 v2; // al
  struct _KTHREAD *v3; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8

  Flag = Resource->Flag;
  if ( !FeatureFastResource2 )
  {
    if ( (Flag & 0x41) != 1 )
    {
      if ( (Flag & 1) == 0 )
        goto LABEL_16;
      CurrentIrql = KeGetCurrentIrql();
      CurrentThread = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( CurrentIrql || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
      {
        LOBYTE(Flag) = Resource->Flag;
        goto LABEL_16;
      }
LABEL_22:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
LABEL_20:
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( (Flag & 0x41) == 1 )
    goto LABEL_20;
  if ( (Flag & 1) == 0 )
    goto LABEL_18;
  v2 = KeGetCurrentIrql();
  v3 = KeGetCurrentThread();
  if ( v2 > 1u )
    KeBugCheckEx(0x1C6u, 0LL, v2, 1uLL, 0LL);
  if ( !v2 && (v3->MiscFlags & 0x400) == 0 && !v3->WaitBlock[3].SpareLong )
    goto LABEL_22;
LABEL_16:
  if ( (Flag & 1) != 0 )
  {
    ExpFastResourceLegacyConvertExclusiveToShared((ULONG_PTR)Resource);
    return;
  }
LABEL_18:
  ExpConvertExclusiveToSharedLite(Resource, 1LL);
}
