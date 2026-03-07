__int64 __fastcall WaitForSynchronizationObjectFromGpu(
        unsigned int a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct DXGPROCESS *a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10,
        bool a11)
{
  unsigned __int64 *Src; // r14
  unsigned __int64 v12; // rbx
  _BYTE *Pool2; // r15
  struct DXGCONTEXT *v14; // rsi
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // r9
  struct _KEVENT *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rdi
  struct DXGPROCESS *v24; // r14
  volatile signed __int32 *v25; // rdi
  unsigned int *v26; // r13
  unsigned int v27; // esi
  unsigned int v28; // eax
  unsigned int v29; // esi
  __int64 v30; // r14
  unsigned int v31; // esi
  unsigned int v32; // eax
  unsigned int v33; // esi
  struct DXGPROCESS *v34; // r14
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 *v37; // r14
  struct DXGDEVICESYNCOBJECT **v38; // rdx
  _BYTE *v39; // r9
  unsigned int v40; // r10d
  size_t v41; // r8
  unsigned __int64 *v43; // r12
  __int64 v44; // r15
  __int64 v45; // rdi
  int v46; // ecx
  unsigned __int64 v47; // r8
  struct DXGDEVICESYNCOBJECT **v48; // r9
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r14
  unsigned int v54; // ecx
  __int64 v55; // rdx
  unsigned int v56; // ecx
  int v57; // ecx
  int v58; // eax
  int DxgAdapterSyncObject; // eax
  __int64 v60; // rsi
  __int64 *v61; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v63; // r9
  PVOID v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r8
  int v67; // r9d
  struct DXGPROCESS *v68; // r14
  __int64 v69; // rdx
  unsigned __int64 RedirectedFlipFenceValue; // rax
  struct DXGPROCESS *v71; // r14
  __int64 *v72; // rdi
  struct DXGPROCESS *v73; // r14
  unsigned int *v74; // rdi
  struct DXGPROCESS *v75; // r14
  struct DXGPROCESS *v76; // r14
  unsigned int *v77; // rbx
  unsigned int *v78; // rdi
  struct DXGPROCESS *v79; // r14
  unsigned int v80; // ebx
  int v81; // eax
  __int64 v82; // r8
  struct DXGDEVICESYNCOBJECT **v83; // r9
  struct DXGDEVICESYNCOBJECT **v84; // rax
  int v85; // eax
  __int64 v86; // r8
  __int64 v87; // rbx
  unsigned int *v88; // rsi
  struct DXGPROCESS *v89; // r14
  PVOID v90; // rcx
  __int64 v91; // rbx
  unsigned int *v92; // rsi
  struct DXGPROCESS *v93; // r14
  __int64 v94; // rbx
  unsigned int *v95; // rsi
  struct DXGPROCESS *v96; // r14
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-2B8h]
  char v98; // [rsp+50h] [rbp-288h]
  unsigned int v99; // [rsp+54h] [rbp-284h]
  unsigned int v100; // [rsp+54h] [rbp-284h]
  char v101; // [rsp+58h] [rbp-280h]
  char v102; // [rsp+59h] [rbp-27Fh]
  __int64 v103; // [rsp+60h] [rbp-278h] BYREF
  char v104; // [rsp+68h] [rbp-270h]
  __int64 v105; // [rsp+70h] [rbp-268h] BYREF
  int v106; // [rsp+78h] [rbp-260h]
  struct DXGCONTEXT *v107; // [rsp+80h] [rbp-258h] BYREF
  struct DXGPROCESS *v108; // [rsp+88h] [rbp-250h]
  PVOID P; // [rsp+90h] [rbp-248h] BYREF
  _BYTE v110[32]; // [rsp+98h] [rbp-240h] BYREF
  int v111; // [rsp+B8h] [rbp-220h]
  struct DXGDEVICESYNCOBJECT **v112; // [rsp+C0h] [rbp-218h] BYREF
  DXGCONTEXT *v113; // [rsp+C8h] [rbp-210h] BYREF
  char v114; // [rsp+D0h] [rbp-208h]
  __int64 v115; // [rsp+D8h] [rbp-200h] BYREF
  char v116; // [rsp+E0h] [rbp-1F8h]
  __int64 *v117; // [rsp+E8h] [rbp-1F0h]
  unsigned int *v118; // [rsp+F0h] [rbp-1E8h]
  PVOID v119; // [rsp+F8h] [rbp-1E0h]
  _BYTE v120[32]; // [rsp+100h] [rbp-1D8h] BYREF
  int v121; // [rsp+120h] [rbp-1B8h]
  struct DXGDEVICESYNCOBJECT **v122; // [rsp+128h] [rbp-1B0h]
  unsigned __int64 v123; // [rsp+130h] [rbp-1A8h] BYREF
  char v124[8]; // [rsp+138h] [rbp-1A0h] BYREF
  __int64 v125; // [rsp+140h] [rbp-198h]
  int v126; // [rsp+148h] [rbp-190h]
  struct DXGPROCESS *v127; // [rsp+150h] [rbp-188h]
  DXGFASTMUTEX *v128; // [rsp+158h] [rbp-180h] BYREF
  char v129; // [rsp+160h] [rbp-178h]
  const unsigned __int64 *v130; // [rsp+168h] [rbp-170h]
  _BYTE v131[16]; // [rsp+170h] [rbp-168h] BYREF
  struct DXGADAPTERSYNCOBJECT *v132; // [rsp+180h] [rbp-158h] BYREF
  __int64 v133; // [rsp+188h] [rbp-150h]
  __int64 v134; // [rsp+190h] [rbp-148h]
  __int128 v135; // [rsp+198h] [rbp-140h] BYREF
  size_t v136; // [rsp+1A8h] [rbp-130h]
  _BYTE *v137; // [rsp+1B0h] [rbp-128h]
  PVOID v138; // [rsp+1B8h] [rbp-120h]
  _BYTE v139[32]; // [rsp+1C0h] [rbp-118h] BYREF
  int v140; // [rsp+1E0h] [rbp-F8h]
  char v141[8]; // [rsp+1F0h] [rbp-E8h] BYREF
  _BYTE v142[64]; // [rsp+1F8h] [rbp-E0h] BYREF
  _BYTE v143[16]; // [rsp+238h] [rbp-A0h] BYREF
  __int64 v144; // [rsp+248h] [rbp-90h]
  __int64 v145; // [rsp+278h] [rbp-60h]
  char v146; // [rsp+280h] [rbp-58h]

  Src = a3;
  v118 = a2;
  v12 = a1;
  v130 = a3;
  v123 = a4;
  v108 = a6;
  v127 = a6;
  v119 = 0LL;
  v121 = 0;
  if ( a1 <= 4 )
  {
    Pool2 = v120;
    v119 = v120;
    if ( a1 )
    {
      memset(v120, 0, 8LL * a1);
      Pool2 = v119;
    }
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a1 >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * a1, 1265072196LL);
    v119 = Pool2;
