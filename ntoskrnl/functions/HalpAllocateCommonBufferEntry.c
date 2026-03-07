__int64 __fastcall HalpAllocateCommonBufferEntry(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 Pool2; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  bool v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf

  Pool2 = ExAllocatePool2(66LL, 64LL, 1147953480LL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 40) = a1;
  *(_QWORD *)(Pool2 + 24) = a2;
  *(_QWORD *)(Pool2 + 32) = a3;
  *(_QWORD *)(Pool2 + 48) = a4;
  *(_BYTE *)(Pool2 + 56) = a5;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 80));
  v12 = *(_QWORD *)(a4 + 64);
  if ( (*(_BYTE *)(a4 + 72) & 1) != 0 && v12 )
    v12 ^= a4 + 64;
  v13 = 0;
  if ( v12 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v12 + 24) > a2 )
      {
        v14 = *(_QWORD *)v12;
        if ( (*(_BYTE *)(a4 + 72) & 1) != 0 )
        {
          if ( !v14 )
            break;
          v14 ^= v12;
        }
        if ( !v14 )
          break;
      }
      else
      {
        v14 = *(_QWORD *)(v12 + 8);
        if ( (*(_BYTE *)(a4 + 72) & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_9;
          v14 ^= v12;
        }
        if ( !v14 )
        {
LABEL_9:
          v13 = 1;
          break;
        }
      }
      v12 = v14;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)(a4 + 64), v12, v13, v10);
  KxReleaseSpinLock((volatile signed __int64 *)(a4 + 80));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v11);
  return 0LL;
}
