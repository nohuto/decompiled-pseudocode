/*
 * XREFs of ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0371F08
 * Callers:
 *     ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038F990 (-VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038FEB0 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00012E4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C000148C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C00037CC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0003AE4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006AAC (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C80 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x1C0029C48 (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer @ 0x1C0029D20 (McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0046DC4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0186BD8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C01CA148 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C01DFBDC (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C022405E (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C02E049C (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C033997C (-GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ @ 0x1C033E5C0 (-GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C0350AEC (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a6,
        __int64 a7,
        unsigned int a8,
        int a9,
        void *a10,
        unsigned int a11)
{
  struct DXGPROCESS *Current; // rax
  __int64 v16; // rcx
  struct DXGPROCESS *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // r15
  int v20; // edx
  __int64 v21; // r15
  __int64 v22; // r15
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v26; // r9
  __int64 v27; // rsi
  void *v28; // rdi
  __int64 v29; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v30; // r14
  unsigned int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // r13d
  unsigned int SizeOfPresentToken; // eax
  size_t v36; // rbx
  struct DXGGLOBAL *Global; // rax
  ADAPTER_RENDER *v38; // rsi
  union _SLIST_HEADER *PresentHistoryTokenQueue; // r13
  void *Alignment; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *PresentHistoryTokenSlot; // r12
  char *v42; // rdx
  struct DXGGLOBAL *v43; // rax
  _DWORD *v44; // rax
  _DWORD *v45; // rbx
  bool v46; // zf
  volatile signed __int32 *v47; // rdi
  int v48; // eax
  __int64 v49; // rax
  struct DXGGLOBAL *v50; // rax
  void *v51; // r10
  __int64 v52; // r8
  __int64 v53; // rax
  int v54; // esi
  int v55; // edx
  __int64 v56; // r9
  int v57; // r12d
  int v58; // ebx
  int v59; // r9d
  __int64 v60; // rdx
  int v61; // r9d
  int v62; // r9d
  int v63; // r9d
  int v64; // r9d
  int v65; // r9d
  int v66; // r9d
  unsigned int *v67; // r10
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  unsigned int v70; // r11d
  __int128 v71; // xmm0
  int *v72; // r10
  __int64 v73; // r12
  int v74; // ecx
  DXGCONTEXT *v75; // rcx
  int v76; // eax
  struct DXGGLOBAL *v77; // rax
  struct DXGPROCESS *v78; // r14
  volatile signed __int32 *v79; // rsi
  __int64 v80; // rdx
  int v81; // ecx
  __int64 v82; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v84; // r9
  struct CRefCountedBuffer *v85; // [rsp+28h] [rbp-440h]
  __int64 v86; // [rsp+30h] [rbp-438h]
  __int64 v87; // [rsp+40h] [rbp-428h]
  char v88; // [rsp+100h] [rbp-368h]
  char v89; // [rsp+104h] [rbp-364h]
  char v90; // [rsp+108h] [rbp-360h]
  DXGCONTEXT *v91[3]; // [rsp+110h] [rbp-358h] BYREF
  char v92[8]; // [rsp+128h] [rbp-340h] BYREF
  __int64 v93; // [rsp+130h] [rbp-338h]
  char v94; // [rsp+138h] [rbp-330h]
  int v95; // [rsp+140h] [rbp-328h]
  void *Src; // [rsp+148h] [rbp-320h]
  struct VIDSCH_SUBMIT_DATA_BASE *v97[2]; // [rsp+150h] [rbp-318h] BYREF
  __int64 v98; // [rsp+160h] [rbp-308h] BYREF
  char v99; // [rsp+168h] [rbp-300h]
  _BYTE v100[16]; // [rsp+170h] [rbp-2F8h] BYREF
  unsigned int v101; // [rsp+180h] [rbp-2E8h]
  unsigned int v102; // [rsp+184h] [rbp-2E4h]
  PVOID Object; // [rsp+188h] [rbp-2E0h] BYREF
  __int64 v104; // [rsp+190h] [rbp-2D8h]
  _BYTE v105[16]; // [rsp+198h] [rbp-2D0h] BYREF
  char v106[8]; // [rsp+1A8h] [rbp-2C0h] BYREF
  char *v107; // [rsp+1B0h] [rbp-2B8h]
  int v108; // [rsp+1B8h] [rbp-2B0h]
  __int128 v109; // [rsp+1C0h] [rbp-2A8h]
  PVOID Entry; // [rsp+1D0h] [rbp-298h]
  union _LARGE_INTEGER Timeout; // [rsp+1D8h] [rbp-290h] BYREF
  __int128 v112; // [rsp+1E0h] [rbp-288h]
  __int128 v113; // [rsp+1F0h] [rbp-278h]
  struct DXGPROCESS *v114; // [rsp+200h] [rbp-268h]
  ADAPTER_RENDER *v115; // [rsp+208h] [rbp-260h]
  DXGPUSHLOCK *v116[2]; // [rsp+210h] [rbp-258h] BYREF
  int v117; // [rsp+220h] [rbp-248h]
  _BYTE v118[24]; // [rsp+228h] [rbp-240h] BYREF
  char v119[8]; // [rsp+240h] [rbp-228h] BYREF
  _BYTE v120[64]; // [rsp+248h] [rbp-220h] BYREF
  _BYTE v121[88]; // [rsp+288h] [rbp-1E0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2E0h] [rbp-188h] BYREF
  char v123; // [rsp+310h] [rbp-158h]
  _BYTE v125[64]; // [rsp+320h] [rbp-148h] BYREF
  _BYTE v126[64]; // [rsp+360h] [rbp-108h] BYREF
  char v127[64]; // [rsp+3A0h] [rbp-C8h] BYREF
  _DWORD v128[16]; // [rsp+3E0h] [rbp-88h] BYREF

  Src = a6;
  Entry = a10;
  v88 = 0;
  v91[0] = 0LL;
  v98 = a1;
  v102 = a8;
  Current = DXGPROCESS::GetCurrent(a1);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v100, a2, Current, v91, 0, 1);
  v114 = DXGPROCESS::GetCurrent(v16);
  v17 = v114;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v118, v114);
  v18 = (a8 >> 6) & 0xFFFFFF;
  v101 = v18;
  if ( v18 < *((_DWORD *)v17 + 74) )
  {
    v19 = *((_QWORD *)v17 + 35);
    if ( ((a8 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x60)
      && (*(_DWORD *)(v19 + 16LL * v18 + 8) & 0x2000) == 0 )
    {
      v20 = *(_DWORD *)(v19 + 16LL * v18 + 8) & 0x1F;
      if ( v20 )
      {
        if ( v20 == 11 )
        {
          v21 = *(_QWORD *)(v19 + 16LL * v18);
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 16);
            if ( v22 )
              goto LABEL_11;
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
  if ( v91[0] )
  {
    v22 = *((_QWORD *)v91[0] + 2);
LABEL_11:
    _m_prefetchw((const void *)(v22 + 64));
    v23 = *(_QWORD *)(v22 + 64);
    do
    {
      if ( !v23 )
        goto LABEL_14;
      v24 = v23;
      v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 64), v23 + 1, v23);
    }
    while ( v24 != v23 );
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v118);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v105,
      (struct DXGDEVICE *)v22);
    v107 = 0LL;
    v108 = 0;
    if ( v91[0] )
    {
      v107 = (char *)v91[0] + 448;
      DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)v91[0] + 448));
      v108 = 2;
    }
    v93 = a1;
    v94 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
    if ( *(_DWORD *)(a1 + 200) != 1 )
    {
      v46 = v94 == 0;
      LODWORD(v27) = -1073741130;
      goto LABEL_124;
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v119, v22, 2, v26, 0);
    LODWORD(v27) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v119, 0LL);
    if ( (int)v27 < 0 )
      goto LABEL_118;
    v28 = 0LL;
    v115 = *(ADAPTER_RENDER **)(a1 + 2928);
    v97[0] = 0LL;
    v97[1] = v115;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v97);
    v30 = v97[0];
    if ( !v97[0] )
    {
LABEL_31:
      LODWORD(v27) = -1073741801;
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v97);
      COREACCESS::~COREACCESS((COREACCESS *)v121);
      COREACCESS::~COREACCESS((COREACCESS *)v120);
      v46 = v94 == 0;
LABEL_124:
      if ( !v46 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v106);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v105);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v100);
LABEL_127:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v22 + 16), (struct DXGDEVICE *)v22);
      return (unsigned int)v27;
    }
    *((_DWORD *)v97[0] + 1) |= 8u;
    v31 = *(_DWORD *)v30 & 0xFFFFFFDF;
    *((_DWORD *)v30 + 29) = -1;
    *(_DWORD *)v30 = a3 & 0x20 | v31 | 0x40000;
    *((_QWORD *)v30 + 70) = *(_QWORD *)(*(_QWORD *)(v22 + 112) + 104LL) + 160LL;
    v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 112) + 104LL) + 392LL);
    v33 = a5;
    *((_QWORD *)v30 + 72) = a4;
    *((_QWORD *)v30 + 12) = a4;
    v34 = 0;
    *((_DWORD *)v30 + 142) = v32;
    *((_QWORD *)v30 + 73) = a5;
    *((_QWORD *)v30 + 74) = a7;
    *((_QWORD *)v30 + 13) = a5;
    if ( a11 != -1 )
    {
      if ( v114 )
      {
        if ( a9 )
        {
          if ( a6 )
          {
            SizeOfPresentToken = GetSizeOfPresentToken(a6);
            v36 = SizeOfPresentToken;
            if ( SizeOfPresentToken )
            {
              Object = 0LL;
              Global = DXGGLOBAL::GetGlobal();
              LODWORD(v27) = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
                               *((DXGSESSIONMGR **)Global + 118),
                               a11,
                               (struct _KPROCESS **)&Object);
              if ( (int)v27 < 0 )
                goto LABEL_116;
              v123 = 0;
              CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
              v38 = v115;
              DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v116, (struct _KTHREAD **)v115 + 122, 0);
              DXGPUSHLOCK::AcquireShared(v116[1]);
              v117 = 1;
              PresentHistoryTokenQueue = (union _SLIST_HEADER *)ADAPTER_RENDER::GetPresentHistoryTokenQueue(
                                                                  v38,
                                                                  v116,
                                                                  0);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v116);
              ObfDereferenceObject(Object);
              if ( v123 )
              {
                KeUnstackDetachProcess(&ApcState);
                v123 = 0;
              }
              if ( !PresentHistoryTokenQueue )
                goto LABEL_39;
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
              COREDEVICEACCESS::Release((COREDEVICEACCESS *)v119);
              Alignment = (void *)PresentHistoryTokenQueue[4].Alignment;
              Timeout.QuadPart = -20000000LL;
              KeWaitForSingleObject(Alignment, Executive, 0, 1u, &Timeout);
              PresentHistoryTokenSlot = (struct _D3DKMT_PRESENTHISTORYTOKEN *)DXGPRESENTHISTORYTOKENQUEUE::GetPresentHistoryTokenSlot(PresentHistoryTokenQueue);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v119, v42);
              if ( PresentHistoryTokenSlot )
              {
                memmove(PresentHistoryTokenSlot, Src, v36);
                *((_DWORD *)v30 + 1) |= 0x10u;
                *((_QWORD *)v30 + 12) = PresentHistoryTokenQueue;
                *((_QWORD *)v30 + 13) = PresentHistoryTokenSlot;
                v43 = DXGGLOBAL::GetGlobal();
                v44 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v43 + 1136));
                v45 = v44;
                if ( !v44 )
                  goto LABEL_31;
                memset(v44, 0, 0x5F8uLL);
                v47 = (volatile signed __int32 *)Entry;
                v45[5] = a9;
                *((_BYTE *)v45 + 1512) = 1;
                *((_QWORD *)v45 + 187) = v91;
                v48 = PrepareIndependentFlipToken(
                        PresentHistoryTokenSlot,
                        (struct DXGK_PRESENT_PARAMS *)v45,
                        v30,
                        v91[0],
                        0LL,
                        (struct CRefCountedBuffer *)v47);
                LODWORD(v27) = v48;
                if ( v48 < 0 )
                {
                  WdLogSingleEntry1(3LL, v48);
                  ExpInterlockedPushEntrySList(
                    PresentHistoryTokenQueue + 3,
                    (PSLIST_ENTRY)(&PresentHistoryTokenSlot[-1].Token.SurfaceComplete + 131));
                  v49 = *((_QWORD *)v30 + 72);
                  *((_DWORD *)v30 + 1) &= ~0x10u;
                  *((_QWORD *)v30 + 12) = v49;
                  v34 = 0;
                  *((_QWORD *)v30 + 13) = *((_QWORD *)v30 + 73);
                }
                else
                {
                  *((_DWORD *)v30 + 1) |= 0x20u;
                  v34 = 0;
                  if ( v47 )
                  {
                    _InterlockedIncrement(v47 + 3);
                    v30 = v97[0];
                    v88 = 1;
                  }
                  *((_QWORD *)v30 + 100) = v47;
                }
                v28 = (void *)*((_QWORD *)v30 + 4);
                v50 = DXGGLOBAL::GetGlobal();
                ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v50 + 1136), v45);
                if ( (int)v27 < 0 )
                  goto LABEL_116;
              }
              else
              {
LABEL_39:
                v34 = 0;
              }
            }
          }
        }
      }
    }
    if ( !bTracingEnabled )
    {
LABEL_91:
      v75 = v91[0];
      if ( v91[0] )
      {
        if ( (*((_DWORD *)v91[0] + 101) & 0x10) != 0 )
        {
          v76 = DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v91[0], 0LL, 0, 1, 0LL, 1);
          v27 = v76;
          if ( v76 < 0 )
          {
            WdLogSingleEntry2(2LL, v91[0], v76);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DXGCONTEXT: 0x%I64x Failed to SynchronizeImplicitQueueWithRenderQueues, returning",
              (__int64)v91[0],
              v27,
              0LL,
              0LL,
              0LL);
            goto LABEL_116;
          }
          v75 = v91[0];
        }
        LODWORD(v27) = DXGCONTEXT::SubmitCommandToImplicitQueue(v75, v30);
LABEL_116:
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v97);
        if ( v28 )
          CRefCountedBuffer::RefCountedBufferRelease(v28);
LABEL_118:
        COREACCESS::~COREACCESS((COREACCESS *)v121);
        COREACCESS::~COREACCESS((COREACCESS *)v120);
        if ( v94 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v106);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v105);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v100);
        if ( (int)v27 >= 0 )
          goto LABEL_127;
        goto LABEL_121;
      }
      v77 = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v98, v77, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v98);
      v78 = v114;
      v79 = (volatile signed __int32 *)((char *)v114 + 248);
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v114 + 248));
      if ( v101 < *((_DWORD *)v78 + 74) )
      {
        v80 = *((_QWORD *)v78 + 35);
        if ( ((v102 >> 25) & 0x60) == (*(_BYTE *)(v80 + 16LL * v101 + 8) & 0x60)
          && (*(_DWORD *)(v80 + 16LL * v101 + 8) & 0x2000) == 0 )
        {
          v81 = *(_DWORD *)(v80 + 16LL * v101 + 8) & 0x1F;
          if ( v81 )
          {
            if ( v81 == 11 )
            {
              v82 = *(_QWORD *)(v80 + 16LL * v101);
LABEL_104:
              _InterlockedDecrement(v79 + 4);
              ExReleasePushLockSharedEx(v79, 0LL);
              KeLeaveCriticalRegion();
              if ( v82 && *(_QWORD *)(v82 + 16) != v22 )
              {
                LODWORD(v27) = -1073741811;
                if ( v99 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v98);
                CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v97);
                if ( v28 )
                  CRefCountedBuffer::RefCountedBufferRelease(v28);
                COREACCESS::~COREACCESS((COREACCESS *)v121);
                COREACCESS::~COREACCESS((COREACCESS *)v120);
                if ( v94 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v106);
                DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v105);
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v100);
LABEL_121:
                if ( v88 )
                  CRefCountedBuffer::RefCountedBufferRelease(Entry);
                goto LABEL_127;
              }
              VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                   *(DXGSYNCOBJECT **)(v82 + 32),
                                   *(struct ADAPTER_RENDER **)(*(_QWORD *)(v82 + 16) + 16LL));
              LODWORD(v27) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*((_QWORD *)v115 + 92) + 8LL) + 1008LL))(
                               v97[0],
                               *(_QWORD *)(v84 + 800),
                               VidSchSyncObject);
              if ( v99 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v98);
              goto LABEL_116;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v82 = 0LL;
      goto LABEL_104;
    }
    if ( (*((_DWORD *)v30 + 1) & 0x10) == 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        LODWORD(v87) = 0;
        LODWORD(v86) = 0;
        LODWORD(v85) = 2;
        McTemplateK0ppqqxdqp_EtwWriteTransfer(
          v33,
          &EventSubmitPresentHistory,
          v29,
          v98,
          *((_QWORD *)v30 + 13),
          v85,
          v86,
          0LL,
          v87,
          0,
          *((_QWORD *)v30 + 70));
      }
      goto LABEL_91;
    }
    v51 = (void *)*((_QWORD *)v30 + 70);
    v52 = *((_QWORD *)v30 + 13);
    Src = v51;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
      goto LABEL_91;
    v89 = 0;
    v90 = 0;
    LOBYTE(v53) = 0;
    v54 = 0;
    v104 = 0LL;
    v55 = 0;
    v56 = 0LL;
    LOBYTE(v57) = 0;
    v58 = 0;
    v109 = 0LL;
    v113 = 0LL;
    v112 = 0LL;
    if ( !v52 )
    {
LABEL_89:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        LODWORD(v87) = v58;
        LODWORD(v86) = v55;
        LODWORD(v85) = v54;
        McTemplateK0ppqqxdqp_EtwWriteTransfer(
          Microsoft_Windows_DxgKrnlEnableBits,
          &EventSubmitPresentHistory,
          v52,
          v98,
          v52,
          v85,
          v86,
          v56,
          v87,
          v34,
          v51);
      }
      goto LABEL_91;
    }
    v54 = *(_DWORD *)v52;
    v59 = *(_DWORD *)v52;
    v60 = *(unsigned int *)(v52 + 4);
    v95 = *(_DWORD *)(v52 + 4);
    v61 = v59 - 1;
    if ( v61 )
    {
      v62 = v61 - 1;
      if ( !v62 )
      {
        v56 = *(_QWORD *)(v52 + 24);
        goto LABEL_64;
      }
      v63 = v62 - 1;
      if ( !v63 )
      {
        v56 = *(_QWORD *)(v52 + 16);
        goto LABEL_62;
      }
      v64 = v63 - 1;
      if ( !v64 || (v65 = v64 - 1) == 0 || (v66 = v65 - 1) == 0 || (unsigned int)(v66 - 1) < 2 )
      {
        v56 = *(_QWORD *)(v52 + 16);
        goto LABEL_58;
      }
      v56 = 0LL;
      if ( v54 != 1 )
      {
        if ( v54 != 2 )
        {
          if ( v54 != 3 )
          {
LABEL_58:
            v67 = 0LL;
            if ( v54 != 1 )
            {
              if ( v54 != 2 )
                goto LABEL_66;
              goto LABEL_65;
            }
LABEL_80:
            v71 = *(_OWORD *)(v52 + 32);
            v53 = *(_QWORD *)(v52 + 48);
            v104 = v53;
            v109 = v71;
            goto LABEL_81;
          }
LABEL_62:
          v67 = (unsigned int *)(v52 + 40);
          goto LABEL_81;
        }
LABEL_64:
        v67 = (unsigned int *)(v52 + 820);
LABEL_65:
        v68 = *(_OWORD *)(v52 + 100);
        v53 = *(_QWORD *)(v52 + 116);
        v104 = v53;
        v109 = v68;
        v60 = *(unsigned int *)(v52 + 756);
        v69 = *(_OWORD *)(v52 + 764);
        v57 = *(_DWORD *)(v52 + 760);
        v113 = *(_OWORD *)(v52 + 740);
        v89 = v60;
        v112 = v69;
        v90 = v57;
LABEL_66:
        if ( v54 == 2 )
        {
          v58 = *(_DWORD *)(v52 + 60);
          goto LABEL_82;
        }
        v90 = v57;
        if ( v54 == 6 )
        {
          v58 = *(_DWORD *)(v52 + 24);
          goto LABEL_70;
        }
        if ( v54 == 9 )
        {
          v58 = *(_DWORD *)(v52 + 32);
LABEL_70:
          v90 = v57;
LABEL_71:
          v34 = 0;
LABEL_72:
          if ( v67 )
          {
            v70 = *v67;
            if ( *v67 >= 0x10 )
            {
              v70 = 16;
            }
            else if ( !v70 )
            {
              goto LABEL_86;
            }
            v72 = (int *)(v67 + 3);
            v73 = v70;
            v60 = 0LL;
            do
            {
              *(_DWORD *)((char *)v128 + v60) = *(v72 - 2);
              v60 += 4LL;
              v74 = *v72;
              v72 += 4;
              *(_DWORD *)&v126[v60 + 60] = v74;
              *(_DWORD *)&v125[v60 + 60] = *(v72 - 5);
              *(_DWORD *)&v125[v60 - 4] = *(v72 - 3);
              --v73;
            }
            while ( v73 );
LABEL_86:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
              McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer(
                HIDWORD(v104),
                v60,
                v52,
                v98,
                v52,
                v54,
                v95,
                v56,
                v58,
                v34,
                v109,
                SBYTE8(v109),
                SBYTE4(v109),
                SBYTE12(v109),
                v53,
                SBYTE4(v104),
                v70,
                (__int64)v128,
                (__int64)v127,
                (__int64)v126,
                (__int64)v125,
                v113,
                SBYTE8(v113),
                SBYTE4(v113),
                SBYTE12(v113),
                v89,
                v90,
                v112,
                SBYTE8(v112),
                SBYTE4(v112),
                SBYTE12(v112),
                (char)Src);
            goto LABEL_91;
          }
          v55 = v95;
          v51 = Src;
          goto LABEL_89;
        }
LABEL_81:
        v58 = 0;
        if ( v54 != 2 )
          goto LABEL_71;
LABEL_82:
        v34 = *(_DWORD *)(v52 + 804);
        goto LABEL_72;
      }
    }
    else
    {
      v56 = *(_QWORD *)(v52 + 16);
    }
    v67 = (unsigned int *)(v52 + 56);
    goto LABEL_80;
  }
LABEL_14:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v118);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v100);
  return 3221225485LL;
}
