__int64 __fastcall MiSetVadFlags(__int64 a1, __int64 a2, int a3)
{
  char v4; // si
  unsigned __int64 v6; // rbp
  int v7; // edi
  signed __int32 v8; // eax
  int v9; // r8d
  int v10; // esi
  int v11; // r9d
  unsigned int v12; // ecx
  signed __int32 v13; // ett
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v18; // zf

  v4 = a2;
  v6 = (unsigned __int8)MiLockVadCore(a1, a2);
  v7 = v4 & 2;
  if ( (v4 & 2) != 0 )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                       + 284));
  v8 = *(_DWORD *)(a1 + 48);
  v9 = v4 & 1;
  v10 = v4 & 4;
  v11 = a3 & 1;
  do
  {
    v12 = v8;
    if ( v9 )
      v12 = v8 & 0xFFFFFFF7 | (8 * v11);
    if ( v7 )
      v12 = (4 * v11) | v12 & 0xFFFFFFFB;
    if ( v10 )
      v12 ^= (v12 ^ (a3 << 23)) & 0x1800000;
    v13 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v12, v8);
  }
  while ( v13 != v8 );
  if ( v7 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                         + 284));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 48), 0xFFFFFFFC);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v18 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  return result;
}
