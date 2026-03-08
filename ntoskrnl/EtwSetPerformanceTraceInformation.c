/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x1409DF094
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403D5F60 (wcsnlen.c)
 *     wcsncpy_s @ 0x1403DA3B0 (wcsncpy_s.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpCheckGuidAccess @ 0x1406910EC (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerControlAccess @ 0x140692E00 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     EtwpUpdateGroupMasks @ 0x14080D8D8 (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateTagFilter @ 0x1408589E8 (EtwpUpdateTagFilter.c)
 *     EtwpCheckSystemTraceAccess @ 0x1408606D8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpEnableStackCaching @ 0x1408A385A (EtwpEnableStackCaching.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409E01D4 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E1344 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1409E1EBC (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUpdatePmcCounters @ 0x1409E1F88 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1409E20E0 (EtwpUpdatePmcEvents.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1409E218C (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpSetPmcProfileSource @ 0x1409E3C40 (EtwpSetPmcProfileSource.c)
 *     EtwpUpdateStackTracing @ 0x1409E5DD8 (EtwpUpdateStackTracing.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EB328 (EtwpSetSoftRestartInformation.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1409ED6FC (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1409ED7C0 (EtwpUpdateLastBranchTracingEvents.c)
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1409ED8F8 (EtwpUpdateProcessorTraceConfiguration.c)
 *     EtwpUpdateProcessorTraceEvents @ 0x1409ED9A0 (EtwpUpdateProcessorTraceEvents.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F0DFC (EtwpSetCoverageSamplerInformation.c)
 *     NtSetIntervalProfile @ 0x140A01980 (NtSetIntervalProfile.c)
 *     KiGetCpuVendor @ 0x140A85800 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(char *Address, SIZE_T Length, KPROCESSOR_MODE AccessMode)
{
  unsigned int v4; // r14d
  __int64 v6; // rcx
  unsigned __int16 v7; // r8
  struct _LIST_ENTRY *Flink; // r15
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r15d
  unsigned int v17; // r12d
  int v18; // r13d
  int v19; // esi
  unsigned int v20; // edi
  unsigned int v21; // edx
  struct _KTHREAD *v22; // rax
  unsigned int *v23; // rax
  __int64 v24; // rdi
  unsigned int *v25; // rcx
  int updated; // eax
  unsigned int v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // r14d
  wchar_t *v31; // rax
  wchar_t *v32; // rsi
  ULONG v33; // edx
  wchar_t *v34; // rcx
  unsigned int v35; // r14d
  unsigned int v36; // r14d
  void *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // edx
  struct _KTHREAD *v41; // rax
  unsigned int *v42; // rax
  unsigned int v43; // r13d
  unsigned int v44; // ebx
  wchar_t *v45; // rax
  wchar_t *v46; // r14
  int CpuVendor; // eax
  unsigned int v48; // edx
  struct _KTHREAD *v49; // rax
  unsigned int *v50; // rax
  unsigned int v52; // r14d
  unsigned int v53; // r14d
  unsigned int v54; // edx
  struct _KTHREAD *v55; // rax
  unsigned int *v56; // rax
  _WORD *v57; // rax
  unsigned int v58; // esi
  wchar_t *Pool2; // rax
  wchar_t *v60; // rdi
  void *v61; // rcx
  unsigned int v62; // edx
  char v63; // r14
  struct _KTHREAD *v64; // rax
  unsigned int *v65; // rax
  unsigned int v66; // r14d
  char *v67; // r12
  unsigned int v68; // edx
  struct _KTHREAD *v69; // rax
  unsigned int *v70; // rax
  unsigned int Blink_low; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v73; // rax
  char v74; // [rsp+30h] [rbp-1B8h]
  char v75; // [rsp+31h] [rbp-1B7h]
  PVOID P; // [rsp+38h] [rbp-1B0h] BYREF
  char v77; // [rsp+40h] [rbp-1A8h]
  int v79; // [rsp+44h] [rbp-1A4h]
  int v80; // [rsp+48h] [rbp-1A0h]
  unsigned int v81; // [rsp+4Ch] [rbp-19Ch]
  unsigned int v82; // [rsp+50h] [rbp-198h]
  int v83; // [rsp+54h] [rbp-194h]
  int v84; // [rsp+58h] [rbp-190h]
  int v85; // [rsp+5Ch] [rbp-18Ch]
  int v86; // [rsp+60h] [rbp-188h]
  unsigned int v87; // [rsp+64h] [rbp-184h]
  int v88; // [rsp+68h] [rbp-180h]
  unsigned int v89; // [rsp+6Ch] [rbp-17Ch]
  __int128 v90; // [rsp+70h] [rbp-178h] BYREF
  wchar_t *Src[2]; // [rsp+80h] [rbp-168h]
  _DWORD v92[68]; // [rsp+90h] [rbp-158h] BYREF
  __int64 v93; // [rsp+1A0h] [rbp-48h] BYREF
  int v94; // [rsp+1A8h] [rbp-40h]

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v79 = *(_DWORD *)Address;
  Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
  if ( v79 > 16 )
  {
    if ( v79 > 22 )
    {
      if ( v79 == 23 )
      {
        if ( v4 >= 0x18 )
        {
          v90 = *(_OWORD *)Address;
          Src[0] = *((wchar_t **)Address + 2);
          Blink_low = WORD4(v90);
          if ( WORD4(v90) == 0xFFFF )
            Blink_low = LOBYTE(Flink[264].Blink);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v73 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Blink_low, 1);
          v24 = (__int64)v73;
          if ( v73 )
          {
            v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v73);
            if ( v13 >= 0 )
            {
              updated = EtwpUpdateProcessorTraceConfiguration(v24, &v90);
              goto LABEL_159;
            }
            goto LABEL_160;
          }
          goto LABEL_37;
        }
        return 3221225476LL;
      }
      v9 = (unsigned int)(v79 - 24);
      if ( v79 == 24 )
        goto LABEL_47;
      if ( v79 != 25 )
      {
        if ( v79 != 26 )
          return (unsigned int)-1073741822;
        goto LABEL_130;
      }
      return (unsigned int)EtwpSetCoverageSamplerInformation(Address, v4, AccessMode);
    }
    else
    {
      if ( v79 == 22 )
      {
        v90 = 0LL;
        Src[0] = 0LL;
        memset(&v92[1], 0, 0x108uLL);
        LODWORD(P) = 0;
        if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
          return 3221225506LL;
        if ( v4 == 20 )
        {
          v93 = *((_QWORD *)Address + 1);
          v94 = *((_DWORD *)Address + 4);
          LODWORD(v90) = *((_DWORD *)Address + 1);
          v13 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, PVOID *))off_140C020E8[0])(1LL, 24LL, &v90, &P);
          if ( v13 < 0 )
            return (unsigned int)v13;
          v92[0] = v90;
          EtwpGetMicroarchitecturalPmcAffinity(&v93, &v92[2]);
          v58 = wcsnlen(Src[0], 0xFFuLL);
          Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL * (v58 + 1), 1350005829LL);
          v60 = Pool2;
          if ( !Pool2 )
            return 3221225495LL;
          wcsncpy_s(Pool2, v58 + 1, Src[0], v58);
          v13 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))off_140C020F0[0])(21LL, 272LL, v92);
          EtwpRemoveMicroarchitecturalPmcFromRegistry(v60, v58);
          v34 = v60;
          goto LABEL_96;
        }
        return 3221225476LL;
      }
      v6 = (unsigned int)(v79 - 17);
      if ( v79 == 17 )
      {
LABEL_106:
        if ( v4 < 0x10 )
          return 3221225476LL;
        v52 = v4 - 16;
        if ( (v52 & 3) != 0 )
          return 3221225485LL;
        v53 = v52 >> 2;
        if ( (unsigned __int16)v53 > v7 )
          return 3221225485LL;
        if ( !PsIsCurrentThreadInServerSilo(v6, 16LL) )
        {
          P = (PVOID)*((_QWORD *)Address + 1);
          memmove(&v93, Address + 16, 4LL * (unsigned __int16)v53);
          v54 = (unsigned __int16)P;
          if ( (unsigned __int16)P == 0xFFFF )
            v54 = LOBYTE(Flink[264].Blink);
          v55 = KeGetCurrentThread();
          --v55->KernelApcDisable;
          v56 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v54, 1);
          v24 = (__int64)v56;
          if ( !v56 )
            goto LABEL_37;
          v25 = v56;
          if ( (v56[3] & 0x2000000) != 0 )
          {
            v13 = EtwpCheckSystemTraceAccess((__int64)v56, 0x80u);
            if ( v13 >= 0 )
            {
              v57 = EtwpPoolTagFilter;
              if ( v79 != 10 )
                v57 = &EtwpObjectTypeFilter;
              EtwpUpdateTagFilter(&v93, v53, (__int64)&v57[10 * *(unsigned __int8 *)(v24 + 818)]);
            }
            goto LABEL_160;
          }
          goto LABEL_39;
        }
        return 3221225506LL;
      }
      if ( v79 != 18 )
      {
        if ( v79 == 19 )
        {
          if ( v4 < 0x18 )
            return 3221225476LL;
          v90 = *(_OWORD *)Address;
          Src[0] = *((wchar_t **)Address + 2);
          v48 = WORD4(v90);
          if ( WORD4(v90) == 0xFFFF )
            v48 = LOBYTE(Flink[264].Blink);
          v49 = KeGetCurrentThread();
          --v49->KernelApcDisable;
          v50 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v48, 1);
          v24 = (__int64)v50;
          if ( !v50 )
            goto LABEL_37;
          v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v50);
          if ( v13 < 0 )
            goto LABEL_160;
          updated = EtwpUpdateLastBranchTracingConfiguration(v24, &v90);
          goto LABEL_159;
        }
        v9 = (unsigned int)(v79 - 20);
        if ( v79 == 20 )
          goto LABEL_47;
        if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
          return 3221225506LL;
        if ( v4 >= 0x24 && Address[4] == 2 && v4 <= 0x220 )
        {
          v43 = v4 - 34 + 280;
          v44 = (v4 - 34) >> 1;
          v45 = (wchar_t *)ExAllocatePool2(256LL, v43, 1350005829LL);
          v46 = v45;
          P = v45;
          if ( !v45 )
            return 3221225495LL;
          wcsncpy_s(v45 + 140, v44, (const wchar_t *)Address + 17, v44);
          v93 = *((_QWORD *)Address + 2);
          v94 = *((_DWORD *)Address + 6);
          *((_DWORD *)v46 + 2) = *((_DWORD *)Address + 7);
          v75 = Address[32];
          v77 = v75;
          CpuVendor = KiGetCpuVendor();
          if ( CpuVendor == 2 )
          {
            *(_BYTE *)v46 = Address[8];
            *((_BYTE *)v46 + 1) = Address[9];
            *((_BYTE *)v46 + 2) = Address[10];
            *((_BYTE *)v46 + 3) = Address[11];
            *((_BYTE *)v46 + 4) = Address[12];
            *((_BYTE *)v46 + 5) = Address[13];
          }
          else if ( CpuVendor == 1 )
          {
            *v46 = (unsigned __int8)Address[8];
            *((_BYTE *)v46 + 2) = Address[9];
          }
          *((_DWORD *)v46 + 4) = 2097153;
          *((_DWORD *)v46 + 5) = 0;
          memset(v46 + 12, 0, 0x100uLL);
          EtwpGetMicroarchitecturalPmcAffinity(&v93, v46 + 8);
          v13 = ((__int64 (__fastcall *)(__int64, _QWORD, wchar_t *))off_140C020F0[0])(20LL, v43, v46);
          if ( v75 )
            v13 = EtwpAddMicroarchitecturalPmcToRegistry(v46, &v93);
          v34 = v46;
LABEL_96:
          v33 = 1350005829;
          goto LABEL_97;
        }
        return 3221225476LL;
      }
      return (unsigned int)EtwpSetSoftRestartInformation(Address, v4);
    }
  }
  if ( v79 == 16 )
  {
LABEL_130:
    if ( v4 != 32 )
      return 3221225476LL;
    v61 = (void *)*((_QWORD *)Address + 1);
    P = v61;
    v82 = *((_DWORD *)Address + 5);
    v81 = *((_DWORD *)Address + 6);
    if ( !Address[16] )
      return 3221225659LL;
    v62 = (unsigned __int16)v61;
    if ( (unsigned __int16)v61 == 0xFFFF )
      v62 = LOBYTE(Flink[264].Blink);
    v63 = v79 == 26;
    v64 = KeGetCurrentThread();
    --v64->KernelApcDisable;
    v65 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v62, 1);
    v24 = (__int64)v65;
    if ( !v65 )
      goto LABEL_37;
    v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v65);
    if ( v13 < 0 )
      goto LABEL_160;
    updated = EtwpEnableStackCaching(v24, v82, v81, v63);
    goto LABEL_159;
  }
  if ( v79 > 10 )
  {
    if ( v79 == 11 )
    {
      v74 = 0;
      if ( v4 < 0x10 )
        return 3221225476LL;
      v35 = v4 - 16;
      if ( (v35 & 3) != 0 )
        return 3221225485LL;
      v36 = v35 >> 2;
      if ( v36 > 1 )
        return 3221225485LL;
      v37 = (void *)*((_QWORD *)Address + 1);
      P = v37;
      if ( v36 )
      {
        if ( *((_DWORD *)Address + 4) != 1316 )
          return 3221225485LL;
        v74 = 1;
      }
      if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
      {
        if ( !PsIsCurrentThreadInServerSilo(v39, v38) )
        {
          v40 = (unsigned __int16)v37;
          if ( (unsigned __int16)v37 == 0xFFFF )
            v40 = LOBYTE(Flink[264].Blink);
          v41 = KeGetCurrentThread();
          --v41->KernelApcDisable;
          v42 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v40, 1);
          v24 = (__int64)v42;
          if ( !v42 )
          {
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            return 3221226134LL;
          }
          v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v42);
          if ( v13 >= 0 )
          {
            if ( v74 )
              _InterlockedOr((volatile signed __int32 *)(v24 + 816), 0x400u);
            else
              _InterlockedAnd((volatile signed __int32 *)(v24 + 816), 0xFFFFFBFF);
          }
          goto LABEL_160;
        }
        return 3221225506LL;
      }
    }
    else
    {
      if ( v79 != 12 )
      {
        v9 = (unsigned int)(v79 - 14);
        if ( (unsigned int)v9 > 1 )
          return (unsigned int)-1073741822;
        goto LABEL_47;
      }
      if ( v4 < 0x10 )
        return 3221225476LL;
      result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
      if ( (int)result < 0 )
        return result;
      if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
      {
        if ( PsIsCurrentThreadInServerSilo(v29, v28) )
          return 3221225506LL;
        v30 = (v4 - 16) >> 2;
        if ( v30 > EtwpMaxProfilingSources )
          return 3221225485LL;
        v31 = (wchar_t *)ExAllocatePool2(64LL, 4LL * v30, 1484223557LL);
        v32 = v31;
        P = v31;
        if ( v31 )
        {
          memmove(v31, Address + 16, 4LL * v30);
          v13 = EtwpSetPmcProfileSource(v32, v30);
          v33 = 0;
          v34 = v32;
LABEL_97:
          ExFreePoolWithTag(v34, v33);
          return (unsigned int)v13;
        }
        return 3221225495LL;
      }
    }
    return 3221225569LL;
  }
  switch ( v79 )
  {
    case 10:
      goto LABEL_106;
    case 1:
      if ( v4 != 48 )
        return 3221225476LL;
      P = (PVOID)*((_QWORD *)Address + 1);
      v90 = *((_OWORD *)Address + 1);
      *(_OWORD *)Src = *((_OWORD *)Address + 2);
      v21 = (unsigned __int16)P;
      if ( (unsigned __int16)P == 0xFFFF )
        v21 = LOBYTE(Flink[264].Blink);
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      v23 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v21, 1);
      v24 = (__int64)v23;
      if ( !v23 )
      {
LABEL_37:
        v13 = -1073741162;
LABEL_40:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return (unsigned int)v13;
      }
      v25 = v23;
      if ( (v23[3] & 0x2000000) == 0 )
      {
LABEL_39:
        EtwpReleaseLoggerContext(v25, 1);
        v13 = -1073741811;
        goto LABEL_40;
      }
      v13 = EtwpCheckSystemTraceAccess((__int64)v23, 0x80u);
      if ( v13 < 0 )
        goto LABEL_160;
      updated = EtwpUpdateGroupMasks((int *)v24, &v90);
