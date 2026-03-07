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
