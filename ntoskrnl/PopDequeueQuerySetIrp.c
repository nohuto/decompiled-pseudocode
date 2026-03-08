/*
 * XREFs of PopDequeueQuerySetIrp @ 0x1402BB70C
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1402BB4F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopSystemIrpCompletion @ 0x140AA4450 (PopSystemIrpCompletion.c)
 * Callees:
 *     PopDiagTraceIrpStart @ 0x1402BB178 (PopDiagTraceIrpStart.c)
 *     PopEnableIrpWatchdog @ 0x1402BB290 (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpFinish @ 0x1402BB864 (PopDiagTraceIrpFinish.c)
 *     PopCompleteIrpWatchdog @ 0x1402BB9F4 (PopCompleteIrpWatchdog.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402BBAAC (PopDeepSleepClearDisengageReason.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDisableIrpWatchdog @ 0x140580BBC (PopDisableIrpWatchdog.c)
 */

__int64 __fastcall PopDequeueQuerySetIrp(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  bool v6; // zf
  _QWORD *v7; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 *v9; // rdi
  __int64 result; // rax
  __int64 *i; // rdx
  __int64 *v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 ***v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // r8
  __int64 ***v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  __int64 *v28; // rax
  IRP *v29; // rdi
  struct _DEVICE_OBJECT *DeviceObject; // rbx
  __int64 *v31; // [rsp+20h] [rbp-30h] BYREF
  __int64 **v32; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PopDiagTraceIrpFinish(a1);
  PopCompleteIrpWatchdog(a1);
  v32 = &v31;
  v31 = (__int64 *)&v31;
  v2 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v3 = *(_QWORD *)(v2 + 24);
  if ( v3 )
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v5 = (_QWORD *)(v4 + 264);
  v6 = *(_DWORD *)(v2 + 188) == 0;
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  if ( v6 && *(_BYTE *)(v2 + 184) == 2 && *(int *)(v2 + 192) > 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(v4 + 296), 0x8000u);
    if ( *v5 )
      PopDisableIrpWatchdog();
  }
  if ( *(_DWORD *)(v2 + 188) != 1 )
    v5 = (_QWORD *)(v4 + 280);
  *v5 = 0LL;
  if ( a1 == PopInrushIrp )
  {
    PopInrushIrp = 0LL;
    for ( i = (__int64 *)PopInrushIrpList; ; i = (__int64 *)*i )
    {
      if ( i == &PopInrushIrpList )
        goto LABEL_7;
      v12 = i - 21;
      v13 = *(_QWORD *)(i[9 * *((char *)i - 102) + 4] + 24);
      v14 = v13 ? *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL) : 0LL;
      if ( !*(_QWORD *)(v14 + 264) && *(__int64 **)(v14 + 272) == v12 )
        break;
    }
    v15 = *i;
    v16 = (__int64 *)i[1];
    if ( *(__int64 **)(*i + 8) != i )
      goto LABEL_51;
    if ( (__int64 *)*v16 != i )
      goto LABEL_51;
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    v17 = (__int64 ***)(v12 + 15);
    *(_QWORD *)(v14 + 264) = v12;
    *(_QWORD *)(v14 + 272) = v12[15];
    v18 = v32;
    PopInrushIrp = (__int64)(i - 21);
    if ( *v32 != (__int64 *)&v31 )
      goto LABEL_51;
    v12[16] = (__int64)v32;
    *v17 = &v31;
    *v18 = v17;
    v32 = (__int64 **)(v12 + 15);
    if ( *v5 )
      goto LABEL_8;
  }
LABEL_7:
  v7 = (_QWORD *)v5[1];
  if ( !v7 )
    goto LABEL_8;
  v19 = v7 + 21;
  v20 = (_QWORD *)v7[21];
  if ( v20 != v7 + 21 )
  {
    if ( PopInrushIrp )
      goto LABEL_8;
    v21 = (_QWORD *)v7[22];
    PopInrushIrp = v5[1];
    if ( (_QWORD *)v20[1] == v19 && (_QWORD *)*v21 == v19 )
    {
      *v21 = v20;
      v20[1] = v21;
      goto LABEL_40;
    }
LABEL_51:
    __fastfail(3u);
  }
LABEL_40:
  *v5 = v7;
  v22 = (__int64 ***)(v7 + 15);
  v5[1] = *v22;
  v23 = v32;
  if ( *v32 != (__int64 *)&v31 )
    goto LABEL_51;
  v22[1] = v32;
  *v22 = &v31;
  *v23 = v22;
  v32 = (__int64 **)v22;
LABEL_8:
  PopIrpLockThread = 0LL;
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v6 = (v27 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v27;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  while ( 1 )
  {
    v9 = v31;
    result = (__int64)&v31;
    if ( v31 == (__int64 *)&v31 )
      break;
    v28 = (__int64 *)*v31;
    if ( (__int64 **)v31[1] != &v31 || (__int64 *)v28[1] != v31 )
      goto LABEL_51;
    v31 = (__int64 *)*v31;
    v28[1] = (__int64)&v31;
    v29 = (IRP *)(v9 - 15);
    DeviceObject = v29->Tail.Overlay.CurrentStackLocation[-1].DeviceObject;
    PopDiagTraceIrpStart((__int64)&v31, (__int64)v29);
    PopEnableIrpWatchdog((__int64)v29);
    IofCallDriver(DeviceObject, v29);
  }
  if ( *(_BYTE *)(v2 + 184) == 2 && *(_DWORD *)(v2 + 188) == 1 )
  {
    result = (unsigned int)_InterlockedDecrement(&PopPendingSetPowerDeviceIrps);
    if ( !(_DWORD)result )
      return PopDeepSleepClearDisengageReason(2LL);
  }
  return result;
}
