/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x14027F900
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x14024F830 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14027F4F0 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x1402FE3CC (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14036D3F0 (IopBuildAsynchronousFsdRequest.c)
 *     IoSetIoAttributionIrp @ 0x140554CF0 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x1402B1DD4 (IopSetDiskIoAttributionFromProcess.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402B1E30 (IopSetDiskIoAttributionExtension.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IoSetDiskIoAttributionFromThread(__int64 a1, struct _KTHREAD *a2)
{
  _QWORD *Object; // rsi
  unsigned int v3; // edi
  int v5; // ebp
  _KPROCESS *Process; // rbx
  __int64 v8; // r12
  KIRQL v10; // al
  unsigned __int64 v11; // rbx
  KIRQL v12; // r9
  int v13; // eax
  KIRQL v14; // al
  unsigned __int64 v15; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // cl
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r8
  int v24; // eax
  KIRQL v25; // [rsp+58h] [rbp+10h]

  Object = a2[1].WaitBlock[1].Object;
  v3 = 0;
  v5 = 0;
  if ( !Object )
    goto LABEL_12;
  if ( a2 == KeGetCurrentThread() )
    goto LABEL_11;
  v14 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
  Object = a2[1].WaitBlock[1].Object;
  v15 = v14;
  if ( Object )
  {
    ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Object, 0x746C6644u);
    v5 = 1;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v15);
  if ( Object )
  {
LABEL_11:
    Process = (_KPROCESS *)Object[68];
  }
  else
  {
LABEL_12:
    if ( a2 == KeGetCurrentThread()
      && a2->ApcState.Process != a2->Process
      && (int)IopSetDiskIoAttributionFromProcess(a1) >= 0 )
    {
      goto LABEL_7;
    }
    Process = a2->Process;
  }
  v8 = 0LL;
  if ( !Process[2].Affinity.StaticBitmap[18] )
  {
    v3 = -1073741275;
    goto LABEL_7;
  }
  v10 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v11 = Process[2].Affinity.StaticBitmap[18];
  v25 = v10;
  if ( v11 )
    v8 = *(_QWORD *)(v11 + 24);
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  if ( !KiIrqlFlags )
    goto LABEL_17;
  v21 = KeGetCurrentIrql();
  if ( (KiIrqlFlags & 1) == 0 || v21 > 0xFu )
    goto LABEL_17;
  v12 = v25;
  if ( v25 <= 0xFu && v21 >= 2u )
  {
    v22 = KeGetCurrentPrcb();
    v23 = v22->SchedulerAssist;
    v24 = ~(unsigned __int16)(-1LL << (v25 + 1));
    v20 = (v24 & v23[5]) == 0;
    v23[5] &= v24;
    if ( v20 )
    {
      KiRemoveSystemWorkPriorityKick(v22);
LABEL_17:
      v12 = v25;
    }
  }
  __writecr8(v12);
  if ( v11 )
  {
    v13 = IopSetDiskIoAttributionExtension(a1, v8, KeGetCurrentThread(), 0LL);
    if ( v13 < 0 )
      v3 = v13;
  }
  else
  {
    v3 = -1073741275;
  }
LABEL_7:
  if ( v5 )
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
  return v3;
}
