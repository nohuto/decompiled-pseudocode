/*
 * XREFs of VmpAccessFaultBatch @ 0x1405A2D9C
 * Callers:
 *     VmAccessFault @ 0x14092EAC0 (VmAccessFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpFaultEntryInsert @ 0x1405A32E8 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x1405A34A0 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockShared @ 0x1405A4C04 (VmpProcessContextLockShared.c)
 *     VmpProcessUpdateSlat @ 0x1405A4C7C (VmpProcessUpdateSlat.c)
 *     VmpAccessFaultBatchResolve @ 0x14092F428 (VmpAccessFaultBatchResolve.c)
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
  __int64 v9; // rsi
  int v12; // r15d
  int updated; // ebx
  __int64 v14; // rbp
  int v15; // r12d
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  __int64 *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  int v32; // [rsp+30h] [rbp-38h]

  v8 = a4;
  LODWORD(v9) = a3;
  do
  {
    VmpFaultEntryInsert(SpinLock, a2, (unsigned int)v9);
    v12 = 1;
    v32 = 1;
    updated = VmpAccessFaultBatchResolve(a2, v9, v8, a5, a6, a7);
    if ( updated < 0 )
      goto LABEL_40;
    v14 = VmpProcessContextLockShared(SpinLock);
    if ( *((_QWORD *)SpinLock + 9) != a8 )
    {
      updated = -1073741558;
      goto LABEL_30;
    }
    v15 = 0;
    v16 = a2 + 48LL * (unsigned int)v9;
    if ( a2 < v16 )
    {
      v17 = a2 + 32;
      v18 = (48 * (unsigned __int64)(unsigned int)v9 - 1) / 0x30 + 1;
      do
      {
        if ( (*(_QWORD *)(v17 - 8) & 0x10000000000000LL) != 0 || (*(_BYTE *)(v17 + 7) & 1) != 0 )
        {
          *(_QWORD *)v17 |= 0x80000000000000uLL;
          ++v15;
        }
        v17 += 48LL;
        --v18;
      }
      while ( v18 );
    }
    if ( v15 != (_DWORD)v9 )
    {
      updated = VmpProcessUpdateSlat((_DWORD)SpinLock, a2, v9, a4, (a5 >> 5) & 1);
      if ( updated < 0 )
        goto LABEL_29;
    }
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v23 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v14);
    v14 = -1LL;
    VmpFaultEntryRemove(SpinLock, a2, (unsigned int)v9);
    v32 = 0;
    if ( !v15 )
      break;
    v9 = 0LL;
    if ( a2 >= v16 )
      break;
    v24 = (__int64 *)(a2 + 32);
    do
    {
      v25 = *v24;
      if ( (*v24 & 0x80000000000000LL) != 0 )
      {
        if ( (v25 & 0x100000000000000LL) == 0 )
        {
          *(v24 - 1) &= ~0x10000000000000uLL;
          *v24 = v25 & 0xFFFFFFFFFFFFFLL;
          v26 = 6 * v9;
          v9 = (unsigned int)(v9 + 1);
          *(_OWORD *)(a2 + 8 * v26) = *((_OWORD *)v24 - 2);
          *(_OWORD *)(a2 + 8 * v26 + 16) = *((_OWORD *)v24 - 1);
          *(_OWORD *)(a2 + 8 * v26 + 32) = *(_OWORD *)v24;
        }
        if ( !--v15 )
          break;
      }
      v24 += 6;
    }
    while ( (unsigned __int64)(v24 - 4) < v16 );
    v8 = a4;
  }
  while ( (_DWORD)v9 );
  updated = 0;
LABEL_29:
  v12 = v32;
LABEL_30:
  if ( v14 != -1 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v23 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick((__int64)v28);
        }
      }
    }
    __writecr8((unsigned __int8)v14);
  }
  if ( v12 )
LABEL_40:
    VmpFaultEntryRemove(SpinLock, a2, (unsigned int)v9);
  return (unsigned int)updated;
}
