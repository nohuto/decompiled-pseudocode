int __fastcall ExpQuerySystemInformation(
        int a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int Length,
        unsigned int *a6)
{
  ULONG v8; // r13d
  PVOID v9; // rdi
  __int64 v10; // rcx
  ULONG v11; // r8d
  LOGICAL_PROCESSOR_RELATIONSHIP v12; // r14d
  __int64 v13; // r9
  int v14; // r15d
  __int64 v15; // r8
  void *v16; // r10
  __int64 v17; // rdx
  int SystemBasicInformation; // eax
  ULONG ActiveProcessorCount; // eax
  int result; // eax
  struct _LIST_ENTRY *Blink; // rcx
  ULONG v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // r14d
  _DWORD *v25; // r15
  ULONG v26; // ecx
  __int64 v27; // rcx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v28; // r15
  ULONG v29; // eax
  struct _PROCESSOR_NUMBER *p_ProcNumber; // rax
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // cx
  unsigned __int16 v33; // cx
  unsigned __int16 v34; // cx
  unsigned __int16 v35; // cx
  PVOID v36; // rsi
  struct _LIST_ENTRY *v37; // rsi
  __int64 v38; // rcx
  struct _LIST_ENTRY *v39; // rax
  __int64 v40; // r14
  __int64 v41; // rcx
  _OWORD *v42; // rax
  __int64 v43; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v45; // rcx
  int ModuleInformation; // eax
  struct _LIST_ENTRY *v47; // rsi
  __int64 v48; // rcx
  int v49; // r14d
  unsigned __int64 v50; // rdi
  char v51; // si
  unsigned int v52; // esi
  _DWORD *v53; // rdx
  __int64 v54; // r14
  __int64 v55; // rdx
  unsigned __int16 ProcessPartitionId; // ax
  unsigned __int16 v57; // cx
  unsigned __int16 v58; // cx
  unsigned __int16 v59; // cx
  int v60; // edx
  int v61; // r8d
  unsigned int v62; // ecx
  __int64 v63; // rax
  unsigned __int16 v64; // ax
  unsigned __int16 v65; // cx
  __int64 v66; // rcx
  _QWORD *v67; // rax
  unsigned __int8 v68; // r14
  _DWORD *v69; // rdi
  int v70; // eax
  struct _KTHREAD *v71; // rax
  int v72; // ecx
  void *v73; // rcx
  PVOID v74; // rsi
  unsigned int v75; // eax
  __int64 v76; // rax
  bool IsUserCetAllowed; // al
  int v78; // ecx
  bool IsKernelCetEnabled; // al
  int v80; // r8d
  bool IsKernelCetAuditModeEnabled; // al
  int v82; // edx
  unsigned int v83; // r9d
  int v84; // r10d
  int v85; // edx
  __int64 v86; // rdx
  int v87; // eax
  unsigned __int64 v88; // r14
  _DWORD *Pool2; // rdi
  unsigned __int64 v90; // rdx
  struct _KTHREAD *v91; // r14
  NTSTATUS v92; // edi
  unsigned int v93; // ecx
  unsigned int v94; // ecx
  unsigned int v95; // eax
  unsigned int v96; // r14d
  unsigned int v97; // esi
  __int64 ProcessorIndexFromNumber; // rcx
  _QWORD *v99; // rax
  ULONG v100; // eax
  int v101; // ecx
  int v102; // ecx
  int v103; // edx
  __int64 v104; // r8
  __int64 v105; // r9
  PVOID v106; // rdi
  __int64 v107; // rax
  int v108; // esi
  PVOID v109; // r14
  unsigned int v110; // eax
  bool v111; // cf
  __int64 v112; // rcx
  __int64 CurrentServerSilo; // rax
  __int16 NestedPageProtectionFlags; // di
  char v115; // cl
  __int64 v116; // rdx
  __int64 v117; // rcx
  char IsEncryptionKeyAvailable; // al
  unsigned __int16 *v119; // rax
  unsigned __int16 *v120; // rsi
  unsigned __int16 *v121; // rax
  __int64 v122; // r14
  struct _MDL *v123; // rax
  unsigned __int8 v124; // r14
  int v125; // eax
  int VerifierInformation; // [rsp+40h] [rbp-7E8h]
  ULONG v127; // [rsp+44h] [rbp-7E4h] BYREF
  unsigned __int8 PreviousMode; // [rsp+48h] [rbp-7E0h]
  unsigned __int16 v129; // [rsp+4Ch] [rbp-7DCh]
  int v130; // [rsp+50h] [rbp-7D8h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+54h] [rbp-7D4h] BYREF
  int v132; // [rsp+58h] [rbp-7D0h]
  unsigned int Size; // [rsp+5Ch] [rbp-7CCh]
  unsigned int Size_4; // [rsp+60h] [rbp-7C8h]
  PVOID P; // [rsp+68h] [rbp-7C0h]
  unsigned __int16 v136; // [rsp+70h] [rbp-7B8h]
  _BYTE v137[4]; // [rsp+74h] [rbp-7B4h] BYREF
  unsigned int v138; // [rsp+78h] [rbp-7B0h]
  unsigned int v139; // [rsp+7Ch] [rbp-7ACh] BYREF
  unsigned int *v140; // [rsp+80h] [rbp-7A8h]
  char v141; // [rsp+B9h] [rbp-76Fh]
  _QWORD *v142; // [rsp+110h] [rbp-718h]
  struct _PROCESSOR_NUMBER *v143; // [rsp+118h] [rbp-710h]
  PVOID Object; // [rsp+120h] [rbp-708h] BYREF
  int v145; // [rsp+128h] [rbp-700h] BYREF
  int v146; // [rsp+12Ch] [rbp-6FCh] BYREF
  unsigned int v147; // [rsp+130h] [rbp-6F8h] BYREF
  int v148; // [rsp+134h] [rbp-6F4h] BYREF
  int v149; // [rsp+138h] [rbp-6F0h] BYREF
  int v150; // [rsp+13Ch] [rbp-6ECh]
  int v151; // [rsp+140h] [rbp-6E8h]
  PVOID v152; // [rsp+148h] [rbp-6E0h] BYREF
  PVOID v153; // [rsp+150h] [rbp-6D8h] BYREF
  __int64 v154; // [rsp+158h] [rbp-6D0h]
  HANDLE ProcessId[2]; // [rsp+160h] [rbp-6C8h]
  unsigned __int64 v156; // [rsp+170h] [rbp-6B8h]
  __int64 v157; // [rsp+178h] [rbp-6B0h] BYREF
  __int64 v158; // [rsp+180h] [rbp-6A8h] BYREF
  PVOID v159; // [rsp+188h] [rbp-6A0h] BYREF
  __int64 v160; // [rsp+190h] [rbp-698h]
  PVOID v161; // [rsp+198h] [rbp-690h] BYREF
  __int128 v162; // [rsp+1A0h] [rbp-688h] BYREF
  unsigned int v163; // [rsp+1B4h] [rbp-674h]
  __int64 v164; // [rsp+1E8h] [rbp-640h]
  int v165; // [rsp+5E8h] [rbp-240h]
  __int128 v166; // [rsp+5F0h] [rbp-238h] BYREF
  PVOID BaseAddress[2]; // [rsp+600h] [rbp-228h]
  __int128 v168; // [rsp+610h] [rbp-218h]
  volatile void *v169; // [rsp+620h] [rbp-208h]
  _OWORD Src[27]; // [rsp+630h] [rbp-1F8h] BYREF

  Size = a3;
  P = a2;
  v8 = Length;
  v140 = a6;
  v9 = 0LL;
  v139 = 0;
  v157 = 0LL;
  v147 = 0;
  v148 = 0;
  v132 = 0;
  v146 = 0;
  v129 = 0;
  v136 = 0;
  v162 = 0LL;
  Object = 0LL;
  ProcNumber = 0;
  *(_OWORD *)BaseAddress = 0LL;
  v168 = 0LL;
  v153 = 0LL;
  v152 = 0LL;
  v151 = 0;
  v158 = 0LL;
  v166 = 0LL;
  memset(Src, 0, sizeof(Src));
  VerifierInformation = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 < 88 && a1 >= 73 || a1 < 5 || a1 >= 174 && a1 < 188 )
    {
LABEL_4:
      v11 = 4;
LABEL_5:
      v130 = 1;
    }
    else
    {
      switch ( a1 )
      {
        case 12:
          v11 = 8;
          goto LABEL_5;
        case 35:
        case 145:
        case 147:
        case 149:
        case 158:
        case 163:
        case 169:
        case 202:
        case 227:
          v130 = 1;
          v11 = 1;
          break;
        default:
          goto LABEL_4;
      }
    }
    ProbeForWrite((volatile void *)a4, Length, v11);
    if ( a6 )
    {
      v10 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
  }
  else
  {
    v130 = 1;
  }
  v127 = 0;
  v12 = RelationAll;
  v150 = 0xFFFF;
  v13 = 0LL;
  v138 = 0;
  LOWORD(v14) = 0;
  LODWORD(v143) = 0;
  v136 = 0;
  v129 = 0;
  v154 = 0LL;
  v164 = 0LL;
  v160 = 0LL;
  Size_4 = 9;
  v151 = 9;
  if ( a1 < 83 && a1 >= 74 || a1 >= 182 && a1 < 230 || a1 < 2 )
  {
LABEL_12:
    v15 = v129;
LABEL_13:
    v16 = 0LL;
LABEL_14:
    v17 = Size_4;
LABEL_15:
    if ( a1 == 79 )
    {
      SystemBasicInformation = PfQuerySuperfetchInformation(v10, a4, Length, PreviousMode, &v127);
    }
    else if ( a1 == 185 )
    {
      SystemBasicInformation = WbDispatchOperation((void *)a4, Length);
    }
    else
    {
      switch ( a1 )
      {
        case 0:
        case 114:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemBasicInformation(a4);
            v127 = 64;
            break;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 1:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemProcessorInformation(a4);
            v127 = 12;
            break;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 2:
          if ( Length >= 0x138 )
          {
            if ( Length > 0x158 )
              v8 = 344;
            ExpQuerySystemPerformanceInformation((unsigned int)v13, a4, v8);
            goto LABEL_42;
          }
          if ( a6 )
            *a6 = 344;
          return -1073741820;
        case 3:
          if ( Length <= 0x30 )
          {
            KeQueryBootTimeValues((_QWORD *)Src + 1, (LARGE_INTEGER *)Src, &Src[2]);
            Blink = PsGetCurrentServerSiloGlobals()[78].Blink;
            *(_QWORD *)&Src[1] = Blink[27].Blink;
            DWORD2(Src[1]) = Blink[27].Flink;
            *((_QWORD *)&Src[2] + 1) = MEMORY[0xFFFFF780000003B0];
            memmove((void *)a4, Src, Length);
            goto LABEL_42;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 4:
        case 10:
        case 25:
        case 29:
        case 96:
          return -1073741822;
        case 5:
        case 57:
        case 148:
          SystemBasicInformation = ExpGetProcessInformation(a4, Length, &v127, 0LL, a1);
          break;
        case 6:
          return -1073741637;
        case 7:
          if ( Length == 24 )
          {
            *(_DWORD *)a4 = dword_140D53888;
            *(_DWORD *)(a4 + 4) = dword_140D5388C;
            *(_DWORD *)(a4 + 8) = dword_140D53890;
            *(_DWORD *)(a4 + 12) = dword_140D53894;
            *(_DWORD *)(a4 + 16) = dword_140D5389C;
            *(_DWORD *)(a4 + 20) = dword_140D538A0;
            goto LABEL_192;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 8:
        case 141:
          v23 = 48;
          if ( a1 != 8 )
            v23 = 72;
          Size = v23;
          if ( !Length || Length % v23 )
          {
            if ( a6 )
              *a6 = v13 * v23;
            return -1073741820;
          }
          Size_4 = 0;
          v24 = 0;
          v132 = 0;
          while ( 1 )
          {
            v142 = (_QWORD *)a4;
            if ( v24 >= (unsigned int)v13 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = v24;
            ProcNumber.Reserved = 0;
            v25 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            v26 = Size_4;
            if ( Length < Size_4 + Size )
              goto LABEL_65;
            Size_4 += Size;
            PoGetIdleTimes(&ProcNumber, 0LL, (__int64)Src);
            v27 = (unsigned int)KeMaximumIncrement;
            *(_QWORD *)(a4 + 16) = (unsigned int)KeMaximumIncrement * (unsigned __int64)(unsigned int)v25[8274];
            *(_QWORD *)(a4 + 8) = v27 * DWORD1(Src[0]);
            *(_QWORD *)(a4 + 24) = v27 * (unsigned int)v25[8275];
            *(_QWORD *)(a4 + 32) = v27 * (unsigned int)v25[8276];
            *(_QWORD *)a4 = v27 * LODWORD(Src[0]);
            *(_DWORD *)(a4 + 40) = v25[8272];
            if ( a1 == 141 )
            {
              *(_QWORD *)(a4 + 48) = v27 * (unsigned int)v25[8283];
              *(_DWORD *)(a4 + 44) = 0;
              *(_QWORD *)(a4 + 56) = 0LL;
              *(_QWORD *)(a4 + 64) = 0LL;
            }
            a4 += Size;
            v132 = ++v24;
            LOWORD(v14) = (_WORD)v143;
            LODWORD(v13) = v138;
          }
          v26 = Size_4;
          goto LABEL_65;
        case 9:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag;
            goto LABEL_164;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 11:
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode) )
            return -1073741790;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          ModuleInformation = ExpQueryModuleInformation(v45, a4, Length, &v127);
          goto LABEL_113;
        case 12:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode) )
            return -1073741790;
          SystemBasicInformation = ExpGetLockInformation(a4, Length, &v127);
          break;
        case 13:
          if ( Length >= 0x128 )
            goto LABEL_372;
          if ( a6 )
            *a6 = 296;
          return -1073741820;
        case 14:
        case 15:
        case 19:
LABEL_372:
          VerifierInformation = -1073741822;
          goto LABEL_30;
        case 16:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode) )
          {
            SystemBasicInformation = ExpGetHandleInformation(a4, Length, &v127);
            break;
          }
          return -1073741790;
        case 17:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode) )
            return -1073741790;
          SystemBasicInformation = ExpGetObjectInformation(a4, Length, &v127);
          break;
        case 18:
        case 144:
          if ( a1 == 18 )
            v75 = 32;
          else
            v75 = 40;
          if ( Length >= v75 )
          {
            SystemBasicInformation = MmGetPageFileInformation(
                                       (unsigned int)&v127,
                                       a4,
                                       Length,
                                       a1 == 144,
                                       (__int64)&v127);
            break;
          }
          if ( a6 )
            *a6 = v75;
          return -1073741820;
        case 21:
        case 81:
        case 119:
        case 120:
          if ( Length >= 0x40 )
          {
            v49 = 2;
            if ( a1 == 119 )
            {
              v49 = 3;
            }
            else if ( a1 == 120 )
            {
              v49 = 4;
            }
            MmQuerySystemWorkingSetInformation(v49, Src);
            *(_OWORD *)a4 = Src[0];
            *(_DWORD *)(a4 + 16) = Src[1];
            v132 = 64;
            *(_QWORD *)(a4 + 24) = *((_QWORD *)&Src[1] + 1);
            *(_OWORD *)(a4 + 32) = Src[2];
            *(_OWORD *)(a4 + 48) = Src[3];
            v127 = 64;
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 22:
          if ( Length >= 0x30 )
          {
            SystemBasicInformation = ExGetPoolTagInfo(a4, Length, &v127, v13);
            break;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 23:
          v127 = 24 * v13;
          if ( Length >= 24 * (int)v13 )
          {
            v52 = 0;
            v132 = 0;
            while ( 1 )
            {
              v142 = (_QWORD *)a4;
              if ( v52 >= (unsigned int)v13 )
                break;
              ProcNumber.Group = v14;
              ProcNumber.Number = v52;
              ProcNumber.Reserved = 0;
              v53 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              *(_DWORD *)a4 = v53[2895];
              *(_DWORD *)(a4 + 4) = v53[3287];
              *(_DWORD *)(a4 + 8) = v53[3307];
              *(_DWORD *)(a4 + 12) = KeTimeIncrement;
              *(_DWORD *)(a4 + 16) = 0;
              *(_DWORD *)(a4 + 20) = 0;
              a4 += 24LL;
              v132 = ++v52;
              LODWORD(v13) = v138;
            }
            goto LABEL_122;
          }
          if ( a6 )
            *a6 = 24 * v13;
          return -1073741820;
        case 24:
          if ( Length == 20 )
          {
            *(_DWORD *)(a4 + 4) = KiMaximumDpcQueueDepth;
            *(_DWORD *)(a4 + 8) = KiMinimumDpcRate;
            *(_DWORD *)(a4 + 12) = KiAdjustDpcThreshold;
            *(_DWORD *)(a4 + 16) = KiIdealDpcRate;
            goto LABEL_428;
          }
          if ( a6 )
            *a6 = 20;
          return -1073741820;
        case 28:
          if ( Length != 24 && Length != 12 )
          {
            if ( a6 )
              *a6 = 12;
            return -1073741820;
          }
          LOBYTE(v10) = 1;
          ExAcquireTimeRefreshLock(v10);
          v50 = KeTimeAdjustmentFrequency;
          v51 = KeTimeSynchronization;
          ExReleaseResourceLite(&ExpTimeRefreshLock);
          KeLeaveCriticalRegion();
          if ( Length == 24 )
          {
            *(_QWORD *)a4 = v50;
            *(_QWORD *)(a4 + 8) = MEMORY[0xFFFFF78000000300];
            *(_BYTE *)(a4 + 16) = v51;
          }
          else
          {
            *(_DWORD *)a4 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)(unsigned int)KeMaximumIncrement / v50;
            *(_DWORD *)(a4 + 4) = KeMaximumIncrement;
            *(_BYTE *)(a4 + 8) = v51;
          }
LABEL_42:
          v127 = v8;
          goto LABEL_30;
        case 31:
          SystemBasicInformation = EtwQueryPerformanceTraceInformation(a4, Length, PreviousMode, &v127);
          break;
        case 33:
          if ( Length >= 0x10 )
          {
            v127 = 16;
            v60 = 0;
            v61 = 0;
            v62 = 0;
            v132 = 0;
            while ( v62 < (unsigned int)v13 )
            {
              v63 = KiProcessorBlock[v62];
              v60 += *(_DWORD *)(v63 + 34488);
              v61 += *(_DWORD *)(v63 + 33136);
              ++v62;
            }
            v132 = v62;
            *(_DWORD *)a4 = v60;
            *(_DWORD *)(a4 + 4) = v61;
            *(_DWORD *)(a4 + 8) = 0;
            *(_DWORD *)(a4 + 12) = 0;
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 35:
          if ( Length >= 2 )
          {
            *(_BYTE *)a4 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerNotPresent;
            v127 = 2;
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 2;
          return -1073741820;
        case 36:
          if ( Length >= 0x30 )
          {
            v93 = 0;
            v132 = 0;
            while ( v93 < (unsigned int)v13 )
              LODWORD(v9) = *(_DWORD *)(KiProcessorBlock[v93++] + 11580) + (_DWORD)v9;
            v132 = v93;
            *(_DWORD *)a4 = (_DWORD)v9;
            *(_DWORD *)(a4 + 4) = KeThreadSwitchCounters;
            *(_DWORD *)(a4 + 8) = dword_140C41EE8;
            *(_DWORD *)(a4 + 12) = dword_140C41EE4;
            *(_DWORD *)(a4 + 16) = dword_140C41EEC;
            *(_DWORD *)(a4 + 20) = dword_140C41EF0;
            *(_DWORD *)(a4 + 24) = dword_140C41EF8;
            *(_DWORD *)(a4 + 28) = dword_140C41EF4;
            *(_DWORD *)(a4 + 32) = dword_140C41EFC;
            *(_DWORD *)(a4 + 36) = dword_140C41F00;
            *(_DWORD *)(a4 + 40) = dword_140C41F04;
            *(_DWORD *)(a4 + 44) = dword_140C41F08;
            v127 = 48;
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 37:
          if ( Length >= 0x10 )
          {
            SystemBasicInformation = CmQueryRegistryQuotaInformation(a4, v17, v15, v13);
            v127 = 16;
            break;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 42:
          v127 = 48 * v13;
          if ( Length < 48 * (int)v13 )
            goto LABEL_258;
          while ( 1 )
          {
            v132 = (int)v9;
            v142 = (_QWORD *)a4;
            if ( (unsigned int)v9 >= (unsigned int)v13 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = (unsigned __int8)v9;
            ProcNumber.Reserved = 0;
            PoGetIdleTimes(&ProcNumber, (__int64)Src, 0LL);
            *(_OWORD *)a4 = Src[0];
            *(_OWORD *)(a4 + 16) = Src[1];
            *(_OWORD *)(a4 + 32) = Src[2];
            a4 += 48LL;
            LODWORD(v9) = (_DWORD)v9 + 1;
            LODWORD(v13) = v138;
          }
          goto LABEL_30;
        case 43:
          if ( Length >= 0x18 )
          {
            v127 = Length;
            SystemBasicInformation = ExpQueryLegacyDriverInformation(a4, &v127, v15, v13);
            break;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 44:
          if ( Length < 0xAC )
          {
            if ( a6 )
              *a6 = 172;
            return -1073741820;
          }
          v47 = PsGetCurrentServerSiloGlobals()[78].Blink;
          LOBYTE(v48) = 1;
          ExAcquireTimeRefreshLock(v48);
          Src[0] = *v47;
          Src[1] = v47[1];
          Src[2] = v47[2];
          Src[3] = v47[3];
          Src[4] = v47[4];
          Src[5] = v47[5];
          Src[6] = v47[6];
          Src[7] = v47[7];
          Src[8] = v47[8];
          Src[9] = v47[9];
          *(_QWORD *)&Src[10] = v47[10].Flink;
          DWORD2(Src[10]) = v47[10].Blink;
          ExReleaseResourceLite(&ExpTimeRefreshLock);
          KeLeaveCriticalRegion();
          *(_OWORD *)a4 = Src[0];
          *(_OWORD *)(a4 + 16) = Src[1];
          *(_OWORD *)(a4 + 32) = Src[2];
          *(_OWORD *)(a4 + 48) = Src[3];
          *(_OWORD *)(a4 + 64) = Src[4];
          *(_OWORD *)(a4 + 80) = Src[5];
          *(_OWORD *)(a4 + 96) = Src[6];
          *(_OWORD *)(a4 + 112) = Src[7];
          *(_OWORD *)(a4 + 128) = Src[8];
          *(_OWORD *)(a4 + 144) = Src[9];
          *(_QWORD *)(a4 + 160) = *(_QWORD *)&Src[10];
          *(_DWORD *)(a4 + 168) = DWORD2(Src[10]);
          v127 = 172;
LABEL_122:
          VerifierInformation = 0;
          goto LABEL_30;
        case 45:
          SystemBasicInformation = ExpGetLookasideInformation(a4, Length, &v127);
          break;
        case 50:
          if ( Length == 8 )
          {
            *(_QWORD *)a4 = 0xFFFF800000000000uLL;
            goto LABEL_119;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 51:
          if ( Length >= 0x90 )
          {
            SystemBasicInformation = VfGetVerifierInformation((void *)a4, Length, &v127, 0);
            break;
          }
          if ( a6 )
            *a6 = 144;
          return -1073741820;
        case 53:
          if ( Length >= 0x10 )
          {
            v146 = *(_DWORD *)a4;
            v169 = *(volatile void **)(a4 + 8);
            v163 = *(_DWORD *)(a4 + 4);
            ProbeForWrite(v169, v163, 4u);
            SystemBasicInformation = ExpGetProcessInformation((__int64)v169, v163, &v127, &v146, 5);
            break;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 55:
          SystemBasicInformation = ExpQueryNumaProcessorMap(a4, Length, &v127, v13);
          break;
        case 56:
          SystemBasicInformation = PfSnQueryPrefetcherInformation(v10, a4, Length, PreviousMode, &v127);
          break;
        case 58:
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = KeGetRecommendedSharedDataAlignment();
            goto LABEL_164;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 59:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( MEMORY[0xFFFFF780000002E0] != -1
            || (result = ExpReadComPlusPackage(v10, v17, v15, v13), VerifierInformation = result, result >= 0) )
          {
            *(_DWORD *)a4 = MEMORY[0xFFFFF780000002E0];
            goto LABEL_164;
          }
          return result;
        case 60:
          SystemBasicInformation = ExpQueryNumaAvailableMemory(a4, Length, &v127, v13);
          break;
        case 61:
          v127 = 80 * v13;
          if ( Length < 80 * (int)v13 )
            goto LABEL_258;
          v142 = (_QWORD *)a4;
          while ( 1 )
          {
            v132 = (int)v9;
            if ( (unsigned int)v9 >= (unsigned int)v13 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = (unsigned __int8)v9;
            ProcNumber.Reserved = 0;
            v54 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)Src, 0LL, &v157);
            memset((void *)a4, 0, 0x50uLL);
            v55 = (unsigned int)KeMaximumIncrement;
            *(_QWORD *)(a4 + 40) = (unsigned int)KeMaximumIncrement
                                 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v54 + 33092) + *(_DWORD *)(v54 + 33096));
            *(_QWORD *)(a4 + 48) = v55 * *(unsigned int *)(*(_QWORD *)(v54 + 24) + 652LL);
            if ( BYTE12(Src[1]) )
            {
              *(_BYTE *)a4 = BYTE8(Src[0]);
              *(_BYTE *)(a4 + 7) = BYTE12(Src[0]);
              *(_BYTE *)(a4 + 8) = Src[1];
              *(_DWORD *)(a4 + 12) = 1;
            }
            *(_QWORD *)(a4 + 72) = v157;
            a4 += 80LL;
            v142 = (_QWORD *)a4;
            LODWORD(v9) = (_DWORD)v9 + 1;
            LODWORD(v13) = v138;
          }
          goto LABEL_30;
        case 62:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemEmulationBasicInformation(a4);
            v127 = 64;
            break;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 63:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(a4);
            v127 = 12;
            break;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 64:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode) )
            return -1073741790;
          SystemBasicInformation = ExpGetHandleInformationEx(a4, Length, &v127);
          break;
        case 65:
          if ( Length >= 4 )
          {
            v94 = 0;
            v132 = 0;
            while ( v94 < (unsigned int)v13 )
              LODWORD(v9) = *(_DWORD *)(KiProcessorBlock[v94++] + 33532) + (_DWORD)v9;
            v132 = v94;
            *(_DWORD *)a4 = (_DWORD)v9;
            goto LABEL_164;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 66:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode) )
            return -1073741790;
          SystemBasicInformation = ExGetBigPoolInfo((_DWORD *)a4, Length, &v127);
          break;
        case 69:
        case 236:
        case 237:
          goto LABEL_202;
        case 70:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = ObpObjectSecurityMode;
            goto LABEL_164;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 72:
          if ( Length != 8 )
            goto LABEL_479;
          v86 = (unsigned int)(v17 - 7);
          if ( (_DWORD)v86 )
          {
            if ( (_DWORD)v86 != 1 )
              return -1073741637;
            *(_DWORD *)a4 = 8;
            v87 = ((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))off_140C01CE0[0])(
                    v10,
                    v86,
                    v15,
                    v13);
          }
          else
          {
            *(_DWORD *)a4 = 7;
            v87 = off_140C01CE8[0] != xKdEnumerateDebuggingDevices;
          }
          *(_DWORD *)(a4 + 4) = v87;
          goto LABEL_119;
        case 73:
          VerifierInformation = KeBuildLogicalProcessorSystemInformation((unsigned __int16)v14, a4, Length, &v127);
          goto LABEL_30;
        case 76:
          SystemBasicInformation = ExpGetSystemFirmwareTableInformation((void *)a4);
          break;
        case 77:
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode) )
            return -1073741790;
          if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            v130 = 0;
          v71 = KeGetCurrentThread();
          --v71->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          ModuleInformation = ExpQueryModuleInformationEx(v72, a4, Length, v130, (__int64)&v127);
