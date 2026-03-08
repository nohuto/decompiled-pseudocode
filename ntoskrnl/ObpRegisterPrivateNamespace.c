/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x1407440D0
 * Callers:
 *     NtCreatePrivateNamespace @ 0x140741A50 (NtCreatePrivateNamespace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObpLookupNamespaceEntry @ 0x140744190 (ObpLookupNamespaceEntry.c)
 */

__int64 __fastcall ObpRegisterPrivateNamespace(__int64 a1)
{
  unsigned int v2; // esi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rbp
  struct _LIST_ENTRY *v6; // rbx
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *Blink; // rcx

  v2 = -1073741771;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v5 = (__int64 *)&CurrentServerSiloGlobals[45];
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CurrentServerSiloGlobals[45], 0LL);
  v6 = CurrentServerSiloGlobals + 8;
  if ( !ObpLookupNamespaceEntry(v6, a1) )
  {
    v7 = &v6[*(unsigned __int8 *)(a1 + 40)];
    Blink = v7->Blink;
    if ( Blink->Flink != v7 )
      __fastfail(3u);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = Blink;
    Blink->Flink = (struct _LIST_ENTRY *)a1;
    v7->Blink = (struct _LIST_ENTRY *)a1;
    ++LODWORD(v6[37].Blink);
    v2 = 0;
  }
  ExReleasePushLockEx(v5, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
