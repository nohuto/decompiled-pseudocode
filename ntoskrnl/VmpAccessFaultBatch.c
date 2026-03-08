/*
 * XREFs of VmpAccessFaultBatch @ 0x14045DEF6
 * Callers:
 *     VmAccessFault @ 0x1409D9200 (VmAccessFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     VmpFaultEntryInsert @ 0x14045E1E8 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x14045E3A6 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockShared @ 0x14045E744 (VmpProcessContextLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessUpdateSlat @ 0x1405F874C (VmpProcessUpdateSlat.c)
 *     VmpAccessFaultBatchResolve @ 0x1409D9F48 (VmpAccessFaultBatchResolve.c)
 */

__int64 __fastcall VmpAccessFaultBatch(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        int a7,
        __int64 a8)
{
  int v8; // ebx
  __int64 *v9; // rax
  __int64 v10; // rsi
  int updated; // ebx
  __int64 v14; // rdi
  int v15; // r15d
  __int64 v16; // rcx
  unsigned __int64 v17; // r13
  __int64 *v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int8 v20; // cl
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  bool v24; // zf
  __int64 *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v31; // eax
  __int64 *v33; // [rsp+30h] [rbp-38h]

  v8 = a4;
  v9 = (__int64 *)(a2 + 32);
  LODWORD(v10) = a3;
  while ( 1 )
  {
    v33 = v9;
    VmpFaultEntryInsert(SpinLock, a2, (unsigned int)v10);
    updated = VmpAccessFaultBatchResolve(a2, v10, v8, a5, a6, a7);
    if ( updated < 0 )
      break;
    v14 = VmpProcessContextLockShared(SpinLock);
    if ( *((_QWORD *)SpinLock + 9) != a8 )
    {
      updated = -1073741558;
LABEL_31:
      if ( v14 != -1 )
      {
        ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v24 = (v31 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v31;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8((unsigned __int8)v14);
      }
      break;
    }
    v15 = 0;
    v16 = 48LL * (unsigned int)v10;
    v17 = v16 + a2;
    if ( a2 < v16 + a2 )
    {
      v18 = v33;
      v19 = (v16 - 1) / 0x30uLL + 1;
      do
      {
        if ( _bittest64(v18 - 1, 0x34u) || (*((_BYTE *)v18 + 7) & 1) != 0 )
        {
          *v18 |= 0x80000000000000uLL;
          ++v15;
        }
        v18 += 6;
        --v19;
      }
      while ( v19 );
    }
    if ( v15 != (_DWORD)v10 )
    {
      updated = VmpProcessUpdateSlat((_DWORD)SpinLock, a2, v10, a4, (a5 >> 5) & 1);
      if ( updated < 0 )
        goto LABEL_31;
    }
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      v20 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    __writecr8((unsigned __int8)v14);
    VmpFaultEntryRemove(SpinLock, a2, (unsigned int)v10);
    if ( !v15 )
      return 0;
    v10 = 0LL;
    if ( a2 >= v17 )
      return 0;
    v25 = v33;
    do
    {
      v26 = *v25;
      if ( (*v25 & 0x80000000000000LL) != 0 )
      {
        if ( (v26 & 0x100000000000000LL) == 0 )
        {
          *(v25 - 1) &= ~0x10000000000000uLL;
          *v25 = v26 & 0xFFFFFFFFFFFFFLL;
          v27 = 6 * v10;
          v10 = (unsigned int)(v10 + 1);
          *(_OWORD *)(a2 + 8 * v27) = *((_OWORD *)v25 - 2);
          *(_OWORD *)(a2 + 8 * v27 + 16) = *((_OWORD *)v25 - 1);
          *(_OWORD *)(a2 + 8 * v27 + 32) = *(_OWORD *)v25;
        }
        if ( !--v15 )
          break;
      }
      v25 += 6;
    }
    while ( (unsigned __int64)(v25 - 4) < v17 );
    if ( !(_DWORD)v10 )
      return 0;
    v9 = v33;
    v8 = a4;
  }
  VmpFaultEntryRemove(SpinLock, a2, (unsigned int)v10);
  return (unsigned int)updated;
}
