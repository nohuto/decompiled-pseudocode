/*
 * XREFs of ObpRemoveNamespaceFromTable @ 0x14077B7BC
 * Callers:
 *     ObpCloseDirectoryObject @ 0x14077B790 (ObpCloseDirectoryObject.c)
 *     NtDeletePrivateNamespace @ 0x140881680 (NtDeletePrivateNamespace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall ObpRemoveNamespaceFromTable(volatile signed __int32 *Object)
{
  unsigned int v2; // edi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx

  v2 = -1072103391;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CurrentServerSiloGlobals[45], 0LL);
  _InterlockedOr(Object + 84, 2u);
  v5 = (_QWORD *)*((_QWORD *)Object + 40);
  if ( v5 )
  {
    *((_QWORD *)Object + 40) = 0LL;
    v5[2] = 0LL;
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    --LODWORD(CurrentServerSiloGlobals[45].Blink);
    ObfDereferenceObject((PVOID)Object);
    v2 = 0;
  }
  ExReleasePushLockEx((__int64 *)&CurrentServerSiloGlobals[45], 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
