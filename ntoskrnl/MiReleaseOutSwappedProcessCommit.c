void __fastcall MiReleaseOutSwappedProcessCommit(struct _EPROCESS *a1)
{
  _QWORD *SharedVm; // r13
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *Pool; // rbp
  volatile LONG *v5; // rbx
  KIRQL v6; // al
  __int64 v7; // rdi
  __int64 v8; // rbx
  BOOL v9; // r12d
  unsigned __int64 v10; // r13
  _RTL_BALANCED_NODE *Root; // rax
  _QWORD *Children; // rdi
  __int64 v13; // rbx
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  volatile LONG *v19; // rbx
  KIRQL v20; // al
  _MMSUPPORT_FLAGS Flags; // ecx
  unsigned __int8 v22; // cl
  _QWORD *v23; // [rsp+70h] [rbp+8h]
  unsigned __int64 v24; // [rsp+78h] [rbp+10h] BYREF
  __int64 v25; // [rsp+80h] [rbp+18h]

  v24 = 0LL;
  KeForceAttachProcess((ULONG_PTR)a1, 0LL);
  SharedVm = MiGetSharedVm((__int64)&a1->Vm);
  CurrentThread = KeGetCurrentThread();
  v23 = SharedVm;
  v25 = *(_QWORD *)(qword_140C67048 + 8LL * a1->Vm.Instance.PartitionId);
  Pool = MiAllocatePool(64, 0x38uLL, 0x7243694Du);
  if ( !Pool )
    goto LABEL_31;
  v5 = (volatile LONG *)MiGetSharedVm((__int64)&a1->Vm);
  v6 = ExAcquireSpinLockExclusive(v5);
  *((_DWORD *)v5 + 1) = 0;
  a1->Vm.Instance.Flags.u2 |= 0x60u;
  MiUnlockWorkingSetExclusive((__int64)&a1->Vm, v6);
  v7 = 1LL;
  if ( dword_140D1D220 != 1 )
  {
    v8 = v25;
    v9 = 0;
    v10 = 0LL;
    if ( *(_DWORD *)(v25 + 1192) )
      v9 = SmStoreExistsForProcess((__int64)a1);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)a1);
    Root = a1->VadRoot.Root;
    Children = 0LL;
    while ( Root )
    {
      Children = Root->Children;
      Root = Root->Children[0];
    }
    while ( Children )
    {
      MiLockVad((__int64)CurrentThread, (__int64)Children);
      if ( MiIsVadEligibleForCommitRelease((__int64)Children) )
      {
        v13 = MiCheckCommitReleaseFromVad(v8, (__int64)a1, (__int64)&a1->Vm, (__int64)Children, v9, Pool + 4);
        MiUnlockVad((__int64)CurrentThread, (__int64)Children);
        v10 += v13;
        v8 = v25;
      }
      else
      {
        MiUnlockVad((__int64)CurrentThread, (__int64)Children);
      }
      v14 = (_QWORD **)Children[1];
      v15 = Children;
      if ( v14 )
      {
        v16 = *v14;
        for ( Children = (_QWORD *)Children[1]; v16; v16 = (_QWORD *)*v16 )
          Children = v16;
      }
      else
      {
        while ( 1 )
        {
          Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !Children || (_QWORD *)*Children == v15 )
            break;
          v15 = Children;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)a1);
    v7 = v10;
    _InterlockedExchange64((volatile __int64 *)&a1->Vm.Shared.ResetPagesRepurposedCount, 0LL);
    if ( v9 )
    {
      SmQueryStoreCommitUsage(a1, &v24);
      v18 = ((v24 & 0xFFF) != 0) + (v24 >> 12);
      v24 = v18;
      if ( v10 <= v18 )
      {
        v7 = 0LL;
LABEL_25:
        SharedVm = v23;
        goto LABEL_26;
      }
      v7 = v10 - v18;
    }
    if ( v7 )
      MiReturnCommit(v8, v7, v17);
    goto LABEL_25;
  }
LABEL_26:
  v19 = (volatile LONG *)MiGetSharedVm((__int64)&a1->Vm);
  v20 = ExAcquireSpinLockExclusive(v19);
  *((_DWORD *)v19 + 1) = 0;
  Flags = a1->Vm.Instance.Flags;
  if ( v7 )
  {
    SharedVm[4] = Pool;
    v22 = Flags.u2 & 0x9F | 0x40;
    SharedVm[1] = v7;
    Pool = 0LL;
  }
  else
  {
    v22 = Flags.u2 & 0x9F;
  }
  a1->Vm.Instance.Flags.u2 = v22;
  MiUnlockWorkingSetExclusive((__int64)&a1->Vm, v20);
  MiLogOutswappedProcessCommitRelease((__int64)a1, v7);
LABEL_31:
  KeForceDetachProcess(0LL, 0);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
