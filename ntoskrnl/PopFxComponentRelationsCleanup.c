/*
 * XREFs of PopFxComponentRelationsCleanup @ 0x140587474
 * Callers:
 *     PopFxUnregisterDevice @ 0x140982DC4 (PopFxUnregisterDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxNextParentRelationSafe @ 0x1402E4C58 (PopFxNextParentRelationSafe.c)
 *     PopFxIdleComponent @ 0x140306A50 (PopFxIdleComponent.c)
 *     PopFxNextComponentChildRelationSafe @ 0x140308264 (PopFxNextComponentChildRelationSafe.c)
 *     KxTryToAcquireSpinLock @ 0x14036B144 (KxTryToAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxComponentRelationsCleanup(__int64 a1)
{
  volatile signed __int64 *v1; // r14
  unsigned __int64 v3; // rsi
  char *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  char v8; // bp
  _QWORD *v9; // rax
  volatile signed __int64 *v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  _QWORD **v13; // rbp
  char *v14; // rbx
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rdx
  char v22; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v26; // zf
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  v1 = (volatile signed __int64 *)(a1 + 128);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  while ( PopFxNextComponentChildRelationSafe(a1, 0LL, &P) )
  {
    v4 = (char *)P;
    *((_DWORD *)P + 4) &= ~4u;
    v5 = v4 + 32;
    *((_QWORD *)v4 + 3) = 0LL;
    v6 = *((_QWORD *)v4 + 4);
    v7 = (_QWORD *)*((_QWORD *)v4 + 5);
    if ( *(char **)(v6 + 8) != v4 + 32 || (_QWORD *)*v7 != v5 )
LABEL_22:
      __fastfail(3u);
    *v7 = v6;
    v8 = 0;
    *(_QWORD *)(v6 + 8) = v7;
    *((_QWORD *)v4 + 5) = v4 + 32;
    *v5 = v5;
    if ( KxTryToAcquireSpinLock(*((volatile signed __int32 **)v4 + 6)) )
    {
      *((_DWORD *)v4 + 4) &= ~8u;
      v9 = v4 + 56;
      v10 = (volatile signed __int64 *)*((_QWORD *)v4 + 6);
      *((_QWORD *)v4 + 6) = 0LL;
      v11 = *((_QWORD *)v4 + 7);
      v12 = (_QWORD *)*((_QWORD *)v4 + 8);
      if ( *(char **)(v11 + 8) != v4 + 56 || (_QWORD *)*v12 != v9 )
        goto LABEL_22;
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *((_QWORD *)v4 + 8) = v4 + 56;
      *v9 = v9;
      KxReleaseSpinLock(v10);
      v8 = 1;
    }
    KxReleaseSpinLock((volatile signed __int64 *)v4 + 1);
    if ( v8 )
      ExFreePoolWithTag(v4, 0x4D584650u);
  }
  v13 = (_QWORD **)(a1 + 456);
  while ( PopFxNextParentRelationSafe(v13, 0LL, &P) )
  {
    v14 = (char *)P;
    v15 = *((_QWORD *)P + 3);
    PopFxIdleComponent(*(_QWORD *)(v15 + 80), *(unsigned int *)(v15 + 16), 2);
    *((_DWORD *)v14 + 4) &= 0xFFFFFFF5;
    v16 = v14 + 56;
    *((_QWORD *)v14 + 6) = 0LL;
    v17 = *((_QWORD *)v14 + 7);
    v18 = (_QWORD *)*((_QWORD *)v14 + 8);
    if ( *(char **)(v17 + 8) != v14 + 56 || (_QWORD *)*v18 != v16 )
      goto LABEL_22;
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    *((_QWORD *)v14 + 8) = v14 + 56;
    *v16 = v16;
    if ( KxTryToAcquireSpinLock((volatile signed __int32 *)(v15 + 128)) )
    {
      *((_DWORD *)v14 + 4) &= ~4u;
      v19 = v14 + 32;
      *((_QWORD *)v14 + 3) = 0LL;
      v20 = *((_QWORD *)v14 + 4);
      v21 = (_QWORD *)*((_QWORD *)v14 + 5);
      if ( *(char **)(v20 + 8) != v14 + 32 || (_QWORD *)*v21 != v19 )
        goto LABEL_22;
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      *((_QWORD *)v14 + 5) = v14 + 32;
      *v19 = v19;
      KxReleaseSpinLock((volatile signed __int64 *)(v15 + 128));
      v22 = 1;
    }
    else
    {
      v22 = 0;
    }
    KxReleaseSpinLock((volatile signed __int64 *)v14 + 1);
    if ( v22 )
      ExFreePoolWithTag(v14, 0x4D584650u);
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
      v26 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v26 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
