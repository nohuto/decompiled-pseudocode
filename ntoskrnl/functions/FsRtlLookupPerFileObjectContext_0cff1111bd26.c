PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlLookupPerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  _QWORD *FileObjectExtension; // rax
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r14
  struct _KTHREAD *v10; // rbp
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v11; // r15
  unsigned int AbEntrySummary; // eax
  unsigned int v13; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  int v17; // eax
  __int64 v18; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *Flink; // rcx
  __int64 v20; // rsi
  signed __int64 *v21; // rbx
  unsigned int v22; // edi
  struct _KTHREAD *v23; // rdx
  bool v24; // zf
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  unsigned int v27; // eax
  unsigned int v28; // edi
  unsigned __int64 v29; // rax
  unsigned int v30; // [rsp+60h] [rbp+8h]
  unsigned __int64 v31; // [rsp+78h] [rbp+20h] BYREF

  if ( !FileObject )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension )
    return 0LL;
  if ( FileObjectExtension == IopRevocationExtension )
    return 0LL;
  v7 = FileObjectExtension[4];
  if ( !v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  v10 = KeGetCurrentThread();
  v11 = 0LL;
  _disable();
  AbEntrySummary = v10->AbEntrySummary;
  if ( v10->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v7, v10)) != 0 )
  {
    _BitScanForward(&v13, AbEntrySummary);
    v30 = v13;
    v10->AbEntrySummary = AbEntrySummary & ~(1 << v13);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v25 = *SchedulerAssist;
      do
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange(SchedulerAssist, v25 & 0xFFDFFFFF, v25);
      }
      while ( v26 != v25 );
      if ( (v25 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v9 = (__int64)(&v10[1].Process + 12 * v30);
    if ( (unsigned __int64)(v7 - qword_140C65668) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v10->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v9 + 8) = SessionId;
    *(_QWORD *)v9 = v7 & 0x7FFFFFFFFFFFFFFCLL;
  }
  v17 = *(_DWORD *)(v7 + 8);
  if ( (v17 & 1) != 0 )
  {
    v18 = ExpAcquireFannedOutPushLockShared(v17 & 0xFFFFFFF8, 0LL, v9, v7);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v7, 0, v9, v7);
    v18 = v7 | 1;
  }
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  Flink = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 16);
  v20 = v7 + 16;
  if ( InstanceId )
  {
    if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v20 )
    {
      while ( Flink->OwnerId != OwnerId || Flink->InstanceId != InstanceId )
      {
        Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
        if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v20 )
          goto LABEL_22;
      }
LABEL_21:
      v11 = Flink;
    }
  }
  else
  {
    if ( OwnerId )
    {
      if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v20 )
        goto LABEL_22;
      while ( Flink->OwnerId != OwnerId )
      {
        Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
        if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v20 )
          goto LABEL_22;
      }
      goto LABEL_21;
    }
    if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v20 )
      v11 = Flink;
  }
LABEL_22:
  v31 = 0LL;
  v21 = (signed __int64 *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (v18 & 1) == 0 )
  {
    if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v21);
    v21 = (signed __int64 *)v21[1];
    goto LABEL_27;
  }
  _m_prefetchw((char *)v21 + 12);
  v22 = *((_DWORD *)v21 + 3);
  if ( v22 >= 0x80000000 && (v21[1] & 3) == 0 )
  {
    if ( (unsigned __int16)v22 < (unsigned int)ExpAeCycleCountThreshold
      || (v22 & 0xF0000) >= 0xF0000
      || KeGetCurrentIrql() >= 2u )
    {
      v22 = (v22 >> 2) & 0x3FF33FFF;
      *((_DWORD *)v21 + 3) = v22;
    }
    else
    {
      ExpTryExpandAutoExpandPushLock(v21);
    }
  }
  if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) == 17 )
    goto LABEL_25;
  if ( (v22 & ExpAeSamplingPeriodMask) != 0 )
  {
    ExfReleasePushLockSharedEx(v21, 0LL);
    v27 = *((_DWORD *)v21 + 3);
    if ( v27 < 0x80000000 )
      *((_DWORD *)v21 + 3) = v27 + 0x100000;
    goto LABEL_27;
  }
  ExfReleasePushLockSharedEx(v21, &v31);
  if ( v31 )
  {
    v28 = *((_DWORD *)v21 + 3);
    if ( v28 < 0x80000000 )
    {
      v29 = v31 >> ExpAeCycleCountScaler;
      if ( v31 >> ExpAeCycleCountScaler > 0x1FF )
        LODWORD(v29) = 511;
      v22 = v29 + v28;
LABEL_25:
      if ( v22 < 0x80000000 )
        *((_DWORD *)v21 + 3) = v22 + 0x100000;
    }
  }
LABEL_27:
  KeAbPostRelease((ULONG_PTR)v21);
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable++ == -1;
  if ( v24
    && ($C71981A45BEB2B45F82C232A7085991E *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v11;
}
