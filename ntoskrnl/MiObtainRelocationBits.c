/*
 * XREFs of MiObtainRelocationBits @ 0x1406A1D10
 * Callers:
 *     MiSelectImageBase @ 0x1406A1934 (MiSelectImageBase.c)
 * Callees:
 *     RtlFindClearBitsAndSetEx @ 0x14020C1E0 (RtlFindClearBitsAndSetEx.c)
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 *     MiSelectRelocationStartHint @ 0x1406A1BE8 (MiSelectRelocationStartHint.c)
 */

unsigned __int64 __fastcall MiObtainRelocationBits(__int64 a1, unsigned __int16 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v5; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 *v11; // rcx
  bool v12; // zf
  unsigned __int64 v14; // r15
  unsigned __int64 started; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((__int64)&qword_140C653C0, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C653C0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C653C0, v7, (__int64)&qword_140C653C0);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(*(unsigned __int64 **)a1, v5, a3);
  v10 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1LL )
  {
    v11 = *(unsigned __int64 **)(a1 + 8);
    if ( v11 )
    {
      v14 = RtlFindClearBitsAndSetEx(v11, v5, ClearBitsAndSet);
      if ( v14 != v10 )
      {
        RtlClearBitsEx(*(_QWORD *)a1, v10, v5);
        if ( v14 != -1LL )
          RtlClearBitsEx(*(_QWORD *)(a1 + 8), v14, v5);
        started = MiSelectRelocationStartHint(a1, v5, a3, 1);
        v10 = started;
        if ( started != -1LL )
        {
          RtlSetBitsEx(*(_QWORD *)a1, started, v5);
          RtlSetBitsEx(*(_QWORD *)(a1 + 8), v10, v5);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C653C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C653C0);
  KeAbPostRelease((ULONG_PTR)&qword_140C653C0);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v10;
}
