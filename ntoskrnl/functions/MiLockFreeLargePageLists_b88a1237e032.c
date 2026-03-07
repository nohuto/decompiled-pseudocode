__int64 __fastcall MiLockFreeLargePageLists(__int64 a1)
{
  __int64 v1; // r15
  int v2; // r14d
  __int64 v4; // rsi
  unsigned int v5; // edx
  __int64 i; // rcx
  volatile signed __int32 *v7; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  volatile LONG *v12; // rcx
  __int64 v13; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r9
  int v27; // eax
  _DWORD *v28; // r8
  __int64 v29; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v31[7]; // [rsp+30h] [rbp-38h] BYREF
  int v32; // [rsp+70h] [rbp+8h] BYREF
  int v33; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  v2 = 0;
  *(_WORD *)(a1 + 57) = 0;
  LODWORD(v4) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(a1 + 80);
        for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
        {
          v4 = *(int *)(a1 + 4 * i + 88);
          if ( *(_QWORD *)(v1 + 8 * v4 + 16) || *(_DWORD *)(a1 + 84) == 1 && *(_QWORD *)(v1 + 8 * v4 + 32) )
            break;
        }
        if ( (_DWORD)i == v5 )
          break;
        if ( !v2 )
        {
          v2 = 1;
          v7 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 160) + 23104LL);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( CurrentIrql == 2 )
              LODWORD(v15) = 4;
            else
              v15 = (-1LL << (CurrentIrql + 1)) & 4;
            SchedulerAssist[5] |= v15;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7, CurrentIrql);
          }
          else
          {
            v32 = 0;
            if ( _interlockedbittestandset(v7, 0x1Fu) )
              v32 = ExpWaitForSpinLockExclusiveAndAcquire(v7);
            while ( (*v7 & 0xBFFFFFFF) != 0x80000000 )
            {
              if ( (*v7 & 0x40000000) == 0 )
                _InterlockedOr(v7, 0x40000000u);
              KeYieldProcessorEx(&v32);
            }
          }
          *(_BYTE *)(a1 + 59) = CurrentIrql;
          if ( !*(_QWORD *)(v1 + 8LL * (int)v4 + 16)
            && (*(_DWORD *)(a1 + 84) != 1 || !*(_QWORD *)(v1 + 8LL * (int)v4 + 32)) )
          {
            continue;
          }
        }
        return 1LL;
      }
      if ( v2 )
        break;
      if ( (*(_DWORD *)(a1 + 44) & 0x80u) == 0 )
        return 0LL;
      v2 = 1;
      *(_BYTE *)(a1 + 59) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 160) + 23104LL));
    }
    v10 = *(_QWORD *)(a1 + 160);
    v11 = *(unsigned __int8 *)(a1 + 59);
    v12 = (volatile LONG *)(v10 + 23104);
    if ( !*(_DWORD *)(v10 + 23004) )
      break;
    v13 = *(_QWORD *)(a1 + 48);
    if ( (*(_DWORD *)(a1 + 44) & 0x80u) != 0 )
    {
      v30 = 393479LL;
      v31[1] = v31;
      v31[0] = v31;
      v29 = *(_QWORD *)(v10 + 23008);
      *(_QWORD *)(v10 + 23008) = &v29;
      ExReleaseSpinLockExclusiveFromDpcLevel(v12);
      if ( KiIrqlFlags )
      {
        v16 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v11);
      KeWaitForGate((__int64)&v30, 18LL, 0);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v12);
      if ( KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v20 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      __writecr8(v11);
      if ( v13 || (_BYTE)v11 != 2 )
        return 0LL;
      v33 = 0;
      while ( *(_DWORD *)(v10 + 23004) )
        KeYieldProcessorEx(&v33);
    }
    v2 = 0;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v25 >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v28 = v26->SchedulerAssist;
      v20 = (v27 & v28[5]) == 0;
      v28[5] &= v27;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(v26);
    }
  }
  __writecr8(v11);
  return 0LL;
}
