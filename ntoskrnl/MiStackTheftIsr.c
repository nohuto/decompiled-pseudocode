/*
 * XREFs of MiStackTheftIsr @ 0x14062B050
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeFlushSingleCurrentTb @ 0x140387AD4 (KeFlushSingleCurrentTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCopyKstack @ 0x14062A6D0 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x14062B268 (MiSwitchKstackPages.c)
 */

ULONG_PTR __fastcall MiStackTheftIsr(ULONG_PTR Argument)
{
  unsigned __int64 v1; // r15
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx
  signed __int32 v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rbx
  signed __int32 v10; // eax
  unsigned int v11; // ebx
  signed __int32 v12; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  ULONG_PTR result; // rax
  int v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF
  int v21; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(Argument + 40);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v5) = 0x8000;
    else
      v5 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v5;
  }
  v6 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 64));
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x7FFFFFFF) != 0 )
  {
    v20 = 0;
    while ( (*(_DWORD *)(Argument + 64) & 0x80000000) != v7 )
      KeYieldProcessorEx(&v20);
    v12 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 64));
    v11 = ~v12 & 0x80000000;
    if ( (v12 & 0x7FFFFFFF) == 0 )
      goto LABEL_10;
    v21 = 0;
    while ( (*(_DWORD *)(Argument + 64) & 0x80000000) != v11 )
      KeYieldProcessorEx(&v21);
  }
  else
  {
    *(_DWORD *)(Argument + 64) = *(_DWORD *)(Argument + 68) | v7;
    v8 = 48LL * *(_QWORD *)Argument - 0x220000000000LL;
    v9 = 48LL * *(_QWORD *)(Argument + 8) - 0x220000000000LL;
    MiCopyKstack(v9, v8, *(_QWORD *)(Argument + 16));
    KeFlushSingleCurrentTb(v1, 0);
    MiSwitchKstackPages(v9, v8);
    *(_QWORD *)(v8 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v8 + 34) &= 0xC7u;
    *(_BYTE *)(v8 + 35) &= ~0x20u;
    v10 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 64));
    v11 = ~v10 & 0x80000000;
    if ( (v10 & 0x7FFFFFFF) == 0 )
    {
LABEL_10:
      *(_DWORD *)(Argument + 64) = *(_DWORD *)(Argument + 68) | v11;
      goto LABEL_21;
    }
    v19 = 0;
    while ( (*(_DWORD *)(Argument + 64) & 0x80000000) != v11 )
      KeYieldProcessorEx(&v19);
  }
LABEL_21:
  KeFlushSingleCurrentTb(v1, 0);
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
