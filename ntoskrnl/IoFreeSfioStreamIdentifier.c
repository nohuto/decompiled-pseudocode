/*
 * XREFs of IoFreeSfioStreamIdentifier @ 0x140554500
 * Callers:
 *     <none>
 * Callees:
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoFreeSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  __int64 v3; // rcx
  void **FileObjectExtension; // rbx
  NTSTATUS v5; // esi
  volatile signed __int64 *v6; // rbp
  KIRQL v7; // al
  PVOID *v8; // rcx
  unsigned __int64 v9; // rdi
  void **v10; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf
  void **v17; // rax

  FileObjectExtension = (void **)IopGetFileObjectExtension((__int64)FileObject, 4, 0LL);
  v5 = -1073741275;
  if ( FileObjectExtension )
  {
    v6 = (volatile signed __int64 *)(v3 + 184);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 184));
    v8 = (PVOID *)*FileObjectExtension;
    v9 = v7;
    if ( *FileObjectExtension != FileObjectExtension )
    {
      while ( 1 )
      {
        v10 = (void **)*v8;
        if ( v8[3] == Signature )
          break;
        v8 = (PVOID *)*v8;
        if ( v10 == FileObjectExtension )
          goto LABEL_5;
      }
      v17 = (void **)v8[1];
      if ( v10[1] != v8 || *v17 != v8 )
        __fastfail(3u);
      *v17 = v10;
      v10[1] = v17;
      ExFreePoolWithTag(v8, 0);
      v5 = 0;
    }
LABEL_5:
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v9);
  }
  return v5;
}
