/*
 * XREFs of MiFlushDataSection @ 0x140368CA0
 * Callers:
 *     MiCreateImageFileMap @ 0x1407F1C28 (MiCreateImageFileMap.c)
 * Callees:
 *     CcFlushCachePriv @ 0x140219F20 (CcFlushCachePriv.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmFlushSection @ 0x140333F20 (MmFlushSection.c)
 *     MiLockSectionControlArea @ 0x1403638A8 (MiLockSectionControlArea.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1, _DWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax
  int v6; // esi
  KIRQL v7; // bl
  void *v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _IO_STATUS_BLOCK v14; // [rsp+40h] [rbp-18h] BYREF
  KIRQL v15; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0;
  v15 = 0;
  v4 = *(_QWORD **)(a1 + 40);
  v14 = 0LL;
  result = MiLockSectionControlArea(v4, 1, &v15);
  if ( result )
  {
    if ( *(_DWORD *)(result + 92) || *(_QWORD *)(result + 112) > 1uLL )
      *a2 = 1;
    v6 = *(_DWORD *)(result + 88);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(result + 72));
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v7 = v15;
      if ( v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = v15;
        v12 = ~(unsigned __int16)(-1LL << (v15 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v7 = v15;
    }
    __writecr8(v7);
    v8 = *(void **)(a1 + 40);
    if ( v6 )
    {
      CcFlushCachePriv(v8, (__int64)&CcFlushForImageSection, 0, 0LL, 0, (__int128 *)&v14.0, 0LL);
      return (unsigned int)v14.Status;
    }
    else
    {
      return MmFlushSection((__int64 *)v8, 0LL, 0LL, 0LL, &v14, 1u);
    }
  }
  return result;
}
