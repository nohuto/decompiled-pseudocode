__int64 __fastcall DxgkCddGdiCommand(struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *a1, char *a2, __int64 a3)
{
  const struct _D3DKMT_RENDER *v4; // r12
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rdi
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // r14
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rsi
  D3DKMT_HANDLE hDevice; // edi
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  D3DKMT_HANDLE v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // esi
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  struct DXGHWQUEUE *v29; // r14
  __int64 v30; // r8
  __int64 v32; // rdx
  int v33; // ecx
  __int64 v34; // rdi
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  __int64 v37; // r9
  bool v38; // zf
  struct DXGDEVICE **v39; // r15
  __int64 v40; // r13
  struct _KEVENT *v41; // rbx
  struct DXGDEVICE *v42; // r12
  __int64 v43; // rbx
  struct _D3DKMT_RENDER *v44; // rcx
  char v45; // si
  unsigned int BroadcastContextCount; // eax
  __int64 v47; // rbx
  __int64 v48; // r9
  unsigned __int64 v49; // r8
  _BYTE *Pool2; // rax
  struct DXGHWQUEUE *v51; // rcx
  __int64 v52; // rbx
  _BYTE *v53; // rcx
  void *v54; // rsi
  __int64 v55; // r8
  __int64 v56; // r8
  _QWORD *v57; // rcx
  unsigned __int64 v58; // rbx
  DXGCONTEXT *v59; // r13
  struct DXGADAPTER *v60; // rbx
  struct DXGDEVICE *v61; // rdx
  volatile signed __int64 *v62; // rcx
  volatile signed __int64 *v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r8
  char *v66; // rbx
  __int64 v67; // rax
  bool v68; // r15
  struct _D3DKMT_RENDER *v69; // rcx
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // rdi
  unsigned __int64 AllocationCount; // rsi
  struct _EX_RUNDOWN_REF **v72; // rbx
  int v73; // eax
  int v74; // r14d
  int v75; // eax
  struct DXGPROCESS *v76; // rax
  __int64 v77; // r12
  struct DXGADAPTER *v78; // rcx
  struct DXGADAPTER *v79; // rcx
  char *v80; // rcx
  DXGGLOBAL **v81; // rcx
  _QWORD *v82; // rcx
  unsigned __int64 i; // rbx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  int v93; // r9d
  signed __int64 v94; // rax
  signed __int64 v95; // rtt
  int v96; // r9d
  int v97; // eax
  unsigned int v98; // ebx
  struct DXGPROCESS *v99; // rax
  unsigned int v100; // eax
  _QWORD *v101; // r15
  __int64 *v102; // rdx
  int v103; // esi
  int v104; // r10d
  __int64 v105; // r8
  _QWORD *v106; // rcx
  __int64 v107; // rbx
  const wchar_t *v108; // r9
  int v109; // eax
  char *v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rbx
  struct DXGDEVICE *v113; // rax
  __int64 v114; // r9
  char *v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rdi
  struct DXGDEVICE *v118; // rbx
  __int64 v119; // rax
  __int64 v120; // r9
  char *v121; // rdx
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // r9
  char *v125; // rdx
  char v126; // [rsp+58h] [rbp-B0h]
  char *v127; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGPROCESS *v128; // [rsp+68h] [rbp-A0h]
  struct DXGDEVICE **v129; // [rsp+70h] [rbp-98h]
  struct DXGHWQUEUE *v130; // [rsp+78h] [rbp-90h]
  __int64 v131; // [rsp+80h] [rbp-88h]
  struct _D3DKMT_RENDER *v132[2]; // [rsp+88h] [rbp-80h] BYREF
  void *Base; // [rsp+98h] [rbp-70h]
  _BYTE v134[32]; // [rsp+A0h] [rbp-68h] BYREF
  size_t NumOfElements; // [rsp+C0h] [rbp-48h]
  __int16 v136; // [rsp+C8h] [rbp-40h]
  __int64 v137; // [rsp+D0h] [rbp-38h] BYREF
  struct DXGADAPTER *v138; // [rsp+D8h] [rbp-30h]
  char v139; // [rsp+E0h] [rbp-28h]
  int v140; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v141; // [rsp+F0h] [rbp-18h]
  char v142; // [rsp+F8h] [rbp-10h]
  PVOID v143; // [rsp+100h] [rbp-8h]
  _BYTE v144[32]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v145; // [rsp+128h] [rbp+20h]
  void *Src; // [rsp+130h] [rbp+28h]
  _BYTE v147[32]; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v148; // [rsp+158h] [rbp+50h]
  _BYTE v149[8]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v150; // [rsp+168h] [rbp+60h]
  char v151; // [rsp+170h] [rbp+68h]
  _BYTE v152[8]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v153; // [rsp+180h] [rbp+78h]
  char v154; // [rsp+188h] [rbp+80h]
  _BYTE v155[8]; // [rsp+190h] [rbp+88h] BYREF
  __int64 v156; // [rsp+198h] [rbp+90h]
  char v157; // [rsp+1A0h] [rbp+98h]
  _QWORD v158[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v159[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  PVOID P; // [rsp+1C8h] [rbp+C0h]
  struct DXGALLOCATION *v161[32]; // [rsp+1D0h] [rbp+C8h] BYREF
  int v162; // [rsp+2D0h] [rbp+1C8h]
  _BYTE v163[8]; // [rsp+2D8h] [rbp+1D0h] BYREF
  _BYTE v164[8]; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int64 v165; // [rsp+2E8h] [rbp+1E0h]
  struct DXGADAPTER *v166; // [rsp+2F0h] [rbp+1E8h]
  char v167; // [rsp+2F8h] [rbp+1F0h]
  char *v168; // [rsp+300h] [rbp+1F8h]
  char v169[24]; // [rsp+308h] [rbp+200h] BYREF
  _BYTE v170[8]; // [rsp+320h] [rbp+218h] BYREF
  __int64 v171; // [rsp+328h] [rbp+220h]
  struct DXGADAPTER *v172; // [rsp+330h] [rbp+228h]
  char v173; // [rsp+338h] [rbp+230h]
  __int64 v174; // [rsp+340h] [rbp+238h]
  struct DXGDEVICE *v175; // [rsp+360h] [rbp+258h]
  char v176; // [rsp+368h] [rbp+260h]
  _BYTE v177[8]; // [rsp+378h] [rbp+270h] BYREF
  _BYTE v178[64]; // [rsp+380h] [rbp+278h] BYREF
  _BYTE v179[88]; // [rsp+3C0h] [rbp+2B8h] BYREF
  _BYTE v180[8]; // [rsp+418h] [rbp+310h] BYREF
  _BYTE v181[64]; // [rsp+420h] [rbp+318h] BYREF
  _BYTE v182[88]; // [rsp+460h] [rbp+358h] BYREF
  _BYTE v183[8]; // [rsp+4B8h] [rbp+3B0h] BYREF
  _BYTE v184[64]; // [rsp+4C0h] [rbp+3B8h] BYREF
  _BYTE v185[88]; // [rsp+500h] [rbp+3F8h] BYREF
  _BYTE v186[8]; // [rsp+558h] [rbp+450h] BYREF
  _BYTE v187[64]; // [rsp+560h] [rbp+458h] BYREF
  _BYTE v188[88]; // [rsp+5A0h] [rbp+498h] BYREF

  v127 = a2;
  v140 = -1;
  v141 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v142 = 1;
    v140 = 3020;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3020);
  }
  else
  {
    v142 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v140, 3020);
  v4 = (const struct _D3DKMT_RENDER *)((char *)a1 + 8);
  v132[0] = (struct _D3DKMT_RENDER *)((char *)a1 + 8);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess
    || (v9 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7, (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0) )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      v128 = v10;
      if ( v10 )
        goto LABEL_6;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v128 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      v10 = v128;
      if ( v128 )
        goto LABEL_6;
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v128 = v8;
  v10 = v8;
  if ( !v8 )
  {
    v90 = PsGetCurrentProcess(v9);
    v25 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, v90);
    v92 = PsGetCurrentProcess(v91);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v92,
      0LL,
      0LL,
      0LL);
    goto LABEL_23;
  }
