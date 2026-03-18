/*
 * XREFs of RawInitiateDeleteVolume @ 0x1402D2BD8
 * Callers:
 *     RawCompletionRoutine @ 0x1402D2AD0 (RawCompletionRoutine.c)
 *     RawVerifyVolume @ 0x1405E364C (RawVerifyVolume.c)
 *     RawReadWriteDeviceControl @ 0x14074BBC4 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x14074BC84 (RawCreate.c)
 *     RawClose @ 0x14074BE1C (RawClose.c)
 *     RawCleanup @ 0x14074BE9C (RawCleanup.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RawCleanupVcb @ 0x14074B878 (RawCleanupVcb.c)
 *     RawDeleteVcb @ 0x14074D308 (RawDeleteVcb.c)
 */

char __fastcall RawInitiateDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, int a2, int a3)
{
  char v3; // si
  KIRQL v7; // r14
  KIRQL v8; // dl
  void **FileContextSupportPointer; // rcx
  char *p_FilterContexts; // rdi
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *v13; // rax
  void **v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  struct _LIST_ENTRY *v17; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  v3 = 0;
  if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 4) != 0 )
  {
    if ( LODWORD(AdvancedHeader[1].Resource) )
      return v3;
    v8 = KeAcquireQueuedSpinLock(9uLL);
    if ( *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) )
      goto LABEL_5;
    KeReleaseQueuedSpinLock(9uLL, v8);
    ExAcquireFastMutex(&RawGlobalLock);
    Flink = AdvancedHeader[1].FilterContexts.Flink;
    if ( Flink->Blink == &AdvancedHeader[1].FilterContexts )
    {
      Blink = AdvancedHeader[1].FilterContexts.Blink;
      if ( Blink->Flink == &AdvancedHeader[1].FilterContexts )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        KeReleaseGuardedMutex(&RawGlobalLock);
        goto LABEL_11;
      }
    }
LABEL_21:
    __fastfail(3u);
  }
  v7 = KeAcquireQueuedSpinLock(9uLL);
  if ( a2 || *(_DWORD *)&AdvancedHeader[1].Flags + *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) == a3 )
  {
    FileContextSupportPointer = AdvancedHeader[1].FileContextSupportPointer;
    p_FilterContexts = (char *)&AdvancedHeader[1].FilterContexts;
    if ( LODWORD(AdvancedHeader[1].Resource) + *((_DWORD *)FileContextSupportPointer + 7) )
    {
      memset(AdvancedHeader[1].Oplock, 0, 0x60uLL);
      *(_WORD *)AdvancedHeader[1].Oplock = 10;
      *((_WORD *)AdvancedHeader[1].Oplock + 1) = 96;
      *((_QWORD *)AdvancedHeader[1].Oplock + 2) = *((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 2);
      *((_QWORD *)AdvancedHeader[1].Oplock + 1) = 0LL;
      *((_WORD *)AdvancedHeader[1].Oplock + 2) = *((_WORD *)AdvancedHeader[1].FileContextSupportPointer + 2) & 8;
      *(_QWORD *)(*((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 2) + 56LL) = AdvancedHeader[1].Oplock;
      v14 = AdvancedHeader[1].FileContextSupportPointer;
      AdvancedHeader[1].Oplock = 0LL;
      *((_WORD *)v14 + 2) |= 4u;
      *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 8u;
      KeReleaseQueuedSpinLock(9uLL, v7);
      ExAcquireFastMutex(&RawGlobalLock);
      v15 = *(struct _LIST_ENTRY **)p_FilterContexts;
      if ( *(char **)(*(_QWORD *)p_FilterContexts + 8LL) == p_FilterContexts )
      {
        v16 = AdvancedHeader[1].FilterContexts.Blink;
        if ( (char *)v16->Flink == p_FilterContexts )
        {
          v16->Flink = v15;
          v15->Blink = v16;
          *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 6u;
          v17 = (struct _LIST_ENTRY *)qword_140C1BCB8;
          if ( *(__int64 **)qword_140C1BCB8 == &RawDismountedQueue )
          {
            *(_QWORD *)p_FilterContexts = &RawDismountedQueue;
            AdvancedHeader[1].FilterContexts.Blink = v17;
            v17->Flink = (struct _LIST_ENTRY *)p_FilterContexts;
            qword_140C1BCB8 = (__int64)&AdvancedHeader[1].FilterContexts;
            KeReleaseGuardedMutex(&RawGlobalLock);
            return v3;
          }
        }
      }
    }
    else
    {
      *((_WORD *)FileContextSupportPointer + 2) &= ~1u;
      *((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 1) = 0LL;
      KeReleaseQueuedSpinLock(9uLL, v7);
      ExAcquireFastMutex(&RawGlobalLock);
      v12 = *(struct _LIST_ENTRY **)p_FilterContexts;
      if ( *(char **)(*(_QWORD *)p_FilterContexts + 8LL) == p_FilterContexts )
      {
        v13 = AdvancedHeader[1].FilterContexts.Blink;
        if ( (char *)v13->Flink == p_FilterContexts )
        {
          v13->Flink = v12;
          v12->Blink = v13;
          KeReleaseGuardedMutex(&RawGlobalLock);
          *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 2u;
LABEL_11:
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].Resource);
          RawCleanupVcb(AdvancedHeader);
          RawDeleteVcb(AdvancedHeader);
          return 1;
        }
      }
    }
    goto LABEL_21;
  }
  v8 = v7;
LABEL_5:
  KeReleaseQueuedSpinLock(9uLL, v8);
  return v3;
}
