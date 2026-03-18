/*
 * XREFs of VmpSplitMemoryRange @ 0x14062BE2C
 * Callers:
 *     VmSplitMemoryRange @ 0x1409D9940 (VmSplitMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14045F78C (VmpProcessContextLockExclusive.c)
 *     VmpProcessContextLockShared @ 0x14045F804 (VmpProcessContextLockShared.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x14062C558 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpAllocateMemoryRanges @ 0x1409D9E18 (VmpAllocateMemoryRanges.c)
 *     VmpFreeMemoryRanges @ 0x1409DA014 (VmpFreeMemoryRanges.c)
 *     VmpLockMemoryForPin @ 0x1409DA070 (VmpLockMemoryForPin.c)
 *     VmpUnlockMemoryForPin @ 0x1409DA634 (VmpUnlockMemoryForPin.c)
 */

__int64 __fastcall VmpSplitMemoryRange(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r12
  int v7; // edi
  unsigned __int64 *v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int64 MemoryRanges; // rsi
  __int64 v19; // rax
  int v20; // r12d
  __int64 v21; // rcx
  int v22; // r12d
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  bool v25; // r8
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rax
  __int64 *v28; // rdi
  __int64 *v29; // r14
  __int64 *v30; // rsi
  unsigned __int64 v31; // rbx
  __int64 v32; // rbp
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  bool v36; // r8
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  __int64 v44; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-60h]
  __int64 v46; // [rsp+50h] [rbp-58h]
  __int64 v47; // [rsp+58h] [rbp-50h]
  __int64 v48; // [rsp+60h] [rbp-48h]
  __int64 v49; // [rsp+68h] [rbp-40h]
  int v50; // [rsp+B0h] [rbp+8h]
  int v51; // [rsp+C0h] [rbp+18h]

  v51 = 1;
  v46 = 0LL;
  v44 = 0LL;
  v48 = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  v50 = 0;
  v6 = VmpProcessContextLockShared(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a3 )
  {
    v7 = -1073740007;
    goto LABEL_18;
  }
  v8 = (unsigned __int64 *)(SpinLock + 6);
  v9 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 )
  {
    if ( v9 )
      v9 ^= (unsigned __int64)v8;
    else
      v9 = 0LL;
  }
  while ( 1 )
  {
    if ( !v9 )
    {
      v7 = -1073741172;
      goto LABEL_18;
    }
    v10 = *(_QWORD *)(v9 + 32);
    if ( a2 > v10 )
    {
      v11 = *(_QWORD *)(v9 + 8);
      goto LABEL_12;
    }
    if ( a2 >= *(_QWORD *)(v9 + 24) )
      break;
    v11 = *(_QWORD *)v9;
LABEL_12:
    if ( (SpinLock[8] & 1) != 0 && v11 )
      v9 ^= v11;
    else
      v9 = v11;
  }
  if ( a2 == v10 )
  {
    v7 = -1073741503;
    goto LABEL_18;
  }
  v12 = VmpVaRangeNumberOfGpaRanges(v9);
  ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8((unsigned __int8)v6);
  v51 = 0;
  MemoryRanges = VmpAllocateMemoryRanges(v12);
  if ( !MemoryRanges )
    return (unsigned int)-1073741670;
  if ( *(_QWORD *)(v9 + 56) )
  {
    v19 = *(_QWORD *)(v9 + 32);
    v20 = *(_DWORD *)(v9 + 64);
    v21 = v19 - *(_QWORD *)(v9 + 24);
    v48 = *(_QWORD *)(v9 + 24);
    v45 = a2 + 1;
    v47 = v21 + 1;
    v22 = v20 & 1;
    v7 = VmpLockMemoryForPin((_DWORD)SpinLock, (int)a2 + 1, (int)v19 - (int)a2, v22, (__int64)&v44);
    if ( v7 < 0 )
    {
LABEL_91:
      if ( v44 )
        VmpUnlockMemoryForPin(SpinLock, v44);
      if ( MemoryRanges )
        VmpFreeMemoryRanges((PVOID)MemoryRanges);
      return (unsigned int)v7;
    }
    v50 = v22;
  }
  v6 = VmpProcessContextLockExclusive(SpinLock);
  v49 = a2 - *(_QWORD *)(v9 + 24) + 1;
  *(_QWORD *)(MemoryRanges + 32) = *(_QWORD *)(v9 + 32);
  v23 = v44;
  v44 = 0LL;
  *(_QWORD *)(MemoryRanges + 24) = a2 + 1;
  *(_QWORD *)(v9 + 32) = a2;
  *(_QWORD *)(MemoryRanges + 56) = v23;
  *(_DWORD *)(MemoryRanges + 64) = v50 | *(_DWORD *)(MemoryRanges + 64) & 0xFFFFFFFE;
  v17 = (SpinLock[8] & 1) == 0;
  v46 = *(_QWORD *)(v9 + 56);
  if ( v17 )
  {
    v24 = *v8;
  }
  else if ( *v8 )
  {
    v24 = *v8 ^ (unsigned __int64)v8;
  }
  else
  {
    v24 = 0LL;
  }
  v25 = 0;
  if ( !v24 )
    goto LABEL_56;
  v26 = *(_QWORD *)(MemoryRanges + 24);
  while ( 2 )
  {
    if ( v26 <= *(_QWORD *)(v24 + 32) && v26 < *(_QWORD *)(v24 + 24) )
    {
      v27 = *(_QWORD *)v24;
      if ( (SpinLock[8] & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_49;
        v27 ^= v24;
      }
      if ( !v27 )
      {
LABEL_49:
        v25 = 0;
        goto LABEL_56;
      }
LABEL_54:
      v24 = v27;
      continue;
    }
    break;
  }
  v27 = *(_QWORD *)(v24 + 8);
  if ( (SpinLock[8] & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_55;
    v27 ^= v24;
  }
  if ( v27 )
    goto LABEL_54;
LABEL_55:
  v25 = 1;
LABEL_56:
  RtlRbInsertNodeEx((unsigned __int64 *)SpinLock + 3, v24, v25, MemoryRanges);
  v28 = *(__int64 **)(MemoryRanges + 40);
  v29 = (__int64 *)(v9 + 40);
  v30 = *(__int64 **)(v9 + 40);
  v31 = (unsigned __int64)(SpinLock + 2);
  v32 = v49;
  while ( 1 )
  {
    v33 = v32 + v30[6];
    v28[6] = v33;
    v28[7] = v30[7];
    v34 = v33 - 1;
    LODWORD(v33) = *((_DWORD *)v30 + 16);
    v30[7] = v34;
    *((_DWORD *)v28 + 16) ^= (*((_DWORD *)v28 + 16) ^ v33) & 1;
    if ( (SpinLock[4] & 1) != 0 )
    {
      if ( *(_QWORD *)v31 )
        v35 = *(_QWORD *)v31 ^ v31;
      else
        v35 = 0LL;
    }
    else
    {
      v35 = *(_QWORD *)v31;
    }
    v36 = 0;
    if ( v35 )
    {
      v37 = v28[6];
      while ( 1 )
      {
        if ( v37 > *(_QWORD *)(v35 + 32) || v37 >= *(_QWORD *)(v35 + 24) )
        {
          v38 = *(_QWORD *)(v35 + 8);
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v38 )
              goto LABEL_76;
            v38 ^= v35;
          }
          if ( !v38 )
          {
LABEL_76:
            v36 = 1;
            break;
          }
        }
        else
        {
          v38 = *(_QWORD *)v35;
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v38 )
              goto LABEL_70;
            v38 ^= v35;
          }
          if ( !v38 )
          {
LABEL_70:
            v36 = 0;
            break;
          }
        }
        v35 = v38;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64 *)SpinLock + 1, v35, v36, (unsigned __int64)(v28 + 3));
    v30 = (__int64 *)*v30;
    if ( v30 == v29 )
      break;
    v28 = (__int64 *)*v28;
  }
  ++*((_QWORD *)SpinLock + 5);
  v7 = 0;
LABEL_18:
  if ( v6 != -1 )
  {
    if ( v51 )
      ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    else
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v39 = KeGetCurrentIrql();
        if ( v39 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v17 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)v40);
        }
      }
    }
    __writecr8((unsigned __int8)v6);
  }
  if ( v46 )
  {
    VmpUnlockMemoryForPin(SpinLock, v46);
    MemoryRanges = 0LL;
    goto LABEL_91;
  }
  return (unsigned int)v7;
}
