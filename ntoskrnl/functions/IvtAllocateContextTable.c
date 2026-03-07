__int64 __fastcall IvtAllocateContextTable(__int64 a1, unsigned __int64 a2)
{
  char v2; // r9
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rax
  void **v8; // r15
  LONGLONG *v9; // r14
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v17; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  void *v25; // [rsp+80h] [rbp+30h] BYREF
  LARGE_INTEGER v26; // [rsp+88h] [rbp+38h] BYREF

  v25 = 0LL;
  v26.QuadPart = 0LL;
  v2 = *(_BYTE *)(a1 + 320);
  v3 = a1;
  v4 = a2 >> 8;
  v5 = (unsigned __int8)a2 >> 3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = (unsigned int)(2 * v4);
  if ( v2 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    a1 = v6 + (v5 >= 0x10);
    v8 = (void **)(v7 + 8 * a1);
  }
  else
  {
    v8 = (void **)(*(_QWORD *)(a1 + 32) + 8 * v6);
  }
  if ( *v8 )
    return 0LL;
  v9 = (LONGLONG *)(*(_QWORD *)(v3 + 16) + 8 * v6);
  if ( v2 && v5 >= 0x10 )
    ++v9;
  result = ExtEnvAllocatePhysicalMemory(
             a1,
             0x1000u,
             0x1000u,
             (MEMORY_CACHING_TYPE)*(_DWORD *)(v3 + 272),
             &v26,
             (__int64)&v25);
  if ( (int)result >= 0 )
  {
    memmove(v25, *(const void **)(v3 + 40), 0x1000uLL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v13) = 0x8000;
      else
        v13 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v13;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 208), &LockHandle);
    if ( *v8 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v14 = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        v15 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = (unsigned int)CurrentIrql + 1;
          v17 = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      ExtEnvFreePhysicalMemory(v14, v25, 0x1000u, *(_DWORD *)(v3 + 272));
    }
    else
    {
      *v8 = v25;
      *v9 = ((v26.QuadPart / 4096) << 12) | 1;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      if ( KiIrqlFlags )
      {
        v20 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
