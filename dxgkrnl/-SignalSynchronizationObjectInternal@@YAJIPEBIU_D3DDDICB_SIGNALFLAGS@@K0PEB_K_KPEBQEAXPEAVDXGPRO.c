__int64 __fastcall SignalSynchronizationObjectInternal(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned __int64 a7,
        void **a8,
        struct DXGPROCESS *a9,
        unsigned int a10)
{
  unsigned __int64 v11; // rbx
  unsigned int *v13; // rcx
  struct DXGPROCESS *v14; // r10
  unsigned int v15; // edi
  _BYTE *Pool2; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // r14d
  __int64 v20; // r15
  char v21; // r12
  struct _KEVENT *v22; // r12
  unsigned int v23; // r13d
  unsigned int v24; // r10d
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v29; // r14
  __int64 v30; // r13
  __int64 v31; // rcx
  unsigned int v32; // r12d
  unsigned int v33; // r15d
  unsigned int v34; // edx
  _QWORD *v35; // r14
  DXGCONTEXT **v36; // r8
  _QWORD *v37; // r9
  _QWORD *v38; // r11
  _BYTE *v39; // rcx
  unsigned int *v40; // r15
  int v41; // r9d
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // r13
  _BYTE *v45; // r8
  unsigned __int64 v46; // r12
  _QWORD *v47; // r15
  volatile signed __int32 *v48; // r12
  unsigned int *v49; // rax
  unsigned int v50; // r14d
  unsigned int v51; // eax
  unsigned int v52; // r14d
  __int64 v53; // r14
  unsigned int v54; // r14d
  unsigned int v55; // eax
  unsigned int v56; // r14d
  __int64 v57; // r14
  __int64 v58; // r8
  __int64 v59; // rdx
  _QWORD *v60; // rdx
  PVOID v61; // r9
  unsigned int v62; // r10d
  int v63; // edx
  struct DXGADAPTERSYNCOBJECT *v64; // r8
  void *v65; // rdx
  PVOID v67; // r12
  unsigned int v68; // r13d
  unsigned int v69; // edx
  _QWORD *v70; // r14
  signed __int64 v71; // r15
  _QWORD *v72; // r8
  __int64 v73; // r15
  struct ADAPTER_RENDER *v74; // rcx
  struct ADAPTER_RENDER *v75; // r8
  __int64 v76; // rax
  __int64 v77; // r13
  void **v78; // r15
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r14
  __int64 v84; // rdx
  unsigned int v85; // ecx
  __int64 v86; // rdx
  unsigned int v87; // ecx
  int v88; // ecx
  void *v89; // r15
  struct DXG_SIGNAL_GUEST_CPU_EVENT *v90; // r14
  int v91; // eax
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r15
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // r8
  unsigned int *v100; // rbx
  struct DXGPROCESS *v101; // r14
  PVOID v102; // rcx
  __int64 v103; // r15
  PVOID v104; // rcx
  unsigned int v105; // ebx
  struct _KEVENT *v106; // rcx
  _QWORD *v107; // rcx
  _QWORD *v108; // r8
  unsigned int *v109; // r9
  struct DXGPROCESS *v110; // r11
  unsigned int v111; // eax
  __int64 v112; // r10
  unsigned int v113; // ecx
  int v114; // ecx
  __int64 v115; // rdx
  unsigned int *v116; // r14
  PVOID v117; // rcx
  __int64 v118; // rbx
  unsigned int *v119; // r14
  int v120; // r10d
  _QWORD *i; // rdx
  __int64 v122; // rax
  __int64 *v123; // rdi
  struct DXGPROCESS *v124; // r13
  PVOID v125; // rcx
  unsigned int *v126; // rbx
  struct DXGPROCESS *v127; // r15
  unsigned int *v128; // rbx
  PVOID v129; // rcx
  struct DXGPROCESS *v130; // rbx
  PVOID v131; // rcx
  struct DXGPROCESS *v132; // rbx
  unsigned int *v133; // rbx
  __int64 v134; // rbx
  unsigned int *v135; // r15
  struct DXGPROCESS *v136; // r14
  int v137; // edi
  _QWORD *v138; // r14
  struct DXGPROCESS *v139; // r15
  unsigned int *v140; // r15
  struct DXGPROCESS *v141; // rdi
  int v142; // [rsp+40h] [rbp-438h]
  char v144; // [rsp+74h] [rbp-404h]
  __int64 v145; // [rsp+78h] [rbp-400h] BYREF
  int v146; // [rsp+80h] [rbp-3F8h]
  PERESOURCE *v147; // [rsp+88h] [rbp-3F0h] BYREF
  char v148; // [rsp+90h] [rbp-3E8h]
  char v149; // [rsp+98h] [rbp-3E0h]
  _QWORD *v150; // [rsp+A0h] [rbp-3D8h]
  PVOID v151; // [rsp+A8h] [rbp-3D0h]
  _BYTE v152[16]; // [rsp+B0h] [rbp-3C8h] BYREF
  unsigned int v153; // [rsp+C0h] [rbp-3B8h]
  PVOID P; // [rsp+C8h] [rbp-3B0h]
  _BYTE v155[16]; // [rsp+D0h] [rbp-3A8h] BYREF
  int v156; // [rsp+E0h] [rbp-398h]
  DXGCONTEXT *v157; // [rsp+E8h] [rbp-390h] BYREF
  char v158; // [rsp+F0h] [rbp-388h]
  unsigned int v159; // [rsp+F8h] [rbp-380h]
  struct DXGPROCESS *v160; // [rsp+100h] [rbp-378h]
  unsigned int v161; // [rsp+108h] [rbp-370h]
  void **v162; // [rsp+110h] [rbp-368h]
  PVOID v163; // [rsp+120h] [rbp-358h]
  _BYTE v164[64]; // [rsp+128h] [rbp-350h] BYREF
  unsigned int v165; // [rsp+168h] [rbp-310h]
  unsigned int *v166; // [rsp+170h] [rbp-308h]
  unsigned int *v167; // [rsp+178h] [rbp-300h] BYREF
  PVOID v168; // [rsp+180h] [rbp-2F8h]
  _BYTE v169[64]; // [rsp+188h] [rbp-2F0h] BYREF
  unsigned int v170; // [rsp+1C8h] [rbp-2B0h]
  _QWORD *v171; // [rsp+1D0h] [rbp-2A8h]
  unsigned int v172; // [rsp+1D8h] [rbp-2A0h]
  unsigned int *v173; // [rsp+1E0h] [rbp-298h]
  PVOID v174; // [rsp+1E8h] [rbp-290h]
  _BYTE v175[16]; // [rsp+1F0h] [rbp-288h] BYREF
  int v176; // [rsp+200h] [rbp-278h]
  _QWORD *v177; // [rsp+208h] [rbp-270h]
  struct ADAPTER_RENDER *DxgAdapterSyncObject; // [rsp+210h] [rbp-268h]
  _QWORD v179[6]; // [rsp+218h] [rbp-260h] BYREF
  char v180; // [rsp+248h] [rbp-230h]
  int v181; // [rsp+250h] [rbp-228h]
  void *Src; // [rsp+258h] [rbp-220h]
  struct DXGPROCESS *v183; // [rsp+260h] [rbp-218h]
  __int128 v184; // [rsp+268h] [rbp-210h] BYREF
  _QWORD v185[4]; // [rsp+278h] [rbp-200h] BYREF
  char v186; // [rsp+298h] [rbp-1E0h]
  _BYTE v187[24]; // [rsp+2A0h] [rbp-1D8h] BYREF
  PVOID v188; // [rsp+2B8h] [rbp-1C0h]
  struct DXGADAPTERSYNCOBJECT *v189[2]; // [rsp+2C0h] [rbp-1B8h] BYREF
  PVOID v190; // [rsp+2D0h] [rbp-1A8h]
  _BYTE v191[32]; // [rsp+2D8h] [rbp-1A0h] BYREF
  int v192; // [rsp+2F8h] [rbp-180h]
  char v193[8]; // [rsp+300h] [rbp-178h] BYREF
  _BYTE v194[16]; // [rsp+308h] [rbp-170h] BYREF
  DXGADAPTER *v195; // [rsp+318h] [rbp-160h]
  char v196; // [rsp+320h] [rbp-158h]
  __int64 v197; // [rsp+328h] [rbp-150h]
  _BYTE v198[16]; // [rsp+348h] [rbp-130h] BYREF
  __int64 v199; // [rsp+358h] [rbp-120h]
  __int64 v200; // [rsp+388h] [rbp-F0h]
  char v201; // [rsp+390h] [rbp-E8h]
  _BYTE v202[144]; // [rsp+3A0h] [rbp-D8h] BYREF

  v11 = a3;
  v167 = a2;
  v161 = a1;
  v13 = a5;
  v166 = a5;
  Src = a6;
  v162 = a8;
  v14 = a9;
  v160 = a9;
  v183 = a9;
  v15 = a10;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 334LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No contexts were provided to signal.",
      334LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741811LL;
  }
  v151 = 0LL;
  v153 = 0;
  v177 = (_QWORD *)a4;
  if ( a4 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
    {
      Pool2 = 0LL;
      goto LABEL_5;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * a4, 1265072196LL);
    v151 = Pool2;
  }
  else
  {
    v151 = v152;
    memset(v152, 0, 8LL * a4);
    Pool2 = v152;
  }
  v153 = a4;
  v13 = v166;
  v14 = v160;
