/*
 * XREFs of MiAsyncSlabReplenish @ 0x1402DF31C
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14020F130 (MiMakeZeroedPageTablesEx.c)
 *     MiAllocateMdlPagesByLists @ 0x14025B5F0 (MiAllocateMdlPagesByLists.c)
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiAllocateSlabPageForMdl @ 0x140620D1C (MiAllocateSlabPageForMdl.c)
 *     MiDeleteSlabAllocator @ 0x1406541A0 (MiDeleteSlabAllocator.c)
 *     MiFastReplenishWithAsync @ 0x1406542D8 (MiFastReplenishWithAsync.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAsyncSlabReplenish(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  volatile LONG *v5; // r13
  unsigned int v6; // r15d
  BOOL v7; // esi
  unsigned __int64 v8; // r12
  __int64 v10; // rdi
  _QWORD *v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  KIRQL v17; // al
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  int v23; // eax
  _DWORD *v24; // r8
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v26; // [rsp+38h] [rbp-28h]
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v28; // [rsp+42h] [rbp-1Eh]
  char v29; // [rsp+43h] [rbp-1Dh]
  int v30; // [rsp+44h] [rbp-1Ch]
  _QWORD v31[3]; // [rsp+48h] [rbp-18h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v29 = 0;
  if ( ((unsigned __int8)MiFlags & 0x30u) >= 0x10 )
  {
    Object = 0;
    v30 = 0;
    v28 = 6;
    v31[1] = v31;
    v5 = (volatile LONG *)(a1 + 16);
    v6 = a3 & 1;
    v31[0] = v31;
    v7 = !(a3 & 1);
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16));
    if ( !*(_QWORD *)(a1 + 240) )
    {
      if ( (a3 & 2) != 0 )
      {
        v7 = 0;
        goto LABEL_6;
      }
      *(_QWORD *)(a1 + 240) = a1;
      ExQueueWorkItemToPartition(a1 + 216);
    }
    if ( v7 )
    {
      v10 = a1 + 248;
      v11 = *(_QWORD **)(v10 + 8);
      if ( *v11 != v10 )
        goto LABEL_31;
      v26 = *(_QWORD **)(v10 + 8);
      v25 = v10;
      *v11 = &v25;
      *(_QWORD *)(v10 + 8) = &v25;
    }
LABEL_6:
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
    if ( !v7 )
      return v6;
    if ( KeWaitForSingleObject(&Object, WrKernel, 0, 0, a2) == 258 )
      v6 = 1;
    v17 = ExAcquireSpinLockExclusive(v5);
    v18 = v25;
    v19 = v17;
    v20 = v26;
    if ( *(__int64 **)(v25 + 8) == &v25 && (__int64 *)*v26 == &v25 )
    {
      *v26 = v25;
      *(_QWORD *)(v18 + 8) = v20;
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      if ( KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
          v24 = v22->SchedulerAssist;
          v16 = (v23 & v24[5]) == 0;
          v24[5] &= v23;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      __writecr8(v19);
      return v6;
    }
LABEL_31:
    __fastfail(3u);
  }
  return 1LL;
}