LABEL_6:
  v11 = *(_DWORD *)a1;
  if ( v10 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v10 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v93 = *((_DWORD *)v10 + 68);
      if ( v93 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (const EVENT_DESCRIPTOR *)"g", v13, v93);
    }
    ExAcquirePushLockSharedEx((char *)v10 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v10 + 66);
  v14 = (v11 >> 6) & 0xFFFFFF;
  if ( v14 >= *((_DWORD *)v10 + 74) )
    goto LABEL_26;
  v15 = *((_QWORD *)v10 + 35) + 16LL * v14;
  if ( ((v11 >> 25) & 0x60) != (*(_BYTE *)(v15 + 8) & 0x60) )
    goto LABEL_26;
  if ( (*(_DWORD *)(v15 + 8) & 0x2000) != 0 )
    goto LABEL_26;
  v16 = *(_DWORD *)(v15 + 8) & 0x1F;
  if ( !v16 )
    goto LABEL_26;
  if ( v16 != 15 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_26;
  }
  v17 = *(_QWORD *)v15;
  v130 = (struct DXGHWQUEUE *)v17;
  if ( !v17 )
    goto LABEL_16;
  _m_prefetchw((const void *)(v17 + 104));
  v94 = *(_QWORD *)(v17 + 104);
  if ( !v94 )
  {
LABEL_26:
    v130 = 0LL;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v95 = v94;
    v94 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 104), v94 + 1, v94);
    if ( v95 == v94 )
      break;
    if ( !v94 )
      goto LABEL_26;
  }
