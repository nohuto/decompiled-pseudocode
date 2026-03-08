/*
 * XREFs of ObpDeleteSymbolicLinkName @ 0x14076F408
 * Callers:
 *     ObpMarkDirectoryObjectsTemporary @ 0x14076F1F8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407D85E0 (ObpDeleteNameCheck.c)
 *     ObShutdownSystem @ 0x140977E00 (ObShutdownSystem.c)
 * Callees:
 *     ObFastReplaceObject @ 0x140217FC8 (ObFastReplaceObject.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402637F0 (ObDereferenceObjectDeferDelete.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall ObpDeleteSymbolicLinkName(__int64 a1)
{
  int v1; // eax
  __int64 v3; // r14
  __int64 v4; // r15
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *v7; // rdi
  volatile signed __int64 *p_Blink; // rsi
  int v9; // r13d
  void *v10; // r12
  struct _KTHREAD *v11; // rax
  bool v12; // zf

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3]) + 304LL);
    if ( v4 )
    {
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      CurrentThread = KeGetCurrentThread();
      v7 = CurrentServerSiloGlobals;
      p_Blink = (volatile signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CurrentServerSiloGlobals[7].Blink, 0LL);
      v9 = ~(1 << v3);
      *(_DWORD *)(v4 + 256) &= v9;
      *(_BYTE *)(v3 + v4 + 260) = 0;
      v10 = (void *)ObFastReplaceObject((volatile __int64 *)(v4 + 8 * (v3 + 4)), 0LL);
      if ( v4 == ((unsigned __int64)v7->Flink & 0xFFFFFFFFFFFFFFF0uLL) )
        LODWORD(v7->Blink) &= v9;
      else
        --*((_DWORD *)&v7->Blink + v3 + 1);
      if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(p_Blink);
      KeAbPostRelease((ULONG_PTR)p_Blink);
      v11 = KeGetCurrentThread();
      v12 = v11->SpecialApcDisable++ == -1;
      if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
        KiCheckForKernelApcDelivery();
      if ( v10 )
        ObDereferenceObjectDeferDelete(v10);
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
}
