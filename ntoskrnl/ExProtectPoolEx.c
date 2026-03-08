/*
 * XREFs of ExProtectPoolEx @ 0x14030B674
 * Callers:
 *     CmpProtectPool @ 0x140301FE4 (CmpProtectPool.c)
 *     CmpProtectPoolEx @ 0x14030BC68 (CmpProtectPoolEx.c)
 *     SmHpBufferProtectEx @ 0x1405C7E94 (SmHpBufferProtectEx.c)
 *     ExProtectPool @ 0x1406054CC (ExProtectPool.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // r12d
  __int64 v8; // rsi
  int v9; // r14d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // r11
  char *v13; // r9
  unsigned __int64 v14; // rax
  char *v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // r12
  unsigned int v19; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r8
  int v29; // eax

  if ( ((a2 | a1) & 0xFFF) != 0 )
    return 0LL;
  v7 = 0;
  LOWORD(v8) = 0;
  LOBYTE(v9) = 0;
  v10 = ((40543 * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32) ^ (40543LL * (unsigned int)(a1 >> 12));
  v11 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  if ( !PoolBigPageTable )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v11);
    return 0LL;
  }
  v12 = 32LL * ((unsigned int)v10 & ((_DWORD)PoolBigPageTableSize - 1));
  v13 = (char *)PoolBigPageTable + 32 * PoolBigPageTableSize;
  v14 = a3 + a2 - 1;
  v15 = (char *)PoolBigPageTable + v12;
  while ( 1 )
  {
    do
    {
      v16 = *(_QWORD *)v15;
      if ( (*(_QWORD *)v15 & 1) == 0 && a2 >= v16 )
      {
        v17 = *((_QWORD *)v15 + 2);
        if ( v14 < v17 + v16 )
        {
          if ( (v17 & 0xFFF) == 0
            || ((a3 + a2 + 4094) & 0xFFFFFFFFFFFFF000uLL) < ((v17 + v16 + 4095) & 0xFFFFFFFFFFFFF000uLL) )
          {
            v18 = *(_QWORD *)v15;
            v9 = *((_DWORD *)v15 + 3) >> 8;
            v8 = *((_QWORD *)v15 + 2);
            goto LABEL_9;
          }
          v14 = a3 + a2 - 1;
        }
      }
      v15 += 32;
    }
    while ( v15 < v13 );
    if ( v7 == 1 )
      break;
    v15 = (char *)PoolBigPageTable;
    v7 = 1;
    v13 = (char *)PoolBigPageTable + v12;
  }
  v18 = 0LL;
LABEL_9:
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v26 >= 2u )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v25 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
  }
  __writecr8(v11);
  if ( !v18 )
    return 0LL;
  v19 = v8 & 0xFFF;
  if ( v19 )
  {
    if ( (v9 & 0x40) == 0 || v19 > 0x10uLL )
      return 0LL;
  }
  if ( a4 == -1 )
    return 1LL;
  else
    return MmProtectPool(a2, a3, a4);
}
