unsigned __int64 __fastcall MiGetHugeBadRangeFromNode(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rbx
  volatile LONG *v5; // r14
  __int64 v6; // r13
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  int v16; // eax
  _DWORD *v17; // r8

  v2 = *(_QWORD *)(a1 + 16208);
  v3 = 0LL;
  if ( v2 )
  {
    v5 = (volatile LONG *)(*(_QWORD *)(a1 + 16) + 25408LL * a2 + 23104);
    v6 = a2 + 2 * dword_140C65800[0] * (unsigned __int16)KeNumberNodes;
    while ( 1 )
    {
      v7 = ExAcquireSpinLockExclusive(v5);
      v3 ^= ((unsigned int)v3 ^ (unsigned int)(*(_QWORD *)(v2 + 8 * v6) >> 15)) & 0x3FFFFF;
      if ( (v3 & 0x3FFFFF) == 0 )
        break;
      v8 = qword_140C67A70 + 8 * (v3 & 0x3FFFFF);
      if ( (unsigned int)MiLockHugePfnInternal(v8, 1LL) )
      {
        MiUnlinkHugeRange(a1, v3);
        ExReleaseSpinLockExclusiveFromDpcLevel(v5);
        _InterlockedAnd(
          (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((v8 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << (((v8 - qword_140C67A70) >> 3) & 0x1F)));
        goto LABEL_15;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v7);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
LABEL_15:
    if ( KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v17 = v15->SchedulerAssist;
        v13 = (v16 & v17[5]) == 0;
        v17[5] &= v16;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
    __writecr8(v7);
  }
  return v3;
}
