/*
 * XREFs of MiCapturePfnVm @ 0x14022A10C
 * Callers:
 *     MiProcessCrcList @ 0x1406A8670 (MiProcessCrcList.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiProcessSuitableForCombining @ 0x140229534 (MiProcessSuitableForCombining.c)
 *     MiHashIsCommon @ 0x14022A360 (MiHashIsCommon.c)
 *     MiGetTopLevelPfn @ 0x14022A3D0 (MiGetTopLevelPfn.c)
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiReferenceOwningSession @ 0x1402DE780 (MiReferenceOwningSession.c)
 *     MiCheckProcessCombineSequence @ 0x1402E0F04 (MiCheckProcessCombineSequence.c)
 *     MiGetCombineDomain @ 0x1402E8D88 (MiGetCombineDomain.c)
 *     MiCombineCandidate @ 0x14032C640 (MiCombineCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VmCheckPageCombine @ 0x1408A20A0 (VmCheckPageCombine.c)
 */

__int64 __fastcall MiCapturePfnVm(
        __int64 *a1,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        int *a7,
        _QWORD *a8)
{
  _QWORD *v8; // rbp
  __int64 v11; // r13
  unsigned int v12; // r14d
  unsigned __int64 v13; // rsi
  unsigned int v14; // r12d
  int v15; // ecx
  __int64 TopLevelPfn; // r13
  unsigned __int64 v17; // rbp
  __int64 AnyMultiplexedVm; // rbx
  __int64 v20; // rax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v29; // eax

  v8 = a5;
  v11 = *a1;
  *a5 = 0LL;
  *a6 = 0LL;
  *a7 = 24;
  if ( (unsigned int)MiHashIsCommon(a1, a4, 0LL) )
  {
    v12 = 1;
    *a8 = qword_140C66ED0;
  }
  else
  {
    v12 = 0;
  }
  v13 = (unsigned __int8)MiLockPageInline(a2);
  v14 = MiCombineCandidate(v11, a3, a2);
  if ( v14 )
  {
    v15 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
    *a6 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    *a7 = v15;
    if ( v14 == 1 )
    {
      TopLevelPfn = MiGetTopLevelPfn(a2);
      v17 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      AnyMultiplexedVm = (v17 + 1664) & -(__int64)MiProcessSuitableForCombining(v17);
      if ( !v12
        && ((*(_DWORD *)(v17 + 2516) & 0x1000) != 0
         || !(unsigned int)MiCheckProcessCombineSequence(v17, *((unsigned int *)a1 + 72))) )
      {
        AnyMultiplexedVm = 0LL;
      }
      if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v17, 1953261124LL) )
        *a5 = v17;
      else
        AnyMultiplexedVm = 0LL;
      v8 = a5;
      if ( TopLevelPfn != a2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_12;
    }
    if ( !v12 )
      goto LABEL_24;
    if ( v14 == 2 )
    {
      AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(2);
      goto LABEL_12;
    }
    v20 = MiReferenceOwningSession(a2);
    if ( v20 )
    {
      AnyMultiplexedVm = *(_QWORD *)(v20 + 1368) + 192LL;
      *a5 = v20;
    }
    else
    {
LABEL_24:
      AnyMultiplexedVm = 0LL;
    }
LABEL_12:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v25 = (v29 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v29;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v13);
    if ( AnyMultiplexedVm )
    {
      if ( !v12 )
        *a8 = MiGetCombineDomain(v14, AnyMultiplexedVm);
      if ( v14 == 1 )
      {
        if ( *(_QWORD *)(*v8 + 2288LL) )
          return -(__int64)((unsigned int)VmCheckPageCombine(*v8, v12) != 0) & AnyMultiplexedVm;
      }
    }
    return AnyMultiplexedVm;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
      v25 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  __writecr8(v13);
  return 0LL;
}
