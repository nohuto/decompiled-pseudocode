ULONG_PTR __fastcall HalpLbrConfigureProcessor(ULONG_PTR Argument)
{
  unsigned int v1; // r11d
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  unsigned int v9; // rdx^4
  int v10; // eax
  unsigned int v11; // ecx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf

  v1 = HalpLbrStackSize - 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v4) = 0x8000;
    else
      v4 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v4;
  }
  v5 = __readmsr(0x1D9u);
  v6 = v5;
  if ( !Argument )
  {
    if ( HalpArchLbrSupported )
    {
      v11 = 5326;
    }
    else
    {
      v6 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      v11 = 456;
    }
    __writemsr(v11, 0LL);
    v8 = 473;
    v9 = HIDWORD(v6);
    v10 = v6 & 0xFFFFF7FF;
    goto LABEL_20;
  }
  if ( !HalpArchLbrSupported )
  {
    __writemsr(0x1C9u, v1);
    if ( HalpLbrStackSize )
    {
      v7 = 1728;
      do
      {
        __writemsr(v7 - 64, 0LL);
        __writemsr(v7++, 0LL);
      }
      while ( v7 - 1728 < HalpLbrStackSize );
    }
    __writemsr(0x1C8u, (unsigned int)HalpLbrSelectFlags);
    v6 = v5 | 1;
  }
  __writemsr(0x1D9u, v6 | 0x800);
  if ( HalpArchLbrSupported )
  {
    __writemsr(0x14CFu, (unsigned int)HalpLbrStackSize);
    v8 = 5326;
    v9 = 0;
    v10 = HalpLbrCtlFlags | 1;
LABEL_20:
    __writemsr(v8, __PAIR64__(v9, v10));
  }
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  _InterlockedDecrement(&HalpLbrSyncBarrier);
  return 0LL;
}
