/*
 * XREFs of PopFxActivateComponentDependents @ 0x14030819C
 * Callers:
 *     PopFxCompleteComponentActivation @ 0x14030698C (PopFxCompleteComponentActivation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueQuerySetIrp @ 0x1402BAFA4 (PopQueueQuerySetIrp.c)
 *     PopPluginComponentActive @ 0x14030721C (PopPluginComponentActive.c)
 *     PopFxNextComponentChildRelationSafe @ 0x140308264 (PopFxNextComponentChildRelationSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall PopFxActivateComponentDependents(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r12
  __int64 v3; // rdx
  volatile signed __int64 *v4; // rbx
  KIRQL v5; // si
  IRP *Flink; // rdi
  _QWORD *v7; // rcx
  NTSTATUS result; // eax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  KIRQL v12; // al
  __int64 v13; // rcx
  bool v14; // si
  unsigned __int64 v15; // r15
  bool v16; // zf
  __int64 v17; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 *v24; // r8
  __int64 **v25; // rdx
  __int64 *v26; // rdx
  char v27; // r15
  unsigned int v28; // eax
  char v29; // r15
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // r13
  unsigned __int8 v33; // cl
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  char v37; // r12
  IRP *v38; // rsi
  KIRQL v39; // al
  unsigned __int64 v40; // r14
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  KIRQL v45; // al
  int v46; // esi
  unsigned __int64 v47; // rbx
  __int64 v48; // r8
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  __int64 *v53; // r8
  __int64 v54; // rdx
  _QWORD *v55; // r9
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r9
  _DWORD *v58; // r8
  int v59; // eax
  IRP *v60; // rcx
  volatile signed __int64 *SpinLock; // [rsp+20h] [rbp-28h]
  __int64 v62; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v63; // [rsp+30h] [rbp-18h]
  unsigned int v65; // [rsp+98h] [rbp+50h]
  __int64 v66; // [rsp+98h] [rbp+50h]
  __int64 i; // [rsp+A0h] [rbp+58h]
  __int64 v68; // [rsp+A0h] [rbp+58h]
  __int64 v69; // [rsp+A8h] [rbp+60h] BYREF

  v69 = 0LL;
  v1 = 0LL;
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 80);
  for ( i = v3; (unsigned int)v1 < *(_DWORD *)(v2 + 188); v1 = (unsigned int)(v1 + 1) )
  {
    v9 = *(_QWORD *)(v2 + 192);
    v10 = *(unsigned int *)(v9 + 8 * v1 + 4);
    v65 = *(_DWORD *)(v9 + 8 * v1);
    v11 = *(_QWORD *)(*(_QWORD *)(v3 + 832) + 8LL * v65);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 128));
    v13 = *(_QWORD *)(v11 + 176);
    v14 = 0;
    v15 = v12;
    if ( *(_BYTE *)(v13 + 8 * v10 + 4) )
    {
      *(_BYTE *)(v13 + 8 * v10 + 4) = 0;
      v16 = (*(_DWORD *)(v11 + 184))-- == 1;
      v14 = v16;
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v11 + 128));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v16 = (v21 & SchedulerAssist[5]) == 0;
        v17 = (unsigned int)v21 & SchedulerAssist[5];
        SchedulerAssist[5] = v17;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v15);
    if ( v14 )
    {
      LOBYTE(v17) = 1;
      PopPluginComponentActive(i, v65, v17, 0LL);
    }
    v3 = i;
  }
  v4 = (volatile signed __int64 *)(v2 + 128);
  SpinLock = (volatile signed __int64 *)(v2 + 128);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 128));
  Flink = 0LL;
  v63 = &v62;
  v62 = (__int64)&v62;
  while ( (unsigned __int8)PopFxNextComponentChildRelationSafe(v2, 0LL, &v69) )
  {
    v22 = v69;
    v23 = (__int64 *)(v69 + 32);
    v24 = *(__int64 **)(v69 + 32);
    v25 = *(__int64 ***)(v69 + 40);
    if ( v24[1] != v69 + 32 )
      goto LABEL_68;
    if ( *v25 != v23 )
      goto LABEL_68;
    *v25 = v24;
    v24[1] = (__int64)v25;
    v26 = v63;
    if ( (__int64 *)*v63 != &v62 )
      goto LABEL_68;
    v23[1] = (__int64)v63;
    *v23 = (__int64)&v62;
    *v26 = (__int64)v23;
    v63 = v23;
    v27 = *(_DWORD *)(v22 + 16);
    v28 = *(_DWORD *)(v22 + 16) & 0xFFFFFFFE;
    *(_DWORD *)(v22 + 16) = v28;
    v29 = v27 & 1;
    if ( v29 )
      *(_DWORD *)(v22 + 16) = v28 | 2;
    v30 = 0LL;
    if ( *(_DWORD *)v22 )
    {
      v31 = *(_QWORD *)(v22 + 48);
      v66 = v31 - 112;
      v32 = v31 + 56;
      v68 = v31 - 48;
    }
    else
    {
      v31 = 128LL;
      v30 = *(_QWORD *)(v22 + 48) - 1240LL;
      v66 = 16LL;
      v68 = 80LL;
      v32 = 184LL;
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v22 + 8));
    if ( v29 )
    {
      KxReleaseSpinLock(SpinLock);
      if ( KiIrqlFlags )
      {
        v33 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && v5 <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v16 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      __writecr8(v5);
      v37 = 0;
      if ( v30 )
      {
        v38 = 0LL;
        v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v30 + 1240));
        v16 = (*(_DWORD *)(v30 + 1248))-- == 1;
        v40 = v39;
        if ( v16 )
        {
          v38 = *(IRP **)(v30 + 1256);
          v37 = 1;
          *(_QWORD *)(v30 + 1256) = 0LL;
        }
        KxReleaseSpinLock((volatile signed __int64 *)(v30 + 1240));
        if ( KiIrqlFlags )
        {
          v41 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v41 >= 2u )
          {
            v42 = KeGetCurrentPrcb();
            v43 = v42->SchedulerAssist;
            v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
            v16 = (v44 & v43[5]) == 0;
            v43[5] &= v44;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v42);
          }
        }
        __writecr8(v40);
        if ( v37 )
        {
          v38->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)Flink;
          Flink = v38;
        }
      }
      else
      {
        v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v31);
        v46 = *(_DWORD *)v32 - 1;
        v47 = v45;
        *(_DWORD *)v32 = v46;
        KxReleaseSpinLock((volatile signed __int64 *)v31);
        if ( KiIrqlFlags )
        {
          v49 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v49 <= 0xFu && (unsigned __int8)v47 <= 0xFu && v49 >= 2u )
          {
            v50 = KeGetCurrentPrcb();
            v51 = v50->SchedulerAssist;
            v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v47 + 1));
            v16 = (v52 & v51[5]) == 0;
            v48 = (unsigned int)v52 & v51[5];
            v51[5] = v48;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        __writecr8(v47);
        if ( !v46 )
        {
          LOBYTE(v48) = 1;
          PopPluginComponentActive(*(_QWORD *)v68, *(_DWORD *)v66, v48, 0LL);
        }
      }
      v4 = SpinLock;
      v2 = a1;
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SpinLock);
    }
    else
    {
      v4 = (volatile signed __int64 *)(v2 + 128);
    }
  }
  v7 = (_QWORD *)v62;
  if ( (__int64 *)v62 != &v62 )
  {
    v53 = v63;
    if ( *(__int64 **)(v62 + 8) != &v62
      || (__int64 *)*v63 != &v62
      || (*v63 = v62,
          v54 = v2 + 440,
          v7[1] = v53,
          v55 = *(_QWORD **)(v2 + 448),
          *(_QWORD *)(*(_QWORD *)(v2 + 440) + 8LL) != v2 + 440)
      || *v55 != v54
      || *(_QWORD **)(*v7 + 8LL) != v7
      || (_QWORD *)*v53 != v7 )
    {
LABEL_68:
      __fastfail(3u);
    }
    *v55 = v7;
    *(_QWORD *)(v2 + 448) = v7[1];
    *(_QWORD *)v7[1] = v54;
    v7[1] = v55;
  }
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags )
  {
    v56 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v56 <= 0xFu && v5 <= 0xFu && v56 >= 2u )
    {
      v57 = KeGetCurrentPrcb();
      v58 = v57->SchedulerAssist;
      v59 = ~(unsigned __int16)(-1LL << (v5 + 1));
      v16 = (v59 & v58[5]) == 0;
      v58[5] &= v59;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v57);
    }
  }
  result = v5;
  __writecr8(v5);
  while ( Flink )
  {
    v60 = Flink;
    Flink = (IRP *)Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
    result = PopQueueQuerySetIrp(v60);
  }
  return result;
}
