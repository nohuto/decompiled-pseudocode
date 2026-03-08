/*
 * XREFs of MiLateWritePageHash @ 0x140663AE8
 * Callers:
 *     MiArePagefileContentsCorrupted @ 0x1406633DC (MiArePagefileContentsCorrupted.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReadEntirePageHashEntry @ 0x140664630 (MiReadEntirePageHashEntry.c)
 *     MiWriteEntirePageHashEntry @ 0x14066481C (MiWriteEntirePageHashEntry.c)
 */

__int64 __fastcall MiLateWritePageHash(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  volatile LONG *v4; // r12
  unsigned int v6; // ebp
  int v10; // esi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v22; // eax
  _OWORD v24[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v4 = (volatile LONG *)(a1 + 232);
  v6 = 0;
  v24[0] = 0LL;
  v10 = 0;
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v12 = *(_QWORD *)(a1 + 216) + (unsigned int)(dword_140C692CC * a2);
  v25 = MI_READ_PTE_LOCK_FREE(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v25 & 1) != 0 )
  {
    MiReadEntirePageHashEntry(v12, v24, v13);
    if ( LODWORD(v24[0]) == *(_DWORD *)a4 )
    {
      MiWriteEntirePageHashEntry(a3, v24);
      if ( dword_140C692D0 )
      {
        if ( *((_QWORD *)&v24[0] + 1) != *(_QWORD *)(a4 + 8) )
          v10 = 59;
        if ( DWORD1(v24[0]) != *(_DWORD *)(a4 + 4) )
          v10 = 56;
      }
    }
    else if ( (*(_BYTE *)(48
                        * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25) >> 12) & 0xFFFFFFFFFFLL)
                        - 0x220000000000LL
                        + 34) & 0x10) != 0 )
    {
      if ( !byte_140C67CC0 )
        v10 = 58;
    }
    else
    {
      MiWriteEntirePageHashEntry(v12, a4);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v18 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    v6 = v10;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v18 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
  }
  __writecr8(v11);
  return v6;
}