LABEL_4:
    v121 = v12;
    goto LABEL_5;
  }
  Pool2 = 0LL;
LABEL_5:
  if ( !Pool2 )
    return 3221225495LL;
  v107 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v113, a5, a6, &v107, a8, 1);
  v14 = v107;
  if ( !v107 )
  {
    WdLogSingleEntry3(2LL, a6, a5, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)a6,
      a5,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_140;
  }
  v102 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v107 + 2) + 16LL) + 16LL) + 209LL);
  P = 0LL;
  v111 = 0;
  v112 = 0LL;
  if ( v102 )
  {
    v112 = (struct DXGDEVICESYNCOBJECT **)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(
                                            &P,
                                            (unsigned int)v12);
    if ( !v112 )
    {
      if ( P != v110 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v111 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v113);
      if ( v119 != v120 && v119 )
        ExFreePoolWithTag(v119, 0);
      return 3221225495LL;
    }
  }
  v15 = *((_QWORD *)v14 + 2);
  v105 = v15;
  v106 = 0;
  v16 = v15;
  v134 = v15;
  v115 = v15;
  v116 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124, (struct _KTHREAD **)v14 + 56, 1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v141, *((_QWORD *)v14 + 2), 0, v17, a8);
  if ( !a8 )
  {
    if ( a9 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
    }
    else if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v14 + 2) + 136LL)) && v15 )
    {
      v18 = *(struct _KEVENT **)(v15 + 16);
      if ( !KeReadStateEvent(v18 + 4) )
        KeWaitForSingleObject(&v18[4], Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v15 + 136), 0) )
      {
        DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v65, (const EVENT_DESCRIPTOR *)"g", v66, 40);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v15 + 136), 1u);
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
      }
      v116 = 1;
    }
    if ( !a11 || *((_DWORD *)v14 + 36) == 2 )
    {
      v19 = v125;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v19, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v67 = *(_DWORD *)(v19 + 24);
          if ( v67 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v20, (const EVENT_DESCRIPTOR *)"g", v21, v67);
        }
        ExAcquirePushLockExclusiveEx(v19, 0LL);
      }
      *(_QWORD *)(v19 + 8) = KeGetCurrentThread();
      v126 = 2;
    }
    if ( v146 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v143, 0LL);
      if ( *(_DWORD *)(v144 + 200) != 1 )
        goto LABEL_164;
    }
    COREACCESS::AcquireShared((COREACCESS *)v142, 0LL);
    if ( *(_DWORD *)(v145 + 608) == 1 )
    {
      v14 = v107;
      v15 = v105;
      Src = (unsigned __int64 *)v130;
      goto LABEL_22;
    }
    COREACCESS::Release((COREACCESS *)v142);
    if ( v146 )
