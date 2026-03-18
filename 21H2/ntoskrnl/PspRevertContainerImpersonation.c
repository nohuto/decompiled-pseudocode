/*
 * XREFs of PspRevertContainerImpersonation @ 0x1402A86B0
 * Callers:
 *     NtRevertContainerImpersonation @ 0x140246140 (NtRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     KeClearSystemPriority @ 0x140344640 (KeClearSystemPriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140345AA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(ULONG_PTR BugCheckParameter1)
{
  _DWORD *v1; // rdi
  unsigned __int8 v4; // si
  REGHANDLE v5; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v8; // r14
  _DWORD *v9; // rcx
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *SchedulerAssist; // r9
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  bool v21; // zf
  _DWORD *v22; // r9
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  int v27; // [rsp+40h] [rbp-68h] BYREF
  int v28; // [rsp+44h] [rbp-64h] BYREF
  int v29; // [rsp+48h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-58h] BYREF
  int *v31; // [rsp+60h] [rbp-48h]
  __int64 v32; // [rsp+68h] [rbp-40h]

  v1 = *(_DWORD **)(BugCheckParameter1 + 1552);
  if ( !v1 )
    return 3221225473LL;
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x200) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread(CurrentPrcb, BugCheckParameter1, 0LL);
    _enable();
    v8 = KeGetCurrentPrcb();
    v27 = 0;
    v9 = v8->SchedulerAssist;
    if ( v9 )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v15 = v9[6];
        v9[6] = v15 + 1;
        if ( v15 == -1 )
LABEL_26:
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v13 = v8->SchedulerAssist;
      if ( v13 )
      {
        if ( v8->NestingLevel <= 1u )
        {
          v16 = v13[6] - 1;
          v13[6] = v16;
          if ( !v16 )
            KiRemoveSystemWorkPriorityKick(v8);
        }
      }
      do
        KeYieldProcessorEx(&v27);
      while ( CurrentPrcb->PrcbLock );
      v14 = v8->SchedulerAssist;
      if ( v14 )
      {
        if ( v8->NestingLevel <= 1u )
        {
          v17 = v14[6];
          v14[6] = v17 + 1;
          if ( v17 == -1 )
            goto LABEL_26;
        }
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x12u);
    *(_QWORD *)(BugCheckParameter1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 9u);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v10 = KeGetCurrentPrcb();
    v11 = v10->SchedulerAssist;
    if ( v11 )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v18 = v11[6] - 1;
        v11[6] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = (v20[5] & 0xFFFF0001) == 0;
        v20[5] &= 0xFFFF0001;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    __writecr8(0LL);
  }
  v4 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v4 <= 0xFu )
  {
    v22 = KeGetCurrentPrcb()->SchedulerAssist;
    v22[5] |= (-1 << (v4 + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, v4);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, v4);
  *(_QWORD *)(BugCheckParameter1 + 1552) = 0LL;
  KeClearSystemPriority(BugCheckParameter1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && v4 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v21 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
  }
  __writecr8(v4);
  v5 = EtwpPsProvRegHandle;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate) )
  {
    v28 = v1[308];
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v28;
    v29 = 0;
    v31 = &v29;
    v32 = 4LL;
    EtwWriteEx(v5, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  ObDereferenceObjectDeferDeleteWithTag(v1, 0x746E6F43u);
  return 0LL;
}
