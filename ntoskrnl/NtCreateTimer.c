/*
 * XREFs of NtCreateTimer @ 0x140777040
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimerEx @ 0x140237DB0 (KeInitializeTimerEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     PsInsertVirtualizedTimer @ 0x1402EA69C (PsInsertVirtualizedTimer.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 */

__int64 __fastcall NtCreateTimer(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  TIMER_TYPE v4; // edi
  _QWORD *v5; // r15
  char PreviousMode; // r14
  int Object; // ecx
  __int64 v8; // r9
  _KPROCESS *Process; // rsi
  unsigned __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v13; // rax
  __int64 v15; // [rsp+58h] [rbp-30h] BYREF

  v4 = a4;
  v5 = (_QWORD *)a1;
  v15 = 0LL;
  if ( a4 > 1 )
    return 3221225714LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v5;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  LOBYTE(a4) = PreviousMode;
  LOBYTE(a1) = PreviousMode;
  Object = ObCreateObjectEx(a1, (_DWORD)ExTimerObjectType, a3, a4);
  if ( Object >= 0 )
  {
    KeInitializeDpc((PRKDPC)0xA0, (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, 0LL);
    KeInitializeTimerEx(0LL, v4);
    MEMORY[0x40] = 0LL;
    MEMORY[0x130] = 0;
    MEMORY[0x100] = 0LL;
    MEMORY[0x108] = 0LL;
    MEMORY[0x118] = 0LL;
    if ( PreviousMode )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
      {
        v11 = Process[1].Affinity.StaticBitmap[16];
        LOBYTE(v8) = 0;
        if ( v11 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 56), 1u);
          LOBYTE(v8) = (*(_DWORD *)(v11 + 1536) & 0x40000) != 0 && *(_DWORD *)(v11 + 1048);
        }
        PsInsertVirtualizedTimer((KSPIN_LOCK *)Process, (_QWORD *)0x120, (KSPIN_LOCK *)0x40, v8, (KSPIN_LOCK **)0x118);
        if ( v11 )
        {
          ExReleaseResourceLite((PERESOURCE)(v11 + 56));
          v13 = KeGetCurrentThread();
          if ( v13->SpecialApcDisable++ == -1
            && ($C71981A45BEB2B45F82C232A7085991E *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
      }
    }
    Object = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v15);
    if ( Object >= 0 )
      *v5 = v15;
  }
  return (unsigned int)Object;
}
