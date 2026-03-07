__int64 __fastcall KiUpdateProcessConcurrencyCount(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r14
  volatile LONG *v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // ecx
  _DWORD *SchedulerAssist; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // cl
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  int v16; // eax
  _QWORD *v17; // r12
  char v18; // r13
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v21; // r9
  int v22; // eax
  char v23; // [rsp+30h] [rbp-D0h] BYREF
  char v24[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v28; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v29[68]; // [rsp+80h] [rbp-80h] BYREF

  memset(&v29[2], 0, 0x100uLL);
  result = *(unsigned int *)(BugCheckParameter1 + 2572);
  v23 = 0;
  v24[0] = 0;
  v27 = 0LL;
  memset(&v28, 0, sizeof(v28));
  if ( (result & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v10) = 4;
      else
        v10 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v10;
    }
    v6 = (volatile LONG *)(BugCheckParameter1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter1 + 64));
    v7 = *(_DWORD *)(BugCheckParameter1 + 2560);
    if ( a2 > KeMaximumProcessors )
      v8 = (KeMaximumProcessors << 20) - 1;
    else
      v8 = a2 << 20;
    v25 = v8;
    if ( v8 < v7 )
    {
      v8 = v7 - ((v7 - v8) >> 4);
      v25 = v8;
    }
    *(_DWORD *)(BugCheckParameter1 + 2560) = v8;
    if ( *(_DWORD *)(BugCheckParameter1 + 2564) > v8 || *(_DWORD *)(BugCheckParameter1 + 2568) < v8 )
    {
      v29[0] = 2097184;
      memset(&v29[1], 0, 0x104uLL);
      KiSelectIdealProcessorSetsForProcess(BugCheckParameter1, &v25, v29, &v27);
      v16 = ExGenRandom(1LL);
      v17 = *(_QWORD **)(BugCheckParameter1 + 48);
      v26 = v16;
      v18 = 0;
      if ( v17 != (_QWORD *)(BugCheckParameter1 + 48) )
      {
        do
        {
          KiAdaptThreadIdealProcessorForProcessIdealSetChange(
            BugCheckParameter1,
            (_DWORD)v17 - 760,
            BugCheckParameter1 + 2576,
            (unsigned int)v29,
            (__int64)&v23,
            (__int64)&v26);
          v18 |= v23;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 != (_QWORD *)(BugCheckParameter1 + 48) );
        v6 = (volatile LONG *)(BugCheckParameter1 + 64);
      }
      KiCopyAffinityEx(BugCheckParameter1 + 2576, *(unsigned __int16 *)(BugCheckParameter1 + 2578), v29);
      *(_QWORD *)(BugCheckParameter1 + 2564) = v27;
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      if ( KiIrqlFlags )
      {
        v19 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v21 = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      if ( v18 )
      {
        result = (unsigned int)KiCacheAwareScheduling;
        if ( (KiCacheAwareScheduling & 0x10) != 0 )
        {
          KiStackAttachProcess(BugCheckParameter1);
          MmAdjustWorkingSetSizeEx(0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0LL, 0, 0, v24);
          return KiUnstackDetachProcess(&v28);
        }
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter1 + 64));
      if ( KiIrqlFlags )
      {
        v11 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = v12->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
