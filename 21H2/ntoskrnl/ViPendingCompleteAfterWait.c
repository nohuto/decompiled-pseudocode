/*
 * XREFs of ViPendingCompleteAfterWait @ 0x140A91260
 * Callers:
 *     ViPendingCompleteAtDPC @ 0x140A91350 (ViPendingCompleteAtDPC.c)
 *     ViPendingWorkerThread @ 0x140A91580 (ViPendingWorkerThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     VfPacketAcquireLock @ 0x140A9BF9C (VfPacketAcquireLock.c)
 *     VfPacketDereference @ 0x140A9C0A0 (VfPacketDereference.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AA5BCC (VfIrpDatabaseEntryReleaseLock.c)
 */

void __fastcall ViPendingCompleteAfterWait(char *P)
{
  __int64 v2; // rdi
  IRP *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r14
  void *v6; // rsi
  unsigned int (__fastcall *v7)(_QWORD, IRP *, _QWORD); // rax

  if ( *((_DWORD *)P + 42) == 1 )
    KeWaitForSingleObject(P + 104, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)P;
  VfPacketAcquireLock(*(_QWORD *)P);
  v3 = *(IRP **)v2;
  v4 = *(_QWORD *)(v2 + 216);
  v5 = *(_QWORD *)(*(_QWORD *)v2 + 184LL);
  *(_DWORD *)(v2 + 56) &= ~0x10u;
  if ( !v4 || (v6 = *(void **)(v4 + 40)) == 0LL )
    v6 = 0LL;
  VfPacketDereference(v2, 1LL);
  VfIrpDatabaseEntryReleaseLock(v2);
  v7 = *(unsigned int (__fastcall **)(_QWORD, IRP *, _QWORD))(v5 - 16);
  if ( !v7 || v7(*((_QWORD *)P + 1), v3, *(_QWORD *)(v5 - 8)) != -1073741802 )
    IofCompleteRequest(v3, P[172]);
  if ( v6 )
    ObfDereferenceObject(v6);
  ExFreePoolWithTag(P, 0);
}
