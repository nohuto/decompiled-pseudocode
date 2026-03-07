unsigned __int64 __fastcall HalpLbrResumeRecording(char a1)
{
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int8 v6; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf

  result = (unsigned int)HalpLbrIsInUse;
  if ( HalpLbrIsInUse )
  {
    if ( a1 )
    {
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
      if ( !HalpArchLbrSupported )
      {
        __writemsr(0x1C8u, (unsigned int)HalpLbrSelectFlags);
        __writemsr(0x1C9u, (unsigned int)(HalpLbrStackSize - 1));
        v5 |= 1uLL;
      }
      __writemsr(0x1D9u, v5 | 0x800);
      if ( HalpArchLbrSupported )
        __writemsr(0x14CEu, (unsigned int)HalpLbrCtlFlags | 1LL);
      if ( KiIrqlFlags )
      {
        v6 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v9 & v8[5]) == 0;
          v8[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    else
    {
      if ( !HalpArchLbrSupported )
      {
        result = __readmsr(0x1D9u);
        if ( (result & 1) == 0 )
        {
          result |= 1uLL;
          __writemsr(0x1D9u, result);
        }
      }
      if ( !HalpLbrIsFreezeLegacy )
      {
        result = __readmsr(0x38Eu);
        if ( (result & 0x400000000000000LL) != 0 )
        {
          result = 0LL;
          __writemsr(0x390u, 0x400000000000000uLL);
        }
      }
    }
  }
  return result;
}
