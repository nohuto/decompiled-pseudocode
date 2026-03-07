__int64 __fastcall MiWritePteHighLevel(unsigned __int64 a1, __int64 a2, ULONG_PTR a3)
{
  char v6; // al
  int v7; // edx
  unsigned __int64 v8; // r9
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  __int64 result; // rax
  ULONG_PTR Context[28]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Context, 0, sizeof(Context));
  LODWORD(Context[5]) = 0;
  Context[7] = 0LL;
  Context[8] = 0LL;
  Context[0] = a1;
  Context[2] = a3;
  BYTE5(Context[5]) = 0;
  Context[6] = 20LL;
  v6 = MI_READ_PTE_LOCK_FREE(a1);
  v7 = 0;
  BYTE4(Context[5]) = 1;
  v8 = a2;
  while ( 1 )
  {
    v8 = (__int64)(v8 << 25) >> 16;
    if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v7;
  }
  if ( v6 >= 0 )
    MiInsertRecursiveTbFlushEntries((__int64)&Context[5], v7, a2);
  else
    MiInsertLargeTbFlushEntry((__int64)&Context[5], v7, a2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v11) = 4096;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v11;
  }
  Context[3] = MiGetContainingPageTable(a1);
  HIDWORD(Context[4]) = KeNumberProcessors_0;
  LODWORD(Context[4]) = KeNumberProcessors_0;
  KeIpiGenericCall(MiWritePteHighLevelIsr, (ULONG_PTR)Context);
  if ( KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
