int __fastcall PopSleepDeviceList(__int64 a1, __int64 a2)
{
  int v2; // r15d
  _QWORD **v3; // r14
  _QWORD *v5; // rax
  int v6; // ebx
  int v7; // ecx
  _BYTE *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  unsigned __int64 OldIrql; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int16 v19; // [rsp+48h] [rbp-49h] BYREF
  char v20; // [rsp+4Ah] [rbp-47h]
  char v21; // [rsp+4Bh] [rbp-46h]
  int v22; // [rsp+4Ch] [rbp-45h]
  _QWORD v23[2]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v24[4]; // [rsp+60h] [rbp-31h] BYREF
  int v25; // [rsp+64h] [rbp-2Dh]
  _QWORD v26[2]; // [rsp+68h] [rbp-29h] BYREF
  int v27; // [rsp+78h] [rbp-19h]
  int v28; // [rsp+7Ch] [rbp-15h]
  _BYTE v29[4]; // [rsp+80h] [rbp-11h] BYREF
  int v30; // [rsp+84h] [rbp-Dh]
  _QWORD v31[2]; // [rsp+88h] [rbp-9h] BYREF
  int v32; // [rsp+98h] [rbp+7h]
  int v33; // [rsp+9Ch] [rbp+Bh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp+Fh] BYREF
  PVOID Object[2]; // [rsp+B8h] [rbp+27h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v3 = (_QWORD **)(a2 + 24);
  v21 = 0;
  v5 = *(_QWORD **)(a2 + 24);
  v6 = 0;
  v24[1] = 0;
  v7 = 0;
  v24[3] = 0;
  v28 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v29[1] = 0;
  v29[3] = 0;
  v33 = 0;
  while ( v5 != v3 )
  {
    v5 = (_QWORD *)*v5;
    ++v7;
  }
  v19 = 1;
  v23[1] = v23;
  v23[0] = v23;
  v31[1] = v31;
  v31[0] = v31;
  v26[1] = v26;
  v26[0] = v26;
  *(_QWORD *)(a1 + 24) = &v19;
  *(_QWORD *)(a1 + 32) = v29;
  *(_QWORD *)(a1 + 40) = v24;
  Object[0] = &v19;
  v8 = v29;
  Object[1] = v29;
  v20 = 6;
  v22 = 0;
  v29[0] = 5;
  v29[2] = 8;
  v30 = v7;
  v32 = v2;
  v24[0] = 5;
  v24[2] = 8;
  v25 = 0;
  v27 = v2;
  if ( v2 > 0 )
  {
    do
    {
      LODWORD(v8) = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( *(int *)(a1 + 448) < 0 )
        break;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140C3C9F0 + 1, &LockHandle);
      v9 = *v3;
      v10 = (_QWORD *)**v3;
      if ( (_QWORD **)(*v3)[1] == v3 && (_QWORD *)v10[1] == v9 )
      {
        *v3 = v10;
        v10[1] = v3;
        v11 = *(_QWORD **)(a1 + 440);
        if ( *v11 == a1 + 432 )
          continue;
      }
      __fastfail(3u);
      v9[1] = v11;
      *v9 = a1 + 432;
      *v11 = v9;
      *(_QWORD *)(a1 + 440) = v9;
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
      --v2;
      ++v6;
      LODWORD(v8) = PopIsNotifyForDirectedPowerTransition((__int64)v9)
                  ? PopIssueDirectedPowerTransition(a1, v9)
                  : (unsigned int)PopNotifyDevice(a1, v9);
      if ( (PopSimulate & 0x80000) != 0 )
      {
        while ( v6 > 0 )
        {
          LODWORD(v8) = KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
          --v6;
        }
      }
    }
    while ( v2 > 0 );
    while ( v6 > 0 )
    {
      LODWORD(v8) = KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
      --v6;
    }
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return (int)v8;
}
