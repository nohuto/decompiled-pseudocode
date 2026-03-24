/*
 * XREFs of MiReleaseInPageRefs @ 0x14032397C
 * Callers:
 *     MiInvalidateCollidedIos @ 0x14032371C (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140263D30 (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F4E60 (MiDereferenceControlAreaPfnList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiReleaseInPageRefs(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  unsigned __int64 v7; // rdi
  __int64 SchedulerAssist; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0LL, a3);
  v7 = (unsigned __int8)MiLockPageInline(a1, v4, v5, v6);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (unsigned int)MI_PFN_IS_PROTO(a1) && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          *(_DWORD *)(SchedulerAssist + 20) &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    v13 = *(_QWORD *)(a1 + 16);
    if ( qword_140C4DF40 && (v13 & 0x10) == 0 )
      v13 &= ~qword_140C4DF40;
    LOBYTE(v14) = MiDereferenceControlAreaPfnList(*(_QWORD *)(v13 >> 16), v13 >> 16, SchedulerAssist, 3LL);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v14) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v14) = KeGetCurrentIrql();
        if ( (unsigned __int8)v14 <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v14 & v16[5]) == 0;
          v16[5] &= v14;
          if ( v12 )
            LOBYTE(v14) = KiRemoveSystemWorkPriorityKick(v15);
        }
      }
    }
    __writecr8(v7);
  }
  return v14;
}
