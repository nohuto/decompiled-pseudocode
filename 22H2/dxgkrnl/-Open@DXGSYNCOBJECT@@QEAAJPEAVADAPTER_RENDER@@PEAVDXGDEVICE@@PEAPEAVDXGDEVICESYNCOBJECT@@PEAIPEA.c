/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C011AC00
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C011A458 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C012A160 (DxgkOpenResourceFromNtHandle.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C0156168 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0171360 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244D90 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C0279D70 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C029B528 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0003148 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C00031B4 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0116660 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C0122F7C (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C015C494 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C024AE28 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0291180 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0294EEC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Open(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        struct DXGDEVICESYNCOBJECT **a4,
        unsigned int *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int a8,
        struct DXGADAPTERSYNCOBJECT **a9,
        bool a10,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a11)
{
  struct DXGDEVICESYNCOBJECT **v11; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  struct DXGADAPTERSYNCOBJECT **v25; // rcx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v26; // ebx
  DXGFASTMUTEX *v27; // rsi
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int *v33; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // r14
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // r8d
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  _QWORD *v51; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // rcx
  int DxgAdapterSyncObject; // esi
  DXGDEVICESYNCOBJECT *PoolWithQuotaTag; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned int *v68; // r15
  DXGDEVICESYNCOBJECT *v69; // r14
  unsigned int v70; // r12d
  __int64 v71; // rdx
  __int64 v72; // rcx
  struct DXGSYNCOBJECT *v73; // rsi
  _QWORD *v74; // rbx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  int v92; // r9d
  __int64 v93; // rax
  struct DXGGLOBAL *v94; // rax
  int v95; // ebx
  struct DXGTHREAD *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  struct DXGGLOBAL *v99; // rax
  DXGFASTMUTEX *v100; // [rsp+40h] [rbp-30h] BYREF
  char v101; // [rsp+48h] [rbp-28h]
  char v102[8]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v103; // [rsp+58h] [rbp-18h]
  int v104; // [rsp+60h] [rbp-10h]
  struct DXGADAPTERSYNCOBJECT *v105; // [rsp+B0h] [rbp+40h] BYREF
  struct DXGDEVICE *v106; // [rsp+C0h] [rbp+50h]
  struct DXGDEVICESYNCOBJECT **v107; // [rsp+C8h] [rbp+58h]

  v107 = a4;
  v106 = a3;
  v11 = a4;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v19 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v18, v17)) == 0LL
    || (v20 = *((_QWORD *)Current + 1)) == 0 )
  {
    v20 = v19;
  }
  v101 = 0;
  v100 = (DXGSYNCOBJECT *)((char *)this + 32);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    v81 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v81 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v81);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v100 + 2) == CurrentThread )
  {
    v82 = WdLogNewEntry5_WdAssertion(CurrentThread, v17);
    *(_QWORD *)(v82 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v82);
  }
  if ( v101 )
  {
    v83 = WdLogNewEntry5_WdCriticalError(CurrentThread, v17);
    *(_QWORD *)(v83 + 40) = &v100;
    *(_QWORD *)(v83 + 24) = 275LL;
    *(_QWORD *)(v83 + 32) = 4LL;
    *(_OWORD *)(v83 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v83);
  }
  DXGFASTMUTEX::Acquire(v100);
  v24 = *((_DWORD *)this + 49);
  v105 = 0LL;
  v101 = 1;
  if ( (v24 & 4) == 0 )
  {
    if ( !a2 || *((struct ADAPTER_RENDER **)this + 39) == a2 )
    {
      v105 = (DXGSYNCOBJECT *)((char *)this + 296);
      goto LABEL_14;
    }
    v84 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v84[3] = this;
    v84[4] = *((_QWORD *)this + 39);
    v84[5] = a2;
    v84[6] = -1073741811LL;
    WdLogEvent5_WdError(v84);
    DxgAdapterSyncObject = -1073741811;
LABEL_75:
    if ( a2 )
      goto LABEL_54;
    goto LABEL_14;
  }
  DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, &v105);
  if ( DxgAdapterSyncObject < 0 )
    goto LABEL_75;
