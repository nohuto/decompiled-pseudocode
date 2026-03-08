/*
 * XREFs of RawInitiateDeleteVolume @ 0x14028DD58
 * Callers:
 *     RawCompletionRoutine @ 0x14028DFF0 (RawCompletionRoutine.c)
 *     RawVerifyVolume @ 0x1405A483C (RawVerifyVolume.c)
 *     RawReadWriteDeviceControl @ 0x1406F30A4 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x1406F3164 (RawCreate.c)
 *     RawClose @ 0x1406F32E8 (RawClose.c)
 *     RawCleanup @ 0x1406F3368 (RawCleanup.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RawDeleteVcb @ 0x1406F3E2C (RawDeleteVcb.c)
 *     RawCleanupVcb @ 0x1406F3EA0 (RawCleanupVcb.c)
 */

char __fastcall RawInitiateDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, int a2, int a3)
{
  char v3; // si
  void ***p_FileContextSupportPointer; // r14
  KIRQL v8; // r15
  KIRQL v9; // dl
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
    v9 = KeAcquireQueuedSpinLock(9uLL);
    if ( *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) )
      goto LABEL_5;
    KeReleaseQueuedSpinLock(9uLL, v9);
    ExAcquireFastMutex(&RawGlobalLock);
    Flink = AdvancedHeader[1].FilterContexts.Flink;
    if ( Flink->Blink == &AdvancedHeader[1].FilterContexts )
    {
      Blink = AdvancedHeader[1].FilterContexts.Blink;
      if ( Blink->Flink == &AdvancedHeader[1].FilterContexts )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        ExReleaseFastMutex(&RawGlobalLock);
        goto LABEL_11;
      }
    }
LABEL_21:
    __fastfail(3u);
  }
  p_FileContextSupportPointer = &AdvancedHeader[1].FileContextSupportPointer;
  v8 = KeAcquireQueuedSpinLock(9uLL);
  if ( a2 || *((_DWORD *)*p_FileContextSupportPointer + 7) + *(_DWORD *)&AdvancedHeader[1].Flags == a3 )
  {
    p_FilterContexts = (char *)&AdvancedHeader[1].FilterContexts;
    if ( LODWORD(AdvancedHeader[1].Resource) + *((_DWORD *)*p_FileContextSupportPointer + 7) )
    {
      memset(AdvancedHeader[1].Oplock, 0, 0x60uLL);
      *(_WORD *)AdvancedHeader[1].Oplock = 10;
      *((_WORD *)AdvancedHeader[1].Oplock + 1) = 96;
      *((_QWORD *)AdvancedHeader[1].Oplock + 2) = (*p_FileContextSupportPointer)[2];
      *((_QWORD *)AdvancedHeader[1].Oplock + 1) = 0LL;
      *((_WORD *)AdvancedHeader[1].Oplock + 2) = *((_WORD *)*p_FileContextSupportPointer + 2) & 8;
      *((_QWORD *)(*p_FileContextSupportPointer)[2] + 7) = AdvancedHeader[1].Oplock;
      v14 = *p_FileContextSupportPointer;
      AdvancedHeader[1].Oplock = 0LL;
      *((_WORD *)v14 + 2) |= 4u;
      *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 8u;
      KeReleaseQueuedSpinLock(9uLL, v8);
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
          v17 = (struct _LIST_ENTRY *)qword_140C37BF8;
          if ( *(__int64 **)qword_140C37BF8 == &RawDismountedQueue )
          {
            *(_QWORD *)p_FilterContexts = &RawDismountedQueue;
            AdvancedHeader[1].FilterContexts.Blink = v17;
            v17->Flink = (struct _LIST_ENTRY *)p_FilterContexts;
            qword_140C37BF8 = (__int64)&AdvancedHeader[1].FilterContexts;
            ExReleaseFastMutex(&RawGlobalLock);
            return v3;
          }
        }
      }
    }
    else
    {
      *((_WORD *)*p_FileContextSupportPointer + 2) &= ~1u;
      (*p_FileContextSupportPointer)[1] = 0LL;
      KeReleaseQueuedSpinLock(9uLL, v8);
      ExAcquireFastMutex(&RawGlobalLock);
      v12 = *(struct _LIST_ENTRY **)p_FilterContexts;
      if ( *(char **)(*(_QWORD *)p_FilterContexts + 8LL) == p_FilterContexts )
      {
        v13 = AdvancedHeader[1].FilterContexts.Blink;
        if ( (char *)v13->Flink == p_FilterContexts )
        {
          v13->Flink = v12;
          v12->Blink = v13;
          ExReleaseFastMutex(&RawGlobalLock);
          *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 2u;
LABEL_11:
          ExReleaseFastMutex((PFAST_MUTEX)&AdvancedHeader[2].Resource);
          RawCleanupVcb(AdvancedHeader);
          RawDeleteVcb(AdvancedHeader);
          return 1;
        }
      }
    }
    goto LABEL_21;
  }
  v9 = v8;
LABEL_5:
  KeReleaseQueuedSpinLock(9uLL, v9);
  return v3;
}
