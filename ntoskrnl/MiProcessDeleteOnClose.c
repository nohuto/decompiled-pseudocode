void __fastcall MiProcessDeleteOnClose(__int64 a1)
{
  __int64 *v1; // rdi
  volatile LONG *v2; // r12
  int v3; // r13d
  unsigned int *v4; // r14
  unsigned int v5; // ebp
  KIRQL v7; // al
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rdx
  __int64 inserted; // rax
  volatile LONG *v18; // rcx
  __int64 v19; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  int v27; // eax
  _DWORD *v28; // r8
  unsigned int v29; // [rsp+70h] [rbp+8h]
  struct _FILE_OBJECT *v30; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v31; // [rsp+80h] [rbp+18h] BYREF

  v30 = 0LL;
  v1 = (__int64 *)(a1 + 1664);
  v31 = 0LL;
  v2 = (volatile LONG *)(a1 + 1408);
  v3 = 0;
  v4 = (unsigned int *)(a1 + 1412);
  v5 = -1;
  while ( 1 )
  {
    v7 = ExAcquireSpinLockExclusive(v2);
    v8 = *v1;
    v9 = v7;
    if ( v8 == a1 + 1664 )
      break;
    if ( (++v3 & 0x3F) == 0 && *v4 >= v5 )
    {
      *(_BYTE *)(a1 + 1744) = 1;
      KiSetTimerEx(a1 + 1680, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
      goto LABEL_33;
    }
    v10 = v8 - 8;
    v29 = *v4;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
    {
      MiUnlinkUnusedControlArea(v10);
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 )
      {
        LOBYTE(v16) = v9;
        MiDestroySection(v10, v16, 0LL);
      }
      else if ( *(_DWORD *)(v10 + 76) )
      {
        inserted = MiInsertUnusedSegment(v10);
        v18 = (volatile LONG *)(v10 + 72);
        v19 = inserted;
        ExReleaseSpinLockExclusiveFromDpcLevel(v18);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v15 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v9);
        if ( v19 )
          MiReturnCrossPartitionSectionCharges(a1, 1LL, v19);
      }
      else
      {
        v30 = 0LL;
        if ( (unsigned int)MiFlushControlArea((char *)v10, v9, (__int64 *)&v31, &v30) )
        {
          LOBYTE(v24) = v9;
          MiDestroySection(v10, v24, v30);
        }
        if ( v31 )
          MiReleaseControlAreaWaiters(v31);
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( KiIrqlFlags )
      {
        v11 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = v12->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)v12);
        }
      }
      __writecr8(v9);
    }
    v5 = v29;
    v1 = (__int64 *)(a1 + 1664);
  }
  *(_BYTE *)(a1 + 1744) = 0;
LABEL_33:
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v25 >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v28 = v26->SchedulerAssist;
      v15 = (v27 & v28[5]) == 0;
      v28[5] &= v27;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)v26);
    }
  }
  __writecr8(v9);
}
