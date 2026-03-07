__int64 __fastcall PnpRemoveLockedDeviceNode(__int64 MaxDataSize, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r15
  int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rax
  _QWORD *Pool2; // rdi
  _BYTE *v12; // r12
  unsigned int v13; // esi
  __int64 v14; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // r14
  _QWORD *v17; // r15
  KIRQL v18; // r8
  __int64 *v19; // rdx
  __int64 i; // rcx
  __int64 v21; // rax
  PVOID *v22; // r14
  KIRQL v23; // al
  KIRQL v24; // al
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // [rsp+60h] [rbp+8h]

  v3 = *(_QWORD *)(MaxDataSize + 32);
  v31 = v3;
  v6 = 0;
  PpHotSwapInitRemovalPolicy();
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 )
  {
    do
    {
      v28 = *(_DWORD *)(v8 + 396);
      v29 = *(_QWORD *)v8;
      if ( (v28 & 0x10) != 0 )
      {
        v28 &= ~0x10u;
        *(_DWORD *)(v8 + 396) = v28;
      }
      if ( *(_QWORD *)(v8 + 416) || *(_QWORD *)(v8 + 544) || (v28 & 0x40) != 0 )
      {
        PipSetDevNodeUserFlags(v8, 512LL);
        IopRemoveDevice(*(PDEVICE_OBJECT *)(v8 + 32));
        PipClearDevNodeUserFlags(v8, 512LL);
        IopReleaseDeviceResources(v8, 0LL);
      }
      PipSetDevNodeState(v8, 790);
      v8 = v29;
    }
    while ( v29 );
  }
  result = (unsigned int)(*(_DWORD *)(MaxDataSize + 300) - 784);
  if ( (unsigned int)result <= 1 )
  {
    if ( *(_DWORD *)(MaxDataSize + 304) == 787 )
      return result;
    PipRestoreDevNodeState(MaxDataSize);
  }
  if ( *(_DWORD *)(MaxDataSize + 300) != 790 )
    JUMPOUT(0x1403B1E0FLL);
  v10 = *(_QWORD *)(v3 + 24);
  while ( v10 )
  {
    v10 = *(_QWORD *)(v10 + 24);
    ++v6;
  }
  Pool2 = 0LL;
  v12 = 0LL;
  if ( v6 )
  {
    v13 = 8 * v6 + 16;
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, v13, 1701081168LL);
    if ( Pool2 )
    {
      v14 = ExAllocatePool2(256LL, v13, 1701081168LL);
      v12 = (_BYTE *)v14;
      if ( v14 )
      {
        v15 = *(_QWORD **)(v3 + 24);
        v16 = Pool2;
        v17 = (_QWORD *)v14;
        while ( v15 )
        {
          ObfReferenceObjectWithTag(v15, 0x746C6644u);
          *v16++ = v15;
          *v17++ = v15[1];
          v15 = (_QWORD *)v15[3];
        }
        v3 = v31;
      }
      else
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
      }
    }
  }
  v18 = KeAcquireQueuedSpinLock(0xAuLL);
  v19 = Pool2;
  if ( Pool2 )
  {
    for ( i = *Pool2; i; i = *v19 )
    {
      *(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) &= ~4u;
      v21 = *v19++;
      *(_DWORD *)(*(_QWORD *)(v21 + 312) + 32LL) |= 8u;
    }
  }
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~4u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 8u;
  KeReleaseQueuedSpinLock(0xAuLL, v18);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 && (unsigned int)(*(_DWORD *)(MaxDataSize + 568) - 3) <= 1 )
    PpProfileCommitTransitioningDock(MaxDataSize);
  v22 = (PVOID *)Pool2;
  if ( Pool2 )
  {
    if ( *Pool2 )
    {
      do
      {
        v23 = KeAcquireQueuedSpinLock(0xAuLL);
        *(_DWORD *)(*((_QWORD *)*v22 + 39) + 32LL) &= ~8u;
        *(_DWORD *)(*((_QWORD *)*v22 + 39) + 32LL) |= 0x10u;
        KeReleaseQueuedSpinLock(0xAuLL, v23);
        PnpUnloadAttachedDriver(*(PVOID *)((char *)v22 + v12 - (_BYTE *)Pool2));
        ObfDereferenceObject(*v22++);
      }
      while ( *v22 );
    }
    ExFreePoolWithTag(Pool2, 0);
    ExFreePoolWithTag(v12, 0);
  }
  v24 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~8u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 0x10u;
  KeReleaseQueuedSpinLock(0xAuLL, v24);
  v25 = 788;
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    v25 = 790;
  PipSetDevNodeState(MaxDataSize, v25);
  if ( a2
    && ((*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0
     || ((a2 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)PipIsProblemReadonly(MaxDataSize, a2)
     && !(unsigned int)PipIsProblemReadonly(v30, *(unsigned int *)(MaxDataSize + 404))) )
  {
    PipClearDevNodeProblem(MaxDataSize);
    PipSetDevNodeProblem(MaxDataSize, a2, a3);
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    PnpDeleteAllDependencyRelations(v3);
  result = PiDmaGuardProcessPostRemove(MaxDataSize);
  v27 = *(_QWORD *)(MaxDataSize + 48);
  if ( v27 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v26, v27, 23LL);
  return result;
}
