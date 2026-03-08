/*
 * XREFs of MiDereferenceSessionFinal @ 0x14067E7A0
 * Callers:
 *     MiDereferenceSession @ 0x140791B70 (MiDereferenceSession.c)
 * Callees:
 *     MiUnlinkSessionWorkingSet @ 0x140200794 (MiUnlinkSessionWorkingSet.c)
 *     MiMarkSessionDeletePending @ 0x1402007FC (MiMarkSessionDeletePending.c)
 *     MiSessionUnlinkProcess @ 0x14020086C (MiSessionUnlinkProcess.c)
 *     MiDeleteSessionAddressSpace @ 0x1402008EC (MiDeleteSessionAddressSpace.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiReturnResident @ 0x1402A52C8 (MiReturnResident.c)
 *     MiDetachProcessFromSession @ 0x1402EA0D8 (MiDetachProcessFromSession.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     MiPartitionIdToPointer @ 0x14036CC64 (MiPartitionIdToPointer.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MiSessionUnloadAllImages @ 0x14067E8F8 (MiSessionUnloadAllImages.c)
 *     ExpWnfDeleteScopeById @ 0x140704810 (ExpWnfDeleteScopeById.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 */

unsigned __int64 MiDereferenceSessionFinal()
{
  _KPROCESS *Process; // rdi
  __int64 v1; // rbx
  __int64 v2; // rsi
  void (__fastcall *v3)(_QWORD); // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 result; // rax
  void *v8; // rcx
  _OWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+70h] [rbp+8h] BYREF

  memset(v9, 0, sizeof(v9));
  v11 = 0LL;
  v10 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].Affinity.StaticBitmap[25];
  v2 = MiPartitionIdToPointer(*(_WORD *)(v1 + 366));
  MiMarkSessionDeletePending(v1);
  if ( *(_QWORD *)(v1 + 56) )
  {
    KeSetEvent(*(PRKEVENT *)(v1 + 48), 1, 0);
    ObCloseHandle(*(HANDLE *)(v1 + 56), 0);
  }
  v3 = *(void (__fastcall **)(_QWORD))(v1 + 608);
  if ( (unsigned __int64)v3 > 1 )
    v3(0LL);
  MiSessionUnloadAllImages();
  MiUnlinkSessionWorkingSet(v1);
  v12 = *(_DWORD *)(v1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteScopeById(1LL, &v12);
  KeLeaveCriticalRegion();
  if ( Process[1].Affinity.StaticBitmap[2] )
  {
    MiSessionUnlinkProcess(v5, (__int64)Process);
    Process[1].Affinity.StaticBitmap[2] = 0LL;
  }
  MiDeleteSessionAddressSpace(v1, (__int64)v9);
  MiDetachProcessFromSession(0LL);
  MiReturnCommit(v2, v10 - *((_QWORD *)&v9[0] + 1), v6);
  MiReturnResident(v2, *(unsigned __int64 *)&v9[0]);
  result = MiReturnResident(v2, *(_QWORD *)(v1 + 304));
  v8 = *(void **)(v1 + 784);
  if ( v8 )
    result = ObfDereferenceObjectWithTag(v8, 0x73536D4Du);
  *(_QWORD *)(v1 + 784) = 0LL;
  return result;
}
