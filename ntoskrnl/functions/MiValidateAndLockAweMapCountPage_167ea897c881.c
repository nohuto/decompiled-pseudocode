char __fastcall MiValidateAndLockAweMapCountPage(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rbp
  const signed __int64 *v7; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v12; // r10
  _DWORD *SchedulerAssist; // r11
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  unsigned __int8 v17; // al
  bool v18; // cf
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  int v25; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  *a3 = 0LL;
  v6 = 0LL;
  v7 = *(const signed __int64 **)(a1 + 32);
  v9 = a2 / v4;
  v10 = a2 / v4;
  if ( ((v4 - 1) & a2) != 0 || v9 >= *(_QWORD *)(a1 + 24) || !_bittest64(v7, v9) )
    return 17;
  if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    v5 = qword_140C67A70 + 8 * ((a2 >> 18) & 0x3FFFFF);
  else
    v6 = 48 * a2 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v12 = 2;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v14 = 4;
    if ( CurrentIrql != 2 )
      v14 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v14;
    v12 = 2;
  }
  if ( a2 <= qword_140C65820 && _bittest64((const signed __int64 *)(48 * a2 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    if ( v6 )
    {
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v25);
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
      v15 = v6;
      goto LABEL_23;
    }
  }
  else
  {
    LOBYTE(v16) = MiIsPageInHugePfn(a2);
    if ( v16 && v5 )
    {
      MiLockHugePfnInternal(v5, 0);
      v15 = v5;
LABEL_23:
      *a3 = v15;
      if ( _bittest64(v7, v10) )
        return CurrentIrql;
      if ( v6 )
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      else
        _InterlockedAnd(
          (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((v5 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << (((v5 - qword_140C67A70) >> 3) & 0x1F)));
      if ( !KiIrqlFlags )
        goto LABEL_41;
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) == 0 || v17 > 0xFu || CurrentIrql > 0xFu )
        goto LABEL_41;
      v18 = v17 < 2u;
      goto LABEL_38;
    }
  }
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu )
    {
      v18 = v20 < v12;
LABEL_38:
      if ( !v18 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
LABEL_41:
  __writecr8(CurrentIrql);
  return 17;
}
