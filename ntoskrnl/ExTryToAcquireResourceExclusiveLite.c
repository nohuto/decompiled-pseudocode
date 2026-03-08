/*
 * XREFs of ExTryToAcquireResourceExclusiveLite @ 0x1406086B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpFastResourceLegacyAcquireExclusive @ 0x1403C4310 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x140608B54 (ExpTryToAcquireResourceExclusiveLite.c)
 */

BOOLEAN __stdcall ExTryToAcquireResourceExclusiveLite(PERESOURCE Resource)
{
  __int64 Flag; // rdx
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int8 v4; // dl
  struct _KTHREAD *v5; // r11

  Flag = Resource->Flag;
  if ( FeatureFastResource2 )
  {
    if ( (Flag & 0x41) != 1 )
    {
      if ( (Flag & 1) == 0 )
        return ExpTryToAcquireResourceExclusiveLite(Resource, Flag, 1);
      CurrentIrql = KeGetCurrentIrql();
      CurrentThread = KeGetCurrentThread();
      if ( CurrentIrql > 2u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
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
  Flag = (unsigned __int16)Flag;
  if ( (Flag & 1) != 0 )
  {
    v4 = KeGetCurrentIrql();
    v5 = KeGetCurrentThread();
    if ( v4 > 2u )
      KeBugCheckEx(0x1C6u, 0LL, v4, 2uLL, 0LL);
    if ( v4 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      goto LABEL_28;
    if ( (v5->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_29;
    if ( !v4 && (v5->MiscFlags & 0x400) == 0 && !v5->WaitBlock[3].SpareLong )
      goto LABEL_30;
    Flag = Resource->Flag;
  }
LABEL_22:
  if ( (Flag & 1) != 0 )
    return ExpFastResourceLegacyAcquireExclusive((ULONG_PTR)Resource);
  return ExpTryToAcquireResourceExclusiveLite(Resource, Flag, 1);
}