LABEL_16:
  _InterlockedDecrement((volatile signed __int32 *)v10 + 66);
  ExReleasePushLockSharedEx((char *)v10 + 248, 0LL);
  KeLeaveCriticalRegion();
  hDevice = v4->hDevice;
  if ( v10 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v10 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v96 = *((_DWORD *)v10 + 68);
      if ( v96 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (const EVENT_DESCRIPTOR *)"g", v20, v96);
    }
    ExAcquirePushLockSharedEx((char *)v10 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v10 + 66);
  v21 = (hDevice >> 6) & 0xFFFFFF;
  if ( v21 < *((_DWORD *)v10 + 74) )
  {
    v32 = *((_QWORD *)v10 + 35) + 16LL * v21;
    if ( ((hDevice >> 25) & 0x60) == (*(_BYTE *)(v32 + 8) & 0x60) && (*(_DWORD *)(v32 + 8) & 0x2000) == 0 )
    {
      v33 = *(_DWORD *)(v32 + 8) & 0x1F;
      if ( v33 )
      {
        if ( v33 == 7 )
        {
          v34 = *(_QWORD *)v32;
          if ( *(_QWORD *)v32 )
          {
            _m_prefetchw((const void *)(v34 + 32));
            v35 = *(_QWORD *)(v34 + 32);
            if ( v35 )
            {
              while ( 1 )
              {
                v36 = v35;
                v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 32), v35 + 1, v35);
                if ( v36 == v35 )
                  break;
                if ( !v35 )
                  goto LABEL_21;
              }
              _InterlockedDecrement((volatile signed __int32 *)v10 + 66);
              ExReleasePushLockSharedEx((char *)v10 + 248, 0LL);
              KeLeaveCriticalRegion();
              v38 = *(_BYTE *)(v34 + 442) == 0;
              v39 = (struct DXGDEVICE **)(v34 + 16);
              v40 = *(_QWORD *)(v34 + 16);
              v131 = v40;
              v129 = (struct DXGDEVICE **)(v34 + 16);
              if ( !v38 )
              {
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v186, v40, 0, v37, 0);
                v97 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v186, 0LL);
                v98 = v97;
                if ( v97 >= 0 )
                  v98 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)*v39 + 2) + 16LL) + 4472LL),
                          v10,
                          (struct DXGCONTEXT *)v34,
                          v4);
                else
                  WdLogSingleEntry3(4LL, v97, v34, v10);
                COREACCESS::~COREACCESS((COREACCESS *)v188);
                COREACCESS::~COREACCESS((COREACCESS *)v187);
                v25 = v98;
