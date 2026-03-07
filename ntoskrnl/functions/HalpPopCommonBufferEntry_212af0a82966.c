unsigned __int64 __fastcall HalpPopCommonBufferEntry(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  KIRQL v5; // al
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  KIRQL v15; // al
  __int64 v16; // rbx
  KIRQL v17; // di
  KIRQL v18; // al
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // edx
  KIRQL v32; // [rsp+58h] [rbp+10h]

  v2 = 0LL;
  if ( !a2 )
    goto LABEL_25;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 80));
  v6 = (unsigned __int64 *)(a2 + 64);
  v7 = v5;
  v8 = *(_QWORD *)(a2 + 64);
  if ( (*(_BYTE *)(a2 + 72) & 1) != 0 && v8 )
    v8 ^= (unsigned __int64)v6;
  while ( v8 && *(_QWORD *)(v8 + 24) != a1 )
  {
    if ( *(_QWORD *)(v8 + 24) <= a1 )
      v9 = *(_QWORD *)(v8 + 8);
    else
      v9 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(a2 + 72) & 1) != 0 && v9 )
      v8 ^= v9;
    else
      v8 = v9;
  }
  if ( v8 )
  {
    v2 = v8;
    RtlRbRemoveNode(v6, v8);
  }
  KxReleaseSpinLock((volatile signed __int64 *)(a2 + 80));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  if ( !v2 )
  {
LABEL_25:
    v15 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
    v16 = HalpDmaDomainList;
    v17 = v15;
    v32 = v15;
    if ( (__int64 *)HalpDmaDomainList != &HalpDmaDomainList )
    {
      do
      {
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 80));
        v19 = (unsigned __int64 *)(v16 + 64);
        v20 = v18;
        v21 = *(_QWORD *)(v16 + 64);
        if ( (*(_BYTE *)(v16 + 72) & 1) != 0 && v21 )
          v21 ^= (unsigned __int64)v19;
        while ( v21 && *(_QWORD *)(v21 + 24) != a1 )
        {
          if ( *(_QWORD *)(v21 + 24) <= a1 )
            v22 = *(_QWORD *)(v21 + 8);
          else
            v22 = *(_QWORD *)v21;
          if ( (*(_BYTE *)(v16 + 72) & 1) != 0 && v22 )
            v21 ^= v22;
          else
            v21 = v22;
        }
        if ( v21 )
        {
          v2 = v21;
          RtlRbRemoveNode(v19, v21);
        }
        KxReleaseSpinLock((volatile signed __int64 *)(v16 + 80));
        if ( KiIrqlFlags )
        {
          v23 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
            v14 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        __writecr8(v20);
        if ( v2 )
          break;
        v16 = *(_QWORD *)v16;
      }
      while ( (__int64 *)v16 != &HalpDmaDomainList );
      v17 = v32;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&HalpDmaDomainListLock);
    if ( KiIrqlFlags )
    {
      v27 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && v17 <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v14 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    __writecr8(v17);
  }
  return v2;
}
