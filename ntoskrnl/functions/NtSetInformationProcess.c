int __fastcall NtSetInformationProcess(HANDLE Handle, unsigned int a2, unsigned __int64 a3, ULONG a4)
{
  size_t v4; // rdi
  _QWORD *v5; // rbx
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 PreviousMode; // r15
  int v10; // eax
  int result; // eax
  int v12; // esi
  __int64 Pool2; // rax
  void *v14; // rbx
  PVOID v15; // rcx
  int v16; // ebx
  unsigned int v17; // eax
  char v18; // di
  PVOID v19; // rcx
  char v20; // al
  __int16 v21; // bx
  int v22; // edi
  bool v23; // zf
  PVOID v24; // rcx
  int v25; // ebx
  char v26; // bl
  int v27; // edi
  _QWORD *i; // rbx
  void *v29; // r12
  unsigned __int64 v30; // r12
  NTSTATUS v31; // esi
  signed __int64 v32; // rdx
  signed __int64 *v33; // roff
  signed __int64 v34; // r15
  signed __int64 v35; // rax
  void *v36; // r15
  int v37; // eax
  int v38; // eax
  int v39; // ebx
  PVOID v40; // rcx
  unsigned __int8 v41; // bl
  __int64 v42; // r13
  __int16 v43; // r8
  int v44; // ebx
  bool v45; // zf
  __int64 v46; // rcx
  __int64 v47; // r13
  signed __int64 *v48; // rbx
  BOOL v49; // edi
  __int64 v50; // r13
  PVOID v51; // rcx
  _QWORD *j; // rbx
  __int64 v53; // rbx
  int v54; // ebx
  int v55; // ebx
  int v56; // ecx
  unsigned int v57; // eax
  unsigned __int64 v58; // r12
  volatile signed __int32 *v59; // r8
  signed __int32 v60; // eax
  signed int v61; // r9d
  signed __int32 v62; // edx
  volatile signed __int64 *v63; // rbx
  signed int v64; // r14d
  int v65; // ebx
  _KPROCESS *CurrentProcess; // rax
  unsigned int v67; // ebx
  unsigned int v68; // ebx
  volatile signed __int32 *v69; // r8
  signed __int32 v70; // eax
  signed __int32 v71; // edx
  _QWORD *v72; // rdi
  int v73; // ebx
  unsigned __int64 v74; // rbx
  _KPROCESS *v75; // rdi
  BOOLEAN v76; // al
  BOOLEAN v77; // al
  struct _EX_RUNDOWN_REF *v78; // rcx
  __int16 v79; // r8
  bool v80; // r9
  unsigned __int64 v81; // r8
  __int16 v82; // r8
  __int64 v83; // r13
  PVOID v84; // r8
  volatile signed __int32 *v85; // rcx
  __int16 v86; // r8
  __int64 v87; // rcx
  __int64 *v88; // rdx
  int v89; // ebx
  unsigned int v90; // edi
  PACCESS_TOKEN v91; // rbx
  unsigned __int64 v92; // rbx
  _KPROCESS *v93; // rax
  __int64 v94; // rdx
  volatile signed __int32 *p_Lock; // r9
  __int64 v96; // rcx
  int v97; // edx
  int v98; // ecx
  __int64 v99; // rax
  unsigned int v100; // ebx
  int v101; // edi
  char IsGuiThread; // al
  unsigned int v103; // ebx
  int v104; // edi
  char v105; // r12
  _KPROCESS *v106; // rax
  int v107; // eax
  char IsSandboxedToken; // si
  BOOLEAN v109; // al
  int v110; // r8d
  int v111; // edi
  int v112; // r10d
  unsigned int v113; // ebx
  int v114; // edx
  int v115; // eax
  bool v116; // zf
  int v117; // r8d
  int v118; // ecx
  int v119; // ebx
  int v120; // eax
  unsigned int v121; // ebx
  int v122; // r12d
  int v123; // edi
  __int64 Flink_low; // rdx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rcx
  int v128; // r8d
  int v129; // edx
  unsigned int v130; // ecx
  int v131; // edi
  int v132; // r8d
  int v133; // edx
  int v134; // ebx
  int v135; // r11d
  int v136; // ecx
  int v137; // eax
  int v138; // edx
  unsigned int v139; // ebx
  unsigned int NoChildProcessRestrictedPolicy; // eax
  __int64 v141; // r8
  int v142; // edx
  int v143; // eax
  int v144; // ebx
  int v145; // ebx
  bool IsCoreIsolationMitigationPolicyEnforceable; // al
  unsigned int v147; // ecx
  int v148; // r8d
  int v149; // ebx
  int v150; // edx
  int v151; // edi
  int v152; // esi
  int v153; // r15d
  int v154; // r12d
  int v155; // ecx
  unsigned int v156; // ebx
  int RedirectionTrustPolicy; // eax
  int v158; // ecx
  int v159; // ebx
  __int64 v160; // rdx
  int v161; // ebx
  __int64 v162; // rax
  void *v163; // rdi
  __int64 v164; // rax
  int v165; // edx
  void *v166; // rcx
  unsigned __int64 v167; // rdx
  void *v168; // rax
  BOOL v169; // edi
  unsigned int v170; // edi
  char v171; // bl
  unsigned int v172; // ebx
  __int64 v173; // rax
  char v174; // bl
  int v175; // ecx
  unsigned __int64 ExtensionTable; // rbx
  NTSTATUS v177; // edi
  int v178; // ebx
  int v179; // ebx
  __int128 v180; // xmm1
  const char *v181; // r8
  _KPROCESS *v182; // rax
  int v183; // eax
  int v184; // r8d
  int v185; // edx
  unsigned int v186; // ecx
  unsigned int v187; // ecx
  int v188; // ebx
  __int64 v189; // r8
  void *v190; // rbx
  void *v191; // rbx
  _KPROCESS *v192; // rax
  unsigned __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 *v195; // r8
  int v196; // ebx
  int v197; // eax
  unsigned int v198; // eax
  int v199; // eax
  unsigned int v200; // eax
  _DWORD *v201; // r12
  unsigned int v202; // eax
  const void *v203; // rbx
  size_t v204; // rdi
  _KPROCESS *v205; // rax
  PVOID v206; // rcx
  _DWORD *v207; // rax
  unsigned int v208; // ecx
  const void *v209; // rbx
  size_t v210; // rdi
  _KPROCESS *v211; // rax
  _DWORD *v212; // rax
  __int64 v213; // rbx
  _KPROCESS *v214; // rax
  _DWORD *v215; // rax
  _DWORD *v216; // r12
  __int64 v217; // r8
  unsigned int v218; // ecx
  _DWORD *v219; // rdx
  _KPROCESS *v220; // rax
  __int16 v221; // cx
  __int64 v222; // rcx
  _QWORD *v223; // rdx
  PVOID k; // rcx
  __int64 v225; // rdi
  _QWORD *v226; // rbx
  _DWORD *v227; // rax
  char *v228; // rbx
  char *v229; // rax
  char *v230; // r15
  __int64 v231; // rdx
  __int64 v232; // r13
  volatile void **v233; // rdi
  _QWORD *v234; // rdi
  unsigned int v235; // eax
  __int64 v236; // r8
  _QWORD *v237; // rdi
  _DWORD *v238; // rbx
  unsigned int *v239; // r13
  __int64 v240; // rax
  unsigned __int64 v241; // rax
  _DWORD *v242; // rax
  _DWORD *v243; // r15
  unsigned int v244; // eax
  unsigned __int64 v245; // r8
  unsigned __int64 v246; // rax
  unsigned __int64 v247; // rdx
  _QWORD *v248; // rsi
  int v249; // r9d
  unsigned int v250; // ebx
  signed __int32 v251[8]; // [rsp+0h] [rbp-4D8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-498h] BYREF
  unsigned int v253; // [rsp+48h] [rbp-490h]
  int v254; // [rsp+4Ch] [rbp-48Ch]
  __int64 v255; // [rsp+50h] [rbp-488h]
  int v256; // [rsp+58h] [rbp-480h]
  unsigned __int16 v257; // [rsp+5Ch] [rbp-47Ch] BYREF
  __int64 v258; // [rsp+60h] [rbp-478h] BYREF
  struct _KTHREAD *v259; // [rsp+68h] [rbp-470h]
  __int16 v260; // [rsp+70h] [rbp-468h]
  unsigned int v261; // [rsp+74h] [rbp-464h]
  PVOID v262; // [rsp+78h] [rbp-460h]
  ULONG Alignment; // [rsp+80h] [rbp-458h]
  PVOID NextProcessThread; // [rsp+88h] [rbp-450h]
  char v265; // [rsp+90h] [rbp-448h]
  char v266; // [rsp+91h] [rbp-447h]
  char v267; // [rsp+92h] [rbp-446h]
  int v268; // [rsp+94h] [rbp-444h]
  signed int v269; // [rsp+98h] [rbp-440h]
  char v270; // [rsp+9Ch] [rbp-43Ch]
  char *v271; // [rsp+A0h] [rbp-438h]
  unsigned int *v272; // [rsp+A8h] [rbp-430h]
  _DWORD *v273; // [rsp+B0h] [rbp-428h]
  unsigned int v274; // [rsp+B8h] [rbp-420h]
  int v275; // [rsp+BCh] [rbp-41Ch] BYREF
  _DWORD *v276; // [rsp+C0h] [rbp-418h]
  _QWORD *v277; // [rsp+C8h] [rbp-410h]
  __int128 v278; // [rsp+D0h] [rbp-408h]
  int v279; // [rsp+E0h] [rbp-3F8h]
  unsigned int v280; // [rsp+E4h] [rbp-3F4h]
  _QWORD *v281; // [rsp+E8h] [rbp-3F0h]
  void *v282; // [rsp+F0h] [rbp-3E8h]
  PVOID v283; // [rsp+F8h] [rbp-3E0h] BYREF
  __int64 v284; // [rsp+100h] [rbp-3D8h]
  void *Src[2]; // [rsp+108h] [rbp-3D0h] BYREF
  PVOID P; // [rsp+118h] [rbp-3C0h]
  PVOID v287; // [rsp+120h] [rbp-3B8h] BYREF
  __int64 v288; // [rsp+128h] [rbp-3B0h]
  PVOID v289; // [rsp+130h] [rbp-3A8h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+138h] [rbp-3A0h]
  NTSTRSAFE_PCSTR pszSrc[2]; // [rsp+140h] [rbp-398h] BYREF
  __int64 v292; // [rsp+150h] [rbp-388h]
  int v293; // [rsp+158h] [rbp-380h]
  int v294; // [rsp+15Ch] [rbp-37Ch]
  int v295; // [rsp+160h] [rbp-378h]
  BOOL v296; // [rsp+164h] [rbp-374h]
  unsigned int v297; // [rsp+168h] [rbp-370h]
  int v298; // [rsp+16Ch] [rbp-36Ch]
  int v299; // [rsp+170h] [rbp-368h]
  int v300; // [rsp+174h] [rbp-364h]
  unsigned int *v301; // [rsp+178h] [rbp-360h]
  unsigned __int64 v302; // [rsp+180h] [rbp-358h]
  int v303; // [rsp+188h] [rbp-350h]
  unsigned int *v304; // [rsp+190h] [rbp-348h]
  _DWORD *v305; // [rsp+198h] [rbp-340h]
  int v306; // [rsp+1A0h] [rbp-338h]
  int v307; // [rsp+1A4h] [rbp-334h]
  int v308; // [rsp+1A8h] [rbp-330h]
  int v309; // [rsp+1ACh] [rbp-32Ch]
  int v310; // [rsp+1B0h] [rbp-328h]
  unsigned __int64 v311; // [rsp+1C0h] [rbp-318h]
  void **v312; // [rsp+1C8h] [rbp-310h]
  __int64 v313; // [rsp+1D0h] [rbp-308h]
  __int64 v314; // [rsp+1D8h] [rbp-300h]
  __int64 v315; // [rsp+1E0h] [rbp-2F8h]
  __int64 v316; // [rsp+1E8h] [rbp-2F0h]
  PVOID v317; // [rsp+1F0h] [rbp-2E8h] BYREF
  int v318; // [rsp+1F8h] [rbp-2E0h]
  _BYTE SubjectContext[40]; // [rsp+200h] [rbp-2D8h] BYREF
  __int64 v320; // [rsp+228h] [rbp-2B0h]
  __int128 v321; // [rsp+230h] [rbp-2A8h] BYREF
  __int128 v322; // [rsp+240h] [rbp-298h]
  struct _KAPC_STATE ApcState; // [rsp+250h] [rbp-288h] BYREF
  _OWORD v324[2]; // [rsp+280h] [rbp-258h] BYREF
  __int64 v325; // [rsp+2A0h] [rbp-238h]
  _OWORD v326[9]; // [rsp+2B0h] [rbp-228h] BYREF
  char v327[256]; // [rsp+340h] [rbp-198h] BYREF
  char pszDest[16]; // [rsp+440h] [rbp-98h] BYREF
  __int128 v329; // [rsp+450h] [rbp-88h]
  __int128 v330; // [rsp+460h] [rbp-78h]
  __int128 v331; // [rsp+470h] [rbp-68h]
  char v332; // [rsp+480h] [rbp-58h]

  v4 = a4;
  v5 = (_QWORD *)a3;
  v256 = a2;
  v273 = (_DWORD *)a3;
  Alignment = a4;
  v7 = 0;
  Object = 0LL;
  v321 = 0LL;
  v253 = 0;
  v260 = 0;
  v268 = 0;
  v282 = 0LL;
  v283 = 0LL;
  v302 = 0LL;
  v275 = 0;
  v322 = 0LL;
  v257 = 0;
  CurrentThread = KeGetCurrentThread();
  v259 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    switch ( a2 )
    {
      case 5u:
        v10 = 4;
        break;
      case 0x11u:
        v10 = 1;
        break;
      case 0x19u:
        v10 = 1;
        break;
      case 0x12u:
        v10 = 1;
        break;
      case 0x6Cu:
        v10 = 2;
        break;
      case 0x15u:
        v10 = 8;
        break;
      case 0x21u:
        v10 = 4;
        break;
      case 0x27u:
        v10 = 4;
        break;
      case 0x23u:
        v10 = 8;
        break;
      case 8u:
        v10 = 8;
        break;
      case 0x28u:
        v10 = 8;
        break;
      case 0x29u:
        v10 = 8;
        break;
      case 0x62u:
        v10 = 8;
        break;
      case 0x63u:
        v10 = 8;
        break;
      case 0x2Du:
        v10 = 4;
        break;
      case 0x2Eu:
        v10 = 4;
        break;
      case 0x31u:
        v10 = 8;
        break;
      case 0x35u:
        v10 = 8;
        break;
      case 0x38u:
        v10 = 8;
        break;
      case 0x3Eu:
        v10 = 8;
        break;
      case 0x41u:
        v10 = 8;
        break;
      case 0x46u:
        v10 = 1;
        break;
      case 0x4Au:
        v10 = 1;
        break;
      case 0x53u:
        v10 = 8;
        break;
      case 0x5Au:
        v10 = 1;
        break;
      case 0x5Bu:
        v10 = 4;
        break;
      case 0x5Fu:
        v10 = 8;
        break;
      case 0x57u:
        v10 = 1;
        break;
      case 0x64u:
        v10 = 4;
        break;
      case 0x65u:
        v10 = 8;
        break;
      case 0x66u:
        v10 = 8;
        break;
      case 0x69u:
        v10 = 8;
        break;
      default:
        v10 = 4;
        if ( a2 == 107 )
          v10 = 8;
        break;
    }
    if ( a4 )
    {
      if ( ((v10 - 1) & (unsigned int)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + a4 > 0x7FFFFFFF0000LL || a3 + a4 < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
      CurrentThread = v259;
    }
  }
  if ( a2 == 12 )
  {
    if ( a4 == 4 )
    {
      v250 = *(_DWORD *)a3;
      v297 = *(_DWORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        PspSetProcessDefaultHardErrorMode(Object, v259, v250);
LABEL_95:
        v15 = Object;
LABEL_96:
        ObfDereferenceObjectWithTag(v15, 0x79517350u);
        return 0;
      }
      return result;
    }
    return -1073741820;
  }
  if ( a2 == 41 )
  {
    memset(SubjectContext, 0, sizeof(SubjectContext));
    if ( Handle != (HANDLE)-1LL )
      return -1073741811;
    v248 = 0LL;
    if ( a4 == 40 )
    {
      if ( PreviousMode )
      {
        *(_OWORD *)SubjectContext = *(_OWORD *)a3;
        *(_OWORD *)&SubjectContext[16] = *(_OWORD *)(a3 + 16);
        *(_QWORD *)&SubjectContext[32] = *(_QWORD *)(a3 + 32);
        v248 = (_QWORD *)(a3 + 32);
        v5 = SubjectContext;
      }
      v249 = *(_DWORD *)v5;
      if ( *(_DWORD *)v5 > 0x40u || *((_DWORD *)v5 + 1) | *((_DWORD *)v5 + 2) | *((_DWORD *)v5 + 3) )
        return -1073741811;
      v5 += 2;
      goto LABEL_1035;
    }
    if ( a4 == 24 )
    {
      v249 = 0;
      if ( PreviousMode )
      {
        *(_QWORD *)&SubjectContext[16] = *(_QWORD *)a3;
        *(_QWORD *)&SubjectContext[24] = *(_QWORD *)(a3 + 8);
        v248 = (_QWORD *)(a3 + 16);
        v5 = &SubjectContext[16];
      }
LABEL_1035:
      if ( *v5 )
      {
        v317 = (PVOID)*v5;
        v5[2] = 0LL;
        result = MmAllocateUserStack((int)v5 + 16, v5[1], (unsigned int)&v317, v249, 0);
        if ( result >= 0 && PreviousMode )
          *v248 = v5[2];
        return result;
      }
      return -1073741811;
    }
    return -1073741820;
  }
  if ( a2 != 35 )
  {
    switch ( a2 )
    {
      case 1u:
        return PspSetQuotaLimits((ULONG_PTR)Handle);
      case 5u:
        if ( a4 != 4 )
          return -1073741820;
        v16 = *(_DWORD *)a3;
        v306 = v16;
        v17 = v16 & 0x80000000;
        if ( v16 < 0 )
          v16 &= ~0x80000000;
        v18 = v17 != 0 ? 2 : 0;
        if ( (unsigned int)(v16 - 1) > 0x1E )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v19 = Object;
        if ( v16 > *((char *)Object + 640) )
        {
          v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                  SeIncreaseBasePriorityPrivilege,
                  Handle,
                  512LL);
          v19 = Object;
          if ( !v20 )
            goto LABEL_104;
        }
        KeSetPriorityAndQuantumProcess((__int64)v19, (unsigned int)v16, 0, 0, 0);
        MmSetMemoryPriorityProcess((__int64)Object, v18);
        goto LABEL_95;
      case 6u:
        if ( a4 != 4 )
          return -1073741820;
        v27 = *(_DWORD *)a3;
        v307 = *(_DWORD *)a3;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v12 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
          goto LABEL_133;
        for ( i = PsGetNextProcessThread((__int64)Object, 0LL); i; i = PsGetNextProcessThread((__int64)Object, i) )
          KeBoostPriorityThread((__int64)i, v27);
        goto LABEL_132;
      case 8u:
        if ( a4 == 8 )
        {
          v274 = 0;
          v29 = *(void **)a3;
          v301 = *(unsigned int **)a3;
        }
        else
        {
          if ( a4 != 16 )
            return -1073741820;
          v272 = *(unsigned int **)a3;
          v301 = v272;
          v274 = *(_DWORD *)(a3 + 8);
          if ( (v274 & 0xFFFFFFF8) != 0 )
            return -1073741811;
          v29 = v272;
        }
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        v289 = 0LL;
        result = ObReferenceObjectByHandle(v29, 0, LpcPortObjectType, PreviousMode, &v289, 0LL);
        v30 = (unsigned __int64)v289;
        v272 = (unsigned int *)v289;
        if ( result < 0 )
          return result;
        v31 = ObReferenceObjectByHandleWithTag(
                Handle,
                0x800u,
                (POBJECT_TYPE)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL);
        if ( v31 < 0 )
        {
          ObfDereferenceObject((PVOID)v30);
          return v31;
        }
        v32 = v30 | v274;
        v277 = (_QWORD *)v32;
        v33 = (signed __int64 *)((char *)Object + 1200);
        _m_prefetchw((char *)Object + 1200);
        v34 = *v33;
        do
        {
          NextProcessThread = (PVOID)v34;
          if ( (_DWORD)v4 == 16 )
          {
            *((_DWORD *)v5 + 2) = v34 & 7;
          }
          else if ( (v34 & 7) != 0 )
          {
            ObfDereferenceObject((PVOID)v30);
            goto LABEL_149;
          }
          v35 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 150, v32, v34);
          v23 = v34 == v35;
          v34 = v35;
        }
        while ( !v23 );
        if ( v35 )
        {
          v36 = (void *)(v35 & 0xFFFFFFFFFFFFFFF8uLL);
          *(_DWORD *)&SubjectContext[2] = 852016;
          strcpy(SubjectContext, "\b");
          memset(&SubjectContext[6], 0, 34);
          v320 = *((_QWORD *)Object + 136);
          while ( 1 )
          {
            v37 = LpcRequestPort(v36, SubjectContext);
            if ( v37 != -1073741801 && v37 != -1073741670 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
          }
          PspLockUnlockProcessExclusive((__int64)Object, (__int64)v259);
          ObfDereferenceObject(v36);
        }
        goto LABEL_157;
      case 9u:
        if ( a4 != 16 )
          return -1073741820;
        v315 = *(_QWORD *)a3;
        return PspAssignPrimaryToken(CurrentThread, PreviousMode, Handle);
      case 0xAu:
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x220u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result >= 0 )
          goto LABEL_161;
        return result;
      case 0xBu:
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x220u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result >= 0 )
          goto LABEL_161;
        return result;
      case 0xDu:
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
LABEL_161:
        v38 = xKdEnumerateDebuggingDevices();
        goto LABEL_162;
      case 0xFu:
      case 0x2Au:
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v12 = PsChargeProcessNonPagedPoolQuota((struct _KPROCESS *)Object, 0x6028uLL);
        if ( v12 < 0 )
          goto LABEL_86;
        Pool2 = ExAllocatePool2(64LL, 24616LL, 1935110992LL);
        v14 = (void *)Pool2;
        if ( !Pool2 )
        {
          v12 = -1073741801;
LABEL_85:
          PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)Object, 24616LL);
          goto LABEL_86;
        }
        PsWatchEnabled = 1;
        *(_DWORD *)Pool2 = 0;
        *(_QWORD *)(Pool2 + 8) = 0LL;
        KeInitializeGate(Pool2 + 16, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 166, (signed __int64)v14, 0LL) )
        {
          ExFreePoolWithTag(v14, 0);
          v12 = -1073741752;
          goto LABEL_85;
        }
