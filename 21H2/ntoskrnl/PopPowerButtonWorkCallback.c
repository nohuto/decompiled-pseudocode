/*
 * XREFs of PopPowerButtonWorkCallback @ 0x1405D89F0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDisableTimer2 @ 0x1402D40E4 (KeDisableTimer2.c)
 *     RtlGetActiveConsoleId @ 0x1402DEB60 (RtlGetActiveConsoleId.c)
 *     MmGetSessionById @ 0x1402DF880 (MmGetSessionById.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     KeInitializeIRTimer @ 0x1403725A0 (KeInitializeIRTimer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopRecordPhysicalPowerButton @ 0x140989AB0 (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x140992C10 (PopDiagTracePowerButtonBugcheck.c)
 *     PopPublishPowerButtonState @ 0x140998A68 (PopPublishPowerButtonState.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140998B6C (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopRecordPoBlackboxInformation @ 0x1409A0C98 (PopRecordPoBlackboxInformation.c)
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
  unsigned int v11; // ebx
  int v12; // eax
  __int64 result; // rax
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  unsigned int ActiveConsoleId; // eax
  ULONG_PTR SessionById; // rax
  int v18; // [rsp+58h] [rbp-29h] BYREF
  _BYTE Uuid[24]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v20; // [rsp+78h] [rbp-9h]
  __int128 v21; // [rsp+88h] [rbp+7h]
  __int128 v22; // [rsp+98h] [rbp+17h]

  v18 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  LOBYTE(v0) = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  do
  {
    *(_OWORD *)Uuid = xmmword_140C1F6F8;
    *(_QWORD *)&Uuid[16] = qword_140C1F708;
    KxReleaseSpinLock(&PopPowerButtonHold);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
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
    }
    __writecr8((unsigned __int8)v0);
    v6 = *(_DWORD *)&Uuid[4];
    v7 = *(_DWORD *)Uuid;
    if ( (dword_140C1F710 & 1) != 0 && ((Uuid[0] & 1) == 0 || *(_DWORD *)&Uuid[4] != dword_140C1F714) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_140C1F710 = 0;
      byte_140C1F7E8 = 0;
      PopPublishPowerButtonState(&dword_140C1F710);
      KeDisableTimer2((__int64)&unk_140C1F648, 1, 1, 0LL);
    }
    if ( (v7 & 1) != 0 )
    {
      if ( (dword_140C1F710 & 1) == 0 )
      {
        ExUuidCreate((UUID *)&Uuid[8]);
        v8 = *(_OWORD *)&Uuid[8];
        LOBYTE(v9) = 1;
        xmmword_140C1F7C0 = *(_OWORD *)&Uuid[8];
        PopRecordPhysicalPowerButton(v9);
        v6 = *(_DWORD *)&Uuid[4];
        dword_140C1F714 = *(_DWORD *)&Uuid[4];
        xmmword_140C1F718 = v8;
        dword_140C1F728 = PopQueryPowerButtonBugcheckEnabled();
        v18 = 65544;
        KeInitializeIRTimer(
          (__int64)&unk_140C1F648,
          (__int64)PopPowerButtonTimerCallback,
          v6,
          (unsigned __int8 *)&v18,
          2);
        KeSetTimer2((__int64)&unk_140C1F648, -10000000LL, 10000000LL, 0LL);
        v7 = *(_DWORD *)Uuid;
      }
      dword_140C1F710 = v7;
      PopPublishPowerButtonState(&dword_140C1F710);
      v10 = v7 >> 1;
      if ( v7 >> 1 >= 0x1B58 )
      {
        if ( PopAcpiPdttSupportEnabled )
          ((void (__fastcall *)(_QWORD))qword_140C02048)(0LL);
        PopDiagTracePowerButtonBugcheck(v10);
        PopRecordPoBlackboxInformation();
        if ( dword_140C1F728 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          SessionById = MmGetSessionById(ActiveConsoleId);
          if ( SessionById && (int)MmAttachSession(SessionById) < 0 )
            DbgPrintEx(0x92u, 3u, "Unable to attach to active session\n");
          KeBugCheckEx(0x1C8u, (unsigned __int64)v7 >> 1, (ULONG_PTR)&PopPowerButtonTriageBlock, 0LL, 0LL);
        }
      }
      if ( (qword_140C1F804 & 0x100000000LL) != 0 && !dword_140C1F728 && v10 == 1000 * (BYTE4(qword_140C1F804) >> 4) )
      {
        v11 = BYTE4(qword_140C1F804) & 4 | ((BYTE4(qword_140C1F804) & 2 | 0x10u) >> 1);
        v12 = DbgkWerCaptureLiveKernelDump(L"PopPowerButton", 0LL, 0LL, 0LL, 0LL, v11);
        DbgPrintEx(
          0x92u,
          2u,
          "PopPowerButtonWorkCallback: DbgkWerCaptureLiveKernelDump completed with Status: %08x, UserPages:  %08x, Hyperv"
          "isorPages:  %08x\n",
          v12,
          v11 & 1,
          (v11 >> 2) & 1);
      }
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  }
  while ( __PAIR64__(v6, v7) != (_QWORD)xmmword_140C1F6F8 );
  _InterlockedExchange(&dword_140C1F6F0, 0);
  KxReleaseSpinLock(&PopPowerButtonHold);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v0 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v15 = v14->SchedulerAssist;
        v5 = ((unsigned int)result & v15[5]) == 0;
        v15[5] &= result;
        if ( v5 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
    }
  }
  __writecr8(v0);
  return result;
}