LABEL_164:
      COREACCESS::Release((COREACCESS *)v143);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
    if ( v105 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
    if ( P != v110 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v111 = 0;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v113);
    if ( v119 != v120 && v119 )
      ExFreePoolWithTag(v119, 0);
    return 3221226166LL;
  }
LABEL_22:
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v103, Global, 0);
  if ( v104 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v103, 0LL, 0LL);
  v23 = v103;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v23 + 600), 1u);
  v104 = 1;
  v101 = 0;
  v98 = 0;
  v99 = 0;
  if ( (_DWORD)v12 )
  {
    v24 = v108;
    v25 = (volatile signed __int32 *)((char *)v108 + 248);
    v117 = (__int64 *)((char *)v14 + 16);
    v122 = v112;
    v26 = v118;
    v133 = Pool2 - (_BYTE *)v112;
    while ( 1 )
    {
      v27 = *v26;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v25);
      v28 = (v27 >> 6) & 0xFFFFFF;
      v29 = v27 >> 30;
      if ( v28 < *((_DWORD *)v24 + 74)
        && (v53 = 16LL * v28 + *((_QWORD *)v24 + 35), v54 = *(_DWORD *)(v53 + 8), v29 == ((v54 >> 5) & 3))
        && (v54 & 0x2000) == 0
        && (v54 & 0x1F) == 8 )
      {
        v30 = *(_QWORD *)v53;
      }
      else
      {
        v30 = 0LL;
      }
      _InterlockedDecrement(v25 + 4);
      ExReleasePushLockSharedEx(v25, 0LL);
      KeLeaveCriticalRegion();
      if ( v30 )
      {
        if ( v112 )
          *v122 = 0LL;
        if ( *(_DWORD *)(v30 + 200) == 5 )
        {
          WdLogSingleEntry1(1LL, 1157LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_MONITORED_FENCE",
            1157LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( *(_DWORD *)(v30 + 200) == 6 )
        {
          WdLogSingleEntry1(1LL, 1158LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_PERIODIC_MONITORED_FENCE",
            1158LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v101 = 1;
        if ( v98 )
        {
          v76 = v108;
          WdLogSingleEntry1(2LL, v108);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%p mixes monitored fence and non-monitored fence sync objects in one wait call.",
            (__int64)v76,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v104 )
LABEL_210:
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
LABEL_211:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
          if ( v105 )
LABEL_178:
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
LABEL_179:
          if ( P != v110 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v111 = 0;
LABEL_140:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v113);
          v64 = v119;
          if ( v119 == v120 || !v119 )
            return 3221225485LL;
LABEL_254:
          ExFreePoolWithTag(v64, 0);
          return 3221225485LL;
        }
        v58 = *(_DWORD *)(v30 + 200);
        if ( v58 == 4 )
        {
          v74 = v118;
          v75 = v108;
          WdLogSingleEntry3(2LL, v108, v118[v99], v99);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%p failed, can not wait on CPU Notification object 0x%x at index %d",
            (__int64)v75,
            v74[v99],
            v99,
            0LL,
            0LL);
          if ( v104 )
            goto LABEL_210;
          goto LABEL_211;
        }
        if ( (_DWORD)v12 != 1 && v58 == 3 )
        {
          v68 = v108;
          WdLogSingleEntry2(2LL, v108, v12);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%p can only wait on one fence object at a time instead of %d",
            (__int64)v68,
            v12,
            0LL,
            0LL,
            0LL);
          if ( v104 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
          if ( v105 )
            goto LABEL_178;
          goto LABEL_179;
        }
        DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v131, (struct DXGSYNCOBJECT *)v30);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v131);
        v132 = 0LL;
        DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                                 (DXGSYNCOBJECT *)v30,
                                 *(struct ADAPTER_RENDER **)(*v117 + 16),
                                 &v132);
        v60 = DxgAdapterSyncObject;
        if ( DxgAdapterSyncObject < 0 )
        {
          v72 = v117;
          v73 = v108;
          WdLogSingleEntry3(2LL, v108, *(_QWORD *)(*(_QWORD *)(*v117 + 16) + 16LL), DxgAdapterSyncObject);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
            (__int64)v73,
            *(_QWORD *)(*(_QWORD *)(*v72 + 16) + 16LL),
            v60,
            0LL,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v131);
          if ( v104 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
          if ( v105 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
          if ( P != v110 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v111 = 0;
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v113);
          if ( v119 != v120 && v119 )
            ExFreePoolWithTag(v119, 0);
          return (unsigned int)v60;
        }
        if ( !v102
          && (v61 = v117,
              VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                   (DXGSYNCOBJECT *)v30,
                                   *(struct ADAPTER_RENDER **)(*v117 + 16)),
              (*(unsigned __int8 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(v63 + 8)
                                                                                                + 848LL))(
                VidSchSyncObject,
                v123))
          && (v69 = *v61, *(_BYTE *)(*(_QWORD *)(*v61 + 16) + 1024LL)) )
        {
          v14 = v107;
          if ( (*(_DWORD *)(*(_QWORD *)(v69 + 40) + 424LL) & 4) == 0 || (*((_DWORD *)v107 + 101) & 8) == 0 )
          {
            if ( (*(_BYTE *)(v30 + 204) & 1) == 0
              || !*(_BYTE *)(v69 + 1899)
              || (RedirectedFlipFenceValue = DXGSYNCOBJECT::GetRedirectedFlipFenceValue((DXGSYNCOBJECT *)v30),
                  v123 > RedirectedFlipFenceValue) )
            {
              v71 = v108;
              WdLogSingleEntry2(2LL, v108, -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"0x%I64x submitted an invalid out of order wait for sync object. Returning 0x%I64x",
                (__int64)v71,
                -1073741811LL,
                0LL,
                0LL,
                0LL);
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v131);
              if ( v104 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
              DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
              if ( v105 )
                goto LABEL_192;
              goto LABEL_193;
            }
          }
        }
        else
        {
          v14 = v107;
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v131);
      }
      else
      {
        v31 = *v26;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v25);
        v32 = (v31 >> 6) & 0xFFFFFF;
        v33 = v31 >> 30;
        v34 = v108;
        if ( v32 < *((_DWORD *)v108 + 74)
          && (v55 = *((_QWORD *)v108 + 35) + 16LL * v32, v56 = *(_DWORD *)(v55 + 8), v33 == ((v56 >> 5) & 3))
          && (v56 & 0x2000) == 0
          && (v57 = v56 & 0x1F) != 0 )
        {
          if ( v57 == 11 )
          {
            v35 = *(_QWORD *)v55;
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            v35 = 0LL;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        else
        {
          v35 = 0LL;
        }
        _InterlockedDecrement(v25 + 4);
        ExReleasePushLockSharedEx(v25, 0LL);
        KeLeaveCriticalRegion();
        if ( !v35 )
        {
          v78 = v118;
          WdLogSingleEntry3(2LL, v34, v118[v99], v99);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%p failed to wait with invalid hSyncObject 0x%x at index %d",
            (__int64)v34,
            v78[v99],
            v99,
            0LL,
            0LL);
          if ( v104 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
          if ( v105 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
          if ( P != v110 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v111 = 0;
          goto LABEL_140;
        }
        if ( v112 )
          *v122 = (struct DXGDEVICESYNCOBJECT *)v35;
        v98 = 1;
        if ( v101 )
        {
          WdLogSingleEntry1(2LL, v34);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%p mixes monitored fence and non-monitored fence sync objects in one wait call.",
            (__int64)v34,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v104 )
LABEL_227:
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
LABEL_228:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
          if ( v105 )
LABEL_192:
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
LABEL_193:
          if ( P != v110 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v111 = 0;
          goto LABEL_140;
        }
        v36 = *(_QWORD *)(v35 + 16);
        v37 = v117;
        if ( v36 != *v117 )
        {
          WdLogSingleEntry2(2LL, *v117, v36);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"WaitForSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a differ"
                      "ent device 0x%p.",
            *v37,
            *(_QWORD *)(v35 + 16),
            0LL,
            0LL,
            0LL);
          if ( v104 )
            goto LABEL_227;
          goto LABEL_228;
        }
        if ( (*(_DWORD *)(v35 + 72) & 0x20) != 0 )
        {
          v77 = &v118[v99];
          WdLogSingleEntry1(2LL, *v77);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%x object is opened as signal only and thus cannot be waited on.",
            *v77,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v104 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
          if ( v105 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
          if ( P != v110 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v111 = 0;
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v113);
          if ( v119 != v120 && v119 )
            ExFreePoolWithTag(v119, 0);
          return 3221225506LL;
        }
        v30 = *(_QWORD *)(v35 + 32);
        if ( (unsigned int)(*(_DWORD *)(v30 + 200) - 5) > 1 )
        {
          WdLogSingleEntry1(1LL, 1301LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pSyncObject->GetSyncObjectType() == D3DDDI_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D"
                      "3DDDI_PERIODIC_MONITORED_FENCE",
            1301LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v14 = v107;
      }
      v38 = v122;
      *(struct DXGDEVICESYNCOBJECT **)((char *)v122 + v133) = (struct DXGDEVICESYNCOBJECT *)v30;
      ++v99;
      ++v26;
      v122 = v38 + 1;
      if ( v99 >= (unsigned int)v12 )
        break;
      v24 = v108;
    }
    v15 = v105;
    Src = (unsigned __int64 *)v130;
  }
  v39 = 0LL;
  v138 = 0LL;
  v40 = 0;
  v140 = 0;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)Pool2 + 200LL) - 5) > 1 )
    goto LABEL_67;
  if ( !a7 )
  {
    if ( a10 )
    {
      Src = &v123;
    }
    else if ( !Src )
    {
      v79 = v108;
      WdLogSingleEntry1(2LL, v108);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x encountered exception, MonitoredFenceValueArray may not be null for monitored fence types.",
        (__int64)v79,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v138 != v139 && v138 )
        ExFreePoolWithTag(v138, 0);
      v138 = 0LL;
      v140 = 0;
      if ( v104 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
      if ( v15 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
      if ( P != v110 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v111 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v113);
      v64 = v119;
      if ( v119 == v120 || !v119 )
        return 3221225485LL;
      goto LABEL_254;
    }
    goto LABEL_67;
  }
  if ( (unsigned int)v12 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v12 < 8 )
      goto LABEL_48;
    v39 = (_BYTE *)ExAllocatePool2(64LL, 8 * v12, 1265072196LL);
    v138 = v39;
  }
  else
  {
    v39 = v139;
    v138 = v139;
    if ( (_DWORD)v12 )
    {
      memset(v139, 0, 8 * v12);
      v39 = v138;
    }
  }
  v40 = v12;
  v140 = v12;