LABEL_159:
      v13 = updated;
      goto LABEL_160;
    case 3:
      if ( v4 == 8 )
      {
        if ( !PsIsCurrentThreadInServerSilo((unsigned int)(v79 - 3), 16LL) )
        {
          v20 = *((_DWORD *)Address + 1);
          v89 = v20;
          KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
          v13 = NtSetIntervalProfile(v20, 0LL);
          if ( v13 >= 0 )
            EtwpProfileInterval = v20;
          goto LABEL_32;
        }
        return 3221225506LL;
      }
      return 3221225476LL;
    case 5:
      if ( ((v4 - 16) & 0xFFFFFFFB) == 0 )
      {
        result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
        v13 = result;
        if ( (int)result < 0 )
          return result;
        if ( !PsIsCurrentThreadInServerSilo(v15, v14) )
        {
          v16 = *((_DWORD *)Address + 1);
          v86 = v16;
          if ( !v16 )
            return 3221225485LL;
          v17 = *((_DWORD *)Address + 2);
          v87 = v17;
          if ( v17 < 0x3E8 )
            return 3221225485LL;
          v18 = *((_DWORD *)Address + 3);
          v88 = v18;
          if ( !v18 )
            return 3221225485LL;
          v19 = EtwpSpinLockHoldThreshold;
          v80 = EtwpSpinLockHoldThreshold;
          if ( v4 == 20 )
          {
            v19 = *((_DWORD *)Address + 4);
            v80 = v19;
            if ( (unsigned int)(v19 - 1) <= 0xF423E )
              return 3221225485LL;
          }
          KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
          EtwpSpinLockHoldThreshold = v19;
          EtwpSpinLockSpinThreshold = v16;
          EtwpSpinLockAcquireSampleRate = v17;
          EtwpSpinLockContentionSampleRate = v18;
          goto LABEL_32;
        }
        return 3221225506LL;
      }
      return 3221225476LL;
  }
  v9 = (unsigned int)(v79 - 6);
  if ( v79 != 6 )
  {
    if ( v79 == 7 )
    {
      if ( v4 == 16 )
      {
        result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
        v13 = result;
        if ( (int)result < 0 )
          return result;
        if ( !PsIsCurrentThreadInServerSilo(v12, v11) )
        {
          v83 = *((_DWORD *)Address + 1);
          v84 = *((_DWORD *)Address + 2);
          v85 = *((_DWORD *)Address + 3);
          KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
          EtwpExecutiveResourceReleaseSampleRate = v83;
          EtwpExecutiveResourceContentionSampleRate = v84;
          EtwpExecutiveResourceTimeout = v85;
LABEL_32:
          KeReleaseMutex(&EtwpGroupMaskMutex, 0);
          return (unsigned int)v13;
        }
        return 3221225506LL;
      }
      return 3221225476LL;
    }
    return (unsigned int)-1073741822;
  }
