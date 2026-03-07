__int64 __fastcall MiChangingSubsectionProtos(_QWORD *BugCheckParameter2, char a2, __int64 a3)
{
  _DWORD *v3; // r13
  unsigned int v5; // ebx
  __int64 v6; // r12
  volatile LONG *v7; // rbp
  int *v8; // rax
  int *v9; // r14
  KIRQL v10; // al
  int v11; // edx
  unsigned __int64 v12; // rdi
  bool v13; // zf
  int v14; // ecx
  __int64 *v15; // rcx
  ULONG_PTR v16; // r12
  __int64 *v17; // r14
  __int64 *v18; // rax
  unsigned __int8 v19; // cl
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v25; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  int v29; // eax
  _DWORD *v30; // r8
  __int64 v31; // rax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  int v34; // eax
  _DWORD *v35; // r8
  __int64 v36; // rcx
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  int v39; // edx
  _DWORD *v40; // r9
  __int64 v42; // [rsp+20h] [rbp-58h]
  int v43; // [rsp+80h] [rbp+8h]
  int *i; // [rsp+98h] [rbp+20h]

  v3 = (_DWORD *)(a3 + 12);
  v42 = *BugCheckParameter2;
  v5 = 0;
  v6 = a3;
  v7 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  v43 = a2 & 0x10;
  v8 = (int *)(a3 + 8);
  for ( i = (int *)(a3 + 8); ; v8 = i )
  {
    v9 = v8;
    v10 = ExAcquireSpinLockExclusive(v7);
    v11 = v43;
    v12 = v10;
    if ( v43 )
    {
      MiUnlinkSubsectionWaitBlock(BugCheckParameter2, v6, 1LL);
      v13 = *v3 == 2;
      *i = 0;
      if ( v13 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v7);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = (v25 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v25;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        v5 = -1073740748;
        goto LABEL_69;
      }
      v11 = v43;
    }
    i = v9;
    v14 = (a2 & 8) != 0 ? 0x40 : 0;
    *v9 = v14;
    if ( (a2 & 0x20) != 0 )
    {
      v14 |= 0x100u;
      *v9 = v14;
    }
    if ( v11 )
      *v9 = v14 | 0x80;
    if ( BugCheckParameter2[1] && (a2 & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      if ( KiIrqlFlags )
      {
        v27 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v30 = v28->SchedulerAssist;
          v13 = (v29 & v30[5]) == 0;
          v30[5] &= v29;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)v28);
        }
      }
      v5 = -1073741302;
      goto LABEL_69;
    }
    v15 = 0LL;
    v16 = 0LL;
    if ( (a2 & 8) == 0 )
    {
      if ( (*(_DWORD *)(v42 + 56) & 0x20) != 0 )
        v15 = *(__int64 **)(v42 + 80);
      else
        v15 = (__int64 *)BugCheckParameter2[3];
      while ( v15 )
      {
        v17 = v15;
        if ( (v15[1] & 0x40) == 0 )
        {
          v18 = (__int64 *)KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
          v16 = (ULONG_PTR)v18;
          v15 = v17;
          if ( v18 )
          {
            KeAbPreWait(v18);
            v15 = v17;
          }
          break;
        }
        v15 = (__int64 *)*v15;
      }
    }
    *v3 = 0;
    *(_WORD *)(a3 + 16) = 263;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    *(_BYTE *)(a3 + 18) = 6;
    *(_DWORD *)(a3 + 20) = 0;
    if ( (*(_DWORD *)(v42 + 56) & 0x20) != 0 )
    {
      *(_QWORD *)a3 = *(_QWORD *)(v42 + 80);
      *(_QWORD *)(v42 + 80) = a3;
    }
    else
    {
      *(_QWORD *)a3 = BugCheckParameter2[3];
      BugCheckParameter2[3] = a3;
    }
    if ( (a2 & 8) != 0 )
      break;
    if ( !v15 )
    {
      v31 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
      if ( v31 )
        *(_BYTE *)(v31 + 18) = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      if ( KiIrqlFlags )
      {
        v32 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v35 = v33->SchedulerAssist;
          v13 = (v34 & v35[5]) == 0;
          v35[5] &= v34;
          if ( v13 )
          {
            v36 = (__int64)v33;
LABEL_68:
            KiRemoveSystemWorkPriorityKick(v36);
            goto LABEL_69;
          }
        }
      }
      goto LABEL_69;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    if ( KiIrqlFlags )
    {
      v19 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v13 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)v20);
      }
    }
    __writecr8(v12);
    KeWaitForGate(a3 + 16, 18LL, 0);
    if ( v16 )
    {
      KeAbPreAcquire((__int64)BugCheckParameter2, v16);
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v16);
    }
    v6 = a3;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  if ( KiIrqlFlags )
  {
    v37 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v37 >= 2u )
    {
      v38 = KeGetCurrentPrcb();
      v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      v40 = v38->SchedulerAssist;
      v13 = (v39 & v40[5]) == 0;
      v40[5] &= v39;
      if ( v13 )
      {
        v36 = (__int64)v38;
        goto LABEL_68;
      }
    }
  }
LABEL_69:
  __writecr8(v12);
  return v5;
}
