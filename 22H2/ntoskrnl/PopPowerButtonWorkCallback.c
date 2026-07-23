/*
 * XREFs of PopPowerButtonWorkCallback @ 0x140578790
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionById @ 0x1402063D0 (MmGetSessionById.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmAttachSession @ 0x1402EC130 (MmAttachSession.c)
 *     KeDisableTimer2 @ 0x140348C40 (KeDisableTimer2.c)
 *     RtlGetActiveConsoleId @ 0x14034ADC0 (RtlGetActiveConsoleId.c)
 *     DbgPrintEx @ 0x14037EFD0 (DbgPrintEx.c)
 *     KeInitializeIRTimer @ 0x140380D20 (KeInitializeIRTimer.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PopRecordPhysicalPowerButton @ 0x1408E14D0 (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1408EAE48 (PopDiagTracePowerButtonBugcheck.c)
 *     PopPublishPowerButtonState @ 0x1408F2248 (PopPublishPowerButtonState.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408F22B0 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopRecordPoBlackboxInformation @ 0x1408FAA30 (PopRecordPoBlackboxInformation.c)
 */

__int64 PopPowerButtonWorkCallback()
{
  unsigned __int64 v0; // rdi
  unsigned int v1; // ebx
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rsi
  __int64 result; // rax
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  ULONG ActiveConsoleId; // eax
  __int64 v13; // rdx
  _KPROCESS *SessionById; // rax
  int v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h]
  _OWORD v17[3]; // [rsp+40h] [rbp-48h] BYREF

  v15 = 0;
  memset(v17, 0, sizeof(v17));
  LOBYTE(v0) = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  do
  {
    v1 = qword_140C208B8;
    v16 = qword_140C208B8;
    KxReleaseSpinLock(&PopPowerButtonHold);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v2 = (unsigned int)(unsigned __int8)v0 + 1;
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
          v7 = (v6 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v6;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v0);
    v8 = HIDWORD(v16);
    if ( (dword_140C208C0 & 1) != 0 && ((v1 & 1) == 0 || HIDWORD(v16) != dword_140C208C4) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_140C208C0 = 0;
      byte_140C20948 = 0;
      PopPublishPowerButtonState(&dword_140C208C0);
      KeDisableTimer2((__int64)&unk_140C20808, 1, 1, 0LL);
    }
    if ( (v1 & 1) != 0 )
    {
      if ( (dword_140C208C0 & 1) == 0 )
      {
        LOBYTE(v2) = 1;
        PopRecordPhysicalPowerButton(v2);
        dword_140C208C4 = v8;
        dword_140C208C8 = PopQueryPowerButtonBugcheckEnabled();
        v15 = 65544;
        KeInitializeIRTimer(
          (__int64)&unk_140C20808,
          (__int64)PopPowerButtonTimerCallback,
          v8,
          (unsigned __int8 *)&v15,
          2);
        KeSetTimer2((__int64)&unk_140C20808, -10000000LL, 10000000LL, 0LL);
      }
      dword_140C208C0 = v1;
      PopPublishPowerButtonState(&dword_140C208C0);
      if ( v1 >> 1 >= 0x1B58 )
      {
        if ( PopAcpiPdttSupportEnabled )
          ((void (__fastcall *)(_QWORD))qword_140C009F8)(0LL);
        PopDiagTracePowerButtonBugcheck(v1 >> 1);
        PopRecordPoBlackboxInformation();
        if ( dword_140C208C8 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          SessionById = (_KPROCESS *)MmGetSessionById(ActiveConsoleId, v13);
          if ( SessionById && (int)MmAttachSession(SessionById, (__int64)v17) < 0 )
            DbgPrintEx(0x92u, 3u, "Unable to attach to active session\n");
          KeBugCheckEx(0x1C8u, (unsigned __int64)v1 >> 1, (ULONG_PTR)&PopPowerButtonTriageBlock, 0LL, 0LL);
        }
      }
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  }
  while ( __PAIR64__(v8, v1) != qword_140C208B8 );
  _InterlockedExchange(&dword_140C208B0, 0);
  KxReleaseSpinLock(&PopPowerButtonHold);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v0 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v11 = v10->SchedulerAssist;
        v7 = ((unsigned int)result & v11[5]) == 0;
        v11[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
    }
  }
  __writecr8(v0);
  return result;
}
