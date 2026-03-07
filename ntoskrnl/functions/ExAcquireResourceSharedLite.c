BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  __int64 Flag; // r8
  unsigned __int8 v5; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 v9; // cl
  struct _KTHREAD *v10; // rdx

  Flag = Resource->Flag;
  v5 = (Wait == 0) + 1;
  if ( FeatureFastResource2 )
  {
    if ( (Flag & 0x41) != 1 )
    {
      if ( (Flag & 1) == 0 )
        return ExpAcquireResourceSharedLite(Resource, Wait, Flag, v5);
      CurrentIrql = KeGetCurrentIrql();
      CurrentThread = KeGetCurrentThread();
      if ( CurrentIrql > v5 )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v5, 0LL);
      if ( CurrentIrql < 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        if ( (CurrentThread->ApcState.InProgressFlags & 2) == 0 )
        {
          if ( CurrentIrql || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
          {
            Flag = Resource->Flag;
            goto LABEL_12;
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
    v9 = KeGetCurrentIrql();
    v10 = KeGetCurrentThread();
    if ( v9 > v5 )
      KeBugCheckEx(0x1C6u, 0LL, v9, v5, 0LL);
    if ( v9 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      goto LABEL_28;
    if ( (v10->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_29;
    if ( !v9 && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
      goto LABEL_30;
  }
LABEL_12:
  if ( (Flag & 1) != 0 )
    return ExpFastResourceLegacyAcquireShared((ULONG_PTR)Resource);
  return ExpAcquireResourceSharedLite(Resource, Wait, Flag, v5);
}