LABEL_14:
  v25 = a9;
  if ( a9 )
    *a9 = v105;
  v26 = a11.0;
  if ( ((*(_BYTE *)&a11.0 ^ *((_BYTE *)this + 196)) & 0x80u) != 0 )
  {
    v79 = WdLogNewEntry5_WdError(v25, v22);
    *(_QWORD *)(v79 + 24) = 2246LL;
    WdLogEvent5_WdError(v79);
    DxgAdapterSyncObject = -1073741811;
  }
  else
  {
    if ( !v101 )
    {
      v85 = WdLogNewEntry5_WdCriticalError(v25, v22);
      *(_QWORD *)(v85 + 40) = &v100;
      *(_QWORD *)(v85 + 24) = 275LL;
      *(_QWORD *)(v85 + 32) = 4LL;
      *(_OWORD *)(v85 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v85);
    }
    v27 = v100;
    v101 = 0;
    if ( *((struct _KTHREAD **)v100 + 2) != KeGetCurrentThread() )
    {
      v86 = WdLogNewEntry5_WdCriticalError(v25, v22);
      *(_QWORD *)(v86 + 24) = 275LL;
      *(_QWORD *)(v86 + 32) = 4LL;
      *(_QWORD *)(v86 + 40) = v27;
      *(_OWORD *)(v86 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v86);
    }
    v28 = *((_DWORD *)v27 + 6);
    if ( v28 <= 0 )
    {
      v87 = WdLogNewEntry5_WdAssertion(v25, v22);
      *(_QWORD *)(v87 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v87);
      v28 = *((_DWORD *)v27 + 6);
    }
    v29 = v28 - 1;
    *((_DWORD *)v27 + 6) = v29;
    if ( !v29 )
    {
      *((_QWORD *)v27 + 2) = 0LL;
      ExReleasePushLockExclusiveEx(v27, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v105 && *((_BYTE *)v105 + 25) )
    {
      v88 = WdLogNewEntry5_WdEvent();
      DxgAdapterSyncObject = -1073741823;
      *(_QWORD *)(v88 + 24) = this;
      *(_QWORD *)(v88 + 32) = -1073741823LL;
      WdLogEvent5_WdEvent(v88);
      goto LABEL_54;
    }
    if ( *((_BYTE *)this + 279) && (*(_BYTE *)(v20 + 347) & 0x30) == 0 && !*((_BYTE *)this + 280) )
    {
      v89 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(_QWORD *)(v89 + 24) = this;
      *(_QWORD *)(v89 + 32) = -1073741790LL;
      WdLogEvent5_WdWarning(v89);
      DxgAdapterSyncObject = -1073741823;
      goto LABEL_54;
    }
    if ( (unsigned int)(*((_DWORD *)this + 48) - 5) > 1 )
    {
      v33 = a5;
      if ( !a5 )
      {
LABEL_47:
        _InterlockedIncrement((volatile signed __int32 *)this + 6);
        v51 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v51[3] = this;
        if ( v33 )
          v54 = *v33;
        else
          v54 = 0LL;
        v51[4] = v54;
        v55 = PsGetCurrentProcess(v50, v49, v52, v53);
        v56 = PsGetProcessDxgProcess(v55);
        v59 = v56;
        if ( v56 && (*(_BYTE *)(v56 + 347) & 0x10) == 0
          || (v96 = DXGTHREAD::GetCurrent(v58, v57)) == 0LL
          || (v60 = *((_QWORD *)v96 + 1)) == 0 )
        {
          v60 = v59;
        }
        v51[5] = v60;
        WdLogEvent5_WdEvent(v51);
LABEL_53:
        DxgAdapterSyncObject = 0;
        goto LABEL_54;
      }
      Global = DXGGLOBAL::GetGlobal(v31, v30);
      if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
      {
        v90 = WdLogNewEntry5_WdAssertion(v36, v35);
        *(_QWORD *)(v90 + 24) = 2391LL;
        WdLogEvent5_WdAssertion(v90);
      }
      v103 = v20 + 208;
      if ( v20 != -208 && *(struct _KTHREAD **)(v20 + 216) == KeGetCurrentThread() )
      {
        v91 = WdLogNewEntry5_WdAssertion(v20 + 208, v35);
        *(_QWORD *)(v91 + 24) = 1571LL;
        WdLogEvent5_WdAssertion(v91);
      }
      v37 = v103;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v37, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v92 = *(_DWORD *)(v37 + 24);
          if ( v92 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, v92);
        }
        ExAcquirePushLockExclusiveEx(v37, 0LL);
      }
      *(_QWORD *)(v37 + 8) = KeGetCurrentThread();
      v40 = (_QWORD *)(v20 + 240);
      v104 = 2;
      v41 = HMGRTABLE::AllocHandle((unsigned int *)(v20 + 240), (__int64)this, 8, 0, 0);
      *v33 = v41;
      v45 = v41;
      if ( !v41 )
      {
        v93 = WdLogNewEntry5_WdLowResource(v42, 0LL, v43, v44);
        DxgAdapterSyncObject = -1073741801;
        *(_QWORD *)(v93 + 24) = this;
        *(_QWORD *)(v93 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v93);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v102);
        goto LABEL_54;
      }
      v46 = (v41 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v46 < *(_DWORD *)(v20 + 256) )
      {
        v42 = ((unsigned int)v45 >> 25) & 0x60;
        v47 = *(_DWORD *)(*v40 + 16 * v46 + 8);
        if ( (((unsigned int)v45 >> 25) & 0x60) == (*(_BYTE *)(*v40 + 16 * v46 + 8) & 0x60) )
        {
          v42 = 0x2000LL;
          if ( (v47 & 0x2000) == 0 && (v47 & 0x1F) != 0 )
            *(_DWORD *)(*v40 + 16 * (((unsigned __int64)(unsigned int)v45 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        }
      }
      if ( v104 == 1 )
      {
        v104 = 0;
        ExReleasePushLockSharedEx(v103, 0LL);
      }
      else
      {
        if ( v104 != 2 )
        {
LABEL_46:
          if ( *((_BYTE *)this + 277) )
          {
            if ( *((_DWORD *)this + 6) )
            {
              v94 = DXGGLOBAL::GetGlobal(v42, v45);
              v95 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                      *((DXG_GUEST_GLOBAL_VMBUS **)v94 + 197),
                      (struct DXGPROCESS *)v20,
                      0LL,
                      *v33,
                      this,
                      0LL,
                      0,
                      (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v26);
              if ( v95 < 0 )
              {
                DXGPROCESS::FreeResourceHandleNoRefSafe((DXGPROCESS *)v20, *v33);
                *v33 = 0;
                DxgAdapterSyncObject = v95;
                goto LABEL_54;
              }
            }
          }
          goto LABEL_47;
        }
        v48 = v103;
        v104 = 0;
        *(_QWORD *)(v103 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v48, 0LL);
      }
      KeLeaveCriticalRegion();
      goto LABEL_46;
    }
    if ( !a3 || !a2 )
    {
      v97 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v97 + 24) = 2286LL;
      WdLogEvent5_WdAssertion(v97);
    }
    PoolWithQuotaTag = (DXGDEVICESYNCOBJECT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
    v68 = a5;
    if ( PoolWithQuotaTag )
      v69 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(PoolWithQuotaTag, v106, a10, a5 != 0LL);
    else
      v69 = 0LL;
    if ( v69 )
    {
      v70 = a8;
      DxgAdapterSyncObject = DXGDEVICESYNCOBJECT::Initialize(
                               v69,
                               this,
                               (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v26,
                               a8);
      if ( DxgAdapterSyncObject >= 0 )
      {
        v73 = (struct DXGSYNCOBJECT *)*((_QWORD *)v69 + 4);
        if ( !*((_BYTE *)v73 + 277)
          || *((_DWORD *)this + 6) <= 1u
          || (v99 = DXGGLOBAL::GetGlobal(v72, v71),
              DxgAdapterSyncObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                                       *((DXG_GUEST_GLOBAL_VMBUS **)v99 + 197),
                                       (struct DXGPROCESS *)v20,
                                       v106,
                                       0,
                                       v73,
                                       v69,
                                       v70,
                                       (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v26),
              DxgAdapterSyncObject >= 0) )
        {
          if ( v68 )
            *v68 = *((_DWORD *)v69 + 10);
          *a6 = (void *)*((_QWORD *)v69 + 7);
          *a7 = *((_QWORD *)v69 + 6);
          v74 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v74[3] = this;
          v75 = *((unsigned int *)v69 + 10);
          v74[4] = v75;
          v74[5] = DXGPROCESS::GetCurrent(v75, v76, v77, v78);
          WdLogEvent5_WdEvent(v74);
          if ( v107 )
            *v107 = v69;
          goto LABEL_53;
        }
      }
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v69);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v69);
      v11 = v107;
    }
    else
    {
      DxgAdapterSyncObject = -1073741801;
      v98 = WdLogNewEntry5_WdLowResource(v65, v64, v66, v67);
      *(_QWORD *)(v98 + 24) = this;
      *(_QWORD *)(v98 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v98);
    }
    if ( v11 )
      *v11 = 0LL;
  }
LABEL_54:
  if ( v101 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v100, v22);
  return (unsigned int)DxgAdapterSyncObject;
}
