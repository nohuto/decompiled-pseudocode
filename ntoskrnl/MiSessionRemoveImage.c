__int64 __fastcall MiSessionRemoveImage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v5; // r14
  __int64 SessionVm; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 SharedVm; // rbx
  KIRQL v11; // al
  KIRQL v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbx
  bool v15; // zf
  __int64 v16; // rdx
  unsigned __int8 v17; // di
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  __int64 i; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 k; // rcx
  _QWORD *j; // rax
  unsigned __int64 v27; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  unsigned __int8 v32; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  v32 = 0;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  SessionVm = MiGetSessionVm();
  SharedVm = MiGetSharedVm(SessionVm, v7, v8, v9);
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v12 = v11;
  MmLockLoadedModuleListExclusive(&v32);
  v13 = MiSessionLookupImage(v2);
  v14 = v13;
  if ( !v13 )
    KeBugCheckEx(0x1Au, 0x2100uLL, BugCheckParameter2, v2, 0LL);
  v15 = (*(_DWORD *)(v13 + 60))-- == 1;
  if ( v15 )
  {
    v19 = *(_QWORD **)v13;
    v20 = (_QWORD *)v13;
    if ( *(_QWORD *)v13 )
    {
      for ( ; v19[1]; v19 = (_QWORD *)v19[1] )
        ;
    }
    else
    {
      for ( i = *(_QWORD *)(v13 + 16); ; i = v19[2] )
      {
        v19 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v19 || (_QWORD *)v19[1] == v20 )
          break;
        v20 = v19;
      }
    }
    if ( v19 )
      v22 = v19[6];
    else
      v22 = 0LL;
    v23 = *(_QWORD *)(v14 + 8);
    v24 = v14;
    *(_QWORD *)a2 = v22;
    if ( v23 )
    {
      for ( j = *(_QWORD **)v23; j; j = (_QWORD *)*j )
        v23 = (unsigned __int64)j;
    }
    else
    {
      for ( k = *(_QWORD *)(v14 + 16); ; k = *(_QWORD *)(v23 + 16) )
      {
        v23 = k & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v23 || *(_QWORD *)v23 == v24 )
          break;
        v24 = v23;
      }
    }
    if ( v23 )
      v27 = *(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
    else
      v27 = 0LL;
    *(_QWORD *)(a2 + 8) = v27;
    RtlAvlRemoveNode(v5 + 64, v14);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v14 + 72);
  }
  else
  {
    v14 = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v17 = v32;
    if ( v32 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = v32;
      v16 = -1LL << (v32 + 1);
      v31 = ~(unsigned __int16)v16;
      v15 = (v31 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v31;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v17 = v32;
  }
  __writecr8(v17);
  LOBYTE(v16) = v12;
  MiUnlockWorkingSetExclusive(SessionVm, v16);
  if ( v14 && *(_BYTE *)(v14 + 64) == 1 )
    MiHandleDriverNonPagedSections(BugCheckParameter2, 0LL, 0LL);
  return v14;
}