LABEL_47:
  if ( v4 < 0x10 )
    return 3221225476LL;
  v27 = v4 - 16;
  if ( (v27 & 3) == 0 )
  {
    if ( PsIsCurrentThreadInServerSilo(v9, 16LL) && (unsigned int)(v79 - 14) <= 1 )
      return 3221225506LL;
    v66 = v27 >> 2;
    v67 = Address + 16;
    P = (PVOID)*((_QWORD *)Address + 1);
    v68 = (unsigned __int16)P;
    if ( (unsigned __int16)P == 0xFFFF )
      v68 = LOBYTE(Flink[264].Blink);
    v69 = KeGetCurrentThread();
    --v69->KernelApcDisable;
    v70 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v68, 1);
    v24 = (__int64)v70;
    if ( v70 )
    {
      v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v70);
      if ( v13 >= 0 )
      {
        switch ( v79 )
        {
          case 6:
            updated = EtwpUpdateStackTracing(v24, v67, v66);
            goto LABEL_159;
          case 15:
            updated = EtwpUpdatePmcCounters(v24, v67, v66);
            goto LABEL_159;
          case 14:
            updated = EtwpUpdatePmcEvents(v24, v67, v66);
            goto LABEL_159;
        }
        if ( v79 != 20 )
        {
          updated = EtwpUpdateProcessorTraceEvents(v24, v67, v66);
          goto LABEL_159;
        }
        EtwpUpdateLastBranchTracingEvents(v24, v67, v66);
      }
LABEL_160:
      EtwpReleaseLoggerContext((unsigned int *)v24, 1);
      goto LABEL_40;
    }
    goto LABEL_37;
  }
  return 3221225485LL;
}
