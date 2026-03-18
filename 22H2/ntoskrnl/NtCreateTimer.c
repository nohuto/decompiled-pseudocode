/*
 * XREFs of NtCreateTimer @ 0x1407C6B20
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     KeInitializeTimerEx @ 0x1402BE630 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BF970 (KeInitializeDpc.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     PsInsertVirtualizedTimer @ 0x140356060 (PsInsertVirtualizedTimer.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateTimer(__int64 *a1, int a2, __int64 a3, TIMER_TYPE a4)
{
  char PreviousMode; // r14
  __int64 v8; // rcx
  int inserted; // ecx
  struct _KTIMER *v10; // rbx
  __int64 v11; // r9
  _KPROCESS *Process; // rsi
  unsigned __int64 v14; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v16; // rax
  bool v17; // zf
  __int64 v18; // [rsp+20h] [rbp-68h]
  PVOID DeferredContext; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-30h] BYREF

  DeferredContext = 0LL;
  v20 = 0LL;
  if ( (unsigned int)a4 <= SynchronizationTimer )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      v8 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v8 = (__int64)a1;
      *(_QWORD *)v8 = *(_QWORD *)v8;
    }
    inserted = ObCreateObjectEx(
                 PreviousMode,
                 ExTimerObjectType,
                 a3,
                 PreviousMode,
                 v18,
                 328,
                 0,
                 0,
                 &DeferredContext,
                 0LL);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    v10 = (struct _KTIMER *)DeferredContext;
    KeInitializeDpc((PRKDPC)((char *)DeferredContext + 160), (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, DeferredContext);
    KeInitializeTimerEx(v10, a4);
    *(_QWORD *)&v10[1].Header.Lock = 0LL;
    LOBYTE(v10[4].Dpc) = 0;
    *(_QWORD *)&v10[4].Header.Lock = 0LL;
    v10[4].Header.WaitListHead.Flink = 0LL;
    v10[4].DueTime.QuadPart = 0LL;
    if ( PreviousMode )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
      {
        v14 = Process[1].Affinity.StaticBitmap[16];
        LOBYTE(v11) = 0;
        if ( v14 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
          LOBYTE(v11) = (*(_DWORD *)(v14 + 1536) & 0x40000) != 0 && *(_DWORD *)(v14 + 1048);
        }
        v10 = (struct _KTIMER *)DeferredContext;
        PsInsertVirtualizedTimer(
          (KSPIN_LOCK *)Process,
          (_QWORD *)DeferredContext + 36,
          (KSPIN_LOCK *)DeferredContext + 8,
          v11,
          (KSPIN_LOCK **)DeferredContext + 35);
        if ( !v14 )
          goto LABEL_10;
        ExReleaseResourceLite((PERESOURCE)(v14 + 56));
        v16 = KeGetCurrentThread();
        v17 = v16->SpecialApcDisable++ == -1;
        if ( v17 && ($C71981A45BEB2B45F82C232A7085991E *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
          KiCheckForKernelApcDelivery();
      }
      v10 = (struct _KTIMER *)DeferredContext;
    }
LABEL_10:
    inserted = ObInsertObjectEx((char *)v10, 0LL, a2, 0, 0, 0LL, &v20);
    if ( inserted >= 0 )
      *a1 = v20;
    return (unsigned int)inserted;
  }
  return 3221225714LL;
}