LABEL_5:
  v150 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)&v157,
    *v13,
    v14,
    (struct DXGCONTEXT **)Pool2,
    (v15 & 2) != 0,
    1);
  v18 = *v150;
  if ( !*v150 )
  {
    v100 = v166;
    v101 = v160;
    WdLogSingleEntry3(2LL, v160, *v166, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)v101,
      *v100,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_404;
  }
  v159 = v11 & 2;
  if ( (v11 & 2) != 0 )
  {
    if ( a1 )
    {
      WdLogSingleEntry1(2LL, 364LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ObjectCount must be zero when Flags.EnqueueCpuEvent is set.",
        364LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_205;
    }
    if ( !*v162 )
    {
      WdLogSingleEntry1(2LL, 369LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"CpuEventHandle should not be NULL when Flags.EnqueueCpuEvent is set.",
        369LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_205;
    }
  }
  v19 = (v15 >> 1) & 1;
  v20 = *(_QWORD *)(v18 + 16);
  if ( *(_BYTE *)(v18 + 442) )
  {
    v103 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v202, (struct DXGADAPTER *const)v103, 0LL);
    if ( v19 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v202, 0LL) >= 0 )
    {
      v105 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v103 + 4472),
               v160,
               v161,
               v167,
               (struct _D3DDDICB_SIGNALFLAGS)v11,
               a4,
               v166,
               a6,
               a7,
               v162,
               v15 & 1,
               0,
               0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v202);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
      if ( v151 != v152 && v151 )
        ExFreePoolWithTag(v151, 0);
      return v105;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v202);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
    v104 = v151;
    if ( v151 != v152 && v151 )