LABEL_128:
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  v112 = (__int64)*v39;
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v132, *v39);
                  v113 = *v39;
                  v151 = 0;
                  v150 = *(_QWORD *)(*((_QWORD *)v113 + 2) + 16LL);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v149);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v177, v112, 2, v114, 0);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v177, v115);
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v112 + 16) + 16LL) + 200LL) != 4 )
                    DXGDEVICE::DestroyContext(
                      (DXGDEVICE *)v112,
                      (struct DXGCONTEXT *)v34,
                      (struct COREDEVICEACCESS *)v177);
                  COREACCESS::~COREACCESS((COREACCESS *)v179);
                  COREACCESS::~COREACCESS((COREACCESS *)v178);
                  if ( v151 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v149);
                  if ( v132[0] )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v132);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v112 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v112 + 16), (struct DXGDEVICE *)v112);
                }
                goto LABEL_22;
              }
              v41 = *(struct _KEVENT **)(v40 + 16);
              if ( !KeReadStateEvent(v41 + 5) )
                KeWaitForSingleObject(&v41[5], Executive, 0, 0, 0LL);
              KeEnterCriticalRegion();
              if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v40 + 136), 0) )
              {
                DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v40 + 16) + 16LL));
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v85, (const EVENT_DESCRIPTOR *)"g", v86, 40);
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v40 + 136), 1u);
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v40 + 16) + 16LL));
              }
              v42 = *v39;
              v43 = *(_QWORD *)(*((_QWORD *)*v39 + 2) + 16LL);
              if ( *(_BYTE *)(v43 + 2838) )
              {
                v99 = DXGPROCESS::GetCurrent();
                v44 = v132[0];
                if ( (*((_DWORD *)v99 + 106) & 0x180) == 0
                  && (*(_DWORD *)&v132[0]->Flags & 0x40) == 0
                  && *(int *)(v43 + 2552) >= 0x2000 )
                {
                  v100 = *(_DWORD *)(v43 + 288);
                  if ( v100 > 1 )
                  {
                    v45 = 1;
                    v132[0]->BroadcastContextCount = v100 - 1;
LABEL_43:
                    BroadcastContextCount = v44->BroadcastContextCount;
                    v126 = v45;
                    v47 = BroadcastContextCount + 1;
                    if ( BroadcastContextCount > 0x40 )
                    {
                      v25 = -1073741811;
                      WdLogSingleEntry2(3LL, v34, -1073741811LL);
LABEL_127:
                      ExReleaseResourceLite(*(PERESOURCE *)(v40 + 136));
                      KeLeaveCriticalRegion();
                      goto LABEL_128;
                    }
                    v48 = 0LL;
                    Src = 0LL;
                    v148 = 0;
                    if ( (unsigned int)v47 > 4 )
                    {
                      v49 = (unsigned int)v47;
                      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v47 < 8 )
                        goto LABEL_49;
                      Src = (void *)ExAllocatePool2(256LL, 8 * v47, 1265072196LL);
                    }
                    else
                    {
                      Src = v147;
                      memset(v147, 0, 8 * v47);
                    }
                    v48 = 0LL;
                    v148 = v47;
                    v49 = (unsigned int)v47;
LABEL_49:
                    if ( !Src )
                    {
                      WdLogSingleEntry1(3LL, 2871LL);
                      v25 = -1073741801;
LABEL_125:
                      if ( Src != v147 && Src )
                        ExFreePoolWithTag(Src, 0);
                      Src = 0LL;
                      v148 = 0;
                      goto LABEL_127;
                    }
                    v143 = 0LL;
                    v145 = 0;
                    if ( (unsigned int)v47 > 4 )
                    {
                      if ( 0xFFFFFFFFFFFFFFFFuLL / v49 < 8 )
                        goto LABEL_172;
                      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v49, 1265072196LL);
                      v143 = Pool2;
                    }
                    else
                    {
                      Pool2 = v144;
                      v143 = v144;
                      if ( !(_DWORD)v47 )
                        goto LABEL_54;
                      memset(v144, 0, 8 * v49);
                      Pool2 = v143;
                    }
                    v48 = 0LL;
LABEL_54:
                    v145 = v47;
                    if ( Pool2 )
                    {
                      v51 = v130;
                      *(_QWORD *)Src = v34;
                      if ( v51 )
                        *(_QWORD *)v143 = v51;
                      if ( v45 )
                      {
                        v101 = Src;
                        v102 = (__int64 *)*((_QWORD *)v42 + 62);
                        v103 = 0;
                        v104 = 0;
                        while ( v102 != (__int64 *)((char *)v42 + 496) && v102 )
                        {
                          v105 = *((unsigned int *)v102 + 100);
                          if ( (unsigned int)v105 >= (unsigned int)v47 )
                          {
                            v107 = 2910LL;
                            WdLogSingleEntry2(2LL, v34, 2910LL);
                            v108 = L"0x%I64x fails as context physical adapter index is invalid";
                            goto LABEL_189;
                          }
                          if ( ((1 << v105) & v103) != 0 )
                          {
                            v107 = 2917LL;
                            WdLogSingleEntry2(2LL, v34, 2917LL);
                            v108 = L"0x%I64x fails as context for the same physical adapter is specified";
LABEL_189:
                            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v108, v34, v107, 0LL, 0LL, 0LL);
                            v39 = v129;
                            v25 = -1073741811;
                            goto LABEL_123;
                          }
                          v103 |= 1 << v105;
                          v101[v105] = v102;
                          if ( (*((_DWORD *)v102 + 101) & 0x10) != 0 )
                          {
                            if ( (__int64 *)v102[51] != v102 + 51 )
                              v48 = v102[51];
                            v106 = v143;
                            if ( (unsigned int)v105 < v145 )
                              v106 = (char *)v143 + 8 * v105;
                            *v106 = v48;
                            v48 = 0LL;
                          }
                          v102 = (__int64 *)*v102;
                          ++v104;
                        }
                        if ( v104 != (_DWORD)v47 )
                        {
                          v107 = 2940LL;
                          WdLogSingleEntry2(2LL, v34, 2940LL);
                          v108 = L"0x%I64x fails as to few contexts are in the device";
                          goto LABEL_189;
                        }
                        v10 = v128;
                        v39 = v129;
                      }
                      v52 = v148;
                      v53 = 0LL;
                      v54 = Src;
                      Base = 0LL;
                      LODWORD(NumOfElements) = 0;
                      if ( v148 > 4 )
                      {
                        v55 = 0LL;
                        if ( 0xFFFFFFFFFFFFFFFFuLL / v148 < 8 )
                          goto LABEL_62;
                        v53 = (_BYTE *)ExAllocatePool2(256LL, 8LL * v148, 1265072196LL);
                        Base = v53;
                      }
                      else
                      {
                        v53 = v134;
                        Base = v134;
                        if ( v148 )
                        {
                          memset(v134, 0, 8LL * v148);
                          v53 = Base;
                        }
                      }
                      LODWORD(NumOfElements) = v52;
                      v55 = v52;
LABEL_62:
                      v136 = 1;
                      if ( !v53 )
                        goto LABEL_227;
                      memmove(v53, v54, 8 * v55);
                      qsort(
                        Base,
                        (unsigned int)NumOfElements,
                        8uLL,
                        (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
                      v56 = 1LL;
                      v57 = Base;
                      if ( (unsigned int)NumOfElements > 1uLL )
                      {
                        while ( *((_QWORD *)Base + v56) != *((_QWORD *)Base + v56 - 1) )
                        {
                          if ( ++v56 >= (unsigned __int64)(unsigned int)NumOfElements )
                          {
                            v58 = 0LL;
                            goto LABEL_65;
                          }
                        }
                      }
                      else
                      {
                        v58 = 0LL;
                        if ( (_DWORD)NumOfElements )
                        {
LABEL_65:
                          while ( 1 )
                          {
                            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v57[v58++] + 448LL));
                            if ( v58 >= (unsigned int)NumOfElements )
                              break;
                            v57 = Base;
                          }
                        }
                        v57 = Base;
                        v136 = 256;
                      }
                      v59 = (DXGCONTEXT *)v34;
                      if ( !v57 )
                      {
LABEL_227:
                        WdLogSingleEntry1(3LL, 2951LL);
                        v25 = -1073741801;
LABEL_116:
                        v82 = Base;
                        if ( Base )
                        {
                          if ( !(_BYTE)v136 )
                          {
                            if ( HIBYTE(v136) )
                            {
                              for ( i = 0LL; i < (unsigned int)NumOfElements; v82 = Base )
                              {
                                v84 = v82[i] + 448LL;
                                *(_QWORD *)(v84 + 8) = 0LL;
                                ExReleasePushLockExclusiveEx(v84, 0LL);
                                KeLeaveCriticalRegion();
                                ++i;
                              }
                            }
                          }
                        }
                        if ( v82 != (_QWORD *)v134 && v82 )
                          ExFreePoolWithTag(v82, 0);
                        v40 = v131;
                        Base = 0LL;
                        LODWORD(NumOfElements) = 0;
                        goto LABEL_123;
                      }
                      v138 = *(struct DXGADAPTER **)(*((_QWORD *)v42 + 2) + 16LL);
                      _InterlockedIncrement64((volatile signed __int64 *)v138 + 3);
                      v60 = v138;
                      v137 = -1LL;
                      KeEnterCriticalRegion();
                      ExAcquirePushLockSharedEx((char *)v60 + 136, 0LL);
                      _InterlockedIncrement((volatile signed __int32 *)v60 + 38);
                      v139 = 1;
                      v61 = *v39;
                      v62 = *(volatile signed __int64 **)(*((_QWORD *)*v39 + 2) + 16LL);
                      v166 = (struct DXGADAPTER *)v62;
                      v167 = 0;
                      v168 = 0LL;
                      if ( v62 )
                      {
                        _InterlockedIncrement64(v62 + 3);
                        v165 = -1LL;
                      }
                      v63 = *(volatile signed __int64 **)(*((_QWORD *)v61 + 2) + 16LL);
                      v172 = (struct DXGADAPTER *)v63;
                      v173 = 0;
                      v174 = 0LL;
                      if ( v63 )
                      {
                        _InterlockedIncrement64(v63 + 3);
                        v171 = -1LL;
                      }
                      v175 = v61;
                      v176 = 0;
                      if ( v167 )
                        WdLogSingleEntry5(0LL, 275LL, 4LL, v164, 0LL, 0LL);
                      if ( KeGetCurrentThread() == *((struct _KTHREAD **)v166 + 23) )
                      {
                        v66 = v127;
                      }
                      else
                      {
                        if ( !KeReadStateEvent((PRKEVENT)v166 + 2) )
                        {
                          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                            McTemplateK0q_EtwWriteTransfer(v64, (const EVENT_DESCRIPTOR *)"g", v65, 72);
                          KeWaitForSingleObject((char *)v166 + 48, Executive, 0, 0, 0LL);
                        }
                        v66 = v127;
                        DXGADAPTER::AcquireCoreResourceShared(v166, v127);
                      }
                      v168 = 0LL;
                      if ( v66 )
                      {
                        v109 = RtlStringCbCopyA(v169, 17LL, v66);
                        v110 = v169;
                        if ( v109 < 0 )
                          v110 = v168;
                        v168 = v110;
                      }
                      v167 = 1;
                      if ( *((_DWORD *)v175 + 152) != 1 )
                      {
                        COREACCESS::Release((COREACCESS *)v164);
                        if ( v176 )
                          COREACCESS::Release((COREACCESS *)v170);
                        WdLogSingleEntry3(4LL, -1073741130LL, v34, v10);
                        v25 = -1073741130;
                        goto LABEL_101;
                      }
                      v67 = *(_QWORD *)(*((_QWORD *)*v39 + 2) + 16LL);
                      v68 = *(int *)(v67 + 2552) >= 0x2000 || *(_BYTE *)(v67 + 2852);
                      v69 = v132[0];
                      if ( (*(_DWORD *)&v132[0]->Flags & 0x20) != 0 )
                        pNewAllocationList = v132[0]->pNewAllocationList;
                      else
                        pNewAllocationList = *(D3DDDI_ALLOCATIONLIST **)(v34 + 88);
                      AllocationCount = v132[0]->AllocationCount;
                      LODWORD(v127) = v132[0]->AllocationCount;
                      v72 = 0LL;
                      P = 0LL;
                      v162 = 0;
                      if ( !v68 )
                        goto LABEL_90;
                      if ( (unsigned int)AllocationCount > 0x20 )
                      {
                        if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
                          goto LABEL_214;
                        v72 = (struct _EX_RUNDOWN_REF **)ExAllocatePool2(256LL, 8 * AllocationCount, 1265072196LL);
                        P = v72;
                      }
                      else
                      {
                        v72 = (struct _EX_RUNDOWN_REF **)v161;
                        P = v161;
                        if ( (_DWORD)AllocationCount )
                        {
                          memset(v161, 0, 8LL * (unsigned int)AllocationCount);
                          v72 = (struct _EX_RUNDOWN_REF **)P;
                        }
                      }
                      v162 = AllocationCount;
                      if ( v72 )
                      {
                        v73 = DxgkReferenceAllocationList(
                                (unsigned int *)&v127,
                                pNewAllocationList,
                                (struct DXGALLOCATION **)v72,
                                0LL);
                        AllocationCount = (unsigned int)v127;
                        v74 = v73;
                        if ( v73 < 0 )
                        {
                          v76 = v128;
LABEL_93:
                          v34 = (__int64)v59;
                          v77 = (__int64)v76;
                          if ( (_DWORD)AllocationCount )
                          {
                            do
                            {
                              if ( *v72 )
                                ExReleaseRundownProtection(*v72 + 11);
                              ++v72;
                              --AllocationCount;
                            }
                            while ( AllocationCount );
                          }
LABEL_97:
                          if ( v74 < 0 )
                          {
                            switch ( v74 )
                            {
                              case -1073741811:
                              case -1073741592:
                                WdLogSingleEntry3(2LL, v74, v34, v77);
                                DxgkLogInternalTriageEvent(
                                  0LL,
                                  0x40000,
                                  -1,
                                  (__int64)L"0x%I64x RenderKm failed 0x%I64x 0x%I64x",
                                  v74,
                                  v34,
                                  v77,
                                  0LL,
                                  0LL);
                                goto LABEL_98;
                              case -1071775482:
                                v111 = -1071775482LL;
                                break;
                              case -1071774910:
                                goto LABEL_98;
                              default:
                                v111 = v74;
                                break;
                            }
                            WdLogSingleEntry3(4LL, v111, v34, v77);
                          }
LABEL_98:
                          v25 = v74;
                          goto LABEL_99;
                        }
                        v69 = v132[0];
LABEL_90:
                        if ( v126 )
                          v75 = DXGCONTEXT::RenderKmLda(
                                  v69,
                                  (struct COREDEVICEACCESS *)v163,
                                  (struct DXGCONTEXT **)Src,
                                  (struct DXGALLOCATION **)v72,
                                  (struct DXGHWQUEUE **)v143);
                        else
                          v75 = DXGCONTEXT::Render(
                                  v59,
                                  v69,
                                  (__int64)v163,
                                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v137,
                                  (struct DXGCONTEXT **)Src,
                                  (struct DXGALLOCATION **)v72,
                                  (struct DXGHWQUEUE **)v143);
                        v74 = v75;
                        v76 = v128;
                        v77 = (__int64)v128;
                        v34 = (__int64)v59;
                        if ( !v68 )
                          goto LABEL_97;
                        goto LABEL_93;
                      }
LABEL_214:
                      WdLogSingleEntry1(3LL, 2991LL);
                      v25 = -1073741801;
                      v34 = (__int64)v59;
LABEL_99:
                      if ( P != v161 && P )
                        ExFreePoolWithTag(P, 0);
                      v39 = v129;
                      P = 0LL;
                      v162 = 0;
LABEL_101:
                      v78 = v172;
                      if ( v172 )
                      {
                        if ( v173 )
                        {
                          COREACCESS::Release((COREACCESS *)v170);
                          v78 = v172;
                        }
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v78 + 2), v78);
                      }
                      v79 = v166;
                      if ( v166 )
                      {
                        if ( v167 )
                        {
                          v167 = 0;
                          v79 = v166;
                          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v166 + 23) )
                          {
                            DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v166, v168);
                            v79 = v166;
                          }
                          v168 = 0LL;
                        }
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v79 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v79 + 2), v79);
                      }
                      if ( v139 )
                      {
                        v80 = (char *)v138 + 136;
                        v139 = 0;
                        _InterlockedDecrement((volatile signed __int32 *)v138 + 38);
                        ExReleasePushLockSharedEx(v80, 0LL);
                        KeLeaveCriticalRegion();
                        v81 = (DXGGLOBAL **)v138;
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v138 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(v81[2], (struct DXGADAPTER *)v81);
                      }
                      goto LABEL_116;
                    }
