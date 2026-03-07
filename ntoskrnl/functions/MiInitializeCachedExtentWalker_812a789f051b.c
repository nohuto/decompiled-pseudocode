__int64 __fastcall MiInitializeCachedExtentWalker(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  volatile LONG *v5; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 CachedExtent; // rax
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rcx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  int v24; // eax
  _DWORD *v25; // r8
  volatile LONG *SpinLock; // [rsp+30h] [rbp-48h]
  int v28; // [rsp+88h] [rbp+10h]

  v5 = (volatile LONG *)(*a2 + 72);
  v28 = 1;
  SpinLock = v5;
  v7 = 0x8000000000000000uLL;
  while ( 1 )
  {
    v8 = ExAcquireSpinLockShared(v5);
    CachedExtent = MiLocateCachedExtent(a2, a3);
    v10 = CachedExtent;
    if ( CachedExtent )
    {
      if ( *(_QWORD *)(CachedExtent + 32) != 0x8000000000000000uLL )
        break;
    }
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v8);
    if ( !a4 || !v28 )
    {
      result = 3221225626LL;
      if ( v10 )
      {
        if ( *(_QWORD *)(v10 + 32) == 0x8000000000000000uLL )
          return 3221227273LL;
      }
      return result;
    }
    result = MiAllocateFileExtents((ULONG_PTR)a2, 2, -1);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        return result;
    }
    else
    {
      v28 = 0;
    }
    v5 = SpinLock;
  }
  v17 = a2[1];
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 32) = a4;
  v18 = MiStartingOffset(a2, v17, 0xFFFFFFFF);
  v19 = *(_QWORD *)(v10 + 32);
  v20 = (a3 - v18) >> 12;
  if ( v19 == 0x8000000000000000uLL )
  {
    v21 = 0x8000000000000000uLL;
  }
  else
  {
    v7 = v19 + *(_QWORD *)(v10 + 40);
    v21 = v19 + (unsigned int)v20 - (unsigned __int64)*(unsigned int *)(v10 + 24);
  }
  *(_QWORD *)(a1 + 16) = v21;
  *(_QWORD *)(a1 + 24) = v7;
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v22 >= 2u )
    {
      v23 = KeGetCurrentPrcb();
      v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v25 = v23->SchedulerAssist;
      v15 = (v24 & v25[5]) == 0;
      v25[5] &= v24;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)v23);
    }
  }
  __writecr8(v8);
  return 0LL;
}
