/*
 * XREFs of PpDevNodeRemoveFromTree @ 0x1403CF61C
 * Callers:
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140862FDC (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PnpOrphanNotification @ 0x14087E510 (PnpOrphanNotification.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall PpDevNodeRemoveFromTree(_QWORD *a1)
{
  char v2; // bp
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  _QWORD **v5; // rax
  _QWORD *i; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  char result; // al
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // cl
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r8
  int v33; // eax

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v4 = a1[2];
  if ( v4 )
  {
    v5 = (_QWORD **)(v4 + 8);
    for ( i = *v5; i != a1; i = (_QWORD *)*i )
      v5 = (_QWORD **)i;
    v7 = (_QWORD *)*a1;
    *v5 = (_QWORD *)*a1;
    v8 = a1[2];
    if ( *(_QWORD *)(v8 + 8) )
    {
      while ( v7 )
      {
        v5 = (_QWORD **)v7;
        v7 = (_QWORD *)*v7;
      }
    }
    else
    {
      v5 = 0LL;
    }
    *(_QWORD *)(v8 + 24) = v5;
    KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v29 = (v28 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v28;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v3);
    v9 = a1[78];
    v10 = (_QWORD *)a1[79];
    if ( *(_QWORD **)(v9 + 8) != a1 + 78 || (_QWORD *)*v10 != a1 + 78 )
LABEL_28:
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    PnpOrphanNotification(a1);
    v2 = 1;
  }
  else
  {
    KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
    if ( KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v29 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    __writecr8(v3);
  }
  v11 = (_QWORD *)a1[22];
  while ( v11 != a1 + 22 )
  {
    v14 = v11 - 3;
    v15 = v11;
    v16 = *(v11 - 3);
    v11 = (_QWORD *)*v11;
    v17 = (_QWORD *)v14[1];
    if ( *(_QWORD **)(v16 + 8) != v14 )
      goto LABEL_28;
    if ( (_QWORD *)*v17 != v14 )
      goto LABEL_28;
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    v18 = *v15;
    v19 = (_QWORD *)v15[1];
    if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v19 != v15 )
      goto LABEL_28;
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    ExFreePoolWithTag(v14, 0x72775044u);
  }
  v12 = (_QWORD *)a1[24];
  while ( v12 != a1 + 24 )
  {
    v20 = *v12;
    v21 = v12;
    v12 = (_QWORD *)v20;
    v22 = (_QWORD *)v21[1];
    if ( *(_QWORD **)(v20 + 8) != v21 )
      goto LABEL_28;
    if ( (_QWORD *)*v22 != v21 )
      goto LABEL_28;
    *v22 = v20;
    *(_QWORD *)(v20 + 8) = v22;
    v23 = v21[3];
    v24 = (_QWORD *)v21[4];
    if ( *(_QWORD **)(v23 + 8) != v21 + 3 || (_QWORD *)*v24 != v21 + 3 )
      goto LABEL_28;
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    ExFreePoolWithTag(v21, 0x72775044u);
  }
  a1[2] = 0LL;
  result = v2;
  a1[1] = 0LL;
  *a1 = 0LL;
  a1[3] = 0LL;
  return result;
}
