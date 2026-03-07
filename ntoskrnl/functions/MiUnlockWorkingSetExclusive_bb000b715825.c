void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  int v3; // ebp
  _QWORD *v4; // r14
  unsigned __int64 v5; // r15
  _DWORD *v6; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  _QWORD *v12; // rdi
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+48h] [rbp+10h]

  v3 = 0;
  v4 = 0LL;
  v14 = *(_DWORD *)(a1 + 184);
  v5 = a2;
  if ( (v14 & 7) == 2 )
  {
    v6 = &unk_140C69E00;
  }
  else
  {
    v6 = (_DWORD *)(a1 + 192);
    if ( (v14 & 7) == 0 )
    {
      v6 = (_DWORD *)(a1 + 192);
      if ( *(_QWORD *)(a1 + 16) )
      {
        v6 = (_DWORD *)(a1 + 192);
        if ( *(_WORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 352) )
        {
          v4 = (_QWORD *)MiDeleteDeferredCloneDescriptors();
          v6 = (_DWORD *)(a1 + 192);
        }
      }
    }
  }
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
    v3 = 1;
  MiCheckProcessShadow(a1, 2u);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
  else
    *v6 = 0;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  if ( v4 )
  {
    do
    {
      v12 = (_QWORD *)*v4;
      ExFreePoolWithTag(v4, 0);
      v4 = v12;
    }
    while ( v12 );
  }
  if ( !v3 && ((*(_DWORD *)(a1 + 188) & 3) != 0 || (v14 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(a1);
    MiUnlockWorkingSetShared(a1, v5);
  }
}
