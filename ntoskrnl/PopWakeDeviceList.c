/*
 * XREFs of PopWakeDeviceList @ 0x14058E81C
 * Callers:
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIsNotifyForDirectedPowerTransition @ 0x14058E354 (PopIsNotifyForDirectedPowerTransition.c)
 *     PopIssueDirectedPowerTransition @ 0x140988CE0 (PopIssueDirectedPowerTransition.c)
 *     PopNotifyDevice @ 0x140AA415C (PopNotifyDevice.c)
 */

int __fastcall PopWakeDeviceList(_QWORD *a1, __int64 a2)
{
  __int64 **v2; // r15
  int v3; // r14d
  __int64 **v5; // rax
  int v6; // ecx
  int v7; // ebx
  _BYTE *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 **v11; // rcx
  unsigned __int64 OldIrql; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v20[4]; // [rsp+50h] [rbp-11h] BYREF
  int v21; // [rsp+54h] [rbp-Dh]
  _QWORD v22[2]; // [rsp+58h] [rbp-9h] BYREF
  int v23; // [rsp+68h] [rbp+7h]
  int v24; // [rsp+6Ch] [rbp+Bh]
  _BYTE Object[4]; // [rsp+70h] [rbp+Fh] BYREF
  int v26; // [rsp+74h] [rbp+13h]
  _QWORD v27[2]; // [rsp+78h] [rbp+17h] BYREF
  int v28; // [rsp+88h] [rbp+27h]
  int v29; // [rsp+8Ch] [rbp+2Bh]

  v2 = (__int64 **)(a2 + 40);
  v3 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 4);
  v5 = *(__int64 ***)(a2 + 40);
  v6 = 0;
  v20[1] = 0;
  v7 = 0;
  v20[3] = 0;
  v24 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Object[1] = 0;
  Object[3] = 0;
  v29 = 0;
  while ( v5 != v2 )
  {
    v5 = (__int64 **)*v5;
    ++v6;
  }
  Object[0] = 5;
  v27[1] = v27;
  v27[0] = v27;
  v22[1] = v22;
  v22[0] = v22;
  a1[4] = Object;
  v8 = v20;
  a1[5] = v20;
  Object[2] = 8;
  v26 = v6;
  v28 = v3;
  v20[0] = 5;
  v20[2] = 8;
  v21 = 0;
  v23 = v3;
  if ( v3 > 0 )
  {
    do
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140C3C9F0 + 1, &LockHandle);
      v9 = *v2;
      v10 = **v2;
      if ( (__int64 **)(*v2)[1] != v2
        || *(__int64 **)(v10 + 8) != v9
        || (*v2 = (__int64 *)v10, *(_QWORD *)(v10 + 8) = v2, v11 = (__int64 **)a1[55], *v11 != a1 + 54) )
      {
        __fastfail(3u);
      }
      v9[1] = (__int64)v11;
      *v9 = (__int64)(a1 + 54);
      *v11 = v9;
      a1[55] = v9;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      --v3;
      ++v7;
      if ( PopIsNotifyForDirectedPowerTransition((__int64)v9) )
        LODWORD(v8) = PopIssueDirectedPowerTransition(a1, v9);
      else
        LODWORD(v8) = PopNotifyDevice(a1, v9);
      if ( (PopSimulate & 0x80000) != 0 )
      {
        while ( v7 > 0 )
        {
          LODWORD(v8) = KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
          --v7;
        }
      }
    }
    while ( v3 > 0 );
    while ( v7 > 0 )
    {
      LODWORD(v8) = KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
      --v7;
    }
  }
  a1[4] = 0LL;
  a1[5] = 0LL;
  return (int)v8;
}
