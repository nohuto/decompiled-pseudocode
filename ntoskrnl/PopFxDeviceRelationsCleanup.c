/*
 * XREFs of PopFxDeviceRelationsCleanup @ 0x140587938
 * Callers:
 *     PopFxUnregisterDevice @ 0x140982DC4 (PopFxUnregisterDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxNextParentRelationSafe @ 0x1402E4C58 (PopFxNextParentRelationSafe.c)
 *     PopFxIdleComponent @ 0x140306A50 (PopFxIdleComponent.c)
 *     KxTryToAcquireSpinLock @ 0x14036B144 (KxTryToAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxDeviceRelationsCleanup(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  _QWORD **v2; // r14
  unsigned __int64 v3; // rdi
  char *v4; // rbx
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rdx
  char v12; // si
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  v1 = (volatile signed __int64 *)(a1 + 1240);
  v2 = (_QWORD **)(a1 + 1264);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1240));
  while ( PopFxNextParentRelationSafe(v2, 0LL, &P) )
  {
    v4 = (char *)P;
    v5 = *((_QWORD *)P + 3);
    PopFxIdleComponent(*(_QWORD *)(v5 + 80), *(unsigned int *)(v5 + 16), 2);
    *((_DWORD *)v4 + 4) &= 0xFFFFFFF5;
    v6 = v4 + 56;
    *((_QWORD *)v4 + 6) = 0LL;
    v7 = *((_QWORD *)v4 + 7);
    v8 = (_QWORD *)*((_QWORD *)v4 + 8);
    if ( *(char **)(v7 + 8) != v4 + 56 || (_QWORD *)*v8 != v6 )
LABEL_12:
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *((_QWORD *)v4 + 8) = v4 + 56;
    *v6 = v6;
    if ( KxTryToAcquireSpinLock((volatile signed __int32 *)(v5 + 128)) )
    {
      *((_DWORD *)v4 + 4) &= ~4u;
      v9 = v4 + 32;
      *((_QWORD *)v4 + 3) = 0LL;
      v10 = *((_QWORD *)v4 + 4);
      v11 = (_QWORD *)*((_QWORD *)v4 + 5);
      if ( *(char **)(v10 + 8) != v4 + 32 || (_QWORD *)*v11 != v9 )
        goto LABEL_12;
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *((_QWORD *)v4 + 5) = v4 + 32;
      *v9 = v9;
      KxReleaseSpinLock((volatile signed __int64 *)(v5 + 128));
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    KxReleaseSpinLock((volatile signed __int64 *)v4 + 1);
    if ( v12 )
      ExFreePoolWithTag(v4, 0x4D584650u);
  }
  result = KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v16 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
