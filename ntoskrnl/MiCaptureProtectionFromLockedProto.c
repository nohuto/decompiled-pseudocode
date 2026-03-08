/*
 * XREFs of MiCaptureProtectionFromLockedProto @ 0x140464560
 * Callers:
 *     MiGetPageProtection @ 0x14031C310 (MiGetPageProtection.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiCaptureProtectionFromLockedProto(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  int v15; // eax
  _DWORD *v16; // r8
  unsigned __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    do
    {
      v2 = MI_READ_PTE_LOCK_FREE(a1);
      v18 = v2;
      v3 = v2;
      if ( (v2 & 1) == 0 )
      {
        v12 = v2 >> 5;
        return v12 & 0x1F;
      }
      v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFFLL;
    }
    while ( v4 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v4 - 0x21FFFFFFFFD8LL), 0x36u) );
    v5 = 48 * v4 - 0x220000000000LL;
    v6 = (unsigned __int8)MiLockPageInline(v5);
    if ( v3 == MI_READ_PTE_LOCK_FREE(a1) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
  }
  v12 = *(_QWORD *)(v5 + 16) >> 5;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v13 >= 2u )
    {
      v14 = KeGetCurrentPrcb();
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v16 = v14->SchedulerAssist;
      v11 = (v15 & v16[5]) == 0;
      v16[5] &= v15;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  __writecr8(v6);
  return v12 & 0x1F;
}
