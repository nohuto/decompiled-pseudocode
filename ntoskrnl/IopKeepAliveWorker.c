/*
 * XREFs of IopKeepAliveWorker @ 0x140556380
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1409AB928 (PspAdjustKeepAliveCountProcess.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 IopKeepAliveWorker()
{
  KIRQL v0; // al
  KIRQL v1; // di
  PVOID v2; // rbx
  int v3; // esi
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  bool v6; // zf
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // rdi
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r11
  _DWORD *v21; // r10
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  __int64 result; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(qword_140C5D910);
  qword_140C5D940 = (__int64)KeGetCurrentThread();
LABEL_2:
  v1 = v0;
  while ( 1 )
  {
    v2 = qword_140C5D900;
    if ( qword_140C5D900 == &qword_140C5D900 )
      break;
    v3 = *((_DWORD *)qword_140C5D900 + 8);
    *((_DWORD *)qword_140C5D900 + 8) = 0;
    if ( v3 )
    {
      KxReleaseSpinLock((volatile signed __int64 *)qword_140C5D910);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v1 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (v1 + 1));
          v6 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v1);
      if ( v3 <= 0 )
      {
        if ( v3 != -1 )
        {
          v12 = (unsigned int)(-1 - v3);
          do
          {
            LOBYTE(SchedulerAssist) = *((_BYTE *)v2 + 18);
            PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), SchedulerAssist);
            ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
            --v12;
          }
          while ( v12 );
        }
        LOBYTE(SchedulerAssist) = *((_BYTE *)v2 + 18);
        v13 = *((_QWORD *)v2 + 3);
        if ( (_BYTE)SchedulerAssist )
          v14 = *(_DWORD *)(v13 + 2476);
        else
          v14 = *(_DWORD *)(v13 + 2508);
        if ( (v14 & 0x7FFFFFFF) == 1 )
        {
          v15 = KeAcquireSpinLockRaiseToDpc(qword_140C5D910);
          if ( MEMORY[0xFFFFF78000000014] < *((_QWORD *)v2 + 6) )
          {
            --*((_DWORD *)v2 + 8);
            KxReleaseSpinLock((volatile signed __int64 *)qword_140C5D910);
            if ( KiIrqlFlags )
            {
              v19 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v19 >= 2u )
              {
                v20 = KeGetCurrentPrcb();
                v21 = v20->SchedulerAssist;
                v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
                v6 = (v22 & v21[5]) == 0;
                v21[5] &= v22;
                if ( v6 )
                  KiRemoveSystemWorkPriorityKick(v20);
              }
            }
            __writecr8(v15);
            KeDelayExecutionThread(0, 1u, (PLARGE_INTEGER)v2 + 6);
            goto LABEL_44;
          }
          KxReleaseSpinLock((volatile signed __int64 *)qword_140C5D910);
          if ( KiIrqlFlags )
          {
            v16 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
            {
              v17 = KeGetCurrentPrcb();
              SchedulerAssist = v17->SchedulerAssist;
              v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
              v6 = (v18 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v18;
              if ( v6 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          __writecr8(v15);
          LOBYTE(SchedulerAssist) = *((_BYTE *)v2 + 18);
          v13 = *((_QWORD *)v2 + 3);
        }
        PspAdjustKeepAliveCountProcess(v13, 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), SchedulerAssist);
        ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
      }
      else
      {
        do
        {
          ObfReferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
          LOBYTE(v11) = *((_BYTE *)v2 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 1LL, *((_QWORD *)v2 + 5), v11);
          --v3;
        }
        while ( v3 );
      }
LABEL_44:
      v0 = KeAcquireSpinLockRaiseToDpc(qword_140C5D910);
      goto LABEL_2;
    }
    v4 = *(_QWORD **)v2;
    v5 = (PVOID *)*((_QWORD *)v2 + 1);
    if ( *(PVOID *)(*(_QWORD *)v2 + 8LL) != v2 || *v5 != v2 )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v6 = *((_BYTE *)v2 + 17) == 1;
    *((_BYTE *)v2 + 16) = 0;
    if ( v6 )
      ExFreePoolWithTag(v2, 0);
  }
  qword_140C5D940 = 0LL;
  byte_140C5D938 = 0;
  KxReleaseSpinLock((volatile signed __int64 *)qword_140C5D910);
  if ( KiIrqlFlags )
  {
    v23 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && v1 <= 0xFu && v23 >= 2u )
    {
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      v26 = ~(unsigned __int16)(-1LL << (v1 + 1));
      v6 = (v26 & v25[5]) == 0;
      v25[5] &= v26;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick(v24);
    }
  }
  result = v1;
  __writecr8(v1);
  return result;
}
