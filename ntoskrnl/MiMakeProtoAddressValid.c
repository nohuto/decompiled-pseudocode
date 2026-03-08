/*
 * XREFs of MiMakeProtoAddressValid @ 0x1402A419C
 * Callers:
 *     MiLockProtoPage @ 0x1402A4008 (MiLockProtoPage.c)
 * Callees:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiMakeProtoAddressValid(ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // rax
  int v16; // edx
  _DWORD *v17; // r9

  v2 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    do
    {
      v3 = *v2;
      if ( (*v2 & 1) == 0 )
        goto LABEL_19;
      v4 = (v3 >> 12) & 0xFFFFFFFFFFLL;
    }
    while ( v4 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v4 - 0x21FFFFFFFFD8LL), 0x36u) );
    if ( (v3 & 0x200) == 0 )
      break;
LABEL_19:
    MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
  }
  v5 = 48 * v4 - 0x220000000000LL;
  v6 = (unsigned __int8)MiLockPageInline(v5);
  v7 = *v2;
  if ( (*v2 & 1) == 0 || (v7 & 0x200) != 0 || v4 != ((v7 >> 12) & 0xFFFFFFFFFFLL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
    goto LABEL_19;
  }
  MiAddLockedPageCharge(v5, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v14 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v17 = v15->SchedulerAssist;
      v13 = (v16 & v17[5]) == 0;
      v17[5] &= v16;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  __writecr8(v6);
  return 48 * v4 - 0x220000000000LL;
}
