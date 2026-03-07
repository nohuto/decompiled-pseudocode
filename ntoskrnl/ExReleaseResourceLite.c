void __stdcall ExReleaseResourceLite(PERESOURCE Resource)
{
  USHORT Flag; // dx
  __int16 v3; // ax
  unsigned __int8 v4; // al
  struct _KTHREAD *v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v8; // rsi
  unsigned __int8 v9; // r8
  _DWORD *SchedulerAssist; // r11
  __int64 v11; // rdx
  struct _KTHREAD *v12; // r8
  USHORT v13; // cx
  _QWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  Flag = Resource->Flag;
  v3 = Flag & 0x41;
  if ( !FeatureFastResource2 )
  {
    if ( v3 != 1 )
    {
      if ( (Flag & 1) == 0 )
        goto LABEL_17;
      CurrentIrql = KeGetCurrentIrql();
      CurrentThread = KeGetCurrentThread();
      if ( CurrentIrql > 2u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
      if ( CurrentIrql || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
        goto LABEL_9;
LABEL_38:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
LABEL_36:
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( v3 == 1 )
    goto LABEL_36;
  if ( (Flag & 1) == 0 )
    goto LABEL_17;
  v4 = KeGetCurrentIrql();
  v5 = KeGetCurrentThread();
  if ( v4 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v4, 2uLL, 0LL);
  if ( !v4 && (v5->MiscFlags & 0x400) == 0 && !v5->WaitBlock[3].SpareLong )
    goto LABEL_38;
  if ( (Flag & 1) != 0 )
  {
LABEL_9:
    ExpFastResourceLegacyRelease((ULONG_PTR)Resource);
    return;
  }
LABEL_17:
  v8 = (ULONG_PTR)KeGetCurrentThread();
  v15 = 0LL;
  v14[1] = &Resource->SpinLock;
  v14[0] = 0LL;
  v9 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v9 == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << (v9 + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  LOBYTE(v15) = v9;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v14, &Resource->SpinLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)v14) )
  {
    KxWaitForLockOwnerShip(v14);
  }
  v12 = KeGetCurrentThread();
  v13 = Resource->Flag;
  if ( ((v13 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v8 & 3) != 3 && (struct _KTHREAD *)v8 != v12 )
    KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v12, v8, 0LL);
  if ( (v13 & 0x80u) == 0 )
    ExpReleaseResourceSharedForThreadLite((ULONG_PTR)Resource, v8);
  else
    ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)Resource, v8);
}
