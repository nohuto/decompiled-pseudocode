__int64 __fastcall PopPowerInformationInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  signed int v9; // ebx
  __m256i *v10; // rdi
  __int64 v11; // r14
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  int PagesFromHiberFile; // ebx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  const wchar_t *v19; // rcx
  unsigned __int64 v20; // rax
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  char *v25; // rbx
  char PowerButtonBugcheckEnabled; // al
  char *v27; // rdx
  __int64 *v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdi
  ULONG v32; // edx
  void *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  unsigned int v39; // r14d
  __int64 v40; // rax
  _OWORD *v41; // rax
  __int128 v42; // xmm1
  __int64 v43; // rsi
  int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // ebx
  int v49; // ebx
  int v50; // ebx
  int v51; // ebx
  int v52; // ebx
  int v53; // ebx
  int v54; // ebx
  int v55; // ebx
  int v56; // ecx
  bool v57; // zf
  __int32 v58; // ecx
  _OWORD *v59; // rax
  char **v60; // rbx
  char *v61; // rax
  _OWORD *v62; // rax
  __int64 v63; // rcx
  unsigned __int32 v64; // eax
  unsigned __int64 v65; // rcx
  int v66; // r14d
  _DWORD *v67; // rcx
  char v68; // bl
  int v69; // eax
  _BYTE *v70; // rax
  int v71; // ebx
  int v72; // ebx
  int v73; // ebx
  int v74; // ebx
  int v75; // ebx
  int v76; // ebx
  int v77; // ebx
  int v78; // ebx
  int v79; // ecx
  __int64 v80; // rax
  struct _PROCESSOR_NUMBER *v81; // rcx
  int VmPerfConfig; // eax
  char *v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  char v87; // al
  __int64 v88; // rax
  __int64 v89; // rcx
  int v90; // ebx
  int v91; // ebx
  int v92; // ebx
  char v93; // bl
  __int64 v94; // rcx
  unsigned __int64 *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rbx
  _DWORD *v98; // rcx
  __int64 v99; // rcx
  unsigned __int64 v100; // rbx
  unsigned __int64 *v101; // rax
  __int64 v102; // rax
  int FanNoiseInfo; // eax
  unsigned int v104; // ebx
  __int64 v105; // rdx
  unsigned __int32 v106; // esi
  unsigned int v107; // edi
  _DWORD *v108; // rcx
  _DWORD *v109; // rax
  _DWORD *v110; // rbx
  __int64 *i; // rax
  __int64 v112; // rcx
  int v113; // eax
  __int64 Pool2; // rax
  int v115; // ebx
  __int8 v116; // al
  _KPROCESS *Process; // rcx
  unsigned int ProcessSessionId; // eax
  int v119; // ebx
  int v120; // ebx
  int v121; // ebx
  int v122; // ebx
  int v123; // ebx
  int v124; // ebx
  int v125; // ebx
  int v126; // ebx
  _DWORD *v127; // rax
  __int64 v128; // rax
  _DWORD *v129; // rax
  __int64 v130; // rcx
  _BYTE v131[2]; // [rsp+40h] [rbp-69h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+42h] [rbp-67h]
  int v133; // [rsp+44h] [rbp-65h] BYREF
  __int64 v134; // [rsp+48h] [rbp-61h] BYREF
  int v135; // [rsp+50h] [rbp-59h] BYREF
  int v136; // [rsp+54h] [rbp-55h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp-51h] BYREF
  __int64 v138; // [rsp+60h] [rbp-49h] BYREF
  __int64 v139; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-39h] BYREF
  __int64 v141; // [rsp+80h] [rbp-29h]
  _DWORD v142[8]; // [rsp+88h] [rbp-21h] BYREF

  v9 = a1;
  v10 = (__m256i *)a3;
  String2 = 0LL;
  v11 = a4;
  *a7 = 0LL;
  *a8 = 0;
  *a9 = 0;
  LODWORD(v134) = a2;
  v131[1] = 0;
  v131[0] = 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  pcbLength = 0LL;
  v135 = 0;
  v138 = 0LL;
  v139 = 0LL;
  v136 = 0;
  v141 = 0LL;
  PreviousMode = a1;
  if ( (_BYTE)a1 )
  {
    if ( (unsigned int)v9 <= 0x17 )
    {
      v12 = 12058885;
      if ( _bittest(&v12, v9) )
        return (unsigned int)-1073741790;
    }
    v13 = (unsigned int)(v9 - 26);
    if ( (unsigned int)v13 <= 0x3D )
    {
      a1 = 0x208002A38000C005LL;
      if ( _bittest64(&a1, v13) )
        return (unsigned int)-1073741790;
    }
    v14 = (unsigned int)(v9 - 29);
    if ( (unsigned int)v14 <= 0x23 )
    {
      a1 = 0x88B4C0001LL;
      if ( _bittest64(&a1, v14) )
      {
        if ( !(unsigned __int8)PspIsContextAdmin() )
          return (unsigned int)-1073741790;
      }
    }
    if ( (unsigned int)(v9 - 82) <= 1 && !(unsigned __int8)PopCheckTestsigningEnabled() )
      return (unsigned int)-1073741790;
    if ( (v16 = (unsigned int)(v9 - 35), (unsigned int)v16 <= 0x37) && (a1 = 0xA0001000000003LL, _bittest64(&a1, v16))
      || v9 == 24 )
    {
      if ( !(unsigned __int8)PopIsRunningAsLocalSystem() )
        return (unsigned int)-1073741790;
    }
    switch ( v9 )
    {
      case 80:
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
          return (unsigned int)-1073741727;
LABEL_401:
        if ( (_DWORD)v11 == 8 && v10 && !a6 && !a5 )
        {
          qword_140D532A0 = PopAdaptiveGetSystemInitiatedRebootTargetState(v17, a2, a3, 0LL);
          byte_140D53298 = 1;
          return 0;
        }
        return (unsigned int)-1073741811;
      case 61:
        if ( !(unsigned __int8)PopCheckTestsigningEnabled() || !(unsigned __int8)PspIsContextAdmin() )
          return (unsigned int)-1073741790;
LABEL_336:
        if ( (unsigned int)v11 < 0xC )
          return (unsigned int)-1073741811;
        if ( a5 )
        {
          PopAcquireTransitionLock(8LL);
          PagesFromHiberFile = PopReadPagesFromHiberFile(v10->m256i_u32[2], 1LL, a7);
          PopReleaseTransitionLock(8LL);
          v29 = 0;
          if ( PagesFromHiberFile < 0 )
          {
            *a7 = 0LL;
            return (unsigned int)PagesFromHiberFile;
          }
          *a8 = 4096;
          *a9 = 1;
          return v29;
        }
        return (unsigned int)-1073741789;
      case 45:
        PagesFromHiberFile = 0;
        if ( !(unsigned __int8)PopIsRunningAsLocalSystem()
          && (!(unsigned __int8)PopCheckTestsigningEnabled() || !(unsigned __int8)PspIsContextAdmin()) )
        {
          return (unsigned int)-1073741790;
        }
        goto LABEL_261;
      case 25:
        v18 = 0x7FFFLL;
        v19 = L"systemManagement";
        while ( *v19 )
        {
          ++v19;
          if ( !--v18 )
            goto LABEL_34;
        }
        String2.Buffer = L"systemManagement";
        String2.Length = 2 * (0x7FFF - v18);
        String2.MaximumLength = String2.Length + 2;
LABEL_34:
        PagesFromHiberFile = RtlCapabilityCheckForSingleSessionSku(0LL, &String2);
        if ( PagesFromHiberFile >= 0 )
          return (unsigned int)-1073741790;
        return (unsigned int)PagesFromHiberFile;
    }
    a2 = (unsigned int)v134;
    LOBYTE(a1) = PreviousMode;
  }
  else
  {
    v20 = (unsigned int)(v9 - 24);
    if ( (unsigned int)v20 <= 0x3B )
    {
      a3 = 0xD00811169F09201LL;
      if ( _bittest64(&a3, v20) )
        return (unsigned int)-1073741637;
    }
    if ( v9 == 7 || v9 == 5 )
      return (unsigned int)-1073741637;
  }
  if ( v9 > 49 )
  {
    if ( v9 > 72 )
    {
      if ( v9 <= 82 )
      {
        switch ( v9 )
        {
          case 'R':
            if ( (_DWORD)v11 != 12 || !v10 || a6 || a5 )
              return (unsigned int)-1073741811;
            v134 = 0LL;
            LODWORD(v134) = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            v116 = v10->m256i_i8[8];
            BYTE4(v134) = 1;
            Process = KeGetCurrentThread()->ApcState.Process;
            BYTE5(v134) = v116;
            ProcessSessionId = PsGetProcessSessionIdEx((__int64)Process);
            PopSessionWinlogonNotification(ProcessSessionId, (__int64)&v134);
            break;
          case 'I':
            if ( (unsigned int)v11 < 0xC )
              return (unsigned int)-1073741789;
            if ( a5 )
              return (unsigned int)-1073741811;
            v115 = v10->m256i_i32[2];
            PopAcquireAdaptiveLock(1, a2);
            if ( PopHostGlobalUserPresenceState != v115 )
            {
              PopHostGlobalUserPresenceState = v115;
              PopEvaluateGlobalUserStatus();
            }
            PopReleaseAdaptiveLock();
            break;
          case 'J':
          case 'K':
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741789;
            if ( !a5 )
              return (unsigned int)-1073741811;
            if ( v9 == 74 )
              v39 = 296;
            else
              v39 = 592;
            Pool2 = ExAllocatePool2(256LL, v39, 544040269LL);
            v35 = Pool2;
            if ( !Pool2 )
              return (unsigned int)-1073741670;
            PagesFromHiberFile = PpmIdleGetPackageIdleIntervalStats((unsigned int)v9, v10->m256i_u16[4], Pool2);
            if ( PagesFromHiberFile < 0 )
            {
LABEL_91:
              v32 = 544040269;
LABEL_92:
              v33 = (void *)v35;
              goto LABEL_83;
            }
            *a7 = v35;
LABEL_106:
            *a8 = v39;
            goto LABEL_86;
          case 'L':
          case 'M':
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741789;
            if ( !a5 )
              return (unsigned int)-1073741811;
            PagesFromHiberFile = PpmIdleGetConcurrencyStats((unsigned int)v9, v10->m256i_u16[4], &v139, &v136);
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            *a7 = v139;
            *a8 = v136;
            goto LABEL_86;
          case 'N':
            if ( !a5 )
              return (unsigned int)-1073741811;
            v110 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
            if ( !v110 )
              return (unsigned int)-1073741670;
            for ( i = (__int64 *)PpmPerfDomainHead; ; i = (__int64 *)*i )
            {
              if ( i == &PpmPerfDomainHead )
              {
                v113 = 0;
                goto LABEL_422;
              }
              v112 = i[52];
              if ( v112 )
                break;
            }
            v113 = ((__int64 (__fastcall *)(__int64, __int64 *))i[52])(v112, &PpmPerfDomainHead);
LABEL_422:
            *v110 = v113;
            *a7 = (__int64)v110;
            *a8 = 4;
            goto LABEL_69;
          case 'O':
            if ( !v10 || (_DWORD)v11 != 12 )
              return (unsigned int)-1073741811;
            v106 = v10->m256i_u32[2];
            v133 = 0;
            PagesFromHiberFile = PpmPerfQueryProcMeasurementValues(v106, &v133, 0LL, 0LL);
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            v107 = 24 * v133 + 8;
            if ( a6 != 4 )
            {
              if ( a6 < v107 )
                return (unsigned int)-1073741789;
              v109 = (_DWORD *)ExAllocatePool2(64LL, v107, 544040269LL);
              if ( !v109 )
                return (unsigned int)-1073741670;
              *a8 = v107;
              *a9 = 1;
              *a7 = (__int64)v109;
              *v109 = v133;
              return (unsigned int)PpmPerfQueryProcMeasurementValues(v106, &v133, v109 + 2, (unsigned int)(24 * v133));
            }
            v108 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
            if ( !v108 )
              return (unsigned int)-1073741670;
            *v108 = v133;
            *a7 = (__int64)v108;
            *a8 = 4;
LABEL_86:
            *a9 = 1;
            return (unsigned int)PagesFromHiberFile;
          default:
            v17 = (unsigned int)(v9 - 80);
            if ( v9 == 80 )
              goto LABEL_401;
            if ( (_DWORD)v11 != 40 || !v10 || a6 != 16 || !a5 )
              return (unsigned int)-1073741811;
            v104 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            PopAcquireAdaptiveLock(1, v105);
            PopAdaptiveGetSessionStateUnsafe(v104, &v10->m256i_i64[1], a5);
            PopReleaseAdaptiveLock();
            return 0;
        }
        return 0;
      }
      v119 = v9 - 83;
      if ( !v119 )
      {
        if ( (_DWORD)v11 != 16 || !v10 || a6 || a5 )
          return (unsigned int)-1073741811;
        return (unsigned int)PopAdaptiveSetSystemInitiatedRebootTargetStateOverride(v10);
      }
      v120 = v119 - 1;
      if ( v120 )
      {
        v121 = v120 - 1;
        if ( v121 )
        {
          v122 = v121 - 1;
          if ( !v122 )
          {
            if ( (unsigned int)v11 < 8 || !a5 )
              return (unsigned int)-1073741789;
            v129 = (_DWORD *)ExAllocatePool2(256LL, 8LL, 544040269LL);
            if ( !v129 )
              return (unsigned int)-1073741670;
            *v129 = ExBootAppErrorDiagCode;
            v129[1] = ExBootAppFailureStatus;
            *a7 = (__int64)v129;
            *a8 = 8;
            goto LABEL_208;
          }
          v123 = v122 - 1;
          if ( !v123 )
          {
            if ( !v10 || (_DWORD)v11 != 24 || a5 )
              return (unsigned int)-1073741811;
            return (unsigned int)PopShutdownListenerRemoveCallback(v10);
          }
          v124 = v123 - 1;
          if ( !v124 )
            return (unsigned int)PopManageTransitionRecordRequest(a1, v10, (unsigned int)v11);
          v125 = v124 - 1;
          if ( !v125 )
          {
            if ( !a5 || a6 != 20 )
              return (unsigned int)-1073741789;
            PopAcquirePolicyLock(a1);
            PagesFromHiberFile = 0;
            if ( byte_140C3D6F3 )
            {
              v128 = ExAllocatePool2(256LL, 20LL, 544040269LL);
              if ( v128 )
              {
                *(_OWORD *)v128 = PopAcpiTimeAndAlarmCapabilities;
                v46 = (unsigned int)dword_140C3A130;
                *(_DWORD *)(v128 + 16) = dword_140C3A130;
                *a7 = v128;
                *a8 = 20;
                *a9 = 1;
              }
              else
              {
                PagesFromHiberFile = -1073741670;
              }
            }
            else
            {
              PagesFromHiberFile = -1073741637;
            }
            goto LABEL_125;
          }
          v126 = v125 - 1;
          if ( !v126 )
          {
            if ( !v10 || (unsigned int)v11 < 0x14 || a5 && a6 )
              return (unsigned int)-1073741811;
            return (unsigned int)PopSuspendResumeInvocation(v10);
          }
          if ( v126 != 1 )
            return (unsigned int)-1073741811;
          if ( !a5 || a6 < 0x24 )
            return (unsigned int)-1073741789;
          v127 = (_DWORD *)ExAllocatePool2(256LL, 36LL, 544040269LL);
          v31 = (__int64)v127;
          if ( !v127 )
            return (unsigned int)-1073741670;
          PagesFromHiberFile = PopGetEnergyEstimationInfo(v127);
          if ( PagesFromHiberFile >= 0 )
          {
            *a7 = v31;
            PagesFromHiberFile = 0;
            *a8 = 36;
            *a9 = 1;
            return (unsigned int)PagesFromHiberFile;
          }
LABEL_82:
          v32 = 544040269;
          v33 = (void *)v31;
LABEL_83:
          ExFreePoolWithTag(v33, v32);
          return (unsigned int)PagesFromHiberFile;
        }
        if ( !a5 )
          return (unsigned int)-1073741811;
        v39 = 88;
        v31 = ExAllocatePool2(256LL, 88LL, 544040269LL);
        if ( !v31 )
          return (unsigned int)-1073741670;
        v130 = 85LL;
      }
      else
      {
        if ( !a5 )
          return (unsigned int)-1073741811;
        v39 = 160;
        v31 = ExAllocatePool2(256LL, 160LL, 544040269LL);
        if ( !v31 )
          return (unsigned int)-1073741670;
        v130 = 84LL;
      }
      FanNoiseInfo = PopFanReadFanNoiseInfo(v130, v31, v39);
    }
    else
    {
      if ( v9 != 72 )
      {
        if ( v9 <= 62 )
        {
          if ( v9 == 62 )
          {
            if ( !a5 )
              return (unsigned int)-1073741789;
            v83 = (char *)ExAllocatePool2(256LL, 1LL, 544040269LL);
            if ( !v83 )
              return (unsigned int)-1073741670;
            v87 = PopDirtyTransitionDiagInfo;
          }
          else
          {
            if ( v9 > 57 )
            {
              v90 = v9 - 58;
              if ( !v90 )
              {
                if ( (unsigned int)v11 < 0x18 )
                  return (unsigned int)-1073741811;
                return (unsigned int)PoDirectedDripsSetDeviceFlags(v10->m256i_i64[1], v10->m256i_i32[4]);
              }
              v91 = v90 - 1;
              if ( !v91 )
              {
                if ( (unsigned int)v11 < 0x18 )
                  return (unsigned int)-1073741811;
                return (unsigned int)PoDirectedDripsClearDeviceFlags(v10->m256i_i64[1], v10->m256i_i32[4]);
              }
              v92 = v91 - 1;
              if ( v92 )
              {
                if ( v92 != 1 )
                  return (unsigned int)-1073741811;
                goto LABEL_336;
              }
              if ( !a5 )
                return (unsigned int)-1073741789;
              PopAcquireTransitionLock(8LL);
              PagesFromHiberFile = PopReadResumeContext(&v135, &v138);
              PopReleaseTransitionLock(8LL);
              if ( PagesFromHiberFile < 0 )
                return (unsigned int)PagesFromHiberFile;
              *a7 = v138;
              *a8 = v135;
LABEL_115:
              *a9 = 1;
              return 0;
            }
            if ( v9 == 57 )
            {
              if ( a5 )
                return (unsigned int)-1073741811;
              return (unsigned int)PopPlRegisterPowerPlane((__int64)v10, v11);
            }
            if ( v9 != 50 )
            {
              if ( v9 == 51 )
              {
                if ( (_DWORD)a2 )
                {
                  if ( (_DWORD)a2 != 1 )
                    return (unsigned int)-1073741811;
                  if ( (unsigned int)v11 < 0x18 )
                    return (unsigned int)-1073741789;
                  v88 = v10->m256i_i64[2];
                  v89 = v10->m256i_i64[1];
                }
                else
                {
                  if ( (unsigned int)v11 < 0x10 )
                    return (unsigned int)-1073741789;
                  v88 = v10->m256i_i64[1];
                  v89 = v88;
                }
                PopWakeAlarmTimeOverrideAc = v89;
                PopWakeAlarmTimeOverrideDc = v88;
                return 0;
              }
              if ( v9 != 53 && v9 != 54 && v9 != 56 )
                return (unsigned int)-1073741811;
              goto LABEL_316;
            }
            if ( !a5 )
              return (unsigned int)-1073741789;
            v83 = (char *)ExAllocatePool2(256LL, 1LL, 544040269LL);
            if ( !v83 )
              return (unsigned int)-1073741670;
            v87 = PopAutoChkCausedReboot;
          }
LABEL_296:
          *v83 = v87;
          *a7 = (__int64)v83;
          *a8 = 1;
LABEL_208:
          *a9 = 1;
          return 0;
        }
        switch ( v9 )
        {
          case '?':
            if ( !a5 )
              return (unsigned int)-1073741811;
            v100 = (unsigned __int64)&SshpRoutineBlock & -(__int64)SSHSupportQueryIsLibraryEnabled();
            if ( !v100 )
              return (unsigned int)-1073741637;
            v101 = (unsigned __int64 *)ExAllocatePool2(256LL, 8LL, 544040269LL);
            if ( !v101 )
              return (unsigned int)-1073741670;
            *v101 = v100;
            *a7 = (__int64)v101;
            goto LABEL_180;
          case '@':
LABEL_316:
            PagesFromHiberFile = PopDirectedDripsUmPowerInformationInternal(
                                   v9,
                                   v11,
                                   (_DWORD)v10,
                                   (_DWORD)a8,
                                   (__int64)a7);
            if ( PagesFromHiberFile < 0 || !*a7 )
              return (unsigned int)PagesFromHiberFile;
            goto LABEL_86;
          case 'A':
            if ( (_DWORD)v11 != 16 )
              return (unsigned int)-1073741811;
            v99 = v10->m256i_i64[1];
            if ( !v99 )
              return (unsigned int)-1073741811;
            PagesFromHiberFile = PopFxClearDeviceConstraints(v99);
            v29 = 0;
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            return v29;
          case 'B':
            return (unsigned int)-1073741637;
          case 'C':
            *a8 = 0;
            *a7 = 0LL;
            v98 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
            if ( !v98 )
              return (unsigned int)-1073741670;
            *v98 = PopDisableInboxPepGeneratedConstraintsOverride;
            *a7 = (__int64)v98;
            *a8 = 4;
            return 0;
          case 'D':
            return PopIdleScanInterval == 0 ? 0xC00000BB : 0;
        }
        if ( v9 != 69 )
        {
          if ( v9 != 70 )
          {
            if ( (_DWORD)v11 == 12 )
            {
              v93 = v10->m256i_i8[8];
              PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepReliabilityDiagLock);
              if ( PopSleepReliabilityDetailedDiagEnabled != v93 )
              {
                LOBYTE(v94) = v93;
                PopSleepReliabilityDetailedDiagEnabled = v93;
                PopDiagTraceSleepReliabilityDiagConfigUpdate(v94);
              }
              PopReleaseRwLock((ULONG_PTR)&PopSleepReliabilityDiagLock);
              return 0;
            }
            return (unsigned int)-1073741811;
          }
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( !a5 )
            return (unsigned int)-1073741811;
          v95 = (unsigned __int64 *)ExAllocatePool2(256LL, 8LL, 544040269LL);
          v35 = (__int64)v95;
          if ( !v95 )
            return (unsigned int)-1073741670;
          VmPerfConfig = PpmPerfGetVmPerfConfig(v10->m256i_i32[2], v95);
          goto LABEL_282;
        }
        if ( !a5 )
          return (unsigned int)-1073741811;
        v96 = ExAllocatePool2(256LL, 20LL, 544040269LL);
        v97 = v96;
        if ( !v96 )
          return (unsigned int)-1073741670;
        PpmPerfGetVmPerfSupport(v96);
        *a7 = v97;
        *a8 = a6 < 0x14 ? 1 : 20;
LABEL_69:
        *a9 = 1;
        return 0;
      }
      if ( !a5 )
        return (unsigned int)-1073741811;
      v39 = 2304;
      v102 = ExAllocatePool2(256LL, 2304LL, 544040269LL);
      v31 = v102;
      if ( !v102 )
        return (unsigned int)-1073741670;
      FanNoiseInfo = PpmPerfGetFrequencyBandStats(v102);
    }
    PagesFromHiberFile = FanNoiseInfo;
    if ( FanNoiseInfo >= 0 )
    {
LABEL_105:
      *a7 = v31;
      goto LABEL_106;
    }
    goto LABEL_82;
  }
  if ( v9 == 49 )
  {
    if ( !a5 )
      return (unsigned int)-1073741789;
    v25 = (char *)ExAllocatePool2(256LL, 1LL, 544040269LL);
    if ( !v25 )
      return (unsigned int)-1073741670;
    PowerButtonBugcheckEnabled = PopQueryPowerButtonBugcheckEnabled();
LABEL_68:
    *v25 = PowerButtonBugcheckEnabled;
    *a7 = (__int64)v25;
    *a8 = 1;
    goto LABEL_69;
  }
  if ( v9 > 29 )
  {
    if ( v9 <= 39 )
    {
      if ( v9 == 39 )
      {
        if ( (_DWORD)v11 != 12 )
          return (unsigned int)-1073741811;
        v27 = v131;
        v131[0] = v10->m256i_i8[8];
        v28 = &WNF_PO_WAKE_ON_VOICE_STATE;
        return (unsigned int)ZwUpdateWnfStateData((__int64)v28, (__int64)v27);
      }
      if ( v9 == 30 )
      {
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v70 = (_BYTE *)ExAllocatePool2(256LL, 3LL, 544040269LL);
        if ( !v70 )
          return (unsigned int)-1073741670;
        *v70 = PpmPerfQosSupportedAndConfigured;
        v70[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
        v70[2] = PpmPerfQosGroupPolicyDisable != 0;
        *a7 = (__int64)v70;
        *a8 = 3;
      }
      else
      {
        v63 = (unsigned int)(v9 - 31);
        if ( v9 == 31 )
          goto LABEL_198;
        v63 = (unsigned int)(v9 - 32);
        if ( v9 == 32 )
          goto LABEL_198;
        if ( v9 == 33 )
          return (unsigned int)-1073741637;
        v63 = (unsigned int)(v9 - 34);
        if ( v9 == 34 )
          goto LABEL_198;
        v63 = (unsigned int)(v9 - 35);
        if ( v9 == 35 )
          goto LABEL_198;
        if ( v9 == 36 )
        {
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( a5 )
            return (unsigned int)-1073741811;
          v68 = v10->m256i_i8[8];
          PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
          PopEsEnabledOnHost = v68;
          PopReleaseRwLock((ULONG_PTR)&PopEsLock);
          PopEsQueueStateEvaluation(0LL);
          return 0;
        }
        v63 = (unsigned int)(v9 - 37);
        if ( v9 != 37 )
        {
LABEL_198:
          if ( (_DWORD)v11 != 24 )
            return (unsigned int)-1073741811;
          if ( a5 )
          {
            v64 = v10->m256i_u32[2];
            if ( !v64 )
              return (unsigned int)-1073741811;
            v65 = 4LL * v64;
            if ( v65 > 0xFFFFFFFF )
              return (unsigned int)-1073741675;
            v66 = 4 * v64;
            v35 = ExAllocatePool2(256LL, (unsigned int)v65, 544040269LL);
            if ( !v35 )
              return (unsigned int)-1073741670;
          }
          else
          {
            v35 = v141;
            v66 = 0;
          }
          switch ( v9 )
          {
            case 31:
              if ( !v10->m256i_i32[2] )
              {
LABEL_217:
                PagesFromHiberFile = -1073741811;
LABEL_231:
                if ( !v35 )
                  return (unsigned int)PagesFromHiberFile;
                v32 = 0;
                goto LABEL_92;
              }
              v69 = PopBootStatGet((__int64)v10, v35);
              break;
            case 32:
              if ( !v10->m256i_i32[2] )
                goto LABEL_217;
              v69 = PopBootStatSet((__int64)v10, v35);
              break;
            case 34:
              if ( !v10->m256i_i32[2] )
                goto LABEL_217;
              v69 = PopBootStatCheckIntegrity(v10, a2, a3, 0LL);
              break;
            case 35:
              v69 = PopBootStatRestoreDefaults(v63, a2, a3, 0LL);
              break;
            default:
              v69 = PopBootStatUnlock(v63, a2, a3, 0LL);
              break;
          }
          PagesFromHiberFile = v69;
          if ( v69 < 0 )
            goto LABEL_231;
          if ( v35 )
          {
            *a7 = v35;
            *a8 = v66;
            *a9 = 1;
          }
          return 0;
        }
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v67 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
        if ( !v67 )
          return (unsigned int)-1073741670;
        *v67 = qword_140C3CD64;
        *a7 = (__int64)v67;
        *a8 = 4;
      }
      goto LABEL_208;
    }
    v71 = v9 - 40;
    if ( !v71 )
    {
      if ( (_DWORD)v11 == 16 && !v10->m256i_i32[2] )
      {
        if ( v10->m256i_i8[12] )
          PopDeepSleepSetDisengageReason(7u);
        else
          PopDeepSleepClearDisengageReason(7u);
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    v72 = v71 - 1;
    if ( v72 )
    {
      v73 = v72 - 1;
      if ( !v73 )
      {
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v41 = (_OWORD *)ExAllocatePool2(256LL, 32LL, 544040269LL);
        if ( !v41 )
          return (unsigned int)-1073741670;
        *v41 = PopBsdPowerTransitionExtensionAtBoot;
        v42 = xmmword_140C6AAD0;
LABEL_114:
        v41[1] = v42;
        *a7 = (__int64)v41;
        *a8 = 32;
        goto LABEL_115;
      }
      v74 = v73 - 1;
      if ( v74 )
      {
        v75 = v74 - 1;
        if ( v75 )
        {
          v76 = v75 - 1;
          if ( !v76 )
          {
            PagesFromHiberFile = 0;
LABEL_261:
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741811;
            if ( v10->m256i_i8[8] )
              PoUserShutdownInitiated(a1, a2);
            else
              PoUserShutdownCancelled(a1, a2);
            return (unsigned int)PagesFromHiberFile;
          }
          v77 = v76 - 1;
          if ( !v77 )
          {
            if ( (_DWORD)v11 != 32 || a5 )
              return (unsigned int)-1073741811;
            PopPowerRequestNotifyUserSessionAttributed(v10->m256i_u32[6], v10->m256i_i64[1], v10->m256i_i64[2]);
            return 0;
          }
          v78 = v77 - 1;
          if ( v78 )
          {
            if ( v78 != 1 )
              return (unsigned int)-1073741811;
            if ( (unsigned int)v11 < 0x10 )
              return (unsigned int)-1073741789;
            if ( a5 )
              return (unsigned int)-1073741811;
            if ( !v10->m256i_i32[1] )
              return (unsigned int)PpmInternalPlatformIdleVeto(v10->m256i_u32[2], v10->m256i_i8[12]);
          }
          else
          {
            if ( (unsigned int)v11 < 0x14 )
              return (unsigned int)-1073741789;
            if ( a5 )
              return (unsigned int)-1073741811;
            if ( !v10->m256i_i32[1] )
              return (unsigned int)PpmInternalProcessorIdleVeto(v10->m256i_u32[2], v10->m256i_u32[3], v10->m256i_i8[16]);
          }
          return (unsigned int)-1073741735;
        }
        if ( (unsigned int)v11 < 0x90 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        PagesFromHiberFile = RtlCheckTokenMembership(0LL, (void *)PopTimeBrokerServiceSid, v131);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        if ( !v131[0] )
          return (unsigned int)-1073741790;
        if ( !PopPlatformAoAc )
          return (unsigned int)-1073741637;
        PagesFromHiberFile = RtlStringCbLengthW(&v10->m256i_u16[4], 0x80uLL, &pcbLength);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        v80 = v10[4].m256i_i64[1];
        if ( pcbLength )
        {
          if ( !v80 )
            return (unsigned int)-1073741811;
        }
        else if ( v80 )
        {
          return (unsigned int)-1073741811;
        }
        PopAcquirePolicyLock(v79);
        PopTimeBrokerExpirationReason = 0;
        PagesFromHiberFile = RtlStringCbCopyW(&PopTimeBrokerExpirationReason, 0x80uLL, &v10->m256i_u16[4]);
        PopTimeBrokerExpirationDueTime = v10[4].m256i_i64[1];
        goto LABEL_125;
      }
      if ( (((_DWORD)v11 - 8) & 0xFFFFFFFB) != 0 )
        return (unsigned int)-1073741811;
      if ( !a5 )
        return (unsigned int)-1073741789;
      v35 = ExAllocatePool2(256LL, 8LL, 544040269LL);
      if ( !v35 )
        return (unsigned int)-1073741670;
      v81 = (struct _PROCESSOR_NUMBER *)&v10->m256i_u64[1];
      if ( (_DWORD)v11 != 12 )
        v81 = 0LL;
      VmPerfConfig = PpmPerfGetBrandedFrequency(v81);
LABEL_282:
      PagesFromHiberFile = VmPerfConfig;
      if ( VmPerfConfig >= 0 )
      {
        *a7 = v35;
LABEL_85:
        *a8 = 8;
        goto LABEL_86;
      }
      goto LABEL_91;
    }
    if ( (_DWORD)v11 != 16 )
      return (unsigned int)-1073741811;
    if ( !a5 )
      return (unsigned int)-1073741789;
    v83 = (char *)ExAllocatePool2(256LL, 1LL, 544040269LL);
    if ( !v83 )
      return (unsigned int)-1073741670;
    v84 = v10->m256i_i64[1];
    if ( !v84
      || (v85 = *(_QWORD *)(*(_QWORD *)(v84 + 312) + 40LL)) == 0
      || (v86 = *(_QWORD *)(v85 + 80)) == 0
      || (v57 = *(_QWORD *)(v86 + 64) == 0LL, v87 = 1, v57) )
    {
      v87 = 0;
    }
    goto LABEL_296;
  }
  if ( v9 == 29 )
  {
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v62 = (_OWORD *)ExAllocatePool2(256LL, 48LL, 544040269LL);
    if ( !v62 )
      return (unsigned int)-1073741670;
    *v62 = PopFirmwareResetReason;
    v62[1] = xmmword_140C6AB58;
    v62[2] = xmmword_140C6AB68;
    *a7 = (__int64)v62;
    *a8 = 48;
    goto LABEL_115;
  }
  if ( v9 <= 19 )
  {
    if ( v9 != 19 )
    {
      if ( v9 <= 5 )
      {
        if ( v9 == 5 )
        {
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( a5 )
            return (unsigned int)-1073741811;
          PoLatencySensitivityHint(v10->m256i_i32[2]);
          return 0;
        }
        if ( v9 )
        {
          v22 = v9 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                if ( v24 != 1 )
                  return (unsigned int)-1073741811;
                if ( (unsigned int)v11 < 8 || !a5 )
                  return (unsigned int)-1073741789;
                v25 = (char *)ExAllocatePool2(256LL, 1LL, 544040269LL);
                if ( !v25 )
                  return (unsigned int)-1073741670;
                if ( !PopPlatformAoAc
                  || (v57 = (unsigned __int8)RtlIsMultiSessionSku() == 0, PowerButtonBugcheckEnabled = 1, v57) )
                {
                  PowerButtonBugcheckEnabled = 0;
                }
                goto LABEL_68;
              }
              if ( (unsigned int)v11 < 0x10 )
                return (unsigned int)-1073741789;
              if ( a5 || (PopSimulate & 1) == 0 )
                return (unsigned int)-1073741811;
              PopUpdateSmartUserPresencePredictions(v10->m256i_i64[1], 0LL);
              return 0;
            }
            PopVideoInitialized = 1;
            v27 = &PopVideoInitialized;
            v28 = &WNF_PO_VIDEO_INITIALIALIZED;
            return (unsigned int)ZwUpdateWnfStateData((__int64)v28, (__int64)v27);
          }
          if ( !a5 )
            return (unsigned int)-1073741789;
          v30 = ExAllocatePool2(256LL, 8LL, 544040269LL);
          v31 = v30;
          if ( !v30 )
            return (unsigned int)-1073741670;
          PagesFromHiberFile = PopS0LowPowerIdleInfo(v30);
          if ( PagesFromHiberFile < 0 )
            goto LABEL_82;
          *a7 = v31;
          goto LABEL_85;
        }
        if ( (unsigned int)v11 < 0x20 || !a5 )
          return (unsigned int)-1073741789;
        v34 = ExAllocatePool2(256LL, 16LL, 544040269LL);
        v35 = v34;
        if ( !v34 )
          return (unsigned int)-1073741670;
        PagesFromHiberFile = PopFxPlatformRegisterInterface(v10, v34);
        if ( PagesFromHiberFile >= 0 )
        {
          *a7 = v35;
          *a8 = 16;
          goto LABEL_86;
        }
        goto LABEL_91;
      }
      v36 = v9 - 6;
      if ( !v36 )
      {
        if ( (unsigned int)v11 < 0xC )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        LOBYTE(a1) = v10->m256i_i8[8];
        return (unsigned int)PopNetUpdateStandbyRequest(a1);
      }
      v37 = v36 - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          if ( v38 != 10 )
            return (unsigned int)-1073741811;
          if ( PopPlatformAoAc )
          {
            if ( !a5 )
              return (unsigned int)-1073741789;
            v39 = 1000;
            v40 = ExAllocatePool2(256LL, 1000LL, 544040269LL);
            v31 = v40;
            if ( !v40 )
              return (unsigned int)-1073741670;
            PagesFromHiberFile = PopQueryBootSessionStandbyActivationInfo(v40);
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            goto LABEL_105;
          }
          return (unsigned int)-1073741637;
        }
        if ( (unsigned int)v11 < 8 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        LOBYTE(a1) = v10->m256i_i8[8];
        return (unsigned int)PopUpdateBackgroundCoolingStatus(a1);
      }
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v41 = (_OWORD *)ExAllocatePool2(256LL, 32LL, 544040269LL);
      if ( !v41 )
        return (unsigned int)-1073741670;
      *v41 = PopBsdPowerTransitionAtBoot;
      v42 = xmmword_140C6AAF0;
      goto LABEL_114;
    }
    if ( (_DWORD)v11 != 20 || a5 )
      return (unsigned int)-1073741811;
    LOBYTE(a2) = v10->m256i_i8[12];
    TtmNotifySessionPowerStateChange(v10->m256i_u32[2], a2);
    v43 = v10->m256i_u8[12];
    PopAcquirePolicyLock(v44);
    if ( v10->m256i_i8[13] )
    {
      PopSetDisplayStatus((_BYTE)v43 != 0);
      PopUpdateConsoleDisplayState((_BYTE)v43 != 0);
      if ( (_BYTE)v43 )
        PopPowerAggregatorNotifyDisplayPoweredOn();
    }
    PopDiagTraceSessionDisplayStateChange(
      v10->m256i_i8[12] == 0,
      v10->m256i_i32[2],
      v10->m256i_u8[13],
      v10->m256i_i32[4]);
    PagesFromHiberFile = 0;
LABEL_125:
    PopReleasePolicyLock(v46, v45, v47);
    return (unsigned int)PagesFromHiberFile;
  }
  v48 = v9 - 20;
  if ( !v48 )
  {
    if ( (_DWORD)v11 != 20 || a5 )
      return (unsigned int)-1073741811;
    LOBYTE(a3) = v10->m256i_i8[16];
    TtmNotifySessionTerminalInput(v10->m256i_u32[2], v10->m256i_u32[3], a3);
    return 0;
  }
  v49 = v48 - 1;
  if ( !v49 )
  {
    if ( (unsigned int)v11 < 0x60 || !v10->m256i_i64[1] && !a5 )
      return (unsigned int)-1073741789;
    if ( v10->m256i_i32[6] == 412 )
    {
      if ( v10[2].m256i_i8[24] || !v10->m256i_i32[4] )
      {
        PopBsdPowerWatchdogArmed = 0;
      }
      else
      {
        PopBsdLastPowerWatchdogStage = v10[1].m256i_i32[0];
        PopBsdPowerWatchdogArmed = 1;
      }
    }
    v60 = 0LL;
    if ( a5 )
    {
      v60 = (char **)ExAllocatePool2(256LL, 8LL, 544040269LL);
      if ( !v60 )
        return (unsigned int)-1073741670;
    }
    v61 = PopSetWatchdog((char *)v10->m256i_i64[1], &v10->m256i_u32[4], v10[2].m256i_i8[24]);
    if ( !a5 )
      return 0;
    *v60 = v61;
    *a7 = (__int64)v60;
LABEL_180:
    *a8 = 8;
    goto LABEL_115;
  }
  v50 = v49 - 1;
  if ( !v50 )
  {
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v59 = (_OWORD *)ExAllocatePool2(256LL, 64LL, 544040269LL);
    if ( !v59 )
      return (unsigned int)-1073741670;
    *v59 = PopBsdPhysicalPowerButtonInfoAtBoot;
    v59[1] = xmmword_140C6AA90;
    v59[2] = xmmword_140C6AAA0;
    v59[3] = xmmword_140C6AAB0;
    *a7 = (__int64)v59;
    *a8 = 64;
    goto LABEL_115;
  }
  v51 = v50 - 1;
  if ( !v51 )
  {
    if ( (_DWORD)v11 != 12 )
      return (unsigned int)-1073741811;
    LOBYTE(a1) = v10->m256i_i8[8];
    PopUpdateExternalDisplayState(a1);
    return 0;
  }
  v52 = v51 - 1;
  if ( !v52 )
  {
    if ( (unsigned int)v11 < 0x28 )
      return (unsigned int)-1073741789;
    if ( a5 )
      return (unsigned int)-1073741811;
    v58 = v10->m256i_i32[3];
    if ( PopVideoHighPrecisionBrightnessEnabled )
    {
      if ( v58 == -1 )
        return (unsigned int)-1073741637;
    }
    else if ( v58 != -1 )
    {
      PopVideoHighPrecisionBrightnessEnabled = 1;
      ZwUpdateWnfStateData(
        (__int64)&WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
        (__int64)&PopVideoHighPrecisionBrightnessEnabled);
      PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF);
    }
    v142[0] = v10->m256i_i32[2];
    v142[1] = v10->m256i_i32[3];
    v142[2] = v10->m256i_i32[4];
    v142[3] = v10->m256i_i32[5];
    v142[4] = v10->m256i_i32[6];
    v142[5] = v10->m256i_i32[7];
    v142[6] = v10[1].m256i_i32[0];
    v142[7] = v10[1].m256i_i32[1];
    PopBroadcastSessionInfo(4LL, 32LL, v142);
    return 0;
  }
  v53 = v52 - 1;
  if ( !v53 )
  {
    if ( (unsigned int)v11 >= 0xC )
    {
      if ( !a5 )
      {
        if ( v10->m256i_i8[8] )
          PopScreenOn(a1, a2, a3, 0LL);
        else
          PopScreenOff(30LL);
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741789;
  }
  v54 = v53 - 1;
  if ( v54 )
  {
    v55 = v54 - 1;
    if ( v55 )
    {
      if ( v55 != 1 || (_DWORD)v11 != 12 )
        return (unsigned int)-1073741811;
      LODWORD(v134) = v10->m256i_i32[2];
      PopSetPowerSettingValueAcDc(&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4u, &v134);
    }
    else
    {
      if ( (unsigned int)v11 < 0x10 )
        return (unsigned int)-1073741789;
      if ( a5 )
        return (unsigned int)-1073741811;
      PopTransitionCheckpoint(v10->m256i_i32[2], v10->m256i_i32[3]);
    }
    return 0;
  }
  if ( (unsigned int)v11 < 0xC )
    return (unsigned int)-1073741789;
  if ( a5 )
    return (unsigned int)-1073741811;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v56 = PpmPerfQosDisableRefcount;
  if ( v10->m256i_i8[8] )
  {
    if ( PpmPerfQosDisableRefcount == -1 )
    {
      PagesFromHiberFile = -1073741675;
    }
    else
    {
      v56 = PpmPerfQosDisableRefcount + 1;
      PagesFromHiberFile = 0;
      ++PpmPerfQosDisableRefcount;
    }
    v57 = v56 == 1;
  }
  else
  {
    if ( PpmPerfQosDisableRefcount )
    {
      PagesFromHiberFile = 0;
      v56 = --PpmPerfQosDisableRefcount;
    }
    else
    {
      PagesFromHiberFile = -1073741637;
    }
    v57 = v56 == 0;
  }
  if ( v57 )
    PpmPerfUpdateDomainPolicy(0LL);
  else
    PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)PagesFromHiberFile;
}
