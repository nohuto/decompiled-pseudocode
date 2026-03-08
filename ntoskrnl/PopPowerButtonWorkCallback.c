/*
 * XREFs of PopPowerButtonWorkCallback @ 0x140596C60
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableTimer2 @ 0x140204028 (KeDisableTimer2.c)
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetActiveConsoleId @ 0x1402B8940 (RtlGetActiveConsoleId.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     MmAttachSession @ 0x1402EA500 (MmAttachSession.c)
 *     KeInitializeIRTimer @ 0x14036D61C (KeInitializeIRTimer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExUuidCreate @ 0x1406F7EF0 (ExUuidCreate.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14087EC10 (DbgkWerCaptureLiveKernelDump.c)
 *     PopRecordPhysicalPowerButton @ 0x14097E2A0 (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x14098D8D8 (PopDiagTracePowerButtonBugcheck.c)
 *     PopPublishPowerButtonState @ 0x140993B84 (PopPublishPowerButtonState.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140993C88 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopRecordPoBlackboxInformation @ 0x14099E024 (PopRecordPoBlackboxInformation.c)
 */

__int64 PopPowerButtonWorkCallback()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  bool v5; // zf
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int128 v8; // xmm6
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 result; // rax
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  unsigned int ActiveConsoleId; // eax
  __int64 v19; // rdx
  struct _KPROCESS *SessionById; // rax
  int v21; // [rsp+58h] [rbp-29h] BYREF
  _BYTE Uuid[24]; // [rsp+60h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-9h] BYREF

  v21 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  LOBYTE(v0) = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  do
  {
    *(_OWORD *)Uuid = xmmword_140C39D98;
    *(_QWORD *)&Uuid[16] = qword_140C39DA8;
    KxReleaseSpinLock((volatile signed __int64 *)&PopPowerButtonHold);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v5 = (v4 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v4;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8((unsigned __int8)v0);
    v6 = *(_DWORD *)&Uuid[4];
    v7 = *(_DWORD *)Uuid;
    if ( (dword_140C39DB0 & 1) != 0 && ((Uuid[0] & 1) == 0 || *(_DWORD *)&Uuid[4] != dword_140C39DB4) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_140C39DB0 = 0;
      byte_140C39C88 = 0;
      PopPublishPowerButtonState(&dword_140C39DB0);
      KeDisableTimer2((__int64)&unk_140C39CE8, 1, 1, 0LL);
    }
    if ( (v7 & 1) != 0 )
    {
      if ( (dword_140C39DB0 & 1) == 0 )
      {
        ExUuidCreate((UUID *)&Uuid[8]);
        v8 = *(_OWORD *)&Uuid[8];
        LOBYTE(v9) = 1;
        xmmword_140C39C60 = *(_OWORD *)&Uuid[8];
        PopRecordPhysicalPowerButton(v9);
        v6 = *(_DWORD *)&Uuid[4];
        dword_140C39DB4 = *(_DWORD *)&Uuid[4];
        xmmword_140C39DB8 = v8;
        dword_140C39DC8 = PopQueryPowerButtonBugcheckEnabled();
        v21 = 65544;
        KeInitializeIRTimer(
          (unsigned __int64)&unk_140C39CE8,
          (__int64)PopPowerButtonTimerCallback,
          v6,
          (unsigned __int8 *)&v21,
          2);
        KeSetTimer2((__int64)&unk_140C39CE8, -10000000LL, 10000000LL, 0LL);
        v7 = *(_DWORD *)Uuid;
      }
      dword_140C39DB0 = v7;
      PopPublishPowerButtonState(&dword_140C39DB0);
      v10 = v7 >> 1;
      if ( v7 >> 1 >= 0x1B58 )
      {
        if ( PopAcpiPdttSupportEnabled )
          ((void (__fastcall *)(_QWORD))qword_140C01E08)(0LL);
        PopDiagTracePowerButtonBugcheck(v10);
        PopRecordPoBlackboxInformation();
        if ( dword_140C39DC8 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId(v12, v11);
          SessionById = (struct _KPROCESS *)MmGetSessionById(ActiveConsoleId, v19);
          if ( SessionById && (int)MmAttachSession(SessionById, &ApcState) < 0 )
            DbgPrintEx(0x92u, 3u, "Unable to attach to active session\n");
          KeBugCheckEx(0x1C8u, (unsigned __int64)v7 >> 1, (ULONG_PTR)&PopPowerButtonTriageBlock, 0LL, 0LL);
        }
      }
      if ( (qword_140C39CA4 & 0x100000000LL) != 0 && !dword_140C39DC8 && v10 == 1000 * (BYTE4(qword_140C39CA4) >> 4) )
      {
        v13 = BYTE4(qword_140C39CA4) & 4 | ((BYTE4(qword_140C39CA4) & 2 | 0x10u) >> 1);
        v14 = DbgkWerCaptureLiveKernelDump(
                (unsigned int)L"PopPowerButton",
                4552,
                v7 >> 1,
                (unsigned int)&PopPowerButtonTriageBlock,
                0LL,
                0LL,
                0LL,
                0LL,
                v13);
        DbgPrintEx(
          0x92u,
          2u,
          "PopPowerButtonWorkCallback: DbgkWerCaptureLiveKernelDump completed with Status: %08x, UserPages:  %08x, Hyperv"
          "isorPages:  %08x\n",
          v14,
          v13 & 1,
          (v13 >> 2) & 1);
      }
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  }
  while ( __PAIR64__(v6, v7) != (_QWORD)xmmword_140C39D98 );
  _InterlockedExchange(&dword_140C39D90, 0);
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopPowerButtonHold);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v0 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
      v17 = v16->SchedulerAssist;
      v5 = ((unsigned int)result & v17[5]) == 0;
      v17[5] &= result;
      if ( v5 )
        result = KiRemoveSystemWorkPriorityKick((__int64)v16);
    }
  }
  __writecr8(v0);
  return result;
}