LABEL_264:
      ExFreePoolWithTag(v104, 0);
    return 3221226166LL;
  }
  v145 = *(_QWORD *)(v18 + 16);
  v146 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v193, v20, 0, v17, (v15 & 2) != 0);
  v21 = 0;
  if ( !v19 )
  {
    if ( (v15 & 1) == 0 && *(_DWORD *)(*(_QWORD *)(*v150 + 16LL) + 464LL) != 2 && (v15 & 4) != 0 )
    {
      if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145) )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
        if ( v145 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
        if ( v151 != v152 && v151 )
          ExFreePoolWithTag(v151, 0);
        return 2147483665LL;
      }
      v20 = v145;
      goto LABEL_15;
    }
    v22 = *(struct _KEVENT **)(v20 + 16);
    if ( *(_DWORD *)(v20 + 464) == 2 )
    {
      if ( KeReadStateEvent(v22 + 5) )
        goto LABEL_13;
      v106 = v22 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v22 + 4) )
      {
LABEL_13:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v98, (const EVENT_DESCRIPTOR *)"g", v99, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
        }
        v146 = 1;
        v21 = 1;
        goto LABEL_15;
      }
      v106 = v22 + 4;
    }
    KeWaitForSingleObject(v106, Executive, 0, 0, 0LL);
    goto LABEL_13;
  }
LABEL_15:
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v187, v160);
  v23 = 1;
  v24 = a4;
  if ( a4 > 1 )
  {
    v107 = v150;
    v108 = v150 + 1;
    v171 = v150 + 1;
    v109 = v166 + 1;
    v173 = v166 + 1;
    v110 = v160;
    while ( 1 )
    {
      v111 = (*v109 >> 6) & 0xFFFFFF;
      if ( v111 >= *((_DWORD *)v110 + 74) )
        goto LABEL_236;
      v112 = *((_QWORD *)v110 + 35) + 16LL * v111;
      v113 = *(_DWORD *)(v112 + 8);
      if ( *v109 >> 30 != ((v113 >> 5) & 3) )
        goto LABEL_235;
      if ( (v113 & 0x2000) != 0 )
        goto LABEL_235;
      v114 = v113 & 0x1F;
      if ( !v114 )
        goto LABEL_235;
      if ( v114 != 7 )
        break;
      v115 = *(_QWORD *)v112;
      v107 = v150;
      v24 = a4;
LABEL_237:
      *v108 = v115;
      if ( !v115 || *(_QWORD *)(v115 + 16) != *(_QWORD *)(*v107 + 16LL) )
      {
        v116 = v166;
        WdLogSingleEntry4(2LL, *v166, v166[v23], v23, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"hContext 0x%I64x failed to signal with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          *v116,
          v116[v23],
          v23,
          -1073741811LL,
          0LL);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v187);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
        if ( !v20 )
          goto LABEL_404;
        goto LABEL_403;
      }
      ++v23;
      v173 = ++v109;
      v171 = ++v108;
      v107 = v150;
      if ( v23 >= v24 )
        goto LABEL_16;
    }
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    v108 = v171;
    v109 = v173;
    v110 = v160;
LABEL_235:
    v24 = a4;
    v107 = v150;
LABEL_236:
    v115 = 0LL;
    goto LABEL_237;
  }
LABEL_16:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v187);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v179,
    v151,
    v153,
    v25,
    v21);
  if ( v180 )
  {
    if ( !v179[0] )
    {
      WdLogSingleEntry1(3LL, 465LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
      if ( !v20 )
      {
LABEL_247:
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
        v117 = v151;
        if ( v151 == v152 || !v151 )
          return 3221225495LL;
        goto LABEL_554;
      }
LABEL_246:
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
      goto LABEL_247;
    }
    WdLogSingleEntry1(3LL, 470LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    if ( v20 )
      goto LABEL_271;
    goto LABEL_205;
  }
  if ( !v19 )
  {
    if ( v201 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v198, 0LL);
      if ( *(_DWORD *)(v199 + 200) != 1 )
        goto LABEL_259;
    }
    if ( v196 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v194, 0LL, 0LL);
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v195 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v195 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, (const EVENT_DESCRIPTOR *)"g", v27, 72);
        KeWaitForSingleObject((char *)v195 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v195, 0LL);
    }
    v197 = 0LL;
    v196 = 1;
    if ( *(_DWORD *)(v200 + 608) == 1 )
      goto LABEL_25;
    COREACCESS::Release((COREACCESS *)v194);
    if ( v201 )
LABEL_259:
      COREACCESS::Release((COREACCESS *)v198);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    if ( v145 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
    v104 = v151;
    if ( v151 != v152 && v151 )
      goto LABEL_264;
    return 3221226166LL;
  }