LABEL_172:
                    WdLogSingleEntry1(3LL, 2878LL);
                    v25 = -1073741801;
LABEL_123:
                    if ( v143 != v144 && v143 )
                      ExFreePoolWithTag(v143, 0);
                    v143 = 0LL;
                    v145 = 0;
                    goto LABEL_125;
                  }
                }
              }
              else
              {
                v44 = v132[0];
              }
              v45 = 0;
              v128 = v10;
              goto LABEL_43;
            }
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
  }
LABEL_21:
  _InterlockedDecrement((volatile signed __int32 *)v10 + 66);
  ExReleasePushLockSharedEx((char *)v10 + 248, 0LL);
  KeLeaveCriticalRegion();
  v22 = v4->hDevice;
  v24 = PsGetCurrentProcess(v23);
  v25 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, v24, v22);
  v26 = v4->hDevice;
  v28 = PsGetCurrentProcess(v27);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
    -1073741811LL,
    v28,
    v26,
    0LL,
    0LL);
LABEL_22:
  v29 = v130;
  if ( v130 )
  {
    v116 = _InterlockedDecrement64((volatile signed __int64 *)v130 + 13);
    if ( v116 >= 0 )
    {
      if ( !v116 )
      {
        v117 = *((_QWORD *)v29 + 2);
        v118 = *(struct DXGDEVICE **)(v117 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v158, v118);
        v119 = *((_QWORD *)v118 + 2);
        v154 = 0;
        v153 = *(_QWORD *)(v119 + 16);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v152);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v180, (__int64)v118, 2, v120, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v180, v121);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v118 + 2) + 16LL) + 200LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v117, v29, (struct COREDEVICEACCESS *)v180);
        COREACCESS::~COREACCESS((COREACCESS *)v182);
        COREACCESS::~COREACCESS((COREACCESS *)v181);
        if ( v154 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v152);
        if ( v158[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v158);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v117 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v122 = *(_QWORD *)(v117 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v159,
            (struct DXGDEVICE *)v122);
          v123 = *(_QWORD *)(v117 + 16);
          v157 = 0;
          v156 = *(_QWORD *)(*(_QWORD *)(v123 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v155);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v183, v122, 2, v124, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v183, v125);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v122 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v122, (struct DXGCONTEXT *)v117, (struct COREDEVICEACCESS *)v183);
          COREACCESS::~COREACCESS((COREACCESS *)v185);
          COREACCESS::~COREACCESS((COREACCESS *)v184);
          if ( v157 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v155);
          if ( v159[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v159);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v122 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v122 + 16), (struct DXGDEVICE *)v122);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 141LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NewReferenceCount >= 0", 141LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140);
  if ( v142 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v30, v140);
  return v25;
}
