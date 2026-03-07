__int64 __fastcall MiUnlockWorkingSetShared(__int64 a1, unsigned __int8 a2)
{
  char v2; // r8
  unsigned __int64 v4; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned __int8 v8; // r8
  volatile signed __int32 *v9; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v14; // zf
  unsigned __int8 v15; // cl
  _DWORD *v16; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 184);
  v2 = v5;
  v6 = HIBYTE(v5);
  v7 = HIBYTE(v5);
  v8 = v2 & 7;
  if ( v8 >= 6u )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (a2 + 1));
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
LABEL_28:
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  else
  {
    if ( v8 <= 4u )
      LOBYTE(v6) = v7;
    if ( (*(_DWORD *)(a1 + 188) & 3) != 0 || (v6 & 0x10) != 0 )
      MiPreUnlockWorkingSetShared(a1, a2);
    if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
      v9 = (volatile signed __int32 *)&unk_140C69E00;
    else
      v9 = (volatile signed __int32 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v9, retaddr);
    }
    else
    {
      _InterlockedAnd(v9, 0xBFFFFFFF);
      _InterlockedDecrement(v9);
    }
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v14 = ((unsigned int)result & v16[5]) == 0;
        v16[5] &= result;
        if ( v14 )
          goto LABEL_28;
      }
    }
  }
  __writecr8(v4);
  return result;
}
