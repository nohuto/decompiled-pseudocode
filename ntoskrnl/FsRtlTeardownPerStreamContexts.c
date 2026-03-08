/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x1406F3F30
 * Callers:
 *     RawCleanupVcb @ 0x1406F3EA0 (RawCleanupVcb.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14023A620 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14023A860 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  _LIST_ENTRY *p_FilterContexts; // rbx
  unsigned __int8 v3; // al
  void *AePushLock; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v7; // rax
  unsigned __int8 v8; // al
  void **p_AePushLock; // r14
  struct _KTHREAD *v10; // rcx
  __int16 KernelApcDisable; // ax
  unsigned __int8 v12; // al
  ULONG_PTR v13; // rcx
  struct _KTHREAD *v14; // rdx
  struct _KTHREAD *v15; // rcx
  unsigned __int8 v16; // al
  void *v17; // rcx
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  struct _KTHREAD *v20; // rax

  p_FilterContexts = &AdvancedHeader->FilterContexts;
  if ( p_FilterContexts->Flink != p_FilterContexts )
  {
    v3 = *((_BYTE *)AdvancedHeader + 7) >> 4;
    if ( v3 >= 3u && (AePushLock = AdvancedHeader->AePushLock) != 0LL )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)AePushLock, 0LL);
    }
    else
    {
      if ( !v3 )
        goto LABEL_22;
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
    }
    while ( 1 )
    {
      Flink = p_FilterContexts->Flink;
      if ( p_FilterContexts->Flink == p_FilterContexts )
        break;
      v7 = Flink->Flink;
      if ( Flink->Blink != p_FilterContexts || v7->Blink != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = v7;
      v7->Blink = p_FilterContexts;
      v8 = *((_BYTE *)AdvancedHeader + 7) >> 4;
      p_AePushLock = &AdvancedHeader->AePushLock;
      if ( v8 >= 3u && *p_AePushLock )
      {
        ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)*p_AePushLock, 0LL);
        v10 = KeGetCurrentThread();
        KernelApcDisable = v10->KernelApcDisable;
        v10->KernelApcDisable = KernelApcDisable + 1;
        if ( KernelApcDisable == -1
          && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152
          && !v10->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      else if ( v8 )
      {
        ExReleasePushLockEx((__int64 *)&AdvancedHeader->PushLock, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      else
      {
        ExReleaseFastMutex(AdvancedHeader->FastMutex);
      }
      ((void (__fastcall *)(struct _LIST_ENTRY *))Flink[2].Flink)(Flink);
      v12 = *((_BYTE *)AdvancedHeader + 7) >> 4;
      if ( v12 >= 3u && (v13 = (ULONG_PTR)*p_AePushLock) != 0 )
      {
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        ExAcquireAutoExpandPushLockExclusive(v13, 0LL);
      }
      else if ( v12 )
      {
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
      }
      else
      {
LABEL_22:
        ExAcquireFastMutex(AdvancedHeader->FastMutex);
      }
    }
    v16 = *((_BYTE *)AdvancedHeader + 7) >> 4;
    if ( v16 >= 3u && (v17 = AdvancedHeader->AePushLock) != 0LL )
    {
      ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)v17, 0LL);
      v18 = KeGetCurrentThread();
      v19 = v18->KernelApcDisable++ == -1;
      if ( v19
        && ($C71981A45BEB2B45F82C232A7085991E *)v18->ApcState.ApcListHead[0].Flink != &v18->152
        && !v18->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else if ( v16 )
    {
      ExReleasePushLockEx((__int64 *)&AdvancedHeader->PushLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    else
    {
      ExReleaseFastMutex(AdvancedHeader->FastMutex);
    }
  }
}
