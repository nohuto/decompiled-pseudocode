/*
 * XREFs of HaliAcpiSleep @ 0x140525AD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x1402F76E0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x14039CF90 (HalpAcpiPmRegisterRead.c)
 *     HalpSaveProcessorState @ 0x140412020 (HalpSaveProcessorState.c)
 *     HalpFlushAndWait @ 0x140412070 (HalpFlushAndWait.c)
 *     HalpSetupRealModeResume @ 0x1404120A0 (HalpSetupRealModeResume.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalSetEnvironmentVariableEx @ 0x140502A90 (HalSetEnvironmentVariableEx.c)
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 *     HalpHvEnterSleepState @ 0x140509A3C (HalpHvEnterSleepState.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x140519F14 (HalpCheckWakeupTimeAndAdjust.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpAcpiPostSleep @ 0x140A93580 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A93820 (HalpAcpiPreSleep.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A93CC8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpPostSleepMP @ 0x140A93F28 (HalpPostSleepMP.c)
 *     HalpReenableAcpi @ 0x140A940DC (HalpReenableAcpi.c)
 *     KeWriteProtectPAT @ 0x140A9CBB0 (KeWriteProtectPAT.c)
 */

__int64 __fastcall HaliAcpiSleep(
        unsigned int a1,
        __int64 (__fastcall *a2)(__int64),
        __int64 a3,
        unsigned int a4,
        volatile signed __int32 *a5)
{
  __int64 v7; // r13
  unsigned int v9; // r12d
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v11; // ebx
  volatile signed __int32 *v12; // rdi
  unsigned int v13; // ebx
  void (*v14)(void); // rax
  __int64 Number; // rax
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  unsigned int v18; // eax
  char v19; // di
  unsigned int v20; // ebx
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // edi
  unsigned int v24; // edi
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  unsigned __int8 v28; // bl
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *SchedulerAssist; // r8
  int v32; // eax
  bool v33; // zf
  _WORD v35[2]; // [rsp+34h] [rbp-64h] BYREF
  _WORD v36[2]; // [rsp+38h] [rbp-60h] BYREF
  _WORD v37[2]; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int16 v38; // [rsp+40h] [rbp-58h] BYREF
  __int64 CurrentIrql; // [rsp+48h] [rbp-50h]
  struct _KPRCB *v40; // [rsp+50h] [rbp-48h]
  int v41; // [rsp+90h] [rbp-8h]
  char v42; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v43; // [rsp+B8h] [rbp+20h]

  v43 = a4;
  v7 = a3;
  v42 = 0;
  v35[0] = 0;
  v37[0] = 0;
  v36[0] = 0;
  v38 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  v12 = a5;
  v41 &= 0x200u;
  v40 = CurrentPrcb;
  _InterlockedDecrement(a5);
  while ( *v12 )
  {
    if ( (++v11 & dword_140C6211C) != 0 || !qword_140C62120 )
      _mm_pause();
    else
      qword_140C62120(v11);
  }
  v13 = 0;
  v14 = (void (*)(void))HalpProfileInterface[6];
  if ( v14 )
    v14();
  LODWORD(a3) = KeGetPcr()->Prcb.Number;
  *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * a3) = __rdtsc();
  if ( qword_140C62128 )
  {
    if ( !(_DWORD)a3 )
    {
      HalpTimerIsReferenceTimeSaved = 1;
      HalpTimerSavedReferenceTime = qword_140C62128(&HalpTimerSavedSequenceNumber);
    }
  }
  else
  {
    HalpTimerIsReferenceTimeSaved = 0;
    HalpTimerSavedSequenceNumber = 0;
  }
  HalpTscOnWake = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
    HalpTscRestoreValue = *(_QWORD *)HalpTimerSavedProcessorCounter;
  Number = CurrentPrcb->Number;
  if ( !(_DWORD)Number )
  {
    HalpResumeFromHibernate = 0;
    HalpBarrier = 0;
    HalpAcpiPreSleep(a1);
    if ( byte_140C60130 )
      HalpAcpiPmRegisterRead(1, 0, (__int64)v37, 2u, 0LL);
    if ( byte_140C601C0 )
      HalpAcpiPmRegisterRead(4, 0, (__int64)&v38, 2u, 0LL);
    v16 = a1 >> 12;
    if ( ((a1 >> 12) & 2) != 0 && (unsigned __int8)HalpSetupRealModeResume(HalpLowStub, (int)HalpLowStubPhysicalAddress) )
      goto LABEL_74;
    HalpInterruptProcessorRestarting = 1;
    _InterlockedIncrement(&HalpSaveStateSync);
    while ( HalpSaveStateSync != a4 )
    {
      if ( (++v13 & dword_140C6211C) != 0 || !qword_140C62120 )
        _mm_pause();
      else
        qword_140C62120(v13);
    }
    v17 = 0;
    if ( a2 )
    {
      v18 = a2(v7);
      v9 = v18;
      if ( (HalpPlatformFlags & 1) == 0 && v18 == -1073741632 )
      {
        v19 = 1;
        goto LABEL_37;
      }
      if ( v18 )
      {
        if ( v18 == 1073742484 )
          HalpResumeFromHibernate = 1;
        else
          HalpReenableAcpi();
        goto LABEL_74;
      }
    }
    v19 = 0;
LABEL_37:
    _InterlockedAdd(&HalpFlushBarrier, 1u);
    while ( HalpFlushBarrier != a4 )
    {
      if ( (++v17 & dword_140C6211C) != 0 || !qword_140C62120 )
        _mm_pause();
      else
        qword_140C62120(v17);
    }
    v20 = 0;
    _InterlockedOr(&HalpFlushBarrier, 0);
    HalpCheckWakeupTimeAndAdjust();
    HalpCheckLowMemoryPreSleep(a1);
    v36[0] = 0x8000;
    if ( PmRegisters[0] )
      HalpAcpiPmRegisterWrite(0, 0, (__int64)v36, 2u, 0LL);
    if ( byte_140C60190 )
      HalpAcpiPmRegisterWrite(3, 0, (__int64)v36, 2u, 0LL);
    v42 = -112;
    if ( (v16 & 0x40) != 0 )
      HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v42, 1, 1);
    if ( (a1 & 0x1000) != 0 )
    {
      if ( v40->CpuVendor == 1 )
      {
        LOBYTE(v21) = 1;
        KeWriteProtectPAT(v21);
      }
      __wbinvd();
    }
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      v22 = (a1 >> 8) & 0xF;
      if ( v22 == 1 || ((v22 - 2) & 0xFFFFFFFC) == 0 && v22 != 4 )
      {
        v9 = HalpHvEnterSleepState();
LABEL_78:
        v42 = -97;
        if ( (v16 & 0x40) != 0 )
          HalSetEnvironmentVariableEx(
            L"SystemSleepCheckpoint",
            (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
            (__int64)&v42,
            1,
            1);
        HalpSaveStateSync = 0;
        HalpFlushBarrier = 0;
        HalpAcpiPostSleep(a1);
        v24 = v43;
        CurrentPrcb = v40;
        goto LABEL_102;
      }
    }
    if ( (HalpPlatformFlags & 1) == 0 )
    {
      if ( v19 )
        HalReturnToFirmware(2);
      HalReturnToFirmware(1);
    }
    if ( byte_140C60130 )
    {
      HalpAcpiPmRegisterRead(1, 0, (__int64)v35, 2u, 0LL);
      v35[0] = v35[0] & 0x203 | ((a1 & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(1, 0, (__int64)v35, 2u, 0LL);
    }
    if ( byte_140C601C0 )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)v35, 2u, 0LL);
      v35[0] = v35[0] & 0x203 | (((a1 >> 4) & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(4, 0, (__int64)v35, 2u, 0LL);
    }
    if ( PmRegisters[0] )
    {
      v23 = byte_140C60190 != 0 ? 3 : 0;
      while ( 1 )
      {
        HalpAcpiPmRegisterRead(0, 0, (__int64)v36, 2u, 0LL);
        if ( (v36[0] & 0x8000) != 0 )
          break;
        HalpAcpiPmRegisterRead(v23, 0, (__int64)v36, 2u, 0LL);
        if ( (v36[0] & 0x8000) != 0 )
          break;
        if ( (++v20 & dword_140C6211C) != 0 || !qword_140C62120 )
          _mm_pause();
        else
          qword_140C62120(v20);
      }
    }
LABEL_74:
    if ( byte_140C60130 )
      HalpAcpiPmRegisterWrite(1, 0, (__int64)v37, 2u, 0LL);
    if ( byte_140C601C0 )
      HalpAcpiPmRegisterWrite(4, 0, (__int64)&v38, 2u, 0LL);
    goto LABEL_78;
  }
  if ( (a1 & 0x8000) != 0 )
    v25 = 0LL;
  else
    v25 = HalpHiberProcState + 1472 * Number;
  v26 = HalpSaveProcessorState(v25);
  v24 = v43;
  if ( v26 )
  {
LABEL_101:
    while ( HalpFlushBarrier )
    {
      if ( (++v13 & dword_140C6211C) != 0 || !qword_140C62120 )
        _mm_pause();
      else
        qword_140C62120(v13);
    }
    goto LABEL_102;
  }
  _InterlockedIncrement(&HalpSaveStateSync);
  if ( a2 )
  {
    while ( HalpSaveStateSync != v24 )
    {
      if ( (++v13 & dword_140C6211C) != 0 || !qword_140C62120 )
        _mm_pause();
      else
        qword_140C62120(v13);
    }
    v9 = a2(v7);
    if ( v9 == 1073742484 )
    {
      v13 = 0;
      goto LABEL_101;
    }
  }
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    LOBYTE(v27) = 1;
    KeWriteProtectPAT(v27);
  }
  HalpFlushAndWait(&HalpFlushBarrier);
LABEL_102:
  if ( ((a1 >> 12) & 0x10) == 0 && (a1 & 0x1000) != 0 && CurrentPrcb->CpuVendor == 1 )
  {
    KeWriteProtectPAT(0LL);
    __wbinvd();
  }
  HalpPostSleepMP(v24);
  v28 = CurrentIrql;
  if ( KiIrqlFlags )
  {
    v29 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v29 >= 2u )
    {
      v30 = KeGetCurrentPrcb();
      SchedulerAssist = v30->SchedulerAssist;
      v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v33 = (v32 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v32;
      if ( v33 )
        KiRemoveSystemWorkPriorityKick(v30);
    }
  }
  __writecr8(v28);
  if ( v41 )
    _enable();
  return v9;
}