LABEL_113:
          VerifierInformation = ModuleInformation;
          ExReleaseResourceLite(&PsLoadedModuleResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_30;
        case 80:
          SystemBasicInformation = MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, (_OWORD *)a4, Length, v13, &v127);
          break;
        case 83:
          v95 = 8 * v13;
          v127 = 8 * v13;
          if ( Length < 8 )
            goto LABEL_500;
          if ( Length >= v95 )
            v96 = v138;
          else
            v96 = Length >> 3;
          v97 = Length < v95 ? 0xC0000004 : 0;
          v142 = (_QWORD *)a4;
          KeFlushProcessWriteBuffers(1);
          while ( 1 )
          {
            v132 = (int)v9;
            if ( (unsigned int)v9 >= v96 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = (unsigned __int8)v9;
            ProcNumber.Reserved = 0;
            ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
            v99 = v142;
            *v142 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[ProcessorIndexFromNumber] + 24) + 72LL);
            v142 = v99 + 1;
            LODWORD(v9) = v132 + 1;
            LOWORD(v14) = v136;
          }
          goto LABEL_491;
        case 86:
          SystemBasicInformation = ObQueryRefTraceInformation((volatile void *)a4, Length);
          break;
        case 87:
          v127 = 8;
          if ( Length != 8 )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          *(_DWORD *)a4 = MmSpecialPoolTag;
          LOBYTE(v9) = MmSpecialPoolCatchOverruns != 0;
          *(_DWORD *)(a4 + 4) = (_DWORD)v9;
          goto LABEL_30;
        case 88:
          *(_OWORD *)ProcessId = 0LL;
          v156 = 0LL;
          v127 = 24;
          if ( Length != 24 )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          *(_OWORD *)ProcessId = *(_OWORD *)a4;
          v156 = *(_QWORD *)(a4 + 16);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            goto LABEL_479;
          if ( PreviousMode && WORD1(ProcessId[1]) )
          {
            if ( (v156 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v90 = v156 + WORD1(ProcessId[1]);
            if ( v90 > 0x7FFFFFFF0000LL || v90 < v156 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v91 = KeGetCurrentThread();
          v145 = WORD1(ProcessId[1]);
          --v91->KernelApcDisable;
          v92 = PsLookupProcessByProcessId(ProcessId[0], (PEPROCESS *)&Object);
          if ( v92 < 0 )
          {
            KeLeaveCriticalRegionThread((__int64)v91);
            return v92;
          }
          VerifierInformation = PsQueryFullProcessImageName(Object, a4 + 8, v156, &v145);
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          KeLeaveCriticalRegionThread((__int64)v91);
          if ( VerifierInformation == -1073741820 )
            *(_WORD *)(a4 + 10) = v145;
          goto LABEL_30;
        case 90:
          v127 = 32;
          if ( Length < 0x14 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          *(_OWORD *)a4 = *(_OWORD *)&ExpBootEnvironmentInformation;
          *(_DWORD *)(a4 + 16) = dword_140C316F0;
          if ( Length < v127 )
LABEL_428:
            v127 = 20;
          else
            *(_QWORD *)(a4 + 24) = qword_140C316F8;
          goto LABEL_30;
        case 91:
          SystemBasicInformation = HvlQueryEnlightenmentInfo(a4, Length, v15, &v127);
          break;
        case 92:
          if ( Length != 40 )
          {
            if ( a6 )
              *a6 = 40;
            return -1073741820;
          }
          VerifierInformation = VfGetVerifierInformationEx(a4, v17, v15, v13);
          if ( VerifierInformation >= 0 )
            LODWORD(v9) = 40;
          v127 = (unsigned int)v9;
          goto LABEL_30;
        case 95:
          if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741790;
          if ( Length >= 0x40 )
          {
            SystemBasicInformation = ExpCovQueryInformation(a4, Length, &v127);
            break;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 98:
          SystemBasicInformation = IoQuerySystemDeviceName(98LL, a4, Length, &v127);
          break;
        case 99:
          SystemBasicInformation = IoQuerySystemDeviceName(99LL, a4, Length, &v127);
          break;
        case 100:
          WORD4(v162) = v14;
          *(_QWORD *)&v162 = KeQueryGroupAffinity(v14);
          v88 = (0x101010101010101LL
               * (((((_QWORD)v162 - (((unsigned __int64)v162 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + ((((unsigned __int64)v162 - (((unsigned __int64)v162 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + (((((_QWORD)v162 - (((unsigned __int64)v162 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + ((((unsigned __int64)v162 - (((unsigned __int64)v162 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          VerifierInformation = PpmCapturePerformanceDistribution(
                                  0LL,
                                  0,
                                  (unsigned int)((0x101010101010101LL
                                                * (((((_QWORD)v162
                                                    - (((unsigned __int64)v162 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                  + ((((unsigned __int64)v162
                                                     - (((unsigned __int64)v162 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                  + (((((_QWORD)v162
                                                      - (((unsigned __int64)v162 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + ((((unsigned __int64)v162
                                                       - (((unsigned __int64)v162 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                  (__int64)&v162,
                                  (int *)&v139);
          SystemBasicInformation = -1073741820;
          if ( VerifierInformation != -1073741820 )
            goto LABEL_30;
          if ( v139 > Length )
          {
            v127 = v139;
            break;
          }
          Pool2 = (_DWORD *)ExAllocatePool2(64LL, v139, 1951223888LL);
          P = Pool2;
          if ( Pool2 )
          {
            VerifierInformation = PpmCapturePerformanceDistribution(Pool2, v139, v88, (__int64)&v162, (int *)&v127);
            if ( VerifierInformation >= 0 )
              memmove((void *)a4, Pool2, v127);
            ExFreePoolWithTag(Pool2, 0x744D5050u);
          }
          else
          {
            VerifierInformation = -1073741670;
          }
          goto LABEL_30;
        case 101:
          SystemBasicInformation = ExpQueryNumaProximityNode(a4, Length, &v127, v13);
          break;
        case 102:
          if ( Length >= 0x1B0 )
          {
            v37 = PsGetCurrentServerSiloGlobals()[78].Blink;
            LOBYTE(v38) = 1;
            ExAcquireTimeRefreshLock(v38);
            v39 = (struct _LIST_ENTRY *)Src;
            v40 = 3LL;
            v41 = 3LL;
            do
            {
              *v39 = *v37;
              v39[1] = v37[1];
              v39[2] = v37[2];
              v39[3] = v37[3];
              v39[4] = v37[4];
              v39[5] = v37[5];
              v39[6] = v37[6];
              v39 += 8;
              v39[-1] = v37[7];
              v37 += 8;
              --v41;
            }
            while ( v41 );
            *v39 = *v37;
            v39[1] = v37[1];
            v39[2] = v37[2];
            ExReleaseResourceLite(&ExpTimeRefreshLock);
            KeLeaveCriticalRegion();
            v42 = Src;
            do
            {
              *(_OWORD *)a4 = *v42;
              *(_OWORD *)(a4 + 16) = v42[1];
              *(_OWORD *)(a4 + 32) = v42[2];
              *(_OWORD *)(a4 + 48) = v42[3];
              *(_OWORD *)(a4 + 64) = v42[4];
              *(_OWORD *)(a4 + 80) = v42[5];
              *(_OWORD *)(a4 + 96) = v42[6];
              a4 += 128LL;
              *(_OWORD *)(a4 - 16) = v42[7];
              v42 += 8;
              --v40;
            }
            while ( v40 );
            *(_OWORD *)a4 = *v42;
            *(_OWORD *)(a4 + 16) = v42[1];
            *(_OWORD *)(a4 + 32) = v42[2];
            v127 = 432;
            VerifierInformation = 0;
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 432;
          return -1073741820;
        case 103:
          SystemBasicInformation = SeCodeIntegrityQueryInformation(a4, Length, &v127, v13);
          break;
        case 105:
          VerifierInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))off_140C020E8[0])(
                                  23LL,
                                  0LL,
                                  0LL,
                                  &v139);
          if ( VerifierInformation != -1073741820 )
            goto LABEL_202;
          v26 = v139;
          if ( Length < v139 || !a4 )
            goto LABEL_65;
          v68 = PreviousMode;
          if ( PreviousMode )
          {
            v69 = (_DWORD *)ExAllocatePool2(257LL, v139, 1868983881LL);
            P = v69;
            if ( !v69 )
            {
              VerifierInformation = -1073741670;
              goto LABEL_30;
            }
            v26 = v139;
          }
          else
          {
            v69 = (_DWORD *)a4;
            P = (PVOID)a4;
          }
          v70 = ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, ULONG *))off_140C020E8[0])(23LL, v26, v69, &v127);
          VerifierInformation = v70;
          if ( !v68 )
            goto LABEL_30;
          if ( v70 >= 0 )
            goto LABEL_519;
          goto LABEL_520;
        case 106:
          VerifierInformation = -1073741821;
          goto LABEL_30;
        case 107:
        case 231:
          v28 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)Src;
          P = Src;
          v29 = 80;
          if ( Length < 0x50 )
            v29 = Length;
          v139 = v29;
          v127 = v29;
          if ( a1 == 231 )
            p_ProcNumber = &ProcNumber;
          else
            p_ProcNumber = 0LL;
          v143 = p_ProcNumber;
          while ( 2 )
          {
            VerifierInformation = KeQueryLogicalProcessorRelationship(p_ProcNumber, v12, v28, &v127);
            if ( VerifierInformation < 0 )
            {
              if ( VerifierInformation == -1073741820 )
              {
                if ( v127 <= Length )
                {
                  if ( v28 && v28 != (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)Src )
                    ExFreePoolWithTag(v28, 0);
                  v28 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(257LL, v127, 1868983881LL);
                  P = v28;
                  if ( v28 )
                  {
                    v139 = v127;
                    p_ProcNumber = v143;
                    continue;
                  }
                  VerifierInformation = -1073741670;
                }
                else
                {
                  VerifierInformation = -1073741820;
                }
              }
            }
            else
            {
              memmove((void *)a4, v28, v127);
              VerifierInformation = 0;
            }
            break;
          }
          if ( v28 && v28 != (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)Src )
            ExFreePoolWithTag(v28, 0);
          goto LABEL_30;
        case 108:
          v127 = 8 * v13;
          if ( Length < 8 )
            goto LABEL_500;
          if ( Length < 8 * (int)v13 )
          {
            LODWORD(v13) = Length >> 3;
            v138 = Length >> 3;
            VerifierInformation = -1073741820;
          }
          v142 = (_QWORD *)a4;
          while ( 1 )
          {
            v132 = (int)v9;
            if ( (unsigned int)v9 >= (unsigned int)v13 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = (unsigned __int8)v9;
            ProcNumber.Reserved = 0;
            v66 = KeGetProcessorIndexFromNumber(&ProcNumber);
            v67 = v142;
            *v142 = *(_QWORD *)(KiProcessorBlock[v66] + 33400);
            v142 = v67 + 1;
            LODWORD(v9) = v132 + 1;
            LOWORD(v14) = v136;
            LODWORD(v13) = v138;
          }
          goto LABEL_30;
        case 109:
          SystemBasicInformation = SmQueryStoreInformation(v10, a4, Length, PreviousMode, &v127);
          break;
        case 112:
          SystemBasicInformation = IoQueryVhdBootInformation(v10, a4, Length, &v127);
          break;
        case 113:
          SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)a4, Length, PreviousMode, &v127);
          break;
        case 115:
          if ( Size )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          v127 = 8;
          if ( Length < 8 )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          *(_DWORD *)a4 = DbgkErrorPortStartTimeout;
          *(_DWORD *)(a4 + 4) = DbgkErrorPortCommTimeout;
          goto LABEL_30;
        case 116:
          SystemBasicInformation = IoQueryLowPriorityIoInformation(v10, a4, Length, &v127);
          break;
        case 117:
          v127 = 1096;
          if ( Length != 1096 )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          if ( !PreviousMode )
          {
            SystemBasicInformation = ExQueryBootEntropyInformation(a4, v17, v15, v13);
            break;
          }
          return -1073741790;
        case 118:
          if ( Length >= 0x110 )
          {
            SystemBasicInformation = VfGetVerifierInformation((void *)a4, Length, &v127, 1);
            break;
          }
          if ( a6 )
            *a6 = 272;
          return -1073741820;
        case 121:
          v127 = 4 * (unsigned __int16)KeNumberNodes;
          if ( Length < v127 )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          v132 = 0;
          v83 = 0;
          v84 = 0;
          v85 = 0;
          while ( (unsigned int)v9 < (unsigned __int16)KeNumberNodes )
          {
            *(_DWORD *)(a4 + 4LL * v83) = *((_DWORD *)KeNodeDistance
                                          + v85
                                          + (unsigned __int16)v15 * (unsigned int)(unsigned __int16)KeNumberNodes);
            v83 = v84 + 1;
            v85 = v84 + 1;
            v132 = v84 + 1;
            LODWORD(v9) = ++v84;
          }
          goto LABEL_30;
        case 122:
          v127 = 8;
          if ( Length != 8 || !a4 )
            goto LABEL_258;
          v69 = (_DWORD *)ExAllocatePool2(257LL, 8LL, 1868983881LL);
          P = v69;
          if ( !v69 )
          {
            VerifierInformation = -1073741670;
            goto LABEL_30;
          }
          VerifierInformation = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, ULONG *))off_140C020E8[0])(
                                  26LL,
                                  8LL,
                                  v69,
                                  &v127);
          if ( VerifierInformation >= 0 )
          {
            *(_DWORD *)a4 = *v69;
            v102 = *(_DWORD *)(a4 + 4) ^ (*(_DWORD *)(a4 + 4) ^ v69[1]) & 1;
            *(_DWORD *)(a4 + 4) = v102;
            v103 = v102 ^ (v69[1] ^ v102) & 2;
            *(_DWORD *)(a4 + 4) = v103;
            *(_DWORD *)(a4 + 4) = v103 ^ (v69[1] ^ v103) & 4;
          }
          goto LABEL_520;
        case 123:
          if ( Length == 32 )
          {
            ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
            *(_QWORD *)&Src[0] = MmGetAvailablePages(ProcessPartitionId);
            *((_QWORD *)&Src[0] + 1) = MmGetTotalCommittedPages(v57);
            *(_QWORD *)&Src[1] = MmGetTotalCommitLimit(v58);
            *((_QWORD *)&Src[1] + 1) = MmGetPeakCommitment(v59);
            if ( *((_QWORD *)&Src[1] + 1) < *((_QWORD *)&Src[0] + 1) )
              *((_QWORD *)&Src[1] + 1) = *((_QWORD *)&Src[0] + 1);
            *(_OWORD *)a4 = Src[0];
            *(_OWORD *)(a4 + 16) = Src[1];
            goto LABEL_169;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 124:
          v127 = 12;
          if ( Length < 4 )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          v165 = *(_DWORD *)a4;
          if ( v165 != 1 )
          {
            VerifierInformation = -1073741637;
            goto LABEL_30;
          }
          if ( Length < 0xC )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 4) = 0;
          *(_DWORD *)(a4 + 8) = 1;
          *(_DWORD *)(a4 + 4) = 1;
          if ( MEMORY[0xFFFFF780000003C6] )
            *(_DWORD *)(a4 + 4) &= ~1u;
          goto LABEL_30;
        case 126:
          v127 = 32;
          if ( Length != 32 )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          VerifierInformation = BgkQueryBootGraphicsInformation(0LL, Src, v15, v13);
          if ( VerifierInformation < 0 )
            goto LABEL_30;
          if ( PreviousMode )
            *(_QWORD *)&Src[0] = 0LL;
          goto LABEL_244;
        case 128:
          if ( Size )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          v108 = MmEnumerateBadPages(&v153, v17, v15, v13);
          v109 = v153;
          if ( v153 )
            LODWORD(v9) = 8 * *(_DWORD *)v153;
          v127 = (unsigned int)v9;
          if ( Length < (unsigned int)v9 )
            v108 = -1073741820;
          VerifierInformation = v108;
          if ( v153 )
          {
            if ( v108 >= 0 )
              memmove((void *)a4, (char *)v153 + 8, (unsigned int)v9);
            ExFreePoolWithTag(v109, 0);
          }
          goto LABEL_30;
        case 133:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          SystemBasicInformation = ExpGetSystemPlatformBinary(a4, Length, PreviousMode);
          break;
        case 134:
          v127 = 32;
          if ( Length == 32 )
            SystemBasicInformation = ExHandleSPCall2(v10, a4, v15, v13);
          else
            SystemBasicInformation = -1073741820;
          break;
        case 135:
          v127 = 8;
          if ( Length < 8 )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          if ( (unsigned int)HvlQueryActiveProcessors(&v147, 0LL) )
          {
            VerifierInformation = -1073741637;
          }
          else
          {
            VerifierInformation = HvlQueryProcessorTopologyCount(0LL, &v148);
            if ( VerifierInformation )
            {
              VerifierInformation = -1073741637;
            }
            else
            {
              *(_DWORD *)a4 = v147;
              *(_DWORD *)(a4 + 4) = v148;
            }
          }
          goto LABEL_30;
        case 136:
        case 137:
          if ( Length == 48 )
            return ExpGetDeviceDataInformation((unsigned int)a1, a4, 48LL, v13);
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 138:
          SystemBasicInformation = ExpQueryMemoryTopologyInformation((void *)a4);
          break;
        case 139:
          SystemBasicInformation = ExpQueryChannelInformation((void *)a4);
          break;
        case 140:
          if ( a6 || Length >= 8 )
          {
            VerifierInformation = BgkQueryBootGraphicsInformation(2LL, &v127, v15, v13);
            if ( VerifierInformation >= 0 )
            {
              if ( v127 )
              {
                if ( Length >= v127 )
                {
                  VerifierInformation = BgkQueryBootGraphicsInformation(1LL, &v152, v104, v105);
                  if ( VerifierInformation >= 0 )
                  {
                    v106 = v152;
                    if ( v152 )
                    {
                      memmove((void *)a4, v152, v127);
                      ExFreePoolWithTag(v106, 0x4B494742u);
                    }
                    else
                    {
                      VerifierInformation = -1073741670;
                    }
                  }
                }
                else
                {
                  VerifierInformation = -1073741789;
                }
              }
              else
              {
                VerifierInformation = -1073741670;
              }
            }
          }
          else
          {
            VerifierInformation = -1073741811;
          }
          goto LABEL_30;
        case 143:
        case 145:
        case 171:
        case 179:
          SystemBasicInformation = SeSecureBootQueryInformation((unsigned int)a1, a4, Length, &v127);
          break;
        case 147:
          SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(a4, Length, &v127, v13);
          break;
        case 149:
          if ( Length >= 3 )
          {
            *(_BYTE *)a4 = KdpBootedNodebug == 0;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
            v127 = 3;
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 3;
          return -1073741820;
        case 150:
          if ( a4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          SystemBasicInformation = ExpQueryBootLoaderMetadata((void *)a4, Length, &v127);
          break;
        case 151:
          v127 = 4;
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = ExSoftRebootFlags;
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 153:
          if ( Size )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          v127 = 32;
          if ( Length < 0x20 )
          {
            if ( Length < 0xC )
            {
              VerifierInformation = -1073741820;
            }
            else
            {
              v127 = 12;
              *(_QWORD *)a4 = PoOffCrashConfigTable;
              *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
            }
          }
          else
          {
            *(_QWORD *)a4 = PoOffCrashConfigTable;
            *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
            *(_QWORD *)(a4 + 16) = xmmword_140C3F470;
            *(_DWORD *)(a4 + 24) = DWORD2(xmmword_140C3F470);
          }
          goto LABEL_30;
        case 154:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          VerifierInformation = ExpGetSystemProcessorFeaturesInformation(a4, v17, v15, v13);
LABEL_169:
          v127 = 32;
          goto LABEL_30;
        case 156:
          v127 = 128;
          if ( Length != 128 )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          VerifierInformation = BgkQueryBootGraphicsInformation(3LL, Src, v15, v13);
          if ( VerifierInformation >= 0 )
LABEL_244:
            memmove((void *)a4, Src, v127);
          goto LABEL_30;
        case 157:
          v127 = WORD5(ExpManufacturingInformation) + 24;
          if ( Length < v127 )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          v73 = (void *)(a4 + 24);
          *(_OWORD *)a4 = 0LL;
          *(_QWORD *)(a4 + 16) = 0LL;
          *(_DWORD *)a4 = ExpManufacturingInformation;
          *(_DWORD *)(a4 + 8) = DWORD2(ExpManufacturingInformation);
          if ( WORD4(ExpManufacturingInformation) )
          {
            *(_QWORD *)(a4 + 16) = v73;
            memmove(v73, qword_140C31710, WORD5(ExpManufacturingInformation));
          }
          goto LABEL_30;
        case 158:
          v127 = 1;
          if ( Length )
          {
            *(_BYTE *)a4 = PoEnergyEstimationEnabled();
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 1;
          goto LABEL_258;
        case 159:
          SystemBasicInformation = HvlQueryDetailInfo(a4, Length, v15, &v127);
          break;
        case 160:
          v110 = (_DWORD)v13 << 6;
          v127 = (_DWORD)v13 << 6;
          if ( Length < 0x40 )
            goto LABEL_500;
          v111 = Length < v110;
          if ( Length < v110 )
          {
            LODWORD(v13) = Length >> 6;
            v138 = Length >> 6;
            v111 = Length < v110;
          }
          v97 = v111 ? 0xC0000004 : 0;
          v142 = (_QWORD *)a4;
          while ( 1 )
          {
            v132 = (int)v9;
            if ( (unsigned int)v9 >= (unsigned int)v13 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = (unsigned __int8)v9;
            ProcNumber.Reserved = 0;
            v112 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            KeQueryCycleTimeStatsProcessor(v112, (_QWORD *)a4);
            a4 += 64LL;
            v142 = (_QWORD *)a4;
            LODWORD(v9) = (_DWORD)v9 + 1;
            LODWORD(v13) = v138;
          }
LABEL_491:
          VerifierInformation = v97;
          goto LABEL_30;
        case 162:
          SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((int *)a4, Length, &v127);
          break;
        case 163:
          if ( Length )
          {
            *(_BYTE *)a4 = KdIgnoreUmExceptions;
            v127 = 1;
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 1;
          return -1073741820;
        case 164:
        case 172:
        case 189:
        case 190:
        case 199:
        case 209:
          if ( qword_140C37648 )
            SystemBasicInformation = qword_140C37648((unsigned int)a1, P, Size, a4, Length, &v127);
          else
            SystemBasicInformation = -1073741823;
          break;
        case 165:
          v127 = 16;
          if ( Length == 16 )
          {
            LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (16 * ExpFirmwarePageProtectionSupported)) & 0x10;
            if ( VslIsSecureKernelRunning() )
            {
              CurrentServerSilo = PsGetCurrentServerSilo();
              if ( PsIsHostSilo(CurrentServerSilo) )
              {
                v137[0] = 0;
                LOBYTE(Src[0]) |= 1u;
                NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
                v115 = Src[0];
                if ( (NestedPageProtectionFlags & 2) != 0 )
                {
                  v115 = LOBYTE(Src[0]) | 2;
                  LOBYTE(Src[0]) |= 2u;
                }
                if ( (NestedPageProtectionFlags & 0x20) != 0 )
                {
                  v115 |= 4u;
                  LOBYTE(Src[0]) = v115;
                }
                if ( (NestedPageProtectionFlags & 0x10) != 0 )
                  LOBYTE(Src[0]) = v115 | 8;
                v116 = BYTE1(Src[0]);
                if ( (NestedPageProtectionFlags & 0x200) != 0 )
                {
                  LOBYTE(v116) = BYTE1(Src[0]) | 2;
                  BYTE1(Src[0]) |= 2u;
                }
                v117 = v154;
                if ( v154 )
                {
                  VerifierInformation = VslIsTrustletRunning(v154, v137);
                  v116 = BYTE1(Src[0]);
                  LOBYTE(v116) = (v137[0] ^ BYTE1(Src[0])) & 1 ^ BYTE1(Src[0]);
                  BYTE1(Src[0]) = v116;
                }
                if ( (NestedPageProtectionFlags & 0x800) != 0 )
                {
                  LOBYTE(v116) = v116 | 4;
                  BYTE1(Src[0]) = v116;
                }
                if ( (NestedPageProtectionFlags & 0x1000) != 0 )
                {
                  LOBYTE(v116) = v116 | 8;
                  BYTE1(Src[0]) = v116;
                }
                IsEncryptionKeyAvailable = VslIsEncryptionKeyAvailable(v117, v116);
                LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (32 * IsEncryptionKeyAvailable)) & 0x20;
              }
            }
            *(_OWORD *)a4 = Src[0];
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 16;
          goto LABEL_258;
        case 166:
          SystemBasicInformation = SeQueryHSTIResults(a4, Length, &v127, v13);
          break;
        case 167:
          SystemBasicInformation = ExpQuerySingleModuleInformation(a4, Length, PreviousMode, &v127);
          break;
        case 169:
          SystemBasicInformation = HvlQueryVsmProtectionInfo((void *)a4);
          break;
        case 173:
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          VerifierInformation = result;
          if ( result < 0 )
            return result;
          v127 = 264;
          if ( Length != 264 )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          v119 = (unsigned __int16 *)ExAllocatePool2(256LL, 264LL, 1868983881LL);
          v120 = v119;
          P = v119;
          if ( !v119 )
            return -1073741670;
          *v119 = 1;
          v119[1] = 32;
          *((_DWORD *)v119 + 1) = 0;
          memset(v119 + 4, 0, 0x100uLL);
          KeGetAffinitizedInterruptsInfo(v120);
          v121 = v120;
          v122 = 2LL;
          do
          {
            *(_OWORD *)a4 = *(_OWORD *)v121;
            *(_OWORD *)(a4 + 16) = *((_OWORD *)v121 + 1);
            *(_OWORD *)(a4 + 32) = *((_OWORD *)v121 + 2);
            *(_OWORD *)(a4 + 48) = *((_OWORD *)v121 + 3);
            *(_OWORD *)(a4 + 64) = *((_OWORD *)v121 + 4);
            *(_OWORD *)(a4 + 80) = *((_OWORD *)v121 + 5);
            *(_OWORD *)(a4 + 96) = *((_OWORD *)v121 + 6);
            a4 += 128LL;
            *(_OWORD *)(a4 - 16) = *((_OWORD *)v121 + 7);
            v121 += 64;
            --v122;
          }
          while ( v122 );
          *(_QWORD *)a4 = *(_QWORD *)v121;
          ExFreePoolWithTag(v120, 0);
          goto LABEL_30;
        case 174:
          SystemBasicInformation = PsRootSiloInformation(a4, Length, &v127, v13);
          break;
        case 175:
          if ( v16 )
          {
            v159 = 0LL;
            result = ObReferenceObjectByHandle(v16, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v159, 0LL);
            v74 = v159;
            Object = v159;
            if ( result < 0 )
              return result;
            v9 = v159;
          }
          else
          {
            v74 = Object;
          }
          VerifierInformation = KeQueryCpuSetInformation((void *)a4);
          if ( v9 )
            ObfDereferenceObject(v74);
          goto LABEL_30;
        case 178:
          if ( !Length )
          {
            VerifierInformation = -1073741789;
            goto LABEL_30;
          }
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
            return -1073741727;
          v123 = (struct _MDL *)ExAllocatePool2(65LL, Length, 1868983881LL);
          v69 = v123;
          P = v123;
          if ( !v123 )
          {
            VerifierInformation = -1073741670;
            goto LABEL_30;
          }
          VerifierInformation = VslQuerySecureKernelProfileInformation(v160, v123, Length, &v127);
          if ( VerifierInformation >= 0 )
            goto LABEL_519;
          goto LABEL_520;
        case 180:
          SystemBasicInformation = ExpQueryInterruptSteeringInformation((_DWORD)P, Size, a4, Length, (__int64)&v127);
          break;
        case 181:
        case 230:
          if ( v16 )
          {
            v161 = 0LL;
            result = ObReferenceObjectByHandle(v16, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v161, 0LL);
            v36 = v161;
            Object = v161;
            if ( result < 0 )
              return result;
            v9 = v161;
          }
          else
          {
            v36 = Object;
          }
          VerifierInformation = PsGetSupportedProcessorArchitectures((void *)a4, (__int64)v36);
          if ( v9 )
            ObfDereferenceObject(v36);
          goto LABEL_30;
        case 182:
          if ( Length == 56 )
          {
            v31 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
            *(_QWORD *)&Src[0] = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * v31) + 17040LL) << 12;
            *((_QWORD *)&Src[0] + 1) = MmGetAvailablePages(v31) << 12;
            *(_QWORD *)&Src[1] = MmGetResidentAvailablePages(v32) << 12;
            *((_QWORD *)&Src[1] + 1) = MmGetTotalCommittedPages(v33) << 12;
            *((_QWORD *)&Src[2] + 1) = MmGetTotalCommitLimit(v34) << 12;
            *(_QWORD *)&Src[3] = MmGetPeakCommitment(v35) << 12;
            *(_QWORD *)&Src[2] = MmGetSharedCommit() << 12;
            if ( *(_QWORD *)&Src[0] < *((_QWORD *)&Src[0] + 1) )
              *(_QWORD *)&Src[0] = *((_QWORD *)&Src[0] + 1);
            if ( *((_QWORD *)&Src[2] + 1) < *((_QWORD *)&Src[1] + 1) )
              *((_QWORD *)&Src[2] + 1) = *((_QWORD *)&Src[1] + 1);
            if ( *(_QWORD *)&Src[3] < *((_QWORD *)&Src[1] + 1) )
              *(_QWORD *)&Src[3] = *((_QWORD *)&Src[1] + 1);
            *(_OWORD *)a4 = Src[0];
            *(_OWORD *)(a4 + 16) = Src[1];
            *(_OWORD *)(a4 + 32) = Src[2];
            *(_QWORD *)(a4 + 48) = *(_QWORD *)&Src[3];
            v127 = 56;
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 56;
          return -1073741820;
        case 183:
          if ( Length != 16 )
            return -1073741820;
          SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo(
                                     *(_QWORD *)a4,
                                     *(unsigned int *)(a4 + 8),
                                     v15,
                                     v13);
          break;
        case 184:
          if ( Length != 24 )
          {
            if ( a6 )
              *a6 = 24;
            return -1073741820;
          }
          v64 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
          *(_QWORD *)&Src[0] = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * v64) + 17040LL) << 12;
          *((_QWORD *)&Src[0] + 1) = MmGetLowestPhysicalPage(v64) << 12;
          *(_QWORD *)&Src[1] = (MmGetHighestPhysicalPage(v65) << 12) + 4095;
          *(_OWORD *)a4 = Src[0];
          *(_QWORD *)(a4 + 16) = *(_QWORD *)&Src[1];
LABEL_192:
          v127 = 24;
          goto LABEL_30;
        case 186:
          if ( !Length )
          {
            v141 = 1;
            return ZwFilterBootOption(1LL, 270532611LL);
          }
          if ( a6 )
            *a6 = 0;
          return -1073741820;
        case 188:
          if ( Length != 8 )
            return -1073741820;
          VerifierInformation = PsQueryActivityModerationUserSettings(Src);
          if ( VerifierInformation >= 0 )
            *(_QWORD *)a4 = *(_QWORD *)&Src[0];
          goto LABEL_30;
        case 192:
          if ( Length >= 0x20 )
          {
            VerifierInformation = ExpGetSystemFlushInformation(a4, v17, v15, v13);
            v127 = 32;
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 193:
          v100 = 8 * KeQueryActiveGroupCount();
          v127 = v100;
          if ( Length < v100 )
          {
LABEL_500:
            VerifierInformation = -1073741789;
          }
          else
          {
            memset((void *)a4, 0, v100);
            v132 = 0;
            v101 = 0;
            while ( (unsigned int)v9 < (unsigned __int16)KeNumberNodes )
            {
              KeInitializeSchedulerSubNodeEnumerationContext(&v166, KeNodeBlock[v101]);
              while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v166, &v158) )
              {
                v136 = *(_WORD *)(v158 + 136);
                *(_QWORD *)(a4 + 8LL * v136) |= *(_QWORD *)(v158 + 16);
              }
              v101 = v132 + 1;
              v132 = v101;
              LODWORD(v9) = v101;
            }
          }
          goto LABEL_30;
        case 194:
          SystemBasicInformation = VslTransformDumpKey(P, Size, (void *)a4, Length, (__int64)&v127, PreviousMode);
          break;
        case 195:
          if ( Length >= 8 )
          {
            SystemBasicInformation = ExpGetSystemWriteConstraintInformation(a4, v17, v15, v13);
            v127 = 8;
            break;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 196:
          SystemBasicInformation = KeQueryKvaShadowInformation(a4, Length, &v127, v13);
          break;
        case 197:
          v127 = 8;
          if ( Length >= 8 )
          {
            v43 = qword_140C656B8;
            *(_QWORD *)a4 = 0LL;
            *(_QWORD *)a4 = v43;
            goto LABEL_30;
          }
          SystemBasicInformation = -1073741820;
          break;
        case 198:
          VerifierInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))off_140C020E8[0])(
                                  34LL,
                                  0LL,
                                  0LL,
                                  &v139);
          if ( VerifierInformation != -1073741820 )
            return -1073741637;
          v26 = v139;
          if ( Length < v139 || !a4 )
          {
LABEL_65:
            v127 = v26;
            goto LABEL_30;
          }
          v124 = PreviousMode;
          if ( PreviousMode )
          {
            v69 = (_DWORD *)ExAllocatePool2(257LL, v139, 1868983881LL);
            P = v69;
            if ( !v69 )
            {
              VerifierInformation = -1073741670;
              goto LABEL_30;
            }
            v26 = v139;
          }
          else
          {
            v69 = (_DWORD *)a4;
            P = (PVOID)a4;
          }
          v125 = ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, ULONG *))off_140C020E8[0])(34LL, v26, v69, &v127);
          VerifierInformation = v125;
          if ( v124 )
          {
            if ( v125 >= 0 )
LABEL_519:
              memmove((void *)a4, v69, v127);
LABEL_520:
            ExFreePoolWithTag(v69, 0x6F666E49u);
          }
          goto LABEL_30;
        case 200:
          SystemBasicInformation = IoQuerySystemDeviceName(200LL, a4, Length, &v127);
          break;
        case 201:
          SystemBasicInformation = KeQuerySpeculationControlInformation((void *)a4, Length);
          break;
        case 202:
          v127 = 1;
          if ( Length != 1 )
          {
            if ( a6 )
              *a6 = 1;
            goto LABEL_258;
          }
          v149 = 0;
          VerifierInformation = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, int *))off_140C020E8[0])(
                                  47LL,
                                  1LL,
                                  Src,
                                  &v149);
          if ( VerifierInformation >= 0 && v149 == 1 )
            *(_BYTE *)a4 = Src[0];
          else
LABEL_202:
            VerifierInformation = -1073741637;
          goto LABEL_30;
        case 206:
          if ( Length != 8 )
          {
            if ( a6 )
              *a6 = 8;
            return -1073741820;
          }
          *(_BYTE *)a4 = *(_BYTE *)ExLeapSecondData != 0;
          *(_DWORD *)(a4 + 4) = 0;
LABEL_119:
          v127 = 8;
          goto LABEL_30;
        case 207:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag2;
            goto LABEL_164;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 208:
          SystemBasicInformation = SeSecurityModelQueryInformation(a4, Length, &v127, v13);
          break;
        case 210:
          SystemBasicInformation = CmQuerySingleFeatureConfiguration((_DWORD)P, Size, a4, Length, (__int64)&v127);
          break;
        case 211:
          SystemBasicInformation = CmQueryFeatureConfigurationSections(
                                     (int)P,
                                     Size,
                                     a4,
                                     Length,
                                     (__int64)&v127,
                                     KeGetCurrentThread()->PreviousMode);
          break;
        case 213:
          SystemBasicInformation = KeQuerySecureSpeculationInformation((unsigned int *)a4, Length, &v127);
          break;
        case 214:
          if ( PreviousMode )
            return -1073741727;
          if ( !ExpSpacesBootInformation )
            goto LABEL_30;
          v76 = *(_QWORD *)ExpSpacesBootInformation;
          if ( !*(_QWORD *)ExpSpacesBootInformation )
            goto LABEL_30;
          v127 = *(_QWORD *)ExpSpacesBootInformation;
          if ( !a4 )
            goto LABEL_30;
          if ( Length >= (unsigned int)v76 )
          {
            memmove((void *)a4, (const void *)(ExpSpacesBootInformation + 8), (unsigned int)v76);
            goto LABEL_30;
          }
          SystemBasicInformation = -1073741820;
          break;
        case 215:
          if ( PreviousMode )
            return -1073741727;
          v107 = ExpFwRamdiskInfo;
          if ( !ExpFwRamdiskInfo )
          {
            VerifierInformation = -1073741810;
            goto LABEL_30;
          }
          v127 = 24;
          if ( Length < 0x18 )
          {
            SystemBasicInformation = -1073741820;
            break;
          }
          *(_OWORD *)a4 = *(_OWORD *)ExpFwRamdiskInfo;
          *(_QWORD *)(a4 + 16) = *(_QWORD *)(v107 + 16);
          goto LABEL_30;
        case 216:
          v127 = 32;
          if ( Length == 32 )
            SystemBasicInformation = WheaQuerySystemInformation(a4, 32LL, v15, v13);
          else
            SystemBasicInformation = -1073741820;
          break;
        case 221:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = 0;
            *(_DWORD *)a4 = KeIsCetCapable();
            IsUserCetAllowed = KeIsUserCetAllowed();
            *(_DWORD *)a4 = v78 ^ ((unsigned __int8)v78 ^ (unsigned __int8)(2 * IsUserCetAllowed)) & 2;
            IsKernelCetEnabled = KeIsKernelCetEnabled();
            *(_DWORD *)a4 = v80 | (IsKernelCetEnabled << 8);
            IsKernelCetAuditModeEnabled = KeIsKernelCetAuditModeEnabled();
            *(_DWORD *)a4 = v82 | (IsKernelCetAuditModeEnabled << 9);
LABEL_164:
            v127 = 4;
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 222:
          SystemBasicInformation = CmQueryBuildVersionInformation(
                                     P,
                                     Size,
                                     a4,
                                     Length,
                                     &v127,
                                     KeGetCurrentThread()->PreviousMode);
          break;
        case 223:
          if ( !P )
            return -1073741821;
          VerifierInformation = ExPoolQueryLimits(P, Size, (void *)a4, Length, KeGetCurrentThread()->PreviousMode);
          if ( VerifierInformation >= 0 )
            v127 = Size;
          goto LABEL_30;
        case 227:
          v127 = 1;
          if ( Length == 1 )
          {
            *(_BYTE *)a4 = 1;
            goto LABEL_30;
          }
          if ( a6 )
            *a6 = 1;
LABEL_258:
          SystemBasicInformation = -1073741820;
          break;
        case 228:
        case 229:
          v127 = Length;
          SystemBasicInformation = KeQueryDpcWatchdogConfiguration((void *)a4, Length, a1);
          break;
        case 232:
          SystemBasicInformation = RtlCheckXfgFailureInformation((char *)BaseAddress[1]);
          break;
        case 234:
          v127 = 8856;
          if ( Length >= 0x2298 )
            SystemBasicInformation = HvlQueryMinrootInfo((_DWORD *)a4, Length, &v127);
          else
            SystemBasicInformation = -1073741820;
          break;
        case 235:
          SystemBasicInformation = HvlQuerySetBootPagesInfo((void *)a4, (__int64)&v127);
          break;
        case 238:
          SystemBasicInformation = ExpQueryOriginalImageFeatureInformation(P, Size, a4, Length, &v127);
          break;
        default:
          return -1073741821;
      }
    }
    VerifierInformation = SystemBasicInformation;
LABEL_30:
    if ( a6 )
      *a6 = v127;
    return VerifierInformation;
  }
  else
  {
    switch ( a1 )
    {
      case 2:
      case 33:
      case 36:
      case 65:
        LOWORD(v14) = -1;
        LODWORD(v143) = 0xFFFF;
        v136 = -1;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        v13 = ActiveProcessorCount;
        v138 = ActiveProcessorCount;
        goto LABEL_12;
      case 8:
      case 23:
      case 42:
      case 61:
      case 73:
      case 83:
      case 100:
      case 108:
      case 141:
      case 160:
        if ( Size < 2 )
          goto LABEL_479;
        v14 = *(unsigned __int16 *)P;
        LODWORD(v143) = v14;
        v136 = v14;
        if ( (unsigned __int16)v14 >= KeQueryActiveGroupCount() )
          goto LABEL_479;
        v22 = KeQueryActiveProcessorCountEx(v14);
        v13 = v22;
        v138 = v22;
        goto LABEL_12;
      case 72:
        if ( Size != 4 )
          goto LABEL_479;
        v17 = *(unsigned int *)P;
        v151 = *(_DWORD *)P;
        v16 = 0LL;
        v15 = v129;
        goto LABEL_15;
      case 107:
        if ( Size < 4 )
          goto LABEL_479;
        v12 = *(_DWORD *)P;
        v150 = *(_DWORD *)P;
        goto LABEL_12;
      case 121:
        if ( Size >= 2 )
        {
          v129 = *(_WORD *)P;
          v15 = v129;
          if ( v129 < (unsigned __int16)KeNumberNodes )
            goto LABEL_13;
        }
        goto LABEL_479;
      case 165:
        if ( !Size )
        {
          v154 = 0LL;
          goto LABEL_12;
        }
        if ( Size == 8 )
        {
          v154 = *(_QWORD *)P;
          goto LABEL_12;
        }
LABEL_479:
        result = -1073741811;
        break;
      case 175:
      case 181:
      case 230:
        if ( Size != 8 )
          goto LABEL_479;
        v16 = *(void **)P;
        v164 = *(_QWORD *)P;
        v15 = v129;
        goto LABEL_14;
      case 178:
        if ( Size != 8 )
          goto LABEL_479;
        v160 = *(_QWORD *)P;
        goto LABEL_12;
      case 231:
        if ( Size < 8 )
          goto LABEL_479;
        v10 = (__int64)P;
        ProcNumber = (struct _PROCESSOR_NUMBER)*((_DWORD *)P + 1);
        v12 = *(_DWORD *)P;
        v150 = *(_DWORD *)P;
        goto LABEL_12;
      case 232:
        if ( Size < 0x20 )
          goto LABEL_479;
        *(_OWORD *)BaseAddress = *(_OWORD *)P;
        v168 = *((_OWORD *)P + 1);
        goto LABEL_12;
      default:
        goto LABEL_12;
    }
  }
  return result;
}
