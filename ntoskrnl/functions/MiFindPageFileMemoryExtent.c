__int64 __fastcall MiFindPageFileMemoryExtent(__int64 a1, int a2)
{
  volatile LONG *v2; // rbp
  KIRQL v4; // al
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rbx
  int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  int v17; // [rsp+38h] [rbp+10h] BYREF

  v17 = a2;
  v2 = (volatile LONG *)(a1 + 232);
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 232));
  v5 = a1 + 256;
  v6 = v4;
  v7 = (*(_BYTE *)(a1 + 264) & 1) == 0;
  v8 = *(_QWORD *)(a1 + 256);
  if ( !v7 && v8 )
    v8 ^= v5;
  v9 = *(_BYTE *)(v5 + 8) & 1;
  while ( v8 )
  {
    v10 = MiComparePageFileMemoryExtents(&v17, v8);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      v11 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v8;
    }
    if ( v9 && v11 )
      v8 ^= v11;
    else
      v8 = v11;
  }
  if ( !v8 )
    NT_ASSERT("Node != ((void *)0)");
  ExReleaseSpinLockSharedFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v7 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  return v8;
}
