/*
 * XREFs of IopAllocateFileObjectExtension @ 0x14024F600
 * Callers:
 *     IoGetFileObjectFilterContext @ 0x14023AAB0 (IoGetFileObjectFilterContext.c)
 *     IopGetSetSpecificExtension @ 0x14023EA58 (IopGetSetSpecificExtension.c)
 *     IoSetOplockPrivateFoExt @ 0x14023FA98 (IoSetOplockPrivateFoExt.c)
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     IopSetFileObjectExtensionFlag @ 0x140294D78 (IopSetFileObjectExtensionFlag.c)
 *     IoSetOplockKeyContext @ 0x1403C9528 (IoSetOplockKeyContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x140554D30 (IoSetIoPriorityHintIntoFileObject.c)
 *     IoSetShadowFileInformation @ 0x140554D70 (IoSetShadowFileInformation.c)
 *     IopSymlinkSetFoExtension @ 0x14087CA70 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140942FC8 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140944B5C (IopSetFileMemoryPartitionInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // r14
  volatile signed __int64 *v6; // r15
  KIRQL v7; // al
  __int64 Pool2; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v19; // eax

  v2 = *(void **)(a1 + 208);
  v3 = 0LL;
  if ( v2 )
  {
    if ( v2 != IopRevocationExtension )
    {
      if ( a2 )
        *a2 = (__int64)v2;
      return 0LL;
    }
  }
  else
  {
    v6 = (volatile signed __int64 *)(a1 + 184);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
    Pool2 = *(_QWORD *)(a1 + 208);
    v9 = v7;
    if ( Pool2 )
    {
LABEL_7:
      if ( a2 )
        *a2 = Pool2;
      KxReleaseSpinLock(v6);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v15 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8((unsigned __int8)v9);
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      v11 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    __writecr8(v9);
    Pool2 = ExAllocatePool2(64LL, 96LL, 1162243913LL);
    if ( Pool2 )
    {
      LOBYTE(v9) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
      if ( *(_QWORD *)(a1 + 208) )
      {
        v3 = (void *)Pool2;
        Pool2 = *(_QWORD *)(a1 + 208);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 208), Pool2);
      }
      goto LABEL_7;
    }
  }
  return 3221225626LL;
}
