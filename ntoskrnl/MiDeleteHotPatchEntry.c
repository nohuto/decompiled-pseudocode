/*
 * XREFs of MiDeleteHotPatchEntry @ 0x140A33A90
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteVadHotPatchState @ 0x140A33D1C (MiDeleteVadHotPatchState.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     MiGetProcessHotPatchContext @ 0x140A345D0 (MiGetProcessHotPatchContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteHotPatchEntry(char *P)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rdi
  void *v4; // rcx
  __int64 ProcessHotPatchContext; // rax
  unsigned __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rcx
  PVOID *v10; // rax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 40));
  v4 = (void *)*((_QWORD *)P + 3);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( *(_QWORD *)P )
  {
    ProcessHotPatchContext = MiGetProcessHotPatchContext(Process, 0LL);
    --CurrentThread->SpecialApcDisable;
    v6 = (unsigned __int64 *)(ProcessHotPatchContext + 16);
    v7 = KeAbPreAcquire(ProcessHotPatchContext + 16, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
    if ( v8 )
      *(_BYTE *)(v8 + 18) = 1;
    v9 = *(_QWORD **)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v10 = (PVOID *)*((_QWORD *)P + 1), *v10 != P) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  ExFreePoolWithTag(P, 0);
}
