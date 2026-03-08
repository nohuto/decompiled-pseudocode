/*
 * XREFs of MiObtainPagefileHashes @ 0x140466CF4
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140466E1A (MiValidatePagefilePageHash.c)
 *     MiArePagefileContentsCorrupted @ 0x1406633DC (MiArePagefileContentsCorrupted.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReadEntirePageHashEntry @ 0x140664630 (MiReadEntirePageHashEntry.c)
 */

void __fastcall MiObtainPagefileHashes(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  volatile LONG *v4; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned int v11; // r9d
  __int64 v12; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  v4 = (volatile LONG *)(a1 + 232);
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 232));
  v10 = *(_QWORD *)(a1 + 216) + (unsigned int)(dword_140C692CC * a2);
  v11 = 0;
  if ( a3 )
  {
    v12 = a4 + 4;
    do
    {
      if ( (*(_BYTE *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
      {
        MiReadEntirePageHashEntry(v10, a4 + 16LL * v11, v12);
      }
      else
      {
        *(_QWORD *)(v12 - 4) = 0LL;
        *(_QWORD *)(v12 + 4) = 0LL;
      }
      ++v11;
      v10 += (unsigned int)dword_140C692CC;
      v12 += 16LL;
    }
    while ( v11 < a3 );
  }
  ExReleaseSpinLockSharedFromDpcLevel(v4);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
}
