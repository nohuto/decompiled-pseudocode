__int64 __fastcall IvtAllocateScalableModePasidTables(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5)
{
  int v8; // edi
  int v9; // r9d
  unsigned int v10; // r12d
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // esi
  __int64 v15; // r13
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v18; // rdx
  __int64 ScalableModePasidTables; // rax
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  __int64 *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v31; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER v32; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v35; // [rsp+B0h] [rbp+50h]

  v32.QuadPart = 0LL;
  v31 = 0LL;
  v8 = -1073741823;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 >= 0x100000 )
    goto LABEL_40;
  if ( a4 >= 0x100000 )
    goto LABEL_40;
  if ( a4 < a3 )
    goto LABEL_40;
  v9 = a4 & 0xFFFC0;
  v10 = v9 + 64;
  v35 = v9 + 64;
  if ( (a3 & 0xFFFFFFC0) > 0xFFFC0 )
    goto LABEL_40;
  v11 = (v10 >> 6) & 0x3FFF;
  v8 = ExtEnvAllocateMemory(1048512LL, 8 * v11 + 56, &v31);
  if ( v8 < 0 )
    goto LABEL_40;
  v13 = v31;
  v14 = (8 * v11 + 4095) & 0xFFFFF000;
  *(_QWORD *)(v31 + 8) = v31;
  *(_QWORD *)v13 = v13;
  *(_QWORD *)(v13 + 24) = v13 + 16;
  *(_QWORD *)(v13 + 16) = v13 + 16;
  *(_DWORD *)(v13 + 40) = a2;
  v15 = v13;
  *(_DWORD *)(v13 + 32) = 0;
  *(_DWORD *)(v13 + 36) = v10;
  v8 = ExtEnvAllocatePhysicalMemory(v12, v14, 0x1000u, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272), &v32, v13 + 48);
  if ( v8 >= 0 )
  {
    memset(*(void **)(v13 + 48), 0, v14);
    v8 = IvtExtendScalableModePasidTables(a1, v13, a3);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v18) = 0x8000;
    else
      v18 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    v13 = v31;
    SchedulerAssist[5] |= v18;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  if ( a2 <= 0xFFFFFFFD && (ScalableModePasidTables = IvtGetScalableModePasidTables(a1, a2)) != 0 )
  {
    v15 = v13;
    if ( v35 > *(_DWORD *)(ScalableModePasidTables + 36) || a3 >= *(_DWORD *)(ScalableModePasidTables + 32) )
    {
      v13 = 0LL;
      v8 = -1073741823;
      v31 = 0LL;
    }
    else
    {
      v13 = ScalableModePasidTables;
      v31 = ScalableModePasidTables;
      v8 = 0;
    }
  }
  else if ( v8 >= 0 )
  {
    v25 = (__int64 *)(a1 + 56);
    if ( a2 > 0xFFFFFFFD )
      v25 = (__int64 *)(a1 + 72);
    v26 = *v25;
    if ( *(__int64 **)(*v25 + 8) != v25
      || (*(_QWORD *)v13 = v26,
          *(_QWORD *)(v13 + 8) = v25,
          *(_QWORD *)(v26 + 8) = v13,
          v27 = (_QWORD *)(a1 + 88),
          *v25 = v13,
          v28 = (_QWORD *)(v13 + 16),
          v29 = *(_QWORD *)(a1 + 88),
          *(_QWORD *)(v29 + 8) != a1 + 88) )
    {
      __fastfail(3u);
    }
    *v28 = v29;
    v15 = 0LL;
    *(_QWORD *)(v13 + 24) = v27;
    *(_QWORD *)(v29 + 8) = v28;
    *v27 = v28;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = CurrentPrcb->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v24 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v13 = v31;
    }
  }
  __writecr8(CurrentIrql);
  if ( v15 )
    IvtFreeScalableModePasidTables(a1, v15);
  if ( v8 < 0 )
LABEL_40:
    *a5 = 0LL;
  else
    *a5 = v13;
  return (unsigned int)v8;
}
