PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int16 v3; // dx
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v5; // rcx
  unsigned __int8 v6; // r8
  struct _KTHREAD *v7; // rdx

  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
  --CurrentThread->KernelApcDisable;
  v3 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( FeatureFastResource2 )
  {
    if ( (v3 & 0x41) != 1 )
    {
      if ( (v3 & 1) == 0 )
        goto LABEL_20;
      CurrentIrql = KeGetCurrentIrql();
      v5 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v5->ApcState.InProgressFlags & 2) == 0 )
      {
        if ( CurrentIrql || (v5->MiscFlags & 0x400) != 0 || v5->WaitBlock[3].SpareLong )
        {
          v3 = *(_WORD *)(BugCheckParameter2 + 26);
          goto LABEL_18;
        }
LABEL_25:
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
LABEL_24:
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    }
LABEL_22:
    KeBugCheckEx(0x1C6u, 0xFuLL, BugCheckParameter2, 0LL, 0LL);
  }
  if ( (v3 & 0x41) == 1 )
    goto LABEL_22;
  if ( (v3 & 1) != 0 )
  {
    v6 = KeGetCurrentIrql();
    v7 = KeGetCurrentThread();
    if ( v6 > 1u )
      KeBugCheckEx(0x1C6u, 0LL, v6, 1uLL, 0LL);
    if ( (v7->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_24;
    if ( !v6 && (v7->MiscFlags & 0x400) == 0 && !v7->WaitBlock[3].SpareLong )
      goto LABEL_25;
    LOBYTE(v3) = *(_WORD *)(BugCheckParameter2 + 26);
  }
LABEL_18:
  if ( (v3 & 1) != 0 )
  {
    ExpFastResourceLegacyAcquireShared(BugCheckParameter2);
    return CurrentThread->WaitBlock[2].SparePtr;
  }
LABEL_20:
  ExpAcquireResourceSharedLite(BugCheckParameter2, 1);
  return CurrentThread->WaitBlock[2].SparePtr;
}
