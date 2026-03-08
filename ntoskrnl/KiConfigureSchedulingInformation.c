/*
 * XREFs of KiConfigureSchedulingInformation @ 0x140A8B1B4
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140A9C260 (KiInitializeDynamicProcessorDpc.c)
 *     KiConfigureAllSchedulingInformation @ 0x140B41844 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KiQuerySubNodeActiveAffinity @ 0x1402AE38C (KiQuerySubNodeActiveAffinity.c)
 *     KiInitializePriorityState @ 0x14037F530 (KiInitializePriorityState.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14037F6F0 (KiConfigureCpuSetSchedulingInformation.c)
 *     KiFreeLocalSharedReadyQueue @ 0x14037F864 (KiFreeLocalSharedReadyQueue.c)
 *     KeDoesSystemHaveHeterogeneousCoreTypes @ 0x14037F8D8 (KeDoesSystemHaveHeterogeneousCoreTypes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiConfigureSchedulingInformation(__int64 a1, char a2)
{
  __int64 v2; // r14
  __int64 v4; // rdi
  unsigned int v5; // r10d
  unsigned __int8 *v6; // r8
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // edx
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned int v18; // ebx
  unsigned __int8 CurrentIrql; // si
  unsigned int v20; // r8d
  int v21; // r14d
  unsigned int v22; // eax
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rbx
  int v24; // r13d
  int v25; // r12d
  struct _KPRCB *v26; // rdx
  unsigned __int64 GroupSetMember; // rax
  __int64 NextThread; // r8
  _KPRIORITY_STATE *v29; // rcx
  __int64 v30; // rcx
  _BYTE *v31; // r8
  unsigned __int8 v32; // al
  unsigned __int64 *v33; // rdx
  char v34; // r9
  _DWORD *SchedulerAssist; // r9
  __int64 v36; // rax
  unsigned __int8 v37; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v39; // r8
  int v40; // eax
  bool v41; // zf
  __int128 v42; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v43; // [rsp+40h] [rbp-28h] BYREF
  __int64 v44; // [rsp+48h] [rbp-20h]
  __int16 v45; // [rsp+50h] [rbp-18h]
  int v46; // [rsp+52h] [rbp-16h]
  __int16 v47; // [rsp+56h] [rbp-12h]
  unsigned __int16 v49; // [rsp+B8h] [rbp+50h] BYREF
  int v50; // [rsp+C0h] [rbp+58h] BYREF
  int v51; // [rsp+C8h] [rbp+60h]

  v2 = *(_QWORD *)(a1 + 192);
  v4 = a1;
  v46 = 0;
  v47 = 0;
  v49 = 0;
  v50 = 0;
  v42 = 0LL;
  KiQuerySubNodeActiveAffinity(v2, (__int64)&v42, &v49);
  v5 = *(_DWORD *)(v4 + 34452);
  v6 = (unsigned __int8 *)(v4 + 208);
  v7 = v42;
  if ( v5 )
  {
    v8 = *v6;
    v9 = v4 + 264LL * (v5 - 1);
    if ( (unsigned __int16)v8 >= *(_WORD *)(v9 + 40632) )
      v10 = 0LL;
    else
      v10 = *(_QWORD *)(v9 + 8 * v8 + 40640);
    *(_QWORD *)(v4 + 34928) = v42 & v10;
  }
  if ( !*(_QWORD *)(v4 + 34928) )
    *(_QWORD *)(v4 + 34928) = *(_QWORD *)(v4 + 200);
  LODWORD(v11) = *(unsigned __int8 *)(v4 + 209);
  v12 = 0;
  if ( v5 )
  {
    v13 = *v6;
    while ( 1 )
    {
      v14 = v4 + 264LL * v12;
      v15 = (unsigned __int16)v13 >= *(_WORD *)(v14 + 40632) ? 0LL : *(_QWORD *)(v14 + 8 * v13 + 40640);
      v16 = v7 & v15;
      if ( (~*(_QWORD *)(v4 + 34912) & v16) != 0 )
        break;
      if ( ++v12 >= v5 )
        goto LABEL_15;
    }
    _BitScanForward64((unsigned __int64 *)&v11, v16);
    *(_QWORD *)(v4 + 34920) = v16;
    v51 = v11;
  }
LABEL_15:
  *(_DWORD *)(v4 + 34900) = v11;
  if ( a2 || *(_DWORD *)(v4 + 36) != *(_DWORD *)(v2 + 176) )
    return KiConfigureCpuSetSchedulingInformation(v4);
  v18 = KiMaximumSharedReadyQueueSize;
  if ( KiMaximumSharedReadyQueueSize )
  {
    if ( (KiMaximumSharedReadyQueueSize & 0x100) != 0 )
    {
      v18 = KiMaximumSharedReadyQueueSize & 0xFFFFFEFF;
      if ( (unsigned int)KeDoesSystemHaveHeterogeneousCoreTypes() )
        v18 *= 2;
    }
    if ( v18 > 0x40 )
      v18 = 64;
  }
  else
  {
    v18 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v36) = 4;
    if ( CurrentIrql != 2 )
      v36 = (-1LL << (CurrentIrql + 1)) & 4;
    v7 = v42;
    SchedulerAssist[5] |= v36;
  }
  v20 = v49;
  *(_QWORD *)(v2 + 152) = 0LL;
  v21 = 0;
  v44 = v7;
  v43 = 0LL;
  v22 = (v18 + v20 - 1) / v18;
  SharedReadyQueue = *(_KSHARED_READY_QUEUE **)(v4 + 34888);
  v24 = v20 / v22;
  v25 = v20 % v22;
  v45 = WORD4(v42);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v50, &v43) )
  {
    v26 = (struct _KPRCB *)KiProcessorBlock[v50];
    if ( v21 == SharedReadyQueue->ProcCount )
    {
      SharedReadyQueue = v26->SharedReadyQueue;
      v21 = 0;
    }
    else if ( v21 )
    {
      goto LABEL_29;
    }
    SharedReadyQueue->ProcCount = v24;
    if ( v25 )
    {
      --v25;
      SharedReadyQueue->ProcCount = v24 + 1;
    }
LABEL_29:
    GroupSetMember = v26->GroupSetMember;
    ++v21;
    v26->SharedReadyQueue = SharedReadyQueue;
    SharedReadyQueue->Affinity |= GroupSetMember;
    NextThread = (__int64)v26->NextThread;
    v29 = &SharedReadyQueue->RunningSummary[v26->GroupIndex - SharedReadyQueue->LowProcIndex];
    v26->PriorityState = v29;
    if ( !NextThread )
      NextThread = (__int64)v26->CurrentThread;
    KiInitializePriorityState(v29, v26, NextThread);
  }
  v43 = 0LL;
  v4 = a1;
  v45 = WORD4(v42);
  v44 = v42;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v50, &v43) )
  {
    v30 = KiProcessorBlock[v50];
    v31 = *(_BYTE **)(v30 + 34888);
    v32 = v31[660];
    v33 = (unsigned __int64 *)(v31 + 664);
    if ( v32 > 1u )
    {
      *(_QWORD *)(v30 + 34880) = *v33;
      v32 = v31[660];
    }
    v34 = *(_BYTE *)(v30 + 209);
    if ( v34 == v31[657] && v32 > 1u )
    {
      *(_DWORD *)(v30 + 34896) = 1;
      _BitScanReverse64((unsigned __int64 *)&v33, *v33);
      v31[661] = v34;
      v31[656] = (_BYTE)v33 - v31[657] + 1;
    }
    if ( *(_QWORD *)(v30 + 34888) != *(_QWORD *)(v30 + 35968) )
      KiFreeLocalSharedReadyQueue(v30);
  }
  if ( KiIrqlFlags )
  {
    v37 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v39 = CurrentPrcb->SchedulerAssist;
      v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v41 = (v40 & v39[5]) == 0;
      v39[5] &= v40;
      if ( v41 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return KiConfigureCpuSetSchedulingInformation(v4);
}