LABEL_25:
  Global = DXGGLOBAL::GetGlobal();
  v147 = (PERESOURCE *)Global;
  v148 = 0;
  if ( !Global )
  {
    WdLogSingleEntry1(1LL, 2758LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 2758LL, 0LL, 0LL, 0LL, 0LL);
    Global = (struct DXGGLOBAL *)v147;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 75)) )
  {
    WdLogSingleEntry1(1LL, 2763LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
      2763LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v148 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v147, 0LL, 0LL);
  v29 = v147;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v29[75], 1u);
  v148 = 1;
  v30 = (__int64)v150;
  v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v150 + 16LL) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v31 + 168)) )
  {
    WdLogSingleEntry1(1LL, 491LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pBroadcastDxgContext[0]->GetRenderCore()->IsCoreResourceSharedOwner()",
      491LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v181 = v15 & 1;
  if ( (v15 & 1) != 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 16LL) + 16LL)
                                                                 + 16LL)
                                                     + 216LL)
                                         + 64LL)
                             + 40LL)
                 + 28LL) > 0x1052u )
  {
    if ( (v11 & 0x7FFFFFF8) != 0 )
    {
      v118 = (v11 >> 3) & 0xFFFFFFF;
      v119 = v166;
      WdLogSingleEntry3(2LL, *v166, (unsigned int)v118, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hContext 0x%I64x SignalSyncObject.Flags.Reserved is not Zero, but %I64d, returning 0x%I64x",
        *v119,
        (unsigned int)v118,
        -1073741811LL,
        0LL,
        0LL);
      if ( v148 )
        goto LABEL_350;
      goto LABEL_351;
    }
    if ( (v11 & 0x80000000) != 0LL )
    {
      WdLogSingleEntry1(2LL, 509LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SignalSynchronizationObject is called with the DXGK_SIGNAL_FLAG_INTERNAL0 flag bits.",
        509LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v148 )
        goto LABEL_270;
      goto LABEL_269;
    }
  }
  v32 = 0;
  LODWORD(v166) = 0;
  v33 = 0;
  v172 = 0;
  v34 = a4;
  v35 = v177;
  if ( a4 )
  {
    v36 = (DXGCONTEXT **)v30;
    v37 = v177;
    do
    {
      if ( (*((_DWORD *)*v36 + 101) & 0x10) != 0 )
        v33 += DXGCONTEXT::GetRenderHwQueueCount(*v36);
      else
        ++v32;
      ++v36;
      v37 = (_QWORD *)((char *)v37 - 1);
    }
    while ( v37 );
    v172 = v33;
    LODWORD(v166) = v32;
    v34 = (unsigned int)v35;
  }
  v168 = 0LL;
  v170 = 0;
  if ( v32 <= 8 )
  {
    v168 = v169;
    if ( !v32 )
    {
LABEL_48:
      v170 = v32;
      v38 = v168;
      goto LABEL_49;
    }
    memset(v169, 0, 8LL * v32);
LABEL_47:
    v34 = a4;
    goto LABEL_48;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v32 >= 8 )
  {
    v168 = (PVOID)ExAllocatePool2(64LL, 8LL * v32, 1265072196LL);
    goto LABEL_47;
  }
  v38 = 0LL;
  v34 = a4;
LABEL_49:
  v171 = v38;
  v39 = 0LL;
  v163 = 0LL;
  v165 = 0;
  if ( v33 > 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v33 < 8 )
    {
      v40 = 0LL;
      v34 = a4;
      goto LABEL_52;
    }
    v39 = (_BYTE *)ExAllocatePool2(64LL, 8LL * v33, 1265072196LL);
    v163 = v39;
    goto LABEL_280;
  }
  v39 = v164;
  v163 = v164;
  if ( v33 )
  {
    memset(v164, 0, 8LL * v33);
    v39 = v163;
LABEL_280:
    v38 = v171;
    v34 = a4;
  }
  v165 = v33;
  v40 = (unsigned int *)v39;
