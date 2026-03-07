void __fastcall MiZeroNodeExiting(__int64 a1)
{
  __int64 v2; // r14
  volatile LONG *v3; // r12
  unsigned __int64 v4; // r15
  KIRQL v5; // bl
  __int64 v6; // rbp
  __int64 **v7; // rdi
  __int64 *v8; // rsi
  __int64 v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // edx
  void *v19; // rbx
  _QWORD *v20; // rbp
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // edx
  __int64 i; // rsi
  __int64 **v30; // rbx
  __int64 *v31; // rcx
  __int64 v32; // rax
  void *v33; // rcx
  __int64 v34; // rbx
  void *v35; // rcx
  KIRQL v36; // al
  __int64 **v37; // r15
  __int64 *v38; // r14
  KIRQL v39; // di
  __int64 v40; // rax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  void *v49; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 25408LL * *(unsigned int *)(a1 + 56);
  v3 = (volatile LONG *)(v2 + 23160);
  v4 = ExAcquireSpinLockExclusive(&dword_140C66EF0);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 23160));
  MiWakeZeroingThreads(a1, 0);
  v6 = 0LL;
  v7 = (__int64 **)(a1 + 280);
  do
  {
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == (__int64 *)v7 )
        break;
      v9 = *v8;
      if ( (__int64 **)v8[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
LABEL_77:
        __fastfail(3u);
      *v7 = (__int64 *)v9;
      *(_QWORD *)(v9 + 8) = v7;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 23160));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v5);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66EF0);
      if ( KiIrqlFlags )
      {
        v15 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = v16->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v14 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v16);
        }
      }
      __writecr8(v4);
      v19 = (void *)*(v8 - 11);
      if ( v19 )
      {
        KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
        ObfDereferenceObjectWithTag(v19, 0x746C6644u);
      }
      MiDeleteZeroThreadContext(v8 - 21);
      ExAcquireSpinLockExclusive(&dword_140C66EF0);
      v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 23160));
    }
    ++v6;
    v7 += 37;
  }
  while ( v6 < 3 );
  *(_QWORD *)(v2 + 23152) = 0LL;
  v20 = *(_QWORD **)(v2 + 23144);
  if ( v20 )
    *(_QWORD *)(v2 + 23144) = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 23160));
  if ( KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && v5 <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (v5 + 1));
      v14 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)v22);
    }
  }
  __writecr8(v5);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66EF0);
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v25 >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v14 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)v26);
    }
  }
  __writecr8(v4);
  for ( i = 0LL; i < 3; ++i )
  {
    if ( v20 )
    {
      v30 = (__int64 **)&v20[37 * i + 35];
      while ( 1 )
      {
        v31 = *v30;
        if ( *v30 == (__int64 *)v30 )
          break;
        v32 = *v31;
        if ( (__int64 **)v31[1] != v30 || *(__int64 **)(v32 + 8) != v31 )
          goto LABEL_77;
        *v30 = (__int64 *)v32;
        *(_QWORD *)(v32 + 8) = v30;
        ExFreePoolWithTag(v31 - 21, 0);
      }
      v33 = (void *)v20[37 * i + 48];
      if ( v33 )
        ExFreePoolWithTag(v33, 0);
    }
    v34 = a1 + 296 * i;
    v35 = *(void **)(v34 + 384);
    if ( v35 )
    {
      ExFreePoolWithTag(v35, 0);
      *(_QWORD *)(v34 + 384) = 0LL;
    }
    if ( !i )
    {
      v36 = ExAcquireSpinLockExclusive(v3);
      v37 = (__int64 **)(v34 + 208);
      while ( 1 )
      {
        v38 = *v37;
        v39 = v36;
        if ( *v37 == (__int64 *)v37 )
          break;
        v40 = *v38;
        if ( (__int64 **)v38[1] != v37 || *(__int64 **)(v40 + 8) != v38 )
          goto LABEL_77;
        *v37 = (__int64 *)v40;
        *(_QWORD *)(v40 + 8) = v37;
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        if ( KiIrqlFlags )
        {
          v41 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && v39 <= 0xFu && v41 >= 2u )
          {
            v42 = KeGetCurrentPrcb();
            v43 = v42->SchedulerAssist;
            v44 = ~(unsigned __int16)(-1LL << (v39 + 1));
            v14 = (v44 & v43[5]) == 0;
            v43[5] &= v44;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v42);
          }
        }
        __writecr8(v39);
        MiDeleteAcceleratorDescriptor((__int64)(v38 + 4));
        v36 = ExAcquireSpinLockExclusive(v3);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
      if ( KiIrqlFlags )
      {
        v45 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && v39 <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (v39 + 1));
          v14 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v46);
        }
      }
      __writecr8(v39);
    }
    v49 = *(void **)(v34 + 232);
    if ( v49 )
    {
      ExFreePoolWithTag(v49, 0);
      *(_QWORD *)(v34 + 232) = 0LL;
    }
  }
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  ExFreePoolWithTag((PVOID)a1, 0);
}