LABEL_48:
  if ( !v39 )
  {
    v138 = 0LL;
    v140 = 0;
    if ( v104 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
    if ( v15 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
    if ( P != v110 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v111 = 0;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v113);
    if ( v119 != v120 && v119 )
      ExFreePoolWithTag(v119, 0);
    v119 = 0LL;
    v121 = 0;
    return 3221225495LL;
  }
  v41 = v40;
  v136 = v41 * 8;
  v137 = v39;
  if ( &Src[v41] < Src || (unsigned __int64)&Src[v41] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v39, Src, v41 * 8);
  v39 = v138;
  Src = (unsigned __int64 *)v138;
  v130 = (const unsigned __int64 *)v138;
LABEL_67:
  if ( v102 )
  {
    v80 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL) + 4472LL),
            v108,
            v14,
            v118,
            (struct DXGSYNCOBJECT **)Pool2,
            v112,
            Src,
            v123,
            v12,
            0LL);
    if ( v138 != v139 && v138 )
      ExFreePoolWithTag(v138, 0);
    v138 = 0LL;
    v140 = 0;
    if ( v104 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
    if ( v15 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
    if ( P != v110 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v111 = 0;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v113);
    if ( v119 != v120 && v119 )
      ExFreePoolWithTag(v119, 0);
    return v80;
  }
  v100 = 0;
  if ( !(_DWORD)v12 )
  {
LABEL_84:
    if ( v39 != v139 && v39 )
      ExFreePoolWithTag(v39, 0);
    v138 = 0LL;
    v140 = 0;
    if ( v104 )
    {
      v104 = 0;
      ExReleaseResourceLite(*(PERESOURCE *)(v103 + 600));
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
    if ( v16 && v116 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v15 && v106 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v15 + 136));
      KeLeaveCriticalRegion();
    }
    if ( P != v110 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v111 = 0;
    if ( v113 && !v114 )
      DXGCONTEXT::ReleaseReference(v113);
    if ( v119 != v120 )
    {
      if ( v119 )
        ExFreePoolWithTag(v119, 0);
    }
    return 0LL;
  }
  v43 = Src;
  v44 = Pool2 - (_BYTE *)Src;
  while ( 1 )
  {
    v45 = *(unsigned __int64 *)((char *)v43 + v44);
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v128, (struct DXGSYNCOBJECT *)v45);
    if ( v129 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v128, 0LL, 0LL);
    DXGFASTMUTEX::Acquire(v128);
    v129 = 1;
    v46 = *(_DWORD *)(v45 + 200);
    if ( (unsigned int)(v46 - 5) > 1 )
      v47 = v46 == 3 ? v123 : 0LL;
    else
      v47 = *v43;
    v117 = (__int64 *)v47;
    v48 = (*(_DWORD *)(v45 + 204) & 4) != 0
        ? (struct DXGDEVICESYNCOBJECT **)*((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                                                       (DXGSYNCOBJECTCA *)v45,
                                                       *(struct ADAPTER_RENDER **)(*((_QWORD *)v14 + 2) + 16LL))
                                         + 4)
        : *(struct DXGDEVICESYNCOBJECT ***)(v45 + 328);
    v112 = v48;
    if ( (*((_DWORD *)v14 + 101) & 0x10) == 0 )
      break;
    if ( !a10 )
    {
      DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v14 + 51, &v135);
      v84 = (struct DXGDEVICESYNCOBJECT **)*((_QWORD *)&v135 + 1);
      while ( 1 )
      {
        v122 = v84;
        if ( v84 == (struct DXGDEVICESYNCOBJECT **)v135 || !v84 )
        {
          v135 = 0LL;
          goto LABEL_82;
        }
        v127 = v84[5];
        v85 = (*(__int64 (__fastcall **)(struct DXGPROCESS *, struct DXGDEVICESYNCOBJECT **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 736LL) + 8LL)
                                                                                            + 632LL))(
                v127,
                v83);
        LODWORD(v107) = v85;
        if ( v85 < 0 )
          break;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          LODWORD(Timeout) = 1;
          McTemplateK0pqPR1XR1_EtwWriteTransfer(
            (__int64)&Src[v100],
            &EventWaitForSynchronizationObjectFromGpu,
            v86,
            v127,
            Timeout,
            &v112,
            &Src[v100]);
        }
        v84 = (struct DXGDEVICESYNCOBJECT **)*v122;
        v83 = v112;
      }
      v91 = v85;
      v92 = v118;
      v93 = v108;
      WdLogSingleEntry4(2LL, v108, v118[v100], v100, v85);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v93,
        v92[v100],
        v100,
        v91,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v128);
      if ( v138 != v139 && v138 )
        ExFreePoolWithTag(v138, 0);
      v138 = 0LL;
      v140 = 0;
      if ( v104 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
      if ( v15 )
        goto LABEL_305;
      goto LABEL_306;
    }
    v127 = (struct DXGPROCESS *)*((_QWORD *)v14 + 36);
    v81 = (*(__int64 (__fastcall **)(struct DXGPROCESS *, struct DXGDEVICESYNCOBJECT **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 736LL) + 8LL)
                                                                                        + 632LL))(
            v127,
            v48);
    LODWORD(v107) = v81;
    if ( v81 < 0 )
    {
      v87 = v81;
      v88 = v118;
      v89 = v108;
      WdLogSingleEntry4(2LL, v108, v118[v100], v100, v81);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v89,
        v88[v100],
        v100,
        v87,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v128);
      if ( v138 != v139 && v138 )
        ExFreePoolWithTag(v138, 0);
      v138 = 0LL;
      v140 = 0;
      if ( v104 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
      if ( v15 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
      v90 = P;
      if ( P != v110 && P )
        goto LABEL_294;
      goto LABEL_295;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(Timeout) = 1;
      McTemplateK0pqPR1XR1_EtwWriteTransfer(
        (__int64)&Src[v100],
        &EventWaitForSynchronizationObjectFromGpu,
        v82,
        v127,
        Timeout,
        &v112,
        &Src[v100]);
    }
LABEL_82:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v128);
    ++v100;
    ++v43;
    if ( v100 >= (unsigned int)v12 )
    {
      v39 = v138;
      v16 = v134;
      goto LABEL_84;
    }
  }
  v49 = (*(__int64 (__fastcall **)(_QWORD, struct DXGDEVICESYNCOBJECT **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL)
                                                                                                 + 736LL)
                                                                                     + 8LL)
                                                                         + 624LL))(
          *((_QWORD *)v14 + 32),
          v48);
  LODWORD(v107) = v49;
  if ( v49 >= 0 )
  {
    if ( v98 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(Timeout) = 1;
        McTemplateK0pqPR1XR1_EtwWriteTransfer(
          (__int64)&Src[v100],
          &EventWaitForSynchronizationObjectFromGpu,
          v52,
          v14,
          Timeout,
          &v112,
          &Src[v100]);
      }
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0pqPR1x_EtwWriteTransfer(v51, v50, v52, v14);
    }
    goto LABEL_82;
  }
  v94 = v49;
  v95 = v118;
  v96 = v108;
  WdLogSingleEntry4(2LL, v108, v118[v100], v100, v49);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)v96,
    v95[v100],
    v100,
    v94,
    0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v128);
  if ( v138 != v139 && v138 )
    ExFreePoolWithTag(v138, 0);
  v138 = 0LL;
  v140 = 0;
  if ( v104 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v103);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v124);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v115);
  if ( v15 )
LABEL_305:
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
LABEL_306:
  v90 = P;
  if ( P != v110 && P )
LABEL_294:
    ExFreePoolWithTag(v90, 0);
LABEL_295:
  P = 0LL;
  v111 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v113);
  if ( v119 != v120 && v119 )
    ExFreePoolWithTag(v119, 0);
  return (unsigned int)v107;
}
