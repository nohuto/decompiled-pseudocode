/*
 * XREFs of KeReleaseMutantEx @ 0x14040A86C
 * Callers:
 *     KeReleaseMutant @ 0x14030E920 (KeReleaseMutant.c)
 *     NtSignalAndWaitForSingleObject @ 0x140580330 (NtSignalAndWaitForSingleObject.c)
 *     NtReleaseMutant @ 0x14075CCF0 (NtReleaseMutant.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140230290 (KeInsertQueueDpc.c)
 *     KeAbPreWakeupThread @ 0x1402398AC (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14029319C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiInsertQueueInternal @ 0x140293C9C (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeReleaseMutantEx(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, int *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  int v5; // r12d
  __int64 v6; // r15
  bool v7; // di
  __int64 CurrentIrql; // rsi
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  struct _KPRCB *CurrentPrcb; // r14
  int v13; // r8d
  char v14; // r14
  __int64 *v15; // rsi
  int v16; // ecx
  volatile signed __int32 v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rdi
  _QWORD *v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  char v24; // cl
  bool v25; // zf
  __int64 v26; // rax
  __int64 result; // rax
  char v28; // di
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  unsigned int SessionId; // eax
  int v34; // [rsp+30h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+40h] [rbp-78h] BYREF
  __int64 v37; // [rsp+48h] [rbp-70h]
  __int128 v38; // [rsp+50h] [rbp-68h]
  __int64 v39; // [rsp+60h] [rbp-58h]
  int v40; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v41; // [rsp+C8h] [rbp+10h]
  int v42; // [rsp+D0h] [rbp+18h]
  int *v43; // [rsp+D8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v41 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  v36 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v37 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v35 = (__int64)CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)BugCheckParameter2);
  v13 = *(_DWORD *)(BugCheckParameter2 + 4);
  v34 = v13;
  if ( (v42 & 1) != 0 )
  {
    v14 = 1;
    *(_DWORD *)(BugCheckParameter2 + 4) = 1;
    *(_BYTE *)(BugCheckParameter2 + 48) |= 1u;
    v15 = (__int64 *)(BugCheckParameter2 + 40);
  }
  else
  {
    if ( *(struct _KTHREAD **)(BugCheckParameter2 + 40) != CurrentThread
      || *(_BYTE *)(BugCheckParameter2 + 2) != CurrentPrcb->DpcRoutineActive )
    {
      v28 = *(_BYTE *)(BugCheckParameter2 + 48) & 1;
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      if ( KiIrqlFlags )
      {
        v29 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v25 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      result = v28 != 0 ? 128 : -1073741754;
      if ( (v42 & 4) != 0 )
        RtlRaiseStatus(result);
      return result;
    }
    v16 = *(_DWORD *)(BugCheckParameter2 + 4);
    v15 = (__int64 *)(BugCheckParameter2 + 40);
    v14 = 0;
    *(_DWORD *)(BugCheckParameter2 + 4) = v16 + 1;
    if ( v16 )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      goto LABEL_44;
    }
  }
  if ( v13 > 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    goto LABEL_38;
  }
  v39 = 0LL;
  v17 = *(_DWORD *)BugCheckParameter2;
  v40 = 0;
  v38 = 0LL;
  LODWORD(v38) = v17;
  BYTE2(v38) = 0;
  *(_DWORD *)BugCheckParameter2 = v38;
  v5 = *(unsigned __int8 *)(BugCheckParameter2 + 49);
  v6 = *v15;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v40);
    while ( *(_QWORD *)(v6 + 64) );
  }
  v18 = *(_QWORD *)(BugCheckParameter2 + 24);
  v19 = *(_QWORD **)(BugCheckParameter2 + 32);
  if ( *(_QWORD *)(v18 + 8) != BugCheckParameter2 + 24 || *v19 != BugCheckParameter2 + 24 )
LABEL_36:
    __fastfail(3u);
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  *(_QWORD *)(v6 + 64) = 0LL;
  *v15 = 0LL;
  v20 = *(_QWORD **)(BugCheckParameter2 + 8);
  while ( v20 != (_QWORD *)(BugCheckParameter2 + 8) )
  {
    v21 = (_QWORD *)*v20;
    v22 = (__int64)v20;
    v20 = v21;
    v23 = *(_QWORD **)(v22 + 8);
    if ( v21[1] != v22 || *v23 != v22 )
      goto LABEL_36;
    *v23 = v21;
    v21[1] = v23;
    v24 = *(_BYTE *)(v22 + 16);
    switch ( v24 )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread(v35, v22, *(unsigned __int16 *)(v22 + 18), &v36) )
          goto LABEL_28;
        break;
      case 2:
        *(_BYTE *)(v22 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v22 + 24), (__int64 *)v22);
LABEL_28:
        v25 = (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1;
        if ( v25 )
          goto LABEL_34;
        break;
      case 4:
        *(_BYTE *)(v22 + 17) = 5;
        *(_DWORD *)(BugCheckParameter2 + 4) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v22 + 24), (PVOID)BugCheckParameter2, (PVOID)v22);
        break;
      default:
        KiTryUnwaitThread(v35, v22, 256LL, 0LL);
        break;
    }
  }
LABEL_34:
  v7 = (*(_BYTE *)(BugCheckParameter2 + 48) & 2) != 0;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
  if ( v14 )
    KiAcquireReleaseObjectRundownLockExclusive(BugCheckParameter2);
LABEL_38:
  if ( v7 )
  {
    if ( v36 )
    {
      v26 = *(_QWORD *)(v35 + 11528);
      if ( v26 )
      {
        if ( v36 == v26 - 216 )
          KeAbPreWakeupThread(v36, BugCheckParameter2, CurrentThread->Priority);
      }
    }
  }
LABEL_44:
  KiExitDispatcher(v35, (v42 & 2) != 0 ? 3 : 0, (struct _PROCESSOR_NUMBER)1, v41, v37);
  if ( v7 )
  {
    if ( (struct _KTHREAD *)v6 != CurrentThread )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 1uLL);
    }
    KeAbPostRelease(BugCheckParameter2);
  }
  if ( v5 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v43 )
    *v43 = v34;
  return 0LL;
}
