/*
 * XREFs of HalpPmuReservedResourcesProcessorCallback @ 0x140505958
 * Callers:
 *     EmonAllocateResources @ 0x14051A90C (EmonAllocateResources.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051BCC0 (EmonReleaseProfileResourcesInternal.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403007C0 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403644D0 (KeGetProcessorNumberFromIndex.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpPmuReservedResourcesProcessorCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64),
        __int64 a3,
        __int64 a4)
{
  NTSTATUS ProcessorNumberFromIndex; // ebx
  int v5; // r15d
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  unsigned __int16 *v11; // rax
  __int64 v12; // r14
  ULONG v13; // ecx
  __int64 v14; // rsi
  unsigned __int8 v15; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int16 *v21[2]; // [rsp+38h] [rbp-40h] BYREF
  __int16 v22; // [rsp+48h] [rbp-30h]
  int v23; // [rsp+4Ah] [rbp-2Eh]
  __int16 v24; // [rsp+4Eh] [rbp-2Ah]
  _QWORD v25[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v26; // [rsp+60h] [rbp-18h]
  ULONG ProcIndex; // [rsp+C0h] [rbp+48h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+C8h] [rbp+50h] BYREF
  int v29; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v30; // [rsp+D8h] [rbp+60h]

  v30 = a4;
  v25[0] = a2;
  v23 = 0;
  ProcessorNumberFromIndex = 0;
  v24 = 0;
  v5 = 0;
  ProcIndex = 0;
  ProcNumber = 0;
  v26 = 0LL;
  v25[1] = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v10 = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  v11 = *(unsigned __int16 **)(a1 + 8);
  v12 = v30;
  v29 = 0;
  v22 = 0;
  v21[1] = v11;
  v21[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&ProcIndex, v21) )
  {
    v13 = ProcIndex;
    if ( ProcIndex == KeGetPcr()->Prcb.Number )
    {
      ProcessorNumberFromIndex = a2(a3);
      if ( ProcessorNumberFromIndex < 0 )
        break;
    }
    else
    {
      v14 = v12 + 80LL * ProcIndex;
      *(_QWORD *)(v14 + 72) = HalpPmuProcessorCallbackDpcRoutine;
      *(_QWORD *)(v14 + 80) = v25;
      *(_DWORD *)(v14 + 48) = 787;
      *(_QWORD *)(v14 + 104) = 0LL;
      *(_QWORD *)(v14 + 64) = 0LL;
      ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(v13, &ProcNumber);
      if ( ProcessorNumberFromIndex < 0 )
        break;
      KeSetTargetProcessorDpcEx((PKDPC)(v14 + 48), &ProcNumber);
      ++v5;
      KiInsertQueueDpc(v14 + 48, (__int64)&v29, 0LL, 0LL, 0);
    }
  }
  while ( v29 != v5 )
    _mm_pause();
  if ( KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v19 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( ProcessorNumberFromIndex >= 0 && (int)v26 < 0 )
    return (unsigned int)v26;
  return (unsigned int)ProcessorNumberFromIndex;
}
