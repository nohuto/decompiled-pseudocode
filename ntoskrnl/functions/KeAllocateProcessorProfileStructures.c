__int64 __fastcall KeAllocateProcessorProfileStructures(
        unsigned int a1,
        __int64 a2,
        _PROCESSOR_PROFILE_CONTROL_AREA **a3,
        char a4)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  size_t v8; // rsi
  char *IndependentPages; // rax
  char *v10; // rdi
  __int64 v11; // r8
  _PROCESSOR_PROFILE_CONTROL_AREA *v12; // r10
  _PROCESSOR_PROFILE_CONTROL_AREA *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 *PebsGpCounterReset; // rax
  unsigned int v16; // ebp
  _DWORD *SchedulerAssist; // r9
  __int64 v18; // rax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  _DWORD *v24; // r9
  __int64 v25; // rax
  unsigned __int8 v26; // cl
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  __int64 v30; // [rsp+20h] [rbp-48h]
  char v33; // [rsp+88h] [rbp+20h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !a4 )
  {
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v18) = 4;
      if ( CurrentIrql != 2 )
        v18 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v18;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->ProcessorProfileControlArea = *a3;
    CurrentPrcb->ProfileEventIndexAddress = &(*a3)->PebsDsSaveArea.As64Bit.PebsIndex;
    if ( KiIrqlFlags )
    {
      v19 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    __writecr8(CurrentIrql);
    return 0LL;
  }
  *a3 = 0LL;
  v33 = 0;
  v8 = a2 * a1 + 160LL * a1;
  v30 = a1;
  if ( KiKvaShadow )
    v8 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  IndependentPages = (char *)MmAllocateIndependentPages(v8, 0LL);
  v10 = IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, v8);
    if ( !KiKvaShadow )
      goto LABEL_14;
    if ( (unsigned int)MmCreateShadowMapping(v10, v8) )
    {
      v33 = 1;
LABEL_14:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v24 = KeGetCurrentPrcb()->SchedulerAssist;
        LODWORD(v25) = 4;
        if ( CurrentIrql != 2 )
          v25 = (-1LL << (CurrentIrql + 1)) & 4;
        v24[5] |= v25;
      }
      if ( (unsigned __int8)KiIsIntelPebsSupported(KeGetCurrentPrcb()) )
      {
        v13 = *(_PROCESSOR_PROFILE_CONTROL_AREA **)(v11 + 34968);
        if ( v13 )
        {
          *a3 = v13;
          v16 = -1073741302;
        }
        else
        {
          if ( a1 )
          {
            v14 = v30;
            PebsGpCounterReset = v12->PebsDsSaveArea.As32Bit.PebsGpCounterReset;
            do
            {
              *PebsGpCounterReset = (unsigned __int64)v10;
              v10 += a2;
              PebsGpCounterReset += 20;
              --v14;
            }
            while ( v14 );
          }
          v10 = 0LL;
          *a3 = v12;
          v16 = 0;
        }
      }
      else
      {
        v16 = -1073741637;
      }
      goto LABEL_21;
    }
    v16 = -1073741670;
  }
  else
  {
    v16 = -1073741801;
  }
LABEL_21:
  if ( KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v23 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
  }
  __writecr8(CurrentIrql);
  if ( v10 )
  {
    if ( v33 )
      MmDeleteShadowMapping(v10, v8);
    MmFreeIndependentPages(v10, v8);
  }
  return v16;
}