LABEL_52:
  v173 = v40;
  if ( !v38 || !v40 )
  {
    if ( v40 != (unsigned int *)v164 && v39 )
      ExFreePoolWithTag(v39, 0);
    v163 = 0LL;
    v165 = 0;
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    v168 = 0LL;
    v170 = 0;
    if ( v148 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    if ( v145 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
    v117 = v151;
    if ( v151 == v152 || !v151 )
      return 3221225495LL;
LABEL_554:
    ExFreePoolWithTag(v117, 0);
    return 3221225495LL;
  }
  v41 = 0;
  if ( v34 )
  {
    v42 = v30;
    do
    {
      v43 = *(_QWORD *)v42;
      if ( (*(_DWORD *)(*(_QWORD *)v42 + 404LL) & 0x10) != 0 )
      {
        DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)(v43 + 408), &v184);
        for ( i = (_QWORD *)*((_QWORD *)&v184 + 1); i != (_QWORD *)v184 && i; i = (_QWORD *)*i )
          *(_QWORD *)&v40[2 * v120++] = i[5];
        v184 = 0LL;
      }
      else
      {
        v38[v41++] = *(_QWORD *)(v43 + 256);
      }
      v42 += 8LL;
      v35 = (_QWORD *)((char *)v35 - 1);
    }
    while ( v35 );
    v39 = v163;
  }
  if ( v159 )
  {
    v89 = *v162;
    v90 = 0LL;
    v91 = *((_DWORD *)v160 + 106);
    if ( (v91 & 0x10) != 0 && (v91 & 0x100) == 0 )
    {
      v122 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
      v90 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)v122;
      if ( !v122 )
      {
        WdLogSingleEntry1(6LL, 578LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          578LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v163 != v164 && v163 )
          ExFreePoolWithTag(v163, 0);
        v163 = 0LL;
        v165 = 0;
        if ( v168 != v169 && v168 )
          ExFreePoolWithTag(v168, 0);
        v168 = 0LL;
        v170 = 0;
        if ( v148 )
          goto LABEL_295;
        goto LABEL_296;
      }
      *(_QWORD *)(v122 + 8) = v89;
      *(_WORD *)(v122 + 16) = 1;
      *(_BYTE *)(v122 + 19) = 1;
      v89 = (void *)v122;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v122);
      v38 = v171;
    }
    v92 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD *, _DWORD, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 16LL) + 16LL) + 736LL) + 8LL)
                                                                                              + 832LL))(
            v172,
            v173,
            v32,
            v38,
            v11,
            v89);
    v96 = v92;
    if ( v92 < 0 )
    {
      v123 = (__int64 *)v162;
      v124 = v160;
      WdLogSingleEntry3(2LL, v160, *v162, v92);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to enqueue CPU event 0x%I64x returning 0x%I64x",
        (__int64)v124,
        *v123,
        v96,
        0LL,
        0LL);
      if ( v90 )
        DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(v90);
      if ( v163 != v164 && v163 )
        ExFreePoolWithTag(v163, 0);
      v163 = 0LL;
      v165 = 0;
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      v168 = 0LL;
      v170 = 0;
      if ( v148 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
      if ( v145 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
      if ( v151 != v152 && v151 )
        ExFreePoolWithTag(v151, 0);
      return (unsigned int)v96;
    }
    if ( bTracingEnabled )
    {
      v167 = (unsigned int *)*v162;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qPR0qPR2qxd_EtwWriteTransfer(v94, v93, v95, a4, v30, 1, (__int64)&v167, v11, 0, v15);
    }
    if ( v163 != v164 && v163 )
      ExFreePoolWithTag(v163, 0);
    v163 = 0LL;
    v165 = 0;
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    v168 = 0LL;
    v170 = 0;
    if ( v148 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    if ( v145 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
LABEL_144:
    if ( v151 != v152 )
    {
      if ( v151 )
        ExFreePoolWithTag(v151, 0);
    }
    return 0LL;
  }
  v44 = v161;
  if ( !v161 )
  {
    WdLogSingleEntry1(2LL, 625LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Can't signal zero sync objects.", 625LL, 0LL, 0LL, 0LL, 0LL);
    if ( v163 != v164 && v163 )
      ExFreePoolWithTag(v163, 0);
    v163 = 0LL;
    v165 = 0;
    v125 = v168;
    if ( v168 != v169 && v168 )
LABEL_326:
      ExFreePoolWithTag(v125, 0);
LABEL_327:
    v168 = 0LL;
    v170 = 0;
    if ( v148 )
LABEL_269:
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
LABEL_270:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    if ( v145 )
LABEL_271:
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
LABEL_205:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
    v102 = v151;
    if ( v151 != v152 && v151 )
      goto LABEL_485;
    return 3221225485LL;
  }
  v45 = 0LL;
  P = 0LL;
  v156 = 0;
  v46 = v161;
  if ( v161 <= 2 )
  {
    P = v155;
    memset(v155, 0, 8LL * v161);
    v45 = P;
LABEL_64:
    v156 = v44;
    v47 = v45;
    v39 = v163;
    goto LABEL_65;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v161 >= 8 )
  {
    v45 = (_BYTE *)ExAllocatePool2(256LL, 8LL * v161, 1265072196LL);
    P = v45;
    goto LABEL_64;
  }
  v47 = 0LL;
LABEL_65:
  if ( !v47 )
  {
    P = 0LL;
    v156 = 0;
    if ( v39 != v164 && v39 )
      ExFreePoolWithTag(v39, 0);
    v163 = 0LL;
    v165 = 0;
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    v168 = 0LL;
    v170 = 0;
    if ( v148 )
LABEL_295:
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
LABEL_296:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    if ( !v145 )
      goto LABEL_247;
    goto LABEL_246;
  }
  v144 = 0;
  v149 = 0;
  v159 = 0;
  if ( !(_DWORD)v44 )
    goto LABEL_81;
  v48 = (volatile signed __int32 *)((char *)v160 + 248);
  v177 = v47;
  v49 = v167;
  v162 = (void **)v167;
  do
  {
    v50 = *v49;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v48);
    v51 = (v50 >> 6) & 0xFFFFFF;
    v52 = v50 >> 30;
    if ( v51 < *((_DWORD *)v160 + 74)
      && (v84 = 16LL * v51 + *((_QWORD *)v160 + 35), v85 = *(_DWORD *)(v84 + 8), v52 == ((v85 >> 5) & 3))
      && (v85 & 0x2000) == 0
      && (v85 & 0x1F) == 8 )
    {
      v53 = *(_QWORD *)v84;
    }
    else
    {
      v53 = 0LL;
    }
    _InterlockedDecrement(v48 + 4);
    ExReleasePushLockSharedEx(v48, 0LL);
    KeLeaveCriticalRegion();
    if ( !v53 )
    {
      v54 = *(_DWORD *)v162;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v48);
      v55 = (v54 >> 6) & 0xFFFFFF;
      v56 = v54 >> 30;
      if ( v55 < *((_DWORD *)v160 + 74) )
      {
        v86 = 16LL * v55 + *((_QWORD *)v160 + 35);
        v87 = *(_DWORD *)(v86 + 8);
        if ( v56 == ((v87 >> 5) & 3) && (v87 & 0x2000) == 0 )
        {
          v88 = v87 & 0x1F;
          if ( v88 )
          {
            if ( v88 == 11 )
            {
              v57 = *(_QWORD *)v86;
              goto LABEL_73;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v57 = 0LL;
LABEL_73:
      _InterlockedDecrement(v48 + 4);
      ExReleasePushLockSharedEx(v48, 0LL);
      KeLeaveCriticalRegion();
      if ( !v57 )
      {
        v134 = v159;
        v135 = v167;
        v136 = v160;
        WdLogSingleEntry4(2LL, v160, v167[v159], v159, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v136,
          v135[v134],
          v134,
          -1073741811LL,
          0LL);
        if ( P != v155 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v156 = 0;
        if ( v163 != v164 && v163 )
          ExFreePoolWithTag(v163, 0);
        v163 = 0LL;
        v165 = 0;
        if ( v168 != v169 && v168 )
          ExFreePoolWithTag(v168, 0);
        v168 = 0LL;
        v170 = 0;
        if ( v148 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
        if ( !v145 )
          goto LABEL_404;
        goto LABEL_403;
      }
      v149 = 1;
      if ( v144 )
      {
        v132 = v160;
        WdLogSingleEntry1(2LL, v160);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x mixes monitored fence and non-monitored fence sync objects in one signal call.",
          (__int64)v132,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_371;
      }
      if ( (*(_DWORD *)(v57 + 72) & 0x10) != 0 )
      {
        v133 = &v167[v159];
        WdLogSingleEntry1(2LL, *v133);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x object is opened with NoSignal flag and thus cannot be signaled.",
          *v133,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( P != v155 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v156 = 0;
        if ( v163 != v164 && v163 )
          ExFreePoolWithTag(v163, 0);
        v163 = 0LL;
        v165 = 0;
        if ( v168 != v169 && v168 )
          ExFreePoolWithTag(v168, 0);
        v168 = 0LL;
        v170 = 0;
        if ( v148 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
        if ( v145 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
        if ( v151 != v152 && v151 )
          ExFreePoolWithTag(v151, 0);
        return 3221225506LL;
      }
      v58 = *(_QWORD *)(v57 + 16);
      v59 = *(_QWORD *)(*v150 + 16LL);
      if ( v58 != v59 )
      {
        WdLogSingleEntry2(2LL, v59, v58);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"SignalSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
          *(_QWORD *)(*v150 + 16LL),
          *(_QWORD *)(v57 + 16),
          0LL,
          0LL,
          0LL);
        goto LABEL_371;
      }
      v53 = *(_QWORD *)(v57 + 32);
      if ( (unsigned int)(*(_DWORD *)(v53 + 200) - 5) > 1 )
      {
        WdLogSingleEntry1(1LL, 740LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pSyncObject->GetSyncObjectType() == D3DDDI_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D3D"
                    "DDI_PERIODIC_MONITORED_FENCE",
          740LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_79;
    }
    if ( *(_DWORD *)(v53 + 200) == 5 )
    {
      WdLogSingleEntry1(1LL, 659LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_MONITORED_FENCE",
        659LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v53 + 200) == 6 )
    {
      WdLogSingleEntry1(1LL, 660LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_PERIODIC_MONITORED_FENCE",
        660LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v144 = 1;
    if ( v149 )
    {
      v130 = v160;
      WdLogSingleEntry1(2LL, v160);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x mixes monitored fence and non-monitored fence sync objects in one signal call.",
        (__int64)v130,
        0LL,
        0LL,
        0LL,
        0LL);
      v131 = P;
      if ( P != v155 && P )
        goto LABEL_364;
      goto LABEL_365;
    }
    if ( (*(_DWORD *)(v53 + 204) & 0x100) != 0 )
    {
      v128 = &v167[v159];
      WdLogSingleEntry1(2LL, *v128);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Sync object 0x%I64x is created with SignalByKmd and cannot be signaled",
        *v128,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( P != v155 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v156 = 0;
      v129 = v163;
      if ( v163 != v164 && v163 )
        goto LABEL_358;
      goto LABEL_359;
    }
    if ( *(_DWORD *)(v53 + 200) == 3 && (_DWORD)v44 != 1 )
    {
      v126 = &v167[v159];
      v127 = v160;
      WdLogSingleEntry4(2LL, v160, *v126, v44, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed on signaling fence object 0x%I64x at non-1 object count %I64d returning 0x%I64x",
        (__int64)v127,
        *v126,
        v44,
        -1073741811LL,
        0LL);
      if ( P != v155 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v156 = 0;
      if ( v163 != v164 && v163 )
        ExFreePoolWithTag(v163, 0);
      v163 = 0LL;
      v165 = 0;
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      v168 = 0LL;
      v170 = 0;
      if ( v148 )
LABEL_350:
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
LABEL_351:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
      if ( !v145 )
      {
LABEL_404:
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
        v102 = v151;
        if ( v151 != v152 && v151 )
          goto LABEL_485;
        return 3221225485LL;
      }
LABEL_403:
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
      goto LABEL_404;
    }
LABEL_79:
    v60 = v177;
    *v177 = v53;
    ++v159;
    v49 = (unsigned int *)v162 + 1;
    v162 = (void **)((char *)v162 + 4);
    v177 = v60 + 1;
  }
  while ( v159 < (unsigned int)v44 );
  v39 = v163;
  v45 = P;
  v46 = v44;
LABEL_81:
  v61 = 0LL;
  v190 = 0LL;
  v62 = 0;
  v192 = 0;
  v63 = *(_DWORD *)(*v47 + 200LL);
  if ( (unsigned int)(v63 - 5) > 1 )
  {
    if ( v63 == 3 )
      v162 = (void **)&a7;
    else
      v162 = 0LL;
    goto LABEL_111;
  }
  if ( !v181 )
  {
    v162 = (void **)Src;
    if ( Src )
      goto LABEL_111;
    WdLogSingleEntry1(2LL, 782LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"MonitoredFenceValueArray is NULL when signaling monitored fence objects",
      782LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v190 != v191 && v190 )
      ExFreePoolWithTag(v190, 0);
    v190 = 0LL;
    v192 = 0;
LABEL_371:
    v131 = P;
    if ( P != v155 && P )
LABEL_364:
      ExFreePoolWithTag(v131, 0);
LABEL_365:
    P = 0LL;
    v156 = 0;
    v129 = v163;
    if ( v163 != v164 && v163 )
LABEL_358:
      ExFreePoolWithTag(v129, 0);
LABEL_359:
    v163 = 0LL;
    v165 = 0;
    v125 = v168;
    if ( v168 != v169 && v168 )
      goto LABEL_326;
    goto LABEL_327;
  }
  if ( (unsigned int)v44 <= 4 )
  {
    v190 = v191;
    memset(v191, 0, 8 * v46);
    v61 = v190;
    goto LABEL_85;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v46 >= 8 )
  {
    v61 = (PVOID)ExAllocatePool2(64LL, 8 * v46, 1265072196LL);
    v190 = v61;
LABEL_85:
    v62 = v44;
    v192 = v44;
    v39 = v163;
    v45 = P;
  }
  if ( !v61 )
  {
    v190 = 0LL;
    v192 = 0;
    if ( v45 != v155 && v45 )
    {
      ExFreePoolWithTag(v45, 0);
      v39 = v163;
    }
    P = 0LL;
    v156 = 0;
    if ( v39 != v164 && v39 )
      ExFreePoolWithTag(v39, 0);
    v163 = 0LL;
    v165 = 0;
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    v168 = 0LL;
    v170 = 0;
    if ( v148 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    if ( v145 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
    if ( v151 != v152 && v151 )
      ExFreePoolWithTag(v151, 0);
    v151 = 0LL;
    v153 = 0;
    return 3221225495LL;
  }
  v64 = (struct DXGADAPTERSYNCOBJECT *)(8LL * v62);
  v189[1] = v64;
  v188 = v61;
  v65 = Src;
  if ( (char *)Src + (unsigned __int64)v64 < Src || (char *)Src + (unsigned __int64)v64 > (char *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v61, v65, (size_t)v64);
  v162 = (void **)v190;
  Src = v190;
LABEL_111:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v185,
    v47,
    v44);
  if ( v186 )
  {
    if ( !v185[0] )
    {
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v185);
      if ( v190 != v191 && v190 )
        ExFreePoolWithTag(v190, 0);
      v190 = 0LL;
      v192 = 0;
      if ( P != v155 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v156 = 0;
      if ( v163 != v164 && v163 )
        ExFreePoolWithTag(v163, 0);
      v163 = 0LL;
      v165 = 0;
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      v168 = 0LL;
      v170 = 0;
      if ( v148 )
        goto LABEL_425;
      goto LABEL_426;
    }
    WdLogSingleEntry1(2LL, 815LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The same sync object handle is passed twice",
      815LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v185);
    if ( v190 != v191 && v190 )
      ExFreePoolWithTag(v190, 0);
    v190 = 0LL;
    v192 = 0;
    if ( P != v155 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v156 = 0;
    if ( v163 != v164 && v163 )
      ExFreePoolWithTag(v163, 0);
    v163 = 0LL;
    v165 = 0;
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    v168 = 0LL;
    v170 = 0;
    if ( v148 )
      goto LABEL_269;
    goto LABEL_270;
  }
  v174 = 0LL;
  v176 = 0;
  if ( (unsigned int)v44 <= 2 )
  {
    v174 = v175;
    memset(v175, 0, 8 * v46);
    v67 = v174;
    goto LABEL_114;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v46 >= 8 )
  {
    v67 = (PVOID)ExAllocatePool2(64LL, 8 * v46, 1265072196LL);
    v174 = v67;
LABEL_114:
    v176 = v44;
  }
  else
  {
    v67 = 0LL;
  }
  if ( !v67 )
  {
    v174 = 0LL;
    v176 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v185);
    if ( v190 != v191 && v190 )
      ExFreePoolWithTag(v190, 0);
    v190 = 0LL;
    v192 = 0;
    if ( P != v155 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v156 = 0;
    if ( v163 != v164 && v163 )
      ExFreePoolWithTag(v163, 0);
    v163 = 0LL;
    v165 = 0;
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    v168 = 0LL;
    v170 = 0;
    if ( v148 )
LABEL_425:
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
LABEL_426:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    if ( !v145 )
      goto LABEL_247;
    goto LABEL_246;
  }
  v68 = 0;
  v69 = v161;
  if ( !v161 )
  {
LABEL_126:
    v77 = (__int64)v150;
    LOBYTE(v142) = (v15 & 8) != 0;
    v78 = v162;
    v79 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD *, unsigned int, PVOID, _DWORD, void **, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v150 + 16LL) + 16LL) + 736LL) + 8LL) + 640LL))(
            v172,
            v173,
            (unsigned int)v166,
            v171,
            v69,
            v67,
            v11,
            v162,
            v142);
    v83 = v79;
    if ( v79 < 0 )
    {
      v140 = v167;
      v141 = v160;
      WdLogSingleEntry4(2LL, v160, *v167, 0LL, v79);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to signal SyncObject 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v141,
        *v140,
        0LL,
        v83,
        0LL);
      if ( v174 != v175 && v174 )
        ExFreePoolWithTag(v174, 0);
      v174 = 0LL;
      v176 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v185);
      if ( v190 != v191 && v190 )
        ExFreePoolWithTag(v190, 0);
      v190 = 0LL;
      v192 = 0;
      if ( P != v155 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v156 = 0;
      if ( v163 != v164 && v163 )
        ExFreePoolWithTag(v163, 0);
      v163 = 0LL;
      v165 = 0;
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      v168 = 0LL;
      v170 = 0;
      if ( v148 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
      if ( v145 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
      if ( v151 != v152 && v151 )
        ExFreePoolWithTag(v151, 0);
      return (unsigned int)v83;
    }
    if ( v144 )
    {
      if ( bTracingEnabled )
      {
        v97 = 0LL;
        if ( v78 )
          v97 = (__int64)*v78;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qPR0qPR2qxd_EtwWriteTransfer(v97, v80, v82, a4, v77, v161, (__int64)v67, v11, v97, v15);
      }
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer(v81, v80, v82, a4, v77, v11, v161, (__int64)v67, (__int64)v78, v15);
    }
    if ( v174 != v175 && v174 )
      ExFreePoolWithTag(v174, 0);
    v174 = 0LL;
    v176 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v185);
    if ( v190 != v191 && v190 )
      ExFreePoolWithTag(v190, 0);
    v190 = 0LL;
    v192 = 0;
    if ( P != v155 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v156 = 0;
    if ( v163 != v164 && v163 )
      ExFreePoolWithTag(v163, 0);
    v163 = 0LL;
    v165 = 0;
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    v168 = 0LL;
    v170 = 0;
    if ( v148 )
    {
      v148 = 0;
      ExReleaseResourceLite(v147[75]);
      KeLeaveCriticalRegion();
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    if ( v145 && v146 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v145 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v157 && !v158 )
      DXGCONTEXT::ReleaseReference(v157);
    goto LABEL_144;
  }
  v70 = v67;
  v71 = (char *)v47 - (_BYTE *)v67;
  v183 = (struct DXGPROCESS *)v71;
  v72 = v150;
  while ( 1 )
  {
    v73 = *(_QWORD *)((char *)v70 + v71);
    v74 = *(struct ADAPTER_RENDER **)(*(_QWORD *)(*v72 + 16LL) + 16LL);
    DxgAdapterSyncObject = v74;
    if ( (*(_DWORD *)(v73 + 204) & 4) != 0 )
    {
      DxgAdapterSyncObject = (struct ADAPTER_RENDER *)DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                                        (DXGSYNCOBJECTCA *)v73,
                                                        v74,
                                                        v189);
      if ( (int)DxgAdapterSyncObject < 0 )
      {
        v137 = (int)DxgAdapterSyncObject;
LABEL_488:
        v138 = v150;
        v139 = v160;
        WdLogSingleEntry3(2LL, v160, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v150 + 16LL) + 16LL) + 16LL), v137);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
          (__int64)v139,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v138 + 16LL) + 16LL) + 16LL),
          v137,
          0LL,
          0LL);
        if ( v174 != v175 && v174 )
          ExFreePoolWithTag(v174, 0);
        v174 = 0LL;
        v176 = 0;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v185);
        if ( v190 != v191 && v190 )
          ExFreePoolWithTag(v190, 0);
        v190 = 0LL;
        v192 = 0;
        if ( P != v155 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v156 = 0;
        if ( v163 != v164 && v163 )
          ExFreePoolWithTag(v163, 0);
        v163 = 0LL;
        v165 = 0;
        if ( v168 != v169 && v168 )
          ExFreePoolWithTag(v168, 0);
        v168 = 0LL;
        v170 = 0;
        if ( v148 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
        if ( v145 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
        if ( v151 != v152 && v151 )
          ExFreePoolWithTag(v151, 0);
        return (unsigned int)v137;
      }
      v69 = v161;
    }
    else
    {
      if ( !v74 )
        goto LABEL_122;
      v75 = *(struct ADAPTER_RENDER **)(v73 + 312);
      if ( v75 != v74 )
      {
        v137 = -1073741811;
        WdLogSingleEntry4(2LL, v73, v75, v74, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
          v73,
          *(_QWORD *)(v73 + 312),
          (__int64)DxgAdapterSyncObject,
          -1073741811LL,
          0LL);
        goto LABEL_488;
      }
    }
    v72 = v150;
LABEL_122:
    if ( (*(_DWORD *)(v73 + 204) & 4) != 0 )
    {
      v76 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                          (DXGSYNCOBJECTCA *)v73,
                          *(struct ADAPTER_RENDER **)(*(_QWORD *)(*v72 + 16LL) + 16LL))
            + 4);
      v69 = v161;
      v72 = v150;
    }
    else
    {
      v76 = *(_QWORD *)(v73 + 328);
    }
    *v70 = v76;
    if ( !v76 )
      break;
    ++v68;
    ++v70;
    if ( v68 >= v69 )
      goto LABEL_126;
    v71 = (signed __int64)v183;
  }
  WdLogSingleEntry1(2LL, v73);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
    v73,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( v174 != v175 && v174 )
    ExFreePoolWithTag(v174, 0);
  v174 = 0LL;
  v176 = 0;
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v185);
  if ( v190 != v191 && v190 )
    ExFreePoolWithTag(v190, 0);
  v190 = 0LL;
  v192 = 0;
  if ( P != v155 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v156 = 0;
  if ( v163 != v164 && v163 )
    ExFreePoolWithTag(v163, 0);
  v163 = 0LL;
  v165 = 0;
  if ( v168 != v169 && v168 )
    ExFreePoolWithTag(v168, 0);
  v168 = 0LL;
  v170 = 0;
  if ( v148 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v147);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v179);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
  if ( v145 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v145);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
  v102 = v151;
  if ( v151 == v152 || !v151 )
    return 3221225485LL;
LABEL_485:
  ExFreePoolWithTag(v102, 0);
  return 3221225485LL;
}
