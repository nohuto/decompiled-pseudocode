/*
 * XREFs of MiSectionCreated @ 0x140331184
 * Callers:
 *     MiCreateNewSection @ 0x1406A6414 (MiCreateNewSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiInitializeNewImageSectionProtos @ 0x1402EAAAC (MiInitializeNewImageSectionProtos.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSectionCreated(_DWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // r12
  int v8; // r15d
  unsigned __int64 v9; // rbp
  _DWORD *v10; // rbx
  __int64 *v11; // rsi
  __int64 v12; // rsi
  __int64 *v13; // r14
  char v14; // dl
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf

  v7 = 0LL;
  v8 = 0;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a3 + 72));
  v10 = (_DWORD *)(a3 + 56);
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    *v10 |= 0x200u;
  v11 = *(__int64 **)(a2 + 40);
  if ( (*v10 & 0x20) != 0 )
  {
    v12 = v11[2];
    v8 = 1;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    *(_QWORD *)(a3 + 80) = *(_QWORD *)(v12 + 80);
  }
  else
  {
    v12 = *v11;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    v7 = *(_QWORD *)(v12 + 80);
  }
  *(_QWORD *)(a3 + 64) = *(_QWORD *)(v12 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C651C0);
  v13 = *(__int64 **)(a2 + 40);
  if ( v8 )
  {
    v13[2] = a3;
    v13 = 0LL;
  }
  else
  {
    v14 = *(_BYTE *)(a3 + 62);
    if ( (v14 & 0xC) != 0 && (*a1 & 0x20000) == 0 )
    {
      v16 = v13[2];
      if ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 56) & 3) != 0 || (*(_BYTE *)(v16 + 62) & 0xC) == 4 )
          *(_BYTE *)(a3 + 62) = v14 & 0xF3 | 8;
      }
    }
    *v13 = a3;
    *v10 &= ~2u;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a3 + 72));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v21 = (v20 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  if ( v8 )
    MiInitializeNewImageSectionProtos(a3, a4);
  else
    KeAbPostRelease((ULONG_PTR)v13);
  return v7;
}
