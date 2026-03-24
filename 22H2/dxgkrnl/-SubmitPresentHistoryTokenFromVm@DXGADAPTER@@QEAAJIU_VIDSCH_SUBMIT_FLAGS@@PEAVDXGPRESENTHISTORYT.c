/*
 * XREFs of ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C023B6F4
 * Callers:
 *     ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250780 (-VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250B60 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00052C4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017974 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001AA94 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001DF24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x1C0040B60 (--1CAutoRefCountedBuffer@@QEAA@XZ.c)
 *     ?AllocatePresentParams@DXGGLOBAL@@QEAAPEAUDXGK_PRESENT_PARAMS@@XZ @ 0x1C0040C50 (-AllocatePresentParams@DXGGLOBAL@@QEAAPEAUDXGK_PRESENT_PARAMS@@XZ.c)
 *     _DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_42_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1C00D7C78 (_DXGADAPTER--SubmitPresentHistoryTokenFromVm_--_42_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0110B50 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01252E8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C0156C64 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C022F7E0 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C02804E4 (-GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C0282C44 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ @ 0x1C0284324 (-GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C029F4B4 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        unsigned int a8,
        int a9,
        volatile signed __int32 *ListEntry,
        unsigned int a11)
{
  unsigned int v11; // r13d
  char v13; // bl
  __int64 v15; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD **v21; // r15
  __int64 v22; // rax
  struct _KTHREAD *v23; // r9
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  __int64 v31; // r9
  __int64 v32; // rdi
  ADAPTER_RENDER *v33; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v34; // rsi
  __int64 v35; // rdx
  unsigned int v36; // eax
  unsigned int SizeOfPresentToken; // eax
  __int64 v38; // rcx
  size_t v39; // rbx
  struct DXGGLOBAL *Global; // rax
  void **v41; // r13
  __int64 v42; // r9
  union _SLIST_HEADER *PresentHistoryTokenQueue; // r13
  __int64 v44; // rdx
  void *Alignment; // rcx
  struct _EX_RUNDOWN_REF *PresentHistoryTokenSlot; // r15
  char *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  DXGGLOBAL *v50; // rax
  struct DXGK_PRESENT_PARAMS *PresentParams; // rax
  struct DXGK_PRESENT_PARAMS *v52; // rbx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  DXGCONTEXT *v59; // rcx
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  PERESOURCE *v64; // rax
  __int64 v65; // rdx
  struct _KTHREAD *v66; // rdx
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v72; // r9
  char v73; // [rsp+30h] [rbp-D0h]
  DXGCONTEXT *v74; // [rsp+38h] [rbp-C8h] BYREF
  struct _SLIST_ENTRY *v75; // [rsp+40h] [rbp-C0h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v76[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v77; // [rsp+58h] [rbp-A8h]
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v79[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v80[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v81; // [rsp+80h] [rbp-80h]
  char v82; // [rsp+88h] [rbp-78h]
  void *Src; // [rsp+90h] [rbp-70h]
  struct _KTHREAD **v84; // [rsp+98h] [rbp-68h]
  ADAPTER_RENDER *v85; // [rsp+A0h] [rbp-60h]
  struct _SLIST_ENTRY *v86; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v87[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v88; // [rsp+B8h] [rbp-48h]
  _BYTE v89[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v90; // [rsp+D0h] [rbp-30h]
  union _LARGE_INTEGER Timeout; // [rsp+D8h] [rbp-28h] BYREF
  DXGPUSHLOCK *v92[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v93; // [rsp+F0h] [rbp-10h]
  _BYTE v94[24]; // [rsp+F8h] [rbp-8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+10h] BYREF
  char v96; // [rsp+140h] [rbp+40h]
  _BYTE v97[160]; // [rsp+150h] [rbp+50h] BYREF

  v11 = a8;
  v13 = a3;
  Src = a6;
  v90 = a4;
  v15 = 0LL;
  v73 = 0;
  v74 = 0LL;
  Current = DXGPROCESS::GetCurrent(a1, (__int64)a6, a3, a4);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79, a2, Current, &v74, 0);
  v84 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v18, v17, v19, v20);
  v21 = v84;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v94, v84);
  v22 = (a8 >> 6) & 0xFFFFFF;
  v77 = v22;
  if ( (unsigned int)v22 < *((_DWORD *)v21 + 64) )
  {
    v23 = v21[30];
    v24 = *((_DWORD *)v23 + 4 * v22 + 2);
    if ( ((a8 >> 25) & 0x60) == (*((_BYTE *)v23 + 16 * v22 + 8) & 0x60) && (v24 & 0x2000) == 0 && (v24 & 0x1F) != 0 )
    {
      v25 = v24 & 0x1F;
      if ( (_BYTE)v25 == 11 )
      {
        v27 = *((_QWORD *)v23 + 2 * (unsigned int)v22);
        if ( v27 )
          v15 = *(_QWORD *)(v27 + 16);
      }
      else
      {
        v26 = WdLogNewEntry5_WdError((a8 >> 25) & 0x60, v25);
        *(_QWORD *)(v26 + 24) = 316LL;
        WdLogEvent5_WdError(v26);
      }
    }
  }
  if ( v74 || v15 )
  {
    if ( !v15 )
      v15 = *((_QWORD *)v74 + 2);
    _m_prefetchw((const void *)(v15 + 64));
    v28 = *(_QWORD *)(v15 + 64);
    do
    {
      if ( !v28 )
        goto LABEL_16;
      v29 = v28;
      v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 64), v28 + 1, v28);
    }
    while ( v29 != v28 );
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v94);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v89,
      (struct DXGDEVICE *)v15);
    v81 = a1;
    v82 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
    if ( *(_DWORD *)(a1 + 200) != 1 )
    {
      LODWORD(v32) = -1073741130;
LABEL_19:
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v89);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79);
LABEL_68:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
      return (unsigned int)v32;
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v97, v15, 2, v31, 0);
    LODWORD(v32) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v97, 0LL);
    if ( (int)v32 < 0 )
      goto LABEL_65;
    v33 = *(ADAPTER_RENDER **)(a1 + 2704);
    v75 = 0LL;
    v76[0] = 0LL;
    v85 = v33;
    v76[1] = v33;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v76);
    v34 = v76[0];
    if ( !v76[0] )
    {
LABEL_22:
      LODWORD(v32) = -1073741801;
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v76);
      CAutoRefCountedBuffer::~CAutoRefCountedBuffer(&v75);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
      goto LABEL_19;
    }
    *((_DWORD *)v76[0] + 1) |= 8u;
    v35 = v90;
    v36 = v13 & 0x20 | *(_DWORD *)v34 & 0xFFFFFFDF;
    *((_DWORD *)v34 + 29) = -1;
    *(_DWORD *)v34 = v36 | 0x40000;
    *((_QWORD *)v34 + 68) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 112) + 104LL) + 128LL);
    *((_QWORD *)v34 + 71) = a7;
    *((_QWORD *)v34 + 69) = v35;
    *((_QWORD *)v34 + 70) = a5;
    *((_QWORD *)v34 + 12) = v35;
    *((_QWORD *)v34 + 13) = a5;
    if ( a11 != -1 )
    {
      if ( v21 )
      {
        if ( a9 )
        {
          if ( Src )
          {
            SizeOfPresentToken = GetSizeOfPresentToken((const struct _D3DKMT_PRESENTHISTORYTOKEN *)Src);
            v39 = SizeOfPresentToken;
            if ( SizeOfPresentToken )
            {
              Object = 0LL;
              Global = DXGGLOBAL::GetGlobal(v38, v35);
              LODWORD(v32) = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
                               *((DXGSESSIONMGR **)Global + 102),
                               a11,
                               (struct _KPROCESS **)&Object);
              if ( (int)v32 < 0 )
                goto LABEL_64;
              v96 = 0;
              CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
              v41 = (void **)v85;
              DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v92, (struct _KTHREAD **)v85 + 105, 0);
              DXGPUSHLOCK::AcquireShared(v92[1]);
              v93 = 1;
              PresentHistoryTokenQueue = (union _SLIST_HEADER *)ADAPTER_RENDER::GetPresentHistoryTokenQueue(
                                                                  v41,
                                                                  v92,
                                                                  0LL,
                                                                  v42);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v92);
              ObfDereferenceObject(Object);
              if ( v96 )
              {
                KeUnstackDetachProcess(&ApcState);
                v96 = 0;
              }
              if ( PresentHistoryTokenQueue )
              {
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)v97, v44);
                Alignment = (void *)PresentHistoryTokenQueue[4].Alignment;
                Timeout.QuadPart = -20000000LL;
                KeWaitForSingleObject(Alignment, Executive, 0, 1u, &Timeout);
                PresentHistoryTokenSlot = (struct _EX_RUNDOWN_REF *)DXGPRESENTHISTORYTOKENQUEUE::GetPresentHistoryTokenSlot((DXGPRESENTHISTORYTOKENQUEUE *)PresentHistoryTokenQueue);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v97, v47);
                if ( PresentHistoryTokenSlot )
                {
                  memmove(PresentHistoryTokenSlot, Src, v39);
                  *((_DWORD *)v34 + 1) |= 0x10u;
                  *((_QWORD *)v34 + 12) = PresentHistoryTokenQueue;
                  *((_QWORD *)v34 + 13) = PresentHistoryTokenSlot;
                  v50 = DXGGLOBAL::GetGlobal(v49, v48);
                  PresentParams = DXGGLOBAL::AllocatePresentParams(v50);
                  v52 = PresentParams;
                  if ( !PresentParams )
                    goto LABEL_22;
                  memset(PresentParams, 0, 0x5F8uLL);
                  *((_DWORD *)v52 + 5) = a9;
                  *((_BYTE *)v52 + 1512) = 1;
                  *((_QWORD *)v52 + 187) = &v74;
                  v86 = (struct _SLIST_ENTRY *)v52;
                  v53 = PrepareIndependentFlipToken(
                          PresentHistoryTokenSlot,
                          (struct _EX_RUNDOWN_REF *)v52,
                          (struct _EX_RUNDOWN_REF *)v34,
                          (struct _EX_RUNDOWN_REF *)v74,
                          0LL,
                          (struct CRefCountedBuffer *)ListEntry);
                  v32 = v53;
                  if ( v53 < 0 )
                  {
                    v57 = WdLogNewEntry5_WdWarning(v55, v54, v56);
                    *(_QWORD *)(v57 + 24) = v32;
                    WdLogEvent5_WdWarning(v57);
                    ExpInterlockedPushEntrySList(
                      PresentHistoryTokenQueue + 3,
                      (PSLIST_ENTRY)&PresentHistoryTokenSlot[-2]);
                    v58 = *((_QWORD *)v34 + 69);
                    *((_DWORD *)v34 + 1) &= ~0x10u;
                    *((_QWORD *)v34 + 12) = v58;
                    *((_QWORD *)v34 + 13) = *((_QWORD *)v34 + 70);
                  }
                  else
                  {
                    *((_DWORD *)v34 + 1) |= 0x20u;
                    if ( ListEntry )
                    {
                      _InterlockedIncrement(ListEntry + 3);
                      v34 = v76[0];
                      v73 = 1;
                    }
                    *((_QWORD *)v34 + 97) = ListEntry;
                  }
                  v75 = (struct _SLIST_ENTRY *)*((_QWORD *)v34 + 4);
                  DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_42_::ENSURE_DELETE::_ENSURE_DELETE(&v86, v54);
                }
                v21 = v84;
              }
              v11 = a8;
            }
          }
        }
      }
    }
    if ( (int)v32 >= 0 )
    {
      v59 = v74;
      if ( v74 )
      {
        if ( (*((_DWORD *)v74 + 105) & 0x10) != 0 )
        {
          v60 = DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v74, 0LL, 0, 1, 0LL, 1);
          v32 = v60;
          if ( v60 < 0 )
          {
            v63 = WdLogNewEntry5_WdError(v62, v61);
            *(_QWORD *)(v63 + 24) = v74;
            *(_QWORD *)(v63 + 32) = v32;
            WdLogEvent5_WdError(v63);
            goto LABEL_64;
          }
          v59 = v74;
        }
        LODWORD(v32) = DXGCONTEXT::SubmitCommandToImplicitQueue(v59, v34);
        goto LABEL_64;
      }
      v64 = (PERESOURCE *)DXGGLOBAL::GetGlobal(0LL, v35);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v87, v64, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v87, v65);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v21 + 26));
      if ( v77 < *((_DWORD *)v21 + 64) )
      {
        v66 = v21[30];
        v67 = *((_DWORD *)v66 + 4 * v77 + 2);
        if ( ((v11 >> 25) & 0x60) == (*((_BYTE *)v66 + 16 * v77 + 8) & 0x60) && (v67 & 0x2000) == 0 && (v67 & 0x1F) != 0 )
        {
          v68 = v67 & 0x1F;
          if ( (_BYTE)v68 == 11 )
          {
            v70 = *((_QWORD *)v66 + 2 * v77);
LABEL_56:
            ExReleasePushLockSharedEx(v21 + 26, 0LL);
            KeLeaveCriticalRegion();
            if ( v70 && *(_QWORD *)(v70 + 16) != v15 )
            {
              LODWORD(v32) = -1073741811;
              if ( v88 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v87);
              CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v76);
              CAutoRefCountedBuffer::~CAutoRefCountedBuffer(&v75);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v89);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79);
              goto LABEL_66;
            }
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                 *(DXGSYNCOBJECT **)(v70 + 32),
                                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(v70 + 16) + 16LL));
            LODWORD(v32) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*((_QWORD *)v85 + 77) + 8LL) + 1008LL))(
                             v34,
                             *(_QWORD *)(v72 + 768),
                             VidSchSyncObject);
            if ( v88 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v87);
            goto LABEL_64;
          }
          v69 = WdLogNewEntry5_WdError(v68, v66);
          *(_QWORD *)(v69 + 24) = 316LL;
          WdLogEvent5_WdError(v69);
        }
      }
      v70 = 0LL;
      goto LABEL_56;
    }
LABEL_64:
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v76);
    CAutoRefCountedBuffer::~CAutoRefCountedBuffer(&v75);
LABEL_65:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v89);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79);
    if ( (int)v32 >= 0 )
      goto LABEL_68;
LABEL_66:
    if ( v73 )
      CRefCountedBuffer::RefCountedBufferRelease((PSLIST_ENTRY)ListEntry);
    goto LABEL_68;
  }
LABEL_16:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v94);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79);
  return 3221225485LL;
}