LABEL_157:
        v12 = 0;
        goto LABEL_86;
      case 0x10u:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741822;
      case 0x11u:
        if ( a4 != 1 )
          return -1073741820;
        v41 = *(_BYTE *)a3;
        v265 = *(_BYTE *)a3;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v42 = (__int64)v259;
        PspLockProcessExclusive((__int64)Object, (__int64)v259);
        if ( v41 )
          *((_DWORD *)Object + 382) |= 4u;
        else
          *((_DWORD *)Object + 382) &= ~4u;
        if ( *((_QWORD *)Object + 176) )
        {
          v43 = *((_WORD *)Object + 1206);
          if ( v43 == 332 || v43 == 452 )
            v41 = 1;
        }
        KeSetAutoAlignmentProcess(Object, v41);
        PspUnlockProcessExclusive((__int64)Object, v42);
        goto LABEL_95;
      case 0x12u:
        if ( a4 != 2 )
          return -1073741820;
        v21 = *(_WORD *)a3;
        v260 = *(_WORD *)a3;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v22 = PspSetProcessPriorityClass(Object, HIBYTE(v260), Handle, PreviousMode);
        if ( v22 < 0 )
          goto LABEL_112;
        v23 = (_BYTE)v21 == 0;
        v24 = Object;
        goto LABEL_111;
      case 0x13u:
        if ( a4 != 4 )
          return -1073741820;
        v44 = *(_DWORD *)a3;
        v308 = *(_DWORD *)a3;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        v12 = ObReferenceObjectByHandleWithTag(
                Handle,
                0x200u,
                (POBJECT_TYPE)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL);
        if ( v12 < 0 )
          return v12;
        if ( *((_QWORD *)Object + 280) )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741790;
        }
        if ( v44 )
          _InterlockedOr((volatile signed __int32 *)Object + 281, 0x1000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFEFFFFFF);
        goto LABEL_86;
      case 0x15u:
        if ( a4 == 8 )
        {
          *(_QWORD *)&v321 = *(_QWORD *)a3;
          v45 = (_QWORD)v321 == 0LL;
        }
        else
        {
          if ( a4 != 16 )
            return -1073741820;
          v321 = *(_OWORD *)a3;
          v45 = !KeVerifyGroupAffinity((__int64)&v321, 0);
        }
        if ( v45 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( (*((_DWORD *)Object + 158) & 0x1000) != 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        KeQueryPrimaryGroupProcess((__int64)Object, &v257);
        if ( (_DWORD)v4 == 8 )
        {
          v46 = v321 & qword_140D1EFE8[v257];
          if ( v46 != (_QWORD)v321 )
          {
LABEL_149:
            v12 = -1073741811;
            goto LABEL_86;
          }
          WORD4(v321) = v257;
          *(_QWORD *)&v321 = v46;
        }
        v47 = (__int64)v259;
        KeEnterCriticalRegionThread((__int64)v259);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1080, 0LL);
          v12 = PspSetProcessAffinitySafe(Object, 0LL, 0LL, &v321, &v275);
          v48 = (signed __int64 *)Object;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 135, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v48 + 135);
          KeAbPostRelease((ULONG_PTR)(v48 + 135));
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
          if ( v12 >= 0 )
          {
            if ( v275 )
              PspWritePebAffinityInfo(v47, Object);
            _InterlockedOr((volatile signed __int32 *)Object + 280, 0x200000u);
            KeLeaveCriticalRegionThread(v47);
LABEL_86:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v12;
          }
        }
        else
        {
          v12 = -1073741558;
        }
        KeLeaveCriticalRegionThread(v47);
        goto LABEL_86;
      case 0x16u:
        if ( a4 != 4 )
          return -1073741820;
        v309 = *(_DWORD *)a3;
        v49 = v309 != 0;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v12 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
          goto LABEL_133;
        v50 = (__int64)v259;
        PspLockProcessExclusive((__int64)Object, (__int64)v259);
        KeSetDisableBoostProcess(Object, v49);
        v51 = Object;
        for ( j = (_QWORD *)*((_QWORD *)Object + 188); j != (_QWORD *)((char *)Object + 1504); v51 = Object )
        {
          KeSetDisableBoostThread(j - 167, v49);
          j = (_QWORD *)*j;
        }
        goto LABEL_284;
      case 0x17u:
        if ( a4 != 8 )
          return -1073741820;
        v53 = *(_QWORD *)a3;
        v316 = *(_QWORD *)a3;
        if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
          return -1073741790;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v38 = ObSetProcessDeviceMap(Object, v53, PreviousMode);
        goto LABEL_162;
      case 0x18u:
        if ( a4 != 4 )
          return -1073741820;
        v54 = *(_DWORD *)a3;
        v303 = *(_DWORD *)a3;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x204u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v54 != (unsigned int)MmGetSessionId((__int64)Object) )
          v7 = -1073741790;
        goto LABEL_233;
      case 0x19u:
        if ( a4 != 1 )
          return -1073741820;
        v26 = *(_BYTE *)a3;
        v270 = *(_BYTE *)a3;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        LOBYTE(v7) = v26 != 0;
        PsSetProcessPriorityByClass(Object, v7);
        goto LABEL_95;
      case 0x1Du:
        if ( a4 != 4 )
          return -1073741820;
        v55 = *(_DWORD *)a3;
        v310 = *(_DWORD *)a3;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v55 )
          _InterlockedOr((volatile signed __int32 *)Object + 281, 0x2000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFDFFF);
        goto LABEL_95;
      case 0x1Fu:
        if ( a4 != 4 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v12 = result;
        if ( result < 0 )
          return result;
        v279 = *(_DWORD *)v5;
        if ( (v279 & 0xFFFFFFFE) != 0 )
          goto LABEL_149;
        if ( (v279 & 1) != 0 )
          _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFFFD);
        else
          _InterlockedOr((volatile signed __int32 *)Object + 281, 2u);
        goto LABEL_86;
      case 0x20u:
        v258 = 0LL;
        if ( !a4 )
          goto LABEL_247;
        if ( ((a4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        v56 = *(_DWORD *)a3;
        LODWORD(v258) = *(_DWORD *)a3;
        if ( a4 == 8 )
          HIDWORD(v258) = *(_DWORD *)(a3 + 4);
        else
          HIDWORD(v258) = 0;
        if ( v56 )
          return -1073741811;
LABEL_247:
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( (_DWORD)v4 )
          v38 = PsSetProcessHandleTracingInformation(Object, &v258);
        else
          v38 = PsSetProcessHandleTracingInformation(Object, 0LL);
        goto LABEL_162;
      case 0x21u:
        if ( ((a4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( a4 == 4 )
        {
          v57 = *(_DWORD *)a3;
          v269 = *(_DWORD *)a3;
          LOBYTE(v58) = 0;
        }
        else
        {
          v302 = *(_QWORD *)a3;
          v57 = v302;
          v58 = HIDWORD(v302);
          v269 = v302;
        }
        if ( v57 >= 4 )
          return -1073741811;
        if ( v57 >= 3
          && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 Handle,
                                 512LL) )
        {
          return -1073741727;
        }
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v12 = result;
        if ( result < 0 )
          return result;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          v50 = (__int64)v259;
          PspLockProcessExclusive((__int64)Object, (__int64)v259);
          v59 = (volatile signed __int32 *)Object;
          v60 = *((_DWORD *)Object + 281);
          v61 = v269 << 27;
          do
          {
            v62 = v60;
            v60 = _InterlockedCompareExchange(v59 + 281, v61 | v60 & 0xC7FFFFFF, v60);
          }
          while ( v60 != v62 );
          v51 = Object;
          v63 = (volatile signed __int64 *)*((_QWORD *)Object + 188);
          if ( v63 != (volatile signed __int64 *)((char *)Object + 1504) )
          {
            v64 = v269;
            do
            {
              if ( (_BYTE)v58 == 1 && ((*((_DWORD *)v63 + 10) >> 9) & 7) < v64 )
                IoBoostThreadIoPriority(v63 - 167, v64, 0);
              PsSetIoPriorityThread((__int64)(v63 - 167), v64);
              v63 = (volatile signed __int64 *)*v63;
              v51 = Object;
            }
            while ( v63 != (volatile signed __int64 *)((char *)Object + 1504) );
          }
LABEL_284:
          PspUnlockProcessExclusive((__int64)v51, v50);
LABEL_132:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
        }
        else
        {
LABEL_133:
          v12 = -1073741558;
        }
        goto LABEL_86;
      case 0x22u:
        if ( a4 != 4 )
          return -1073741820;
        if ( Handle != (HANDLE)-1LL )
          return -1073741811;
        v65 = *(_DWORD *)a3;
        v293 = v65;
        CurrentProcess = PsGetCurrentProcess();
        v22 = KeSetExecuteOptions((__int64)CurrentProcess, v65);
        if ( v22 < 0 || (v65 & 3) != 1 )
          return v22;
        MmRemoveExecuteGrants();
        return v22;
      case 0x27u:
        if ( a4 != 4 )
          return -1073741820;
        v67 = *(_DWORD *)a3;
        v280 = v67;
        if ( v67 > (unsigned int)MmGetDefaultPagePriority() || v67 < (unsigned int)MmGetMinWsPagePriority() )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v12 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
          goto LABEL_133;
        v50 = (__int64)v259;
        PspLockProcessExclusive((__int64)Object, (__int64)v259);
        v68 = v67 << 12;
        v69 = (volatile signed __int32 *)Object;
        v70 = *((_DWORD *)Object + 280);
        do
        {
          v71 = v70;
          v70 = _InterlockedCompareExchange(v69 + 280, v68 | v70 & 0xFFFF8FFF, v70);
        }
        while ( v70 != v71 );
        v51 = Object;
        v72 = (_QWORD *)*((_QWORD *)Object + 188);
        if ( v72 != (_QWORD *)((char *)Object + 1504) )
        {
          v73 = v280;
          do
          {
            PsSetPagePriorityThread((__int64)(v72 - 167), v73);
            v72 = (_QWORD *)*v72;
            v51 = Object;
          }
          while ( v72 != (_QWORD *)((char *)Object + 1504) );
        }
        goto LABEL_284;
      case 0x28u:
        memset(&ApcState, 0, sizeof(ApcState));
        if ( ((a4 - 8) & 0xFFFFFFF7) != 0 )
          return -1073741820;
        if ( a4 == 8 )
        {
          *(_QWORD *)&v278 = 0LL;
          v74 = *(_QWORD *)a3;
          *((_QWORD *)&v278 + 1) = *(_QWORD *)a3;
        }
        else
        {
          v278 = *(_OWORD *)a3;
          v74 = *((_QWORD *)&v278 + 1);
        }
        if ( DWORD1(v278) )
          return -1073741811;
        if ( (_DWORD)v278 != DWORD1(v278) )
          return -1073741736;
        if ( v74 != (__int64)(v74 << 16) >> 16 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v75 = PsGetCurrentProcess();
        v76 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode);
        v19 = Object;
        if ( v76 || Object == v75 )
        {
          v77 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
          v78 = (struct _EX_RUNDOWN_REF *)Object;
          if ( !v77 )
          {
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return -1073741558;
          }
          v80 = 0;
          if ( *((_QWORD *)Object + 176) )
          {
            v79 = *((_WORD *)Object + 1206);
            if ( v79 == 332 || v79 == 452 )
              v80 = 1;
          }
          v81 = v75[1].Affinity.StaticBitmap[30];
          if ( v80 )
          {
            if ( v81 )
            {
              v86 = WORD2(v75[2].Affinity.StaticBitmap[20]);
              if ( v86 == 332 || v86 == 452 )
              {
                KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
                if ( v74 < MmGetMaximumUserAddress() && (unsigned int)MmValidateUserCallTarget(v74, 1LL) )
                {
                  v87 = 0LL;
                  v88 = (__int64 *)*((_QWORD *)Object + 176);
                  if ( v88 )
                    v87 = *v88;
                  *(_DWORD *)(v87 + 1168) = DWORD2(v278);
                  KeUnstackDetachProcess(&ApcState);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
                }
                else
                {
                  v7 = -1073741811;
                  KeUnstackDetachProcess(&ApcState);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
                }
LABEL_233:
                ObfDereferenceObjectWithTag(Object, 0x79517350u);
                return v7;
              }
            }
          }
          else if ( !v81 || (v82 = WORD2(v75[2].Affinity.StaticBitmap[20]), v82 != 332) && v82 != 452 )
          {
            KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
            if ( !(unsigned int)MmValidateUserCallTarget(v74, 0LL) )
              v7 = -1073741811;
            KeUnstackDetachProcess(&ApcState);
            v78 = (struct _EX_RUNDOWN_REF *)Object;
            if ( (v7 & 0x80000000) == 0 )
            {
              v83 = (__int64)v259;
              PspLockProcessExclusive((__int64)Object, (__int64)v259);
              *((_QWORD *)Object + 123) = v74;
              v84 = Object;
              v85 = (volatile signed __int32 *)*((_QWORD *)Object + 188);
              if ( v85 != (volatile signed __int32 *)((char *)Object + 1504) )
              {
                while ( 1 )
                {
                  if ( v74 )
                    _interlockedbittestandset(v85 - 334, 0x19u);
                  else
                    _interlockedbittestandreset(v85 - 334, 0x19u);
                  v85 = *(volatile signed __int32 **)v85;
                  v84 = Object;
                  if ( v85 == (volatile signed __int32 *)((char *)Object + 1504) )
                    break;
                  v74 = *((_QWORD *)&v278 + 1);
                }
              }
              PspUnlockProcessExclusive((__int64)v84, v83);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
              goto LABEL_233;
            }
LABEL_327:
            ExReleaseRundownProtection_0(v78 + 139);
            goto LABEL_233;
          }
          v7 = -1073741637;
          goto LABEL_327;
        }
LABEL_104:
        ObfDereferenceObjectWithTag(v19, 0x79517350u);
        return -1073741727;
      case 0x2Du:
        if ( Handle != (HANDLE)-1LL )
          return -1073741811;
        if ( a4 != 4 )
          return -1073741820;
        LODWORD(v258) = *(_DWORD *)a3;
        if ( (v258 & 0xFFFFFFFC) != 0 )
          return -1073741811;
        return PspSetProcessAffinityUpdateMode(CurrentThread, &v258);
      case 0x2Eu:
        if ( a4 != 4 )
          return -1073741820;
        v89 = *(_DWORD *)a3;
        v294 = v89;
        if ( (v89 & 0xFFFFFFFE) != 0 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( (v89 & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 281, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFDFFFFF);
        goto LABEL_95;
      case 0x30u:
        if ( a4 != 4 )
          return -1073741820;
        v90 = *(_DWORD *)a3;
        v295 = *(_DWORD *)a3;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v91 = PsReferencePrimaryToken((PEPROCESS)Object);
        SeSetVirtualizationToken(v91, v90);
        ObfDereferenceObject(v91);
        goto LABEL_95;
      case 0x31u:
        if ( a4 != 8 )
          return -1073741820;
        if ( Handle != (HANDLE)-1LL )
          return -1073741811;
        v92 = *(_QWORD *)a3;
        v311 = v92;
        if ( (v92 & 3) != 1 )
          return -1073741811;
        PsGetCurrentProcess()[1].Affinity.StaticBitmap[23] = v92;
        return 0;
      case 0x34u:
        if ( a4 != 8 )
          return -1073741820;
        v255 = *(_QWORD *)a3;
        if ( Handle != (HANDLE)-1LL && (_DWORD)v255 != 2 )
          return -1073741811;
        v93 = PsGetCurrentProcess();
        p_Lock = &v93->Header.Lock;
        Object = v93;
        if ( (_DWORD)v255 != 16 )
        {
          v96 = (int)v255 - 1;
          switch ( (int)v255 )
          {
            case 1:
              if ( (v255 & 0xFFFFFFF000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              v97 = (HIDWORD(v255) >> 1) & 1;
              if ( !v97 && ((__int64)v93[2].ReadyListHead.Blink & 0x10) != 0 )
                goto LABEL_370;
              if ( (v255 & 0x100000000LL) == 0 && ((__int64)v93[2].ReadyListHead.Blink & 0x40) == 0 )
                goto LABEL_370;
              v98 = (HIDWORD(v255) >> 3) & 1;
              if ( !v98 && ((__int64)v93[2].ReadyListHead.Blink & 8) != 0 )
                goto LABEL_370;
              if ( v98 )
              {
                if ( !v97 )
                {
                  v12 = -1073741776;
                  goto LABEL_739;
                }
              }
              else if ( !v97 )
              {
                goto LABEL_376;
              }
              _InterlockedOr((volatile signed __int32 *)&v93[2].ReadyListHead.Blink, 0x10u);
              p_Lock = (volatile signed __int32 *)Object;
LABEL_376:
              if ( (v255 & 0x100000000LL) != 0 )
              {
                _InterlockedAnd(p_Lock + 628, 0xFFFFFFBF);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( !v98 )
                goto LABEL_738;
              _InterlockedOr(p_Lock + 628, 8u);
              goto LABEL_737;
            case 2:
              v103 = HIDWORD(v255);
              if ( (v255 & 0xFFFFFFF000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v255 & 0x100000000LL) != 0 && (v255 & 0x800000000LL) != 0 )
                v103 = HIDWORD(v255) & 0xFFFFFFF7;
              v104 = v103 & 1;
              if ( (v103 & 1) == 0 && ((v103 & 2) != 0 || (v103 & 4) != 0) )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (unsigned int)PsIsSystemWideMitigationOptionSet(9LL) )
              {
                v12 = -1073741637;
                p_Lock = (volatile signed __int32 *)Object;
                goto LABEL_739;
              }
              if ( Handle == (HANDLE)-1LL )
              {
                p_Lock = (volatile signed __int32 *)Object;
                v105 = 0;
              }
              else
              {
                v12 = ObReferenceObjectByHandleWithTag(
                        Handle,
                        0x200u,
                        (POBJECT_TYPE)PsProcessType,
                        PreviousMode,
                        0x79517350u,
                        &Object,
                        0LL);
                if ( v12 < 0 )
                  goto LABEL_390;
                v105 = 1;
                v106 = PsGetCurrentProcess();
                p_Lock = (volatile signed __int32 *)Object;
                if ( Object != v106 )
                {
                  v107 = *((_DWORD *)Object + 628);
                  if ( (v107 & 0x100) != 0 )
                  {
                    memset(SubjectContext, 0, 32);
                    SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, (PSECURITY_SUBJECT_CONTEXT)SubjectContext);
                    IsSandboxedToken = RtlIsSandboxedToken((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
                    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
                    if ( !(unsigned __int8)RtlIsSandboxedToken(0LL) )
                    {
                      if ( IsSandboxedToken )
                      {
                        p_Lock = (volatile signed __int32 *)Object;
                        if ( (*((_DWORD *)Object + 628) & 0x400) != 0 )
                          goto LABEL_454;
                      }
                    }
                    v109 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode);
                    p_Lock = (volatile signed __int32 *)Object;
                    if ( v109 )
                      goto LABEL_454;
                  }
                  else if ( (v103 & 8) != 0 || (v103 & 1) != 0 || (v107 & 0x800) == 0 )
                  {
LABEL_454:
                    v110 = 0;
                    if ( (v103 & 1) == 0 )
                      v110 = 2304;
                    v111 = -v104;
                    v112 = (v111 != 0 ? 0x100 : 0) | 0x800;
                    if ( (v103 & 8) == 0 )
                      v112 = v111 != 0 ? 0x900 : 0;
                    if ( (v103 & 2) != 0 )
                      v112 |= 0x200u;
                    else
                      v110 |= 0x200u;
                    v113 = v103 >> 2;
                    v114 = v112 | 0x400;
                    if ( (v113 & 1) == 0 )
                      v114 = v112;
                    v115 = v110 | 0x400;
                    v116 = (v113 & 1) == 0;
LABEL_491:
                    if ( v116 )
                      v110 = v115;
                    RtlInterlockedSetClearBits(p_Lock + 628, v114, v110);
                    v12 = 0;
                    p_Lock = (volatile signed __int32 *)Object;
LABEL_740:
                    if ( v105 == 1 )
                    {
                      ObfDereferenceObjectWithTag((PVOID)p_Lock, 0x79517350u);
                      return v12;
                    }
                    return v12;
                  }
                  v12 = -1073741790;
                  goto LABEL_740;
                }
              }
              if ( (v103 & 1) == 0 && (p_Lock[628] & 0x100) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_740;
              }
              v117 = (v103 >> 3) & 1;
              if ( !v117 && (v103 & 1) == 0 && (p_Lock[628] & 0x800) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_740;
              }
              v118 = (v103 >> 1) & 1;
              if ( v118 && (p_Lock[628] & 0x300) == 0x100 )
              {
                v12 = -1073741790;
                goto LABEL_740;
              }
              v119 = (v103 >> 2) & 1;
              if ( v119 && (p_Lock[628] & 0x500) == 0x100 )
              {
                v12 = -1073741790;
                goto LABEL_740;
              }
              if ( v104 )
              {
                v120 = 2304;
              }
              else
              {
                v120 = 0;
                if ( v117 )
                  v120 = 2048;
              }
              v110 = (v118 ^ 1) << 9;
              v114 = v120 | 0x200;
              if ( !v118 )
                v114 = v120;
              if ( v119 )
                v114 |= 0x400u;
              v115 = v110 | 0x400;
              v116 = v119 == 0;
              goto LABEL_491;
            case 3:
              if ( (v255 & 0xFFFFFFFC00000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( ((HIDWORD(v255) >> 1) & 1) == 0 && (v255 & 0x100000000LL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( ((HIDWORD(v255) >> 1) & 1) != 0 && (v255 & 0x100000000LL) == 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              v99 = ObReferenceProcessHandleTable(v93);
              if ( !v99 )
              {
                v12 = -1073741558;
                goto LABEL_390;
              }
              v12 = -1073741790;
              if ( (unsigned __int8)ExEnableHandleExceptions(v99, BYTE4(v255) & 1) )
                v12 = 0;
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
              p_Lock = (volatile signed __int32 *)Object;
              goto LABEL_739;
            case 4:
              v100 = HIDWORD(v255);
              if ( (v255 & 0xFFFFFFF000000000uLL) != 0 )
              {
                v12 = -1073741811;
LABEL_739:
                v105 = 0;
                goto LABEL_740;
              }
              if ( (v255 & 0x100000000LL) != 0 && (v255 & 0x200000000LL) != 0 )
              {
                v100 = HIDWORD(v255) & 0xFFFFFFFD;
                HIDWORD(v255) &= ~2u;
              }
              if ( (unsigned int)Feature_FsctlProcessMitigation__private_IsEnabledNoReporting()
                && (v100 & 4) != 0
                && (v100 & 8) != 0 )
              {
                v100 &= ~8u;
                HIDWORD(v255) = v100;
              }
              if ( (v100 & 1) == 0 )
              {
                p_Lock = (volatile signed __int32 *)Object;
                if ( (*((_DWORD *)Object + 628) & 0x1000) != 0 )
                {
                  v12 = -1073741790;
                  goto LABEL_739;
                }
              }
              if ( !(unsigned int)Feature_FsctlProcessMitigation__private_IsEnabledNoReporting() || (v100 & 4) != 0 )
              {
                p_Lock = (volatile signed __int32 *)Object;
              }
              else
              {
                p_Lock = (volatile signed __int32 *)Object;
                if ( (*((_DWORD *)Object + 732) & 2) != 0 )
                {
                  v12 = -1073741790;
                  goto LABEL_739;
                }
              }
              v101 = (v100 >> 1) & 1;
              if ( !v101 && (v100 & 1) == 0 && (p_Lock[628] & 0x2000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( !(unsigned int)Feature_FsctlProcessMitigation__private_IsEnabledNoReporting()
                || (v100 & 8) != 0
                || (v100 & 4) != 0 )
              {
                p_Lock = (volatile signed __int32 *)Object;
              }
              else
              {
                p_Lock = (volatile signed __int32 *)Object;
                if ( (*((_DWORD *)Object + 732) & 4) != 0 )
                {
                  v12 = -1073741790;
                  goto LABEL_739;
                }
              }
              if ( (v100 & 1) != 0 || v101 )
              {
                IsGuiThread = PsIsGuiThread(v259);
                p_Lock = (volatile signed __int32 *)Object;
                if ( IsGuiThread )
                {
                  v12 = -1073741431;
                  goto LABEL_739;
                }
              }
              v12 = 0;
              if ( (v100 & 1) != 0 )
              {
                _InterlockedOr(p_Lock + 628, 0x3000u);
              }
              else
              {
                if ( !v101 )
                  goto LABEL_430;
                _InterlockedOr(p_Lock + 628, 0x2000u);
              }
              LOBYTE(v100) = BYTE4(v255);
LABEL_430:
              LOBYTE(v7) = (unsigned int)Feature_FsctlProcessMitigation__private_IsEnabledNoReporting() != 0;
              if ( v7 )
              {
                if ( (v100 & 4) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)Object + 732, 6u);
                  p_Lock = (volatile signed __int32 *)Object;
                  goto LABEL_739;
                }
                if ( (v100 & 8) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)Object + 732, 4u);
                  p_Lock = (volatile signed __int32 *)Object;
                  goto LABEL_739;
                }
              }
LABEL_390:
              p_Lock = (volatile signed __int32 *)Object;
              goto LABEL_739;
            case 6:
              if ( (v255 & 0xFFFFFFFE00000000uLL) != 0 )
              {
                v12 = -1073741811;
              }
              else if ( (v255 & 0x100000000LL) != 0 || (LODWORD(v93[2].ReadyListHead.Blink) & 0x80u) == 0 )
              {
                v12 = 0;
                if ( (v255 & 0x100000000LL) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)&v93[2].ReadyListHead.Blink, 0x80u);
                  p_Lock = (volatile signed __int32 *)Object;
                }
              }
              else
              {
                v12 = -1073741790;
              }
              goto LABEL_739;
            case 7:
              if ( (v255 & 0xFFFFFFE000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( ((HIDWORD(v255) >> 3) & 1) != 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x2000000) == 0 )
                goto LABEL_370;
              if ( ((HIDWORD(v255) >> 3) & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x2000000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( ((HIDWORD(v255) >> 4) & 1) != 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x4000000) == 0 )
                goto LABEL_370;
              if ( ((HIDWORD(v255) >> 4) & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x4000000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( ((__int64)v93[2].ReadyListHead.Blink & 1) == 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( (v255 & 0x400000000LL) == 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              _InterlockedOr((volatile signed __int32 *)&v93[2].ReadyListHead.Blink, 4u);
              goto LABEL_737;
            case 8:
              v121 = HIDWORD(v255);
              if ( (v255 & 0xFFFFFFE000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v255 & 0x100000000LL) != 0 && ((v255 & 0x800000000LL) != 0 || (v255 & 0x1000000000LL) != 0) )
                v121 = HIDWORD(v255) & 0xFFFFFFE7;
              if ( (v121 & 2) != 0 && (v121 & 0x10) != 0 )
                v121 &= ~0x10u;
              v122 = (v121 >> 3) & 1;
              if ( v122 && (v121 & 0x10) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              v123 = (v121 >> 1) & 1;
              if ( v123 + (v121 & 1) > 1 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v121 & 1) != 0 )
                goto LABEL_544;
              Flink_low = LOBYTE(v93[2].Header.WaitListHead.Flink);
              if ( (_BYTE)Flink_low == 8 )
                goto LABEL_536;
              LOBYTE(v96) = 8;
              if ( (unsigned int)SeCompareSigningLevels(v96, Flink_low) )
                goto LABEL_539;
              p_Lock = (volatile signed __int32 *)Object;
LABEL_536:
              v125 = *((unsigned __int8 *)p_Lock + 2169);
              if ( (_BYTE)v125 == 8 )
                goto LABEL_370;
              LOBYTE(v96) = 8;
              if ( !(unsigned int)SeCompareSigningLevels(v96, v125) )
              {
                p_Lock = (volatile signed __int32 *)Object;
                v12 = -1073741790;
                goto LABEL_739;
              }
LABEL_539:
              p_Lock = (volatile signed __int32 *)Object;
              if ( v123 )
                goto LABEL_544;
              LOBYTE(v94) = 6;
              if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 2168), v94) )
              {
                LOBYTE(v94) = 6;
                if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 2169), v94) )
                {
                  v12 = -1073741790;
                  p_Lock = (volatile signed __int32 *)Object;
                  goto LABEL_739;
                }
              }
              p_Lock = (volatile signed __int32 *)Object;
LABEL_544:
              if ( (p_Lock[628] & 0x3000000) != 0 && (v121 & 0x10) == 0 && !v123 && !v122 && (v121 & 1) == 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              v12 = 0;
              if ( (v121 & 1) != 0 )
              {
                LOBYTE(v96) = 8;
                if ( (unsigned int)SeCompareSigningLevels(v96, *((unsigned __int8 *)p_Lock + 2168)) )
                  *((_BYTE *)Object + 2168) = 8;
                LOBYTE(v126) = 8;
                if ( (unsigned int)SeCompareSigningLevels(v126, *((unsigned __int8 *)Object + 2169)) )
                  *((_BYTE *)Object + 2169) = 8;
              }
              else
              {
                if ( !v123 )
                  goto LABEL_561;
                LOBYTE(v94) = 6;
                if ( !(unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)p_Lock + 2168), v94) )
                {
                  v12 = -1073741790;
                  p_Lock = (volatile signed __int32 *)Object;
                  goto LABEL_739;
                }
                LOBYTE(v127) = 6;
                if ( (unsigned int)SeCompareSigningLevels(v127, *((unsigned __int8 *)Object + 2169)) )
                  *((_BYTE *)Object + 2169) = 6;
              }
              p_Lock = (volatile signed __int32 *)Object;
LABEL_561:
              if ( v121 )
                v7 = 0x800000;
              v128 = ((v121 & 8) == 0) << 24;
              v129 = v7 | 0x1000000;
              if ( !v122 )
                v129 = v7;
              if ( ((v121 >> 4) & 1) != 0 )
                v129 |= 0x2000000u;
              else
                v128 |= 0x2000000u;
              RtlInterlockedSetClearBits(p_Lock + 628, v129, v128);
              p_Lock = (volatile signed __int32 *)Object;
              goto LABEL_739;
            case 9:
              if ( (v255 & 0xFFFFFFFC00000000uLL) != 0 )
              {
                v12 = -1073741811;
              }
              else if ( (v255 & 0x100000000LL) != 0 || ((__int64)v93[2].ReadyListHead.Blink & 0x10000) == 0 )
              {
                if ( (v255 & 0x100000000LL) != 0
                  || (v255 & 0x200000000LL) != 0
                  || ((__int64)v93[2].ReadyListHead.Blink & 0x20000) == 0 )
                {
                  v12 = 0;
                  if ( (v255 & 0x100000000LL) != 0 )
                  {
                    RtlInterlockedSetClearBits((volatile signed __int32 *)&v93[2].ReadyListHead.Blink, 0x10000, 0x20000);
                    p_Lock = (volatile signed __int32 *)Object;
                  }
                  else if ( (v255 & 0x200000000LL) != 0 )
                  {
                    RtlInterlockedSetClearBits((volatile signed __int32 *)&v93[2].ReadyListHead.Blink, 0x20000, 0x10000);
                    p_Lock = (volatile signed __int32 *)Object;
                  }
                }
                else
                {
                  v12 = -1073741790;
                }
              }
              else
              {
                v12 = -1073741790;
              }
              goto LABEL_739;
            case 10:
              v130 = HIDWORD(v255);
              if ( (v255 & 0xFFFFFFE000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v255 & 0x100000000LL) != 0 && (v255 & 0x800000000LL) != 0 )
                v130 = HIDWORD(v255) & 0xFFFFFFF7;
              if ( (v130 & 2) != 0 && (v130 & 0x10) != 0 )
                v130 &= ~0x10u;
              v131 = v130 & 1;
              v132 = 0x80000;
              if ( (v130 & 1) == 0 && ((__int64)v93[2].ReadyListHead.Blink & 0x80000) != 0 )
                goto LABEL_370;
              v133 = (v130 >> 1) & 1;
              if ( !v133 && ((__int64)v93[2].ReadyListHead.Blink & 0x200000) != 0 )
                goto LABEL_370;
              v134 = (v130 >> 2) & 1;
              if ( !v134 && ((__int64)v93[2].ReadyListHead.Blink & 0x40000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              v135 = (v130 >> 3) & 1;
              if ( !v135 && (v130 & 1) == 0 && ((__int64)v93[2].ReadyListHead.Blink & 0x100000) != 0 )
                goto LABEL_370;
              v136 = (v130 >> 4) & 1;
              if ( !v136 && !v133 && ((__int64)v93[2].ReadyListHead.Blink & 0x400000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              v137 = 0;
              if ( v131 )
              {
                v137 = 0x100000;
              }
              else
              {
                v132 = 0;
                if ( v135 )
                  v132 = 0x100000;
              }
              if ( v133 )
              {
                v132 |= 0x200000u;
                v137 |= 0x400000u;
              }
              else if ( v136 )
              {
                v132 |= 0x400000u;
              }
              v138 = v132 | 0x40000;
              if ( !v134 )
                v138 = v132;
              RtlInterlockedSetClearBits(p_Lock + 628, v138, v137);
              goto LABEL_737;
            case 13:
              v139 = HIDWORD(v255);
              if ( (v255 & 0xFFFFFFF800000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v255 & 0x100000000LL) == 0 && (v255 & 0x400000000LL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v255 & 0x100000000LL) != 0 && (v255 & 0x200000000LL) != 0 )
                v139 = HIDWORD(v255) & 0xFFFFFFFD;
              NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v93);
              v141 = NoChildProcessRestrictedPolicy;
              v142 = v139 & 1;
              if ( (v139 & 1) == 0 && NoChildProcessRestrictedPolicy - 1 <= 1 )
              {
                v12 = -1073741790;
                p_Lock = (volatile signed __int32 *)Object;
                goto LABEL_739;
              }
              v143 = (v139 >> 2) & 1;
              if ( v143 && (_DWORD)v141 == 1 )
              {
                v12 = -1073741790;
                p_Lock = (volatile signed __int32 *)Object;
                goto LABEL_739;
              }
              v144 = (v139 >> 1) & 1;
              if ( v144 )
                goto LABEL_633;
              if ( v142 )
                goto LABEL_634;
              if ( (_DWORD)v141 == 3 )
              {
                v12 = -1073741790;
                p_Lock = (volatile signed __int32 *)Object;
                goto LABEL_739;
              }
LABEL_633:
              if ( v142 )
              {
LABEL_634:
                if ( v143 )
                  PspSetNoChildProcessRestrictedPolicy(Object, 2LL, v141);
                else
                  PspSetNoChildProcessRestrictedPolicy(Object, 1LL, v141);
              }
              else if ( v144 )
              {
                PspSetNoChildProcessRestrictedPolicy(Object, 3LL, v141);
              }
              goto LABEL_737;
            case 14:
              if ( (v255 & 0xFFFFFFE000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v255 & 0x100000000LL) == 0 && ((__int64)v93[2].ReadyListHead.Blink & 0x40000000) != 0
                || ((HIDWORD(v255) >> 1) & 1) == 0 && SLODWORD(v93[2].ReadyListHead.Blink) < 0
                || ((HIDWORD(v255) >> 3) & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x2000) != 0
                || ((HIDWORD(v255) >> 2) & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x1000) != 0 )
              {
                goto LABEL_370;
              }
              v145 = (HIDWORD(v255) >> 4) & 1;
              if ( !v145 && (*(_DWORD *)&v93[2].IdealProcessor[30] & 1) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( v145 )
              {
                IsCoreIsolationMitigationPolicyEnforceable = KeIsCoreIsolationMitigationPolicyEnforceable();
                p_Lock = (volatile signed __int32 *)Object;
                if ( !IsCoreIsolationMitigationPolicyEnforceable )
                {
LABEL_654:
                  v12 = -1073741637;
                  goto LABEL_739;
                }
              }
              if ( (v255 & 0x100000000LL) != 0 )
              {
                _InterlockedOr(p_Lock + 628, 0x40000000u);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( ((HIDWORD(v255) >> 1) & 1) != 0 )
              {
                _InterlockedOr(p_Lock + 628, 0x80000000);
                _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200000u);
                PspWriteProcessSecurityDomain((__int64)Object, _InterlockedIncrement64(&PsNextSecurityDomain), 1);
                KeSynchronizeSecurityDomain((_KPROCESS *)Object);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( ((HIDWORD(v255) >> 2) & 1) != 0 )
              {
                _InterlockedOr(p_Lock + 629, 0x1000u);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( ((HIDWORD(v255) >> 3) & 1) != 0 )
              {
                _InterlockedOr(p_Lock + 629, 0x2000u);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( !v145 )
                goto LABEL_738;
              PspApplyCoreIsolationPolicy(p_Lock);
              goto LABEL_737;
            case 15:
              v147 = HIDWORD(v255);
              if ( (v255 & 0xFFFFFC0000000000uLL) != 0 )
              {
                v12 = -1073741811;
                goto LABEL_739;
              }
              if ( (v255 & 0x1000000000LL) != 0 )
              {
                v147 = HIDWORD(v255) | 1;
                HIDWORD(v255) |= 1u;
              }
              if ( (v147 & 0x200) != 0 )
              {
                v147 |= 4u;
                HIDWORD(v255) = v147;
              }
              if ( (v147 & 0x40) != 0 )
              {
                v147 |= 0x20u;
                HIDWORD(v255) = v147;
              }
              v148 = (v147 >> 4) & 1;
              if ( !v148 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x100000) != 0
                || (v147 & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x4000) != 0 )
              {
                goto LABEL_370;
              }
              if ( (v147 & 1) != 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x4000) == 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              v149 = (v147 >> 9) & 1;
              if ( v149 )
              {
                if ( SHIDWORD(v93[2].ReadyListHead.Blink) >= 0 )
                  goto LABEL_370;
              }
              v150 = (v147 >> 2) & 1;
              if ( !v150 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x20000) != 0 )
                goto LABEL_370;
              if ( v150 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x20000) == 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              v151 = (v147 >> 6) & 1;
              if ( !v151 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x400000) != 0 )
                goto LABEL_370;
              v152 = (v147 >> 5) & 1;
              if ( !v152 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x200000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              v153 = (v147 >> 8) & 1;
              if ( !v153 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x40000000) != 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( (v154 = (v147 >> 1) & 1) != 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x8000) == 0
                || ((v147 >> 3) & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x40000) != 0
                || ((v147 >> 3) & 1) != 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x40000) == 0
                || (v155 = (v147 >> 7) & 1) == 0 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x800000) != 0 )
              {
LABEL_370:
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( v155 && (HIDWORD(v93[2].ReadyListHead.Blink) & 0x800000) == 0 )
              {
                v12 = -1073741790;
                goto LABEL_739;
              }
              if ( v148 )
              {
                _InterlockedOr((volatile signed __int32 *)&v93[2].ReadyListHead.Blink + 1, 0x100000u);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( !v149 && v150 )
              {
                _InterlockedAnd(p_Lock + 629, 0x7FFFFFFFu);
                p_Lock = (volatile signed __int32 *)Object;
              }
              if ( v151 )
              {
                _InterlockedOr(p_Lock + 629, 0x200000u);
                _InterlockedOr((volatile signed __int32 *)Object + 629, 0x400000u);
              }
              else
              {
                if ( !v152 )
                {
LABEL_716:
                  if ( v153 )
                  {
                    _InterlockedOr(p_Lock + 629, 0x40000000u);
                    p_Lock = (volatile signed __int32 *)Object;
                  }
                  if ( v154 )
                    goto LABEL_738;
                  _InterlockedAnd(p_Lock + 629, 0xFFFF7FFF);
LABEL_737:
                  p_Lock = (volatile signed __int32 *)Object;
LABEL_738:
                  v12 = 0;
                  goto LABEL_739;
                }
                _InterlockedOr(p_Lock + 629, 0x200000u);
              }
              p_Lock = (volatile signed __int32 *)Object;
              goto LABEL_716;
            default:
              goto LABEL_654;
          }
        }
        v156 = HIDWORD(v255);
        if ( (v255 & 0xFFFFFFFC00000000uLL) != 0 )
        {
          v12 = -1073741811;
          goto LABEL_739;
        }
        if ( (v255 & 0x100000000LL) != 0 && (v255 & 0x200000000LL) != 0 )
          v156 = HIDWORD(v255) & 0xFFFFFFFD;
        RedirectionTrustPolicy = PspGetRedirectionTrustPolicy(v93);
        v158 = v156 & 1;
        if ( (v156 & 1) == 0 && RedirectionTrustPolicy == 1 )
        {
          v12 = -1073741790;
          p_Lock = (volatile signed __int32 *)Object;
          goto LABEL_739;
        }
        v159 = (v156 >> 1) & 1;
        if ( v159 )
          goto LABEL_732;
        if ( v158 )
          goto LABEL_733;
        if ( RedirectionTrustPolicy == 2 )
        {
          v12 = -1073741790;
          p_Lock = (volatile signed __int32 *)Object;
          goto LABEL_739;
        }
LABEL_732:
        if ( v158 )
        {
LABEL_733:
          v160 = 1LL;
        }
        else
        {
          if ( !v159 )
            goto LABEL_737;
          v160 = 2LL;
        }
        PspSetRedirectionTrustPolicy(Object, v160);
        goto LABEL_737;
      case 0x35u:
        if ( Handle != (HANDLE)-1LL )
          return -1073741811;
        if ( a4 != 16 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *(_OWORD *)a3;
        if ( SubjectContext[8] )
          return RtlRemoveDynamicFunctionTable(*(__int64 *)SubjectContext);
        else
          return RtlInsertDynamicFunctionTable(*(__int64 *)SubjectContext);
      case 0x36u:
        if ( a4 != 4 )
          return -1073741820;
        v161 = *(_DWORD *)a3;
        v299 = v161;
        if ( (v161 & 0xFFFFFFFE) != 0 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v162 = ObReferenceProcessHandleTable(Object);
        if ( v162 )
        {
          ExEnableHandleExceptions(v162, v161 & 1);
LABEL_752:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
        }
        else
        {
LABEL_753:
          v7 = -1073741558;
        }
        goto LABEL_233;
      case 0x38u:
        *(_OWORD *)Src = 0LL;
        v163 = 0LL;
        P = 0LL;
        if ( PreviousMode != 1 )
          goto LABEL_766;
        v164 = 0x7FFFFFFF0000LL;
        if ( a3 < 0x7FFFFFFF0000LL )
          v164 = a3;
        v165 = *(_DWORD *)v164;
        LODWORD(Src[0]) = v165;
        v166 = *(void **)(v164 + 8);
        Src[1] = v166;
        if ( !(_WORD)v165 )
          return -1073741811;
        if ( ((unsigned __int8)v166 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v167 = (unsigned __int64)v166 + (unsigned __int16)v165;
        if ( v167 > 0x7FFFFFFF0000LL || v167 < (unsigned __int64)v166 )
          MEMORY[0x7FFFFFFF0000] = 0;
        v168 = (void *)ExAllocatePool2(64LL, LOWORD(Src[0]), 1850307408LL);
        v163 = v168;
        P = v168;
        if ( !v168 )
          return -1073741670;
        memmove(v168, Src[1], LOWORD(Src[0]));
        Src[1] = v163;
        v5 = Src;
        v312 = Src;
LABEL_766:
        v12 = ObReferenceObjectByHandleWithTag(
                Handle,
                0x2000u,
                (POBJECT_TYPE)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL);
        if ( v12 >= 0 )
        {
          v39 = IoRevokeHandlesForProcess((__int64)v5, Object);
          if ( v163 )
            ExFreePoolWithTag(v163, 0);
          goto LABEL_163;
        }
        if ( !v163 )
          return v12;
        ExFreePoolWithTag(v163, 0);
        return v12;
      case 0x39u:
        return MmProcessWorkingSetControl((ULONG_PTR)Handle);
      case 0x3Bu:
        if ( a4 != 4 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v169 = *(_DWORD *)v5 != 0;
        v296 = v169;
        if ( PsGetCurrentProcess() == Object )
        {
          v12 = -1073741790;
        }
        else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          v12 = 0;
          KeSetCheckStackExtentsProcess(Object, v169);
          if ( !v169 && (*((_DWORD *)Object + 280) & 0x20000) != 0 )
            _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFFFDFFFF);
        }
        else
        {
          v12 = -1073741727;
        }
        goto LABEL_86;
      case 0x3Eu:
        if ( a4 != 16 )
          return -1073741820;
        v322 = *(_OWORD *)a3;
        if ( (_WORD)v322 != 1 || DWORD1(v322) )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( *((_QWORD *)&v322 + 1) )
          _InterlockedOr((volatile signed __int32 *)Object + 281, 0x100u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFEFF);
        goto LABEL_95;
      case 0x3Fu:
        v258 = 0LL;
        if ( a4 != 8 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v258 = *v5;
        v38 = PsSetProcessFaultInformation((__int64)Object, &v258);
        goto LABEL_162;
      case 0x41u:
        if ( a4 != 32 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x2001u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        *(_OWORD *)SubjectContext = *(_OWORD *)v5;
        *(_OWORD *)&SubjectContext[16] = *((_OWORD *)v5 + 1);
        if ( *(_DWORD *)SubjectContext != 3 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741735;
        }
        if ( (*(_DWORD *)&SubjectContext[4] & 0xFFFFFFF8) != 0
          || *(_QWORD *)&SubjectContext[8]
          || *(_QWORD *)&SubjectContext[16]
          || (((*(_DWORD *)&SubjectContext[4] >> 1) & 1) != 0 || (SubjectContext[4] & 4) != 0)
          && (SubjectContext[4] & 1) == 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        if ( ((*(_DWORD *)&SubjectContext[4] >> 1) & 1) != 0 || (SubjectContext[4] & 4) != 0 )
          v38 = MmReleaseCommitForMemResetPages(
                  (volatile signed __int32 *)Object,
                  (*(_DWORD *)&SubjectContext[4] >> 2) & 1);
        else
          v38 = MmSetCommitReleaseEligibility((__int64)Object, SubjectContext[4] & 1);
LABEL_162:
        v39 = v38;
LABEL_163:
        v40 = Object;
LABEL_164:
        ObfDereferenceObjectWithTag(v40, 0x79517350u);
        return v39;
      case 0x42u:
      case 0x43u:
        if ( (a4 & 7) != 0 || a4 > 0x100 )
          return -1073741820;
        memmove(v327, (const void *)a3, a4);
        v170 = (unsigned int)v4 >> 3;
        if ( v256 == 67 )
        {
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( result < 0 )
            return result;
        }
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v38 = KeSetCpuSetsProcess((__int64)Object, v170, (__int64)v327);
        goto LABEL_162;
      case 0x44u:
        if ( (PsGetCurrentProcess()[1].IdealProcessor[30] & 0x100) == 0 )
          return -1073741727;
        v287 = 0LL;
        v39 = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v287, 0LL);
        Object = v287;
        if ( v39 < 0 )
          return v39;
        _InterlockedOr((volatile signed __int32 *)v287 + 543, 0x40u);
        ObfDereferenceObject(Object);
        return v39;
      case 0x46u:
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        EtwTraceProcessSetInPrivateMode((__int64)Object);
        _InterlockedOr((volatile signed __int32 *)Object + 280, 0x80000000);
        goto LABEL_95;
      case 0x47u:
        if ( a4 != 4 )
          return -1073741820;
        v172 = *(_DWORD *)a3;
        v300 = *(_DWORD *)a3;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v173 = ObReferenceProcessHandleTable(Object);
        if ( !v173 )
          goto LABEL_753;
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v173, v172);
        goto LABEL_752;
      case 0x48u:
        return PsIumEnableOnDemandDebugWithResponse(Handle, a3, a4);
      case 0x4Au:
        if ( a4 != 1 )
          return -1073741820;
        v174 = *(_BYTE *)a3;
        v267 = *(_BYTE *)a3;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v174 )
          _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFFFFDFF);
        goto LABEL_95;
      case 0x4Du:
        v317 = 0LL;
        v318 = 0;
        if ( a4 != 12 )
          return -1073741820;
        v317 = *(PVOID *)a3;
        v175 = *(_DWORD *)(a3 + 8);
        v318 = v175;
        if ( (_DWORD)v317 != 1 || (HIDWORD(v317) & 0xFFFFFFF8) != 0 || (~HIDWORD(v317) & v175) != 0 )
          return -1073741811;
        ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        if ( !ExtensionTable )
          return -1073741822;
        v177 = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
        if ( v177 >= 0 )
        {
          v178 = (*(__int64 (__fastcall **)(PVOID, PVOID *))(ExtensionTable + 8))(Object, &v317);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v178;
        }
        else
        {
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v177;
        }
      case 0x50u:
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( result < 0 )
          return result;
        if ( (_DWORD)v4 != 1 )
          return -1073741820;
        v171 = *(_BYTE *)v5;
        v266 = v171;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v171 )
          _InterlockedOr((volatile signed __int32 *)Object + 280, 0x8000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xF7FFFFFF);
        KeRecomputeCpuSetAffinityProcess((__int64)Object);
        goto LABEL_95;
      case 0x52u:
        if ( a4 < 8 )
          return -1073741820;
        memset(v326, 0, sizeof(v326));
        if ( a4 >= 0x90 )
          LODWORD(v4) = 144;
        memmove(v326, (const void *)a3, (unsigned int)v4);
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v179 = PoSetProcessEnergyTrackingState(Object, v326);
        v15 = Object;
        if ( v179 >= 0 )
          goto LABEL_96;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v179;
      case 0x53u:
        return -1073741637;
      case 0x55u:
        if ( a4 != 24 )
          return -1073741820;
        *(_OWORD *)pszDest = 0LL;
        v329 = 0LL;
        v330 = 0LL;
        v331 = 0LL;
        v332 = 0;
        v180 = *(_OWORD *)a3;
        *(_OWORD *)pszSrc = v180;
        v292 = *(_QWORD *)(a3 + 16);
        v181 = (const char *)v180;
        if ( (unsigned __int64)(v180 + 65) > 0x7FFFFFFF0000LL || (__int64)v180 + 65 < (unsigned __int64)v180 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v181 = pszSrc[0];
        }
        RtlStringCbCopyA(pszDest, 0x41uLL, v181);
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x220u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        pszSrc[0] = pszDest;
        v332 = 0;
        v22 = EtwSetProcessTelemetryCoverage(Object, pszSrc);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *((_DWORD *)v5 + 3) = HIDWORD(pszSrc[1]);
        *((_DWORD *)v5 + 4) = v292;
        return v22;
      case 0x57u:
      case 0x60u:
        if ( a2 == 87 && !a4 || a2 == 96 && a4 < 4 )
          return -1073741820;
        v182 = PsGetCurrentProcess();
        result = EtwCheckSecurityLoggerAccess(v182, PreviousMode);
        if ( result < 0 )
          return result;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
          && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          return -1073741727;
        }
        v261 = 0;
        if ( v256 == 87 )
          v183 = (*(_BYTE *)v5 & 1 ^ *(_BYTE *)v5) & 2 ^ *(_BYTE *)v5 & 1;
        else
          v183 = *(_DWORD *)v5;
        v261 = v183;
        if ( (v183 & 0xFFFFFFC0) != 0 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFE7FFFF);
        v184 = (((v261 >> 2) & 1) << 19) | 0x100000;
        if ( (v261 & 8) == 0 )
          v184 = ((v261 >> 2) & 1) << 19;
        v185 = v184 | 0x20000000;
        if ( (v261 & 0x10) == 0 )
          v185 = v184;
        v186 = v185 | 0x10000000;
        if ( (v261 & 0x20) == 0 )
          v186 = v185;
        _InterlockedOr((volatile signed __int32 *)Object + 543, v186);
        _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFCFFFFFF);
        v187 = ((v261 & 1) << 24) | 0x2000000;
        if ( (v261 & 2) == 0 )
          v187 = (v261 & 1) << 24;
        _InterlockedOr((volatile signed __int32 *)Object + 280, v187);
        goto LABEL_95;
      case 0x5Au:
        return SeCodeIntegritySetInformationProcess(Handle, a2, a3, a4);
      case 0x5Bu:
        if ( a4 != 4 )
          return -1073741820;
        v188 = *(_DWORD *)a3;
        v298 = v188;
        if ( (v188 & 0xFFFFFFFE) != 0 )
          return -1073741811;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        LOBYTE(v189) = 1;
        PspSetProcessForegroundBackgroundRequest(Object, v188 & 1, v189);
        goto LABEL_95;
      case 0x5Fu:
        if ( a4 != 8 )
          return -1073741820;
        v190 = *(void **)a3;
        v313 = *(_QWORD *)a3;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x2000u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v39 = ObReferenceObjectByHandleWithTag(
                v190,
                0x1000u,
                (POBJECT_TYPE)PsProcessType,
                PreviousMode,
                0x79517350u,
                &v283,
                0LL);
        v40 = Object;
        if ( v39 < 0 )
          goto LABEL_164;
        v39 = PspCombineSecurityDomains(Object, v283);
        ObfDereferenceObjectWithTag(v283, 0x79517350u);
        goto LABEL_163;
      case 0x61u:
        if ( a4 != 8 )
          return -1073741820;
        v191 = *(void **)a3;
        v282 = v191;
        if ( ((unsigned int)v191 & 0xFFFFFFFE) != 0 || Handle != (HANDLE)-1LL )
          return -1073741811;
        v192 = PsGetCurrentProcess();
        Object = v192;
        v193 = v192[1].Affinity.StaticBitmap[24];
        if ( !v193 )
          return -1073741790;
        v194 = 0LL;
        v195 = (__int64 *)v192[1].Affinity.StaticBitmap[30];
        if ( v195 )
          v194 = *v195;
        v196 = (unsigned __int8)v191 & 1;
        v197 = *(_DWORD *)(v193 + 1984);
        if ( v196 )
          v198 = v197 | 1;
        else
          v198 = v197 & 0xFFFFFFFE;
        *(_DWORD *)(v193 + 1984) = v198;
        if ( v194 )
        {
          v199 = *(_DWORD *)(v194 + 1140);
          if ( v196 )
            v200 = v199 | 1;
          else
            v200 = v199 & 0xFFFFFFFE;
          *(_DWORD *)(v194 + 1140) = v200;
        }
        return v7;
      case 0x62u:
        if ( Handle != (HANDLE)-1LL )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741823;
        if ( a4 != 32 )
          return -1073741820;
        if ( !KeIsUserCetAllowed() || !_bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
          return -1073741637;
        return PspSetupUserFiberShadowStack(*v5, v5[1], (unsigned int)*((_OWORD *)v5 + 1), v5 + 3);
      case 0x63u:
        if ( Handle != (HANDLE)-1LL )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741823;
        if ( a4 != 8 )
          return -1073741820;
        if ( !KeIsUserCetAllowed() || !_bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
          return -1073741637;
        return PspFreeUserFiberShadowStack((PVOID)*v5);
      case 0x64u:
        memset(SubjectContext, 0, 20);
        if ( a4 != 20 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *(_OWORD *)a3;
        *(_DWORD *)&SubjectContext[16] = *(_DWORD *)(a3 + 16);
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x20u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v38 = PspSyscallProviderOptIn(Object, SubjectContext);
        goto LABEL_162;
      case 0x65u:
        LODWORD(v258) = 0;
        v201 = 0LL;
        if ( a4 != 16 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *(_OWORD *)a3;
        v202 = 16 * *(unsigned __int16 *)SubjectContext;
        if ( !v202 )
          return -1073741811;
        v203 = *(const void **)&SubjectContext[8];
        if ( !*(_QWORD *)&SubjectContext[8] )
          return -1073741811;
        v204 = v202;
        ProbeForWrite(*(volatile void **)&SubjectContext[8], v202, 8u);
        if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741790;
        v317 = 0LL;
        result = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v317, 0LL);
        Object = v317;
        if ( result < 0 )
          return result;
        v205 = PsGetCurrentProcess();
        v206 = Object;
        if ( Object == v205 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
        {
          v12 = -1073741790;
        }
        else if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
        {
          v207 = (_DWORD *)ExAllocatePool2(257LL, v204, 1313359172LL);
          v201 = v207;
          v317 = v207;
          if ( v207 )
          {
            memmove(v207, v203, v204);
            v12 = PspProcessDynamicEHContinuationTargets((ULONG_PTR)Object);
            v254 = v12;
            v253 = 0;
          }
          else
          {
            v12 = -1073741801;
          }
          v206 = Object;
        }
        else
        {
          v12 = -1073741637;
        }
        goto LABEL_914;
      case 0x66u:
        LODWORD(v258) = 0;
        v201 = 0LL;
        if ( a4 != 16 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *(_OWORD *)a3;
        v208 = 24 * *(unsigned __int16 *)SubjectContext;
        if ( !v208 )
          return -1073741811;
        v209 = *(const void **)&SubjectContext[8];
        if ( !*(_QWORD *)&SubjectContext[8] )
          return -1073741811;
        v210 = v208;
        ProbeForWrite(*(volatile void **)&SubjectContext[8], v208, 8u);
        if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741790;
        v317 = 0LL;
        result = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v317, 0LL);
        Object = v317;
        if ( result < 0 )
          return result;
        v211 = PsGetCurrentProcess();
        v206 = Object;
        if ( Object == v211 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
        {
          v12 = -1073741790;
        }
        else if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
        {
          v212 = (_DWORD *)ExAllocatePool2(257LL, v210, 1380009284LL);
          v201 = v212;
          v317 = v212;
          if ( v212 )
          {
            memmove(v212, v209, v210);
            v12 = PspProcessDynamicEnforcedAddressRanges((ULONG_PTR)Object, (__int64)&v258);
            v254 = v12;
            while ( 1 )
            {
              v253 = v7;
              if ( v7 >= (unsigned int)v258 )
                break;
              *((_DWORD *)v209 + 6 * v7 + 4) = v201[6 * v7 + 4];
              ++v7;
            }
          }
          else
          {
            v12 = -1073741801;
          }
          v206 = Object;
        }
        else
        {
          v12 = -1073741637;
        }
LABEL_914:
        if ( v206 )
          ObfDereferenceObject(v206);
        if ( !v201 )
          return v12;
        ExFreePoolWithTag(v201, 0);
        return v12;
      case 0x69u:
        if ( a4 != 8 )
          return -1073741820;
        v213 = *(_QWORD *)a3;
        v314 = v213;
        if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & v213) != 0 )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741790;
        if ( Handle == (HANDLE)-1LL )
          goto LABEL_943;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   1,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( Object != PsGetCurrentProcess() )
          return -1073741811;
LABEL_943:
        v214 = PsGetCurrentProcess();
        Object = v214;
        if ( v214[1].Affinity.StaticBitmap[30] )
          return -1073741811;
        if ( PsIsSystemProcess((__int64)v214) )
          return -1073741637;
        else
          return PspEnableProcessOptionalXStateFeatures(Object, v213);
      case 0x6Au:
        return PfSnSetAltPrefetchParam((ULONG_PTR)Handle);
      case 0x6Bu:
        if ( a4 < 0x10 || (a4 & 7) != 0 )
          return -1073741820;
        v215 = (_DWORD *)ExAllocatePool2(257LL, a4, 1349546832LL);
        v216 = v215;
        v282 = v215;
        if ( v215 )
        {
          memmove(v215, v5, v4);
          if ( (unsigned int)(v4 - 8) >> 3 < v216[1] || (*v216 & 0xFFFFFFFE) != 0 )
          {
            v39 = -1073741811;
          }
          else
          {
            v317 = 0LL;
            v39 = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v317, 0LL);
            Object = v317;
            if ( v39 >= 0 )
              v39 = PspAssignCpuPartitionsToProcess(
                      (_DWORD)v317,
                      PreviousMode,
                      (int)v216 + 8,
                      v216[1],
                      *(_BYTE *)v216 & 1);
          }
        }
        else
        {
          v39 = -1073741670;
        }
        if ( v216 )
          ExFreePoolWithTag(v216, 0);
        if ( !Object )
          return v39;
        ObfDereferenceObject(Object);
        return v39;
      case 0x6Cu:
        if ( a4 != 4 )
          return -1073741820;
        v25 = *(_DWORD *)a3;
        v268 = v25;
        if ( !(_WORD)v25 || (v25 & 0xFFFC) != 0 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v22 = result;
        if ( result >= 0 )
        {
          if ( (v25 & 2) != 0 )
            v22 = PspSetProcessPriorityClass(Object, BYTE2(v268), Handle, PreviousMode);
          if ( v22 >= 0 )
          {
            v24 = Object;
            if ( (v25 & 1) != 0 )
            {
              v23 = HIBYTE(v268) == 0;
LABEL_111:
              LOBYTE(v7) = !v23;
              PsSetProcessPriorityByClass(v24, v7);
            }
            else
            {
              KeSetPriorityAndQuantumProcess(
                (__int64)Object,
                *(unsigned int *)&PspPriorityTable[2 * *((unsigned __int8 *)Object + 1463)],
                0,
                0,
                0);
            }
          }
LABEL_112:
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v22;
        }
        return result;
      default:
        return -1073741821;
    }
  }
  memset(v324, 0, sizeof(v324));
  v325 = 0LL;
  v271 = 0LL;
  v276 = 0LL;
  if ( Handle != (HANDLE)-1LL )
    return -1073741811;
  if ( PreviousMode != 1 )
    return -1073741823;
  if ( a4 < 0x28 || a4 - 16 != 24 * ((a4 - 16) / 0x18uLL) )
    return -1073741820;
  if ( a4 == 40 )
  {
    v262 = v324;
  }
  else
  {
    v262 = (PVOID)ExAllocatePool2(257LL, a4, 1936479312LL);
    if ( !v262 )
      return -1073741670;
  }
  v272 = (unsigned int *)v262;
  memmove(v262, v5, v4);
  v305 = (char *)v262 + 4;
  if ( *((_DWORD *)v262 + 1) < 2u
    && (*(_DWORD *)v262 & 0xFFFFFFFE) == 0
    && (v304 = (unsigned int *)((char *)v262 + 8), v217 = *((unsigned int *)v262 + 2), (_DWORD)v217)
    && (unsigned int)(v4 - 16) / 0x18uLL == v217 )
  {
    v218 = 0;
    v253 = 0;
    v219 = (char *)v262 + 16;
    do
    {
      if ( *v219 )
        goto LABEL_1021;
      v253 = ++v218;
      v219 += 6;
    }
    while ( v218 < (unsigned int)v217 );
    v220 = PsGetCurrentProcess();
    Object = v220;
    v256 = 0;
    if ( (*(_DWORD *)v262 & 1) != 0 )
    {
      if ( !v220[1].Affinity.StaticBitmap[30]
        || (v221 = WORD2(v220[2].Affinity.StaticBitmap[20]), v221 != 332) && v221 != 452 )
      {
LABEL_1021:
        v12 = -1073741811;
        goto LABEL_1023;
      }
      v256 = 1;
    }
    v222 = v256 ^ 1u;
    Alignment = 4 * v222 + 4;
    v288 = 4 * v222 + 4;
    v277 = v5;
    v253 = 0;
    v12 = 0;
    v254 = 0;
    v223 = 0LL;
    for ( k = v220; ; k = Object )
    {
      NextProcessThread = PsGetNextProcessThread((__int64)k, v223);
      v225 = v253;
      LODWORD(v259) = v253;
      v226 = NextProcessThread;
      if ( !NextProcessThread || v253 >= *v304 )
        break;
      if ( (*((_DWORD *)NextProcessThread + 29) & 0x400) == 0 )
      {
        RunRef = (PEX_RUNDOWN_REF)((char *)NextProcessThread + 1352);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)NextProcessThread + 169) )
        {
          v227 = (_DWORD *)v226[30];
          v273 = v227;
          if ( v256 )
          {
            v228 = (char *)(v227 + 2059);
            v276 = v227 + 2059;
            LODWORD(v229) = PtrToUlong((const void *)(unsigned int)v227[2059]);
            v230 = v229;
            v271 = v229;
          }
          else
          {
            v228 = (char *)(v227 + 22);
            v276 = v227 + 22;
            v230 = (char *)*((_QWORD *)v227 + 11);
            v271 = v230;
          }
          if ( v230 )
          {
            if ( *v305 == 1 )
            {
              if ( v230 == v228 )
              {
                v271 = 0LL;
                v232 = v225;
              }
              else
              {
                v231 = v288 * *((unsigned int *)v262 + 3);
                if ( v231 )
                {
                  if ( ((Alignment - 1) & (unsigned int)v230) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( (unsigned __int64)&v230[v231] > 0x7FFFFFFF0000LL || &v230[v231] < v230 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                v232 = v253;
                v233 = (volatile void **)((char *)v262 + 24 * v253 + 24);
                ProbeForWrite(*v233, v288 * *((unsigned int *)v262 + 3), Alignment);
                memmove((void *)*v233, v230, v288 * *((unsigned int *)v262 + 3));
                _InterlockedOr(v251, 0);
              }
              v234 = &v277[3 * v232];
              v281 = v234;
              v284 = (__int64)(v234 + 2);
              *((_DWORD *)v234 + 4) |= 1u;
              if ( v256 )
              {
                v235 = PtrToUlong(*(const void **)&v272[6 * (unsigned int)v259 + 6]);
                v273[2059] = v235;
              }
              else
              {
                *((_QWORD *)v273 + 11) = *(_QWORD *)&v272[6 * (unsigned int)v259 + 6];
              }
              v234[4] = *((_QWORD *)NextProcessThread + 154);
              v234[3] = v271;
              *((_DWORD *)v234 + 4) ^= 3u;
              ++v253;
            }
            else
            {
              v236 = 6LL * v253;
              v284 = v236 * 4;
              v237 = &v277[(unsigned __int64)v236 / 2];
              v281 = &v277[(unsigned __int64)v236 / 2];
              v238 = &v277[(unsigned __int64)v236 / 2 + 2];
              v273 = v238;
              *v238 |= 1u;
              v239 = v272;
              v240 = v272[3];
              if ( v256 )
              {
                v241 = (unsigned __int64)&v230[4 * v240];
                if ( v241 >= 0x7FFFFFFF0000LL )
                  v241 = 0x7FFFFFFF0000LL;
                LODWORD(v242) = PtrToUlong((const void *)*(unsigned int *)v241);
                v243 = v242;
                v276 = v242;
                v244 = PtrToUlong(*(const void **)((char *)v239 + v284 + 24));
                v245 = (unsigned __int64)&v271[4 * v239[3]];
                if ( v245 >= 0x7FFFFFFF0000LL )
                  v245 = 0x7FFFFFFF0000LL;
                *(_DWORD *)v245 = v244;
              }
              else
              {
                v246 = (unsigned __int64)&v230[8 * v240];
                if ( v246 >= 0x7FFFFFFF0000LL )
                  v246 = 0x7FFFFFFF0000LL;
                v243 = *(_DWORD **)v246;
                v276 = *(_DWORD **)v246;
                v247 = (unsigned __int64)&v271[8 * v272[3]];
                if ( v247 >= 0x7FFFFFFF0000LL )
                  v247 = 0x7FFFFFFF0000LL;
                *(_QWORD *)v247 = *(_QWORD *)&v272[v236 + 6];
              }
              v237[3] = v243;
              *v238 ^= 3u;
              ++v253;
            }
          }
          ExReleaseRundownProtection_0(RunRef);
        }
      }
      v223 = NextProcessThread;
    }
    if ( NextProcessThread )
      ObfDereferenceObjectWithTag(NextProcessThread, 0x6E457350u);
  }
  else
  {
    v12 = -1073741820;
  }
LABEL_1023:
  if ( v262 == v324 )
    return v12;
  ExFreePoolWithTag(v262, 0);
  return v12;
}
