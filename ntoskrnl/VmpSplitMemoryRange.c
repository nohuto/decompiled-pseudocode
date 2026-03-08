/*
 * XREFs of VmpSplitMemoryRange @ 0x1405F8CA0
 * Callers:
 *     VmSplitMemoryRange @ 0x1409D9CF0 (VmSplitMemoryRange.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpProcessContextLockExclusive @ 0x14045E6CE (VmpProcessContextLockExclusive.c)
 *     VmpProcessContextLockShared @ 0x14045E744 (VmpProcessContextLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x1405F93B8 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpAllocateMemoryRanges @ 0x1409DA1C4 (VmpAllocateMemoryRanges.c)
 *     VmpFreeMemoryRanges @ 0x1409DA3BC (VmpFreeMemoryRanges.c)
 *     VmpLockMemoryForPin @ 0x1409DA418 (VmpLockMemoryForPin.c)
 *     VmpUnlockMemoryForPin @ 0x1409DA9F0 (VmpUnlockMemoryForPin.c)
 */

__int64 __fastcall VmpSplitMemoryRange(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 MemoryRanges; // rbp
  __int64 v7; // r12
  int v8; // edi
  unsigned __int64 *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // r12d
  __int64 v20; // rax
  int v21; // r12d
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  bool v25; // r8
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rax
  __int64 *v28; // rdi
  __int64 *v29; // r14
  __int64 *v30; // rsi
  unsigned __int64 *v31; // rbx
  __int64 v32; // rbp
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  bool v36; // r8
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rax
  unsigned __int8 v39; // cl
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  __int64 v44; // [rsp+48h] [rbp-60h] BYREF
  __int64 v45; // [rsp+50h] [rbp-58h]
  __int64 v46; // [rsp+58h] [rbp-50h]
  __int64 v47; // [rsp+60h] [rbp-48h]
  __int64 v48; // [rsp+68h] [rbp-40h]
  int v49; // [rsp+B0h] [rbp+8h]
  int v50; // [rsp+C0h] [rbp+18h]

  v50 = 1;
  MemoryRanges = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  v49 = 0;
  v7 = VmpProcessContextLockShared(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a3 )
  {
    v8 = -1073740007;
    goto LABEL_73;
  }
  v9 = (unsigned __int64 *)(SpinLock + 6);
  v10 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v10 )
    v10 ^= (unsigned __int64)v9;
  while ( v10 )
  {
    if ( a2 <= *(_QWORD *)(v10 + 32) )
    {
      if ( a2 >= *(_QWORD *)(v10 + 24) )
        break;
      v11 = *(_QWORD *)v10;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 8);
    }
    if ( (SpinLock[8] & 1) != 0 && v11 )
      v10 ^= v11;
    else
      v10 = v11;
  }
  if ( !v10 )
  {
    v8 = -1073741172;
    goto LABEL_73;
  }
  if ( a2 == *(_QWORD *)(v10 + 32) )
  {
    v8 = -1073741503;
    goto LABEL_73;
  }
  v12 = VmpVaRangeNumberOfGpaRanges(v10);
  ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8((unsigned __int8)v7);
  v50 = 0;
  MemoryRanges = VmpAllocateMemoryRanges(v12);
  if ( !MemoryRanges )
  {
    v8 = -1073741670;
    goto LABEL_87;
  }
  if ( *(_QWORD *)(v10 + 56) )
  {
    v18 = *(_QWORD *)(v10 + 32);
    v19 = *(_DWORD *)(v10 + 64);
    v20 = v18 - *(_QWORD *)(v10 + 24);
    v47 = *(_QWORD *)(v10 + 24);
    v46 = v20 + 1;
    v21 = v19 & 1;
    v8 = VmpLockMemoryForPin((_DWORD)SpinLock, (int)a2 + 1, (int)v18 - (int)a2, v21, (__int64)&v44);
    if ( v8 < 0 )
      goto LABEL_87;
    v22 = a2 + 1;
    v49 = v21;
  }
  else
  {
    v22 = a2 + 1;
  }
  v7 = VmpProcessContextLockExclusive(SpinLock);
  v48 = a2 - *(_QWORD *)(v10 + 24) + 1;
  *(_QWORD *)(MemoryRanges + 32) = *(_QWORD *)(v10 + 32);
  v23 = v44;
  v44 = 0LL;
  *(_QWORD *)(MemoryRanges + 24) = v22;
  *(_QWORD *)(v10 + 32) = a2;
  *(_QWORD *)(MemoryRanges + 56) = v23;
  *(_DWORD *)(MemoryRanges + 64) = v49 | *(_DWORD *)(MemoryRanges + 64) & 0xFFFFFFFE;
  v17 = (SpinLock[8] & 1) == 0;
  v24 = *v9;
  v45 = *(_QWORD *)(v10 + 56);
  if ( !v17 && v24 )
    v24 ^= (unsigned __int64)v9;
  v25 = 0;
  if ( !v24 )
    goto LABEL_51;
  v26 = *(_QWORD *)(MemoryRanges + 24);
  while ( 1 )
  {
    if ( v26 <= *(_QWORD *)(v24 + 32) && v26 < *(_QWORD *)(v24 + 24) )
    {
      v27 = *(_QWORD *)v24;
      if ( (SpinLock[8] & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_44;
        v27 ^= v24;
      }
      if ( !v27 )
      {
LABEL_44:
        v25 = 0;
        goto LABEL_51;
      }
      goto LABEL_49;
    }
    v27 = *(_QWORD *)(v24 + 8);
    if ( (SpinLock[8] & 1) != 0 )
    {
      if ( !v27 )
        break;
      v27 ^= v24;
    }
    if ( !v27 )
      break;
LABEL_49:
    v24 = v27;
  }
  v25 = 1;
LABEL_51:
  RtlRbInsertNodeEx((unsigned __int64 *)SpinLock + 3, v24, v25, MemoryRanges);
  v28 = *(__int64 **)(MemoryRanges + 40);
  v29 = (__int64 *)(v10 + 40);
  v30 = *(__int64 **)(v10 + 40);
  v31 = (unsigned __int64 *)(SpinLock + 2);
  v32 = v48;
  while ( 1 )
  {
    v33 = v32 + v30[6];
    v28[6] = v33;
    v28[7] = v30[7];
    v34 = v33 - 1;
    LODWORD(v33) = *((_DWORD *)v30 + 16);
    v30[7] = v34;
    *((_DWORD *)v28 + 16) ^= (*((_DWORD *)v28 + 16) ^ v33) & 1;
    v35 = *v31;
    if ( (SpinLock[4] & 1) != 0 && v35 )
      v35 ^= (unsigned __int64)v31;
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
              goto LABEL_69;
            v38 ^= v35;
          }
          if ( !v38 )
          {
LABEL_69:
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
              goto LABEL_63;
            v38 ^= v35;
          }
          if ( !v38 )
          {
LABEL_63:
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
  MemoryRanges = 0LL;
  v8 = 0;
LABEL_73:
  if ( v7 != -1 )
  {
    if ( v50 )
      ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    else
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      v39 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v39 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v17 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)v40);
      }
    }
    __writecr8((unsigned __int8)v7);
  }
  if ( v45 )
    VmpUnlockMemoryForPin(SpinLock, v45);
LABEL_87:
  if ( v44 )
    VmpUnlockMemoryForPin(SpinLock, v44);
  if ( MemoryRanges )
    VmpFreeMemoryRanges((PVOID)MemoryRanges);
  return (unsigned int)v8;
}
