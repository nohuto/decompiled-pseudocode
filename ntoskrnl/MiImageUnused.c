/*
 * XREFs of MiImageUnused @ 0x1402E9DE8
 * Callers:
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x1406A160C (MiRelocateImageAgain.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall MiImageUnused(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  KIRQL v6; // di
  unsigned int v7; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)a3 = -1LL;
  if ( *(_QWORD *)(v4 + 32) )
  {
    if ( a2 )
      v6 = 17;
    else
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    LODWORD(v4) = *(_DWORD *)(a1 + 88);
    if ( (_DWORD)v4 != -1 )
    {
      *(_QWORD *)a3 = *(unsigned int *)(a1 + 88);
      v7 = *(_DWORD *)(a1 + 92);
      *(_DWORD *)(a3 + 8) = (unsigned __int16)v7;
      *(_DWORD *)(a3 + 16) = (v7 >> 20) & 3;
      LODWORD(v4) = *(_DWORD *)(a1 + 56);
      if ( (v4 & 0x20000000) != 0 )
      {
        LODWORD(v4) = v4 & 0xDFFFFFFF;
        *(_DWORD *)(a1 + 56) = v4;
        *(_BYTE *)(a3 + 13) = BYTE2(v7) & 1;
        *(_BYTE *)(a3 + 12) = 1;
      }
      *(_DWORD *)(a1 + 88) = -1;
    }
    *(_DWORD *)(a1 + 92) &= ~0x400000u;
    if ( v6 != 17 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LODWORD(v4) = v6;
      __writecr8(v6);
    }
  }
  return v4;
}
