__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 *v3; // r15
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  volatile signed __int32 *v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  unsigned __int8 v14; // cl
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  int v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+70h] [rbp+18h] BYREF

  v3 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    v4 = *v3;
    if ( (*v3 & 1) == 0 || (v4 & 0x200) != 0 )
      return 0LL;
    do
    {
      do
        v5 = (v4 >> 12) & 0xFFFFFFFFFFLL;
      while ( v5 > qword_140C65820 );
    }
    while ( (*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 );
    v6 = 48 * v5 - 0x220000000000LL;
    if ( a2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v13) = 4;
        else
          v13 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v13;
      }
      v8 = (volatile signed __int32 *)(v6 + 24);
      v23 = 0;
      while ( _interlockedbittestandset64(v8, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v23);
        while ( *(__int64 *)v8 < 0 );
      }
    }
    else
    {
      v8 = (volatile signed __int32 *)(v6 + 24);
      v24 = 0;
      CurrentIrql = 17;
      while ( _interlockedbittestandset64(v8, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( *(__int64 *)v8 < 0 );
      }
    }
    v9 = *v3;
    if ( (*v3 & 1) == 0 || (v9 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql != 17 )
      {
        if ( KiIrqlFlags )
        {
          v19 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
      }
      return 0LL;
    }
    if ( v5 == ((v9 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        v14 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v6) || (unsigned int)MiChargeForLockedPage(v10, 1LL) )
    ++*(_WORD *)(v6 + 32);
  if ( CurrentIrql == 17 )
    CurrentIrql = 17;
  else
    *a2 = CurrentIrql;
  MiLockOwnedProtoPage(v6, CurrentIrql);
  return 48 * v5 - 0x220000000000LL;
}
