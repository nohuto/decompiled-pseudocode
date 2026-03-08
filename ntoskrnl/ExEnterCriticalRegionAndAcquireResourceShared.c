/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402CCA50
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireResourceSharedWrapper @ 0x1405D6360 (DifExEnterCriticalRegionAndAcquireResourceSharedWrapper.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14025DED0 (ExpAcquireResourceSharedLite.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C33D4 (ExpFastResourceLegacyAcquireShared.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  USHORT Flag; // dx
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *v4; // rdx
  unsigned __int8 v5; // r9
  struct _KTHREAD *v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Flag = Resource->Flag;
  if ( FeatureFastResource2 )
  {
    if ( (Flag & 0x41) != 1 )
    {
      if ( (Flag & 1) == 0 )
      {
LABEL_20:
        ExpAcquireResourceSharedLite((__int64)Resource, 1);
        return KeGetCurrentThread()->WaitBlock[2].SparePtr;
      }
      CurrentIrql = KeGetCurrentIrql();
      v4 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v4->ApcState.InProgressFlags & 2) == 0 )
      {
        if ( CurrentIrql || (v4->MiscFlags & 0x400) != 0 || v4->WaitBlock[3].SpareLong )
        {
          Flag = Resource->Flag;
          goto LABEL_18;
        }
LABEL_26:
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
LABEL_25:
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    }
LABEL_23:
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( (Flag & 0x41) == 1 )
    goto LABEL_23;
  if ( (Flag & 1) != 0 )
  {
    v5 = KeGetCurrentIrql();
    v6 = KeGetCurrentThread();
    if ( v5 > 1u )
      KeBugCheckEx(0x1C6u, 0LL, v5, 1uLL, 0LL);
    if ( (v6->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_25;
    if ( !v5 && (v6->MiscFlags & 0x400) == 0 && !v6->WaitBlock[3].SpareLong )
      goto LABEL_26;
    LOBYTE(Flag) = Resource->Flag;
  }
LABEL_18:
  if ( (Flag & 1) == 0 )
    goto LABEL_20;
  ExpFastResourceLegacyAcquireShared((ULONG_PTR)Resource);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
