/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00F3340
 * Callers:
 *     ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x1C0003420 (-SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z.c)
 *     ?AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z @ 0x1C0064800 (-AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z.c)
 *     ?VmBusSignalFenceNtSharedByRefCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DADA0 (-VmBusSignalFenceNtSharedByRefCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024FA90 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0049208 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EFD60 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0107B00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C024C680 (-VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0291180 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(
        unsigned int *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdi
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  struct _KEVENT *v25; // rbx
  volatile signed __int64 *v26; // rcx
  volatile signed __int64 *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int *v39; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r12
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // ebx
  int DxgAdapterSyncObject; // r12d
  DXGFASTMUTEX *v50; // rbx
  int v51; // eax
  int v52; // eax
  struct DXGADAPTER *v53; // rcx
  struct DXGADAPTER *v54; // rcx
  struct DXGTHREAD *Current; // rax
  __int64 v57; // rax
  int v58; // r9d
  __int64 v59; // rax
  _QWORD *v60; // rax
  struct _KEVENT *v61; // rcx
  __int64 v62; // rcx
  unsigned __int8 v63; // bl
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // r9
  char *v82; // rdx
  int v83; // [rsp+50h] [rbp-B0h]
  DXGFASTMUTEX *v84; // [rsp+58h] [rbp-A8h] BYREF
  char v85; // [rsp+60h] [rbp-A0h]
  PERESOURCE *v86; // [rsp+68h] [rbp-98h] BYREF
  char v87; // [rsp+70h] [rbp-90h]
  unsigned __int64 v88[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v89; // [rsp+88h] [rbp-78h] BYREF
  __int64 v90; // [rsp+90h] [rbp-70h] BYREF
  __int64 v91; // [rsp+98h] [rbp-68h] BYREF
  char v92[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-58h]
  char v94; // [rsp+B0h] [rbp-50h]
  _QWORD v95[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct DXGADAPTERSYNCOBJECT *v96; // [rsp+C8h] [rbp-38h] BYREF
  char v97[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v98; // [rsp+E0h] [rbp-20h]
  struct DXGADAPTER *v99; // [rsp+E8h] [rbp-18h]
  char v100; // [rsp+F0h] [rbp-10h]
  char *v101; // [rsp+F8h] [rbp-8h]
  char v102[8]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v103; // [rsp+120h] [rbp+20h]
  struct DXGADAPTER *v104; // [rsp+128h] [rbp+28h]
  char v105; // [rsp+130h] [rbp+30h]
  __int64 v106; // [rsp+138h] [rbp+38h]
  __int64 v107; // [rsp+158h] [rbp+58h]
  char v108; // [rsp+160h] [rbp+60h]
  char v109[8]; // [rsp+170h] [rbp+70h] BYREF
  char v110[64]; // [rsp+178h] [rbp+78h] BYREF
  char v111[88]; // [rsp+1B8h] [rbp+B8h] BYREF

  v4 = a3;
  v88[0] = a2;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v11 = *((_QWORD *)Current + 1)) == 0 )
  {
    v11 = v10;
  }
  if ( v11 != -208 && *(struct _KTHREAD **)(v11 + 216) == KeGetCurrentThread() )
  {
    v57 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v57 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v57);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v58 = *(_DWORD *)(v11 + 232);
      if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, &EventBlockThread, v13, v58);
    }
    ExAcquirePushLockSharedEx(v11 + 208, 0LL);
  }
  v14 = (v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *(_DWORD *)(v11 + 256) )
    goto LABEL_17;
  v15 = *(_QWORD *)(v11 + 240);
  v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
  if ( ((v4 >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60) || (v16 & 0x2000) != 0 || (v16 & 0x1F) == 0 )
    goto LABEL_17;
  v17 = v16 & 0x1F;
  if ( (_BYTE)v17 != 7 )
  {
    v59 = WdLogNewEntry5_WdError(v17, 2LL * (unsigned int)v14);
    *(_QWORD *)(v59 + 24) = 316LL;
    WdLogEvent5_WdError(v59);
LABEL_17:
    v18 = 0LL;
    goto LABEL_18;
  }
  v18 = *(_QWORD *)(v15 + 16LL * (unsigned int)v14);
  if ( !v18 )
    goto LABEL_18;
  _m_prefetchw((const void *)(v18 + 32));
  v19 = *(_QWORD *)(v18 + 32);
  if ( !v19 )
    goto LABEL_17;
  while ( 1 )
  {
    v20 = v19;
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 32), v19 + 1, v19);
    if ( v20 == v19 )
      break;
    if ( !v19 )
      goto LABEL_17;
  }
LABEL_18:
  ExReleasePushLockSharedEx(v11 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    DxgAdapterSyncObject = -1073741811;
    v60[3] = v11;
    v60[4] = 0LL;
    v60[5] = -1073741811LL;
    WdLogEvent5_WdError(v60);
    return (unsigned int)DxgAdapterSyncObject;
  }
  v23 = *(_QWORD *)(v18 + 16);
  v83 = 0;
  v24 = v23;
  if ( v23 )
  {
    v25 = *(struct _KEVENT **)(v23 + 16);
    if ( *(_DWORD *)(v23 + 432) == 2 )
    {
      if ( KeReadStateEvent(v25 + 5) )
        goto LABEL_22;
      v61 = v25 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v25 + 4) )
      {
LABEL_22:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 136), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 104LL));
          v63 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v62, &EventBlockThread, v64, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 136), 1u);
          if ( v63 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 104LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v24 = *(_QWORD *)(v18 + 16);
        v83 = 1;
        goto LABEL_24;
      }
      v61 = v25 + 4;
    }
    KeWaitForSingleObject(v61, Executive, 0, 0, 0LL);
    goto LABEL_22;
  }
LABEL_24:
  v26 = *(volatile signed __int64 **)(*(_QWORD *)(v24 + 16) + 16LL);
  v100 = 0;
  v101 = 0LL;
  v99 = (struct DXGADAPTER *)v26;
  if ( v26 )
  {
    _InterlockedIncrement64(v26 + 3);
    v98 = -1LL;
  }
  v27 = *(volatile signed __int64 **)(*(_QWORD *)(v24 + 16) + 16LL);
  v104 = (struct DXGADAPTER *)v27;
  v105 = 0;
  v106 = 0LL;
  if ( v27 )
  {
    _InterlockedIncrement64(v27 + 3);
    v103 = -1LL;
  }
  v107 = v24;
  v108 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v99 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v99 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventBlockThread, v29, 72);
      KeWaitForSingleObject((char *)v99 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v99, 0LL);
  }
  v101 = 0LL;
  v100 = 1;
  v30 = *(unsigned int *)(v107 + 576);
  if ( (_DWORD)v30 != 1 )
  {
    COREACCESS::Release((COREACCESS *)v97);
    if ( v108 )
      COREACCESS::Release((COREACCESS *)v102);
    DxgAdapterSyncObject = -1073741130;
    goto LABEL_70;
  }
  Global = DXGGLOBAL::GetGlobal(v30, v24);
  v86 = (PERESOURCE *)Global;
  v87 = 0;
  if ( !Global )
  {
    v65 = WdLogNewEntry5_WdAssertion(v33, v32);
    *(_QWORD *)(v65 + 24) = 2427LL;
    WdLogEvent5_WdAssertion(v65);
    Global = (struct DXGGLOBAL *)v86;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
  {
    v66 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v66 + 24) = 2432LL;
    WdLogEvent5_WdAssertion(v66);
  }
  if ( v87 )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
    v67[5] = &v86;
    v67[3] = 275LL;
    v67[4] = 4LL;
    v67[6] = 0LL;
    v67[7] = 0LL;
    WdLogEvent5_WdCriticalError(v67);
  }
  v36 = v86;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v36[65], 1u);
  v87 = 1;
  v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v38 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v38 + 168)) )
  {
    v68 = WdLogNewEntry5_WdAssertion(v38, v37);
    *(_QWORD *)(v68 + 24) = 1408LL;
    WdLogEvent5_WdAssertion(v68);
  }
  if ( (*(_BYTE *)(v11 + 347) & 0x30) != 0 )
  {
    v39 = a1;
LABEL_43:
    v85 = 0;
    v84 = (DXGFASTMUTEX *)(v39 + 8);
    if ( v39 == (unsigned int *)-32LL )
    {
      v69 = WdLogNewEntry5_WdAssertion(v38, v37);
      *(_QWORD *)(v69 + 24) = 762LL;
      WdLogEvent5_WdAssertion(v69);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v84 + 2) == CurrentThread )
    {
      v70 = WdLogNewEntry5_WdAssertion(CurrentThread, v37);
      *(_QWORD *)(v70 + 24) = 769LL;
      WdLogEvent5_WdAssertion(v70);
    }
    if ( v85 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v37);
      v71[5] = &v84;
      v71[3] = 275LL;
      v71[4] = 4LL;
      v71[6] = 0LL;
      v71[7] = 0LL;
      WdLogEvent5_WdCriticalError(v71);
    }
    DXGFASTMUTEX::Acquire(v84);
    v85 = 1;
    v43 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL);
    if ( (v39[49] & 4) != 0 )
    {
      DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                               (DXGSYNCOBJECTCA *)v39,
                               *(struct ADAPTER_RENDER **)(*(_QWORD *)(v18 + 16) + 16LL),
                               &v96);
      if ( DxgAdapterSyncObject >= 0 )
      {
LABEL_52:
        if ( (v39[49] & 4) != 0 )
          v44 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                              (DXGSYNCOBJECTCA *)v39,
                              *(struct ADAPTER_RENDER **)(*(_QWORD *)(v18 + 16) + 16LL))
                + 4);
        else
          v44 = *((_QWORD *)v39 + 41);
        v89 = v44;
        if ( v44 )
        {
          if ( (*(_DWORD *)(v18 + 420) & 0x10) != 0 )
          {
            v90 = *(_QWORD *)(v18 + 304);
            v45 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 616LL) + 8LL) + 648LL))(
                    1LL,
                    &v90,
                    1LL,
                    &v89,
                    0,
                    v88);
          }
          else
          {
            v91 = *(_QWORD *)(v18 + 272);
            v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, int, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 616LL) + 8LL) + 640LL))(
                    0LL,
                    0LL,
                    1LL,
                    &v91,
                    1,
                    &v89,
                    0,
                    v88);
          }
          v48 = v45;
          if ( v45 < 0 )
          {
            v76 = WdLogNewEntry5_WdAssertion(v47, v46);
            *(_QWORD *)(v76 + 24) = 1498LL;
            WdLogEvent5_WdAssertion(v76);
          }
          DxgAdapterSyncObject = v48;
        }
        else
        {
          v75 = WdLogNewEntry5_WdError(v42, v41);
          *(_QWORD *)(v75 + 24) = v39;
          WdLogEvent5_WdError(v75);
          DxgAdapterSyncObject = -1073741811;
        }
        goto LABEL_60;
      }
    }
    else
    {
      if ( !v43 || *((_QWORD *)v39 + 39) == v43 )
        goto LABEL_52;
      v72 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
      v72[3] = v39;
      v73 = *((_QWORD *)v39 + 39);
      v72[5] = v43;
      DxgAdapterSyncObject = -1073741811;
      v72[4] = v73;
      v72[6] = -1073741811LL;
      WdLogEvent5_WdError(v72);
    }
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
    v74[3] = v11;
    v74[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 16LL);
    v74[5] = DxgAdapterSyncObject;
    WdLogEvent5_WdError(v74);
LABEL_60:
    if ( v85 )
    {
      v50 = v84;
      v85 = 0;
      if ( *((struct _KTHREAD **)v84 + 2) != KeGetCurrentThread() )
      {
        v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v46);
        v77[3] = 275LL;
        v77[4] = 4LL;
        v77[5] = v50;
        v77[6] = 0LL;
        v77[7] = 0LL;
        WdLogEvent5_WdCriticalError(v77);
      }
      v51 = *((_DWORD *)v50 + 6);
      if ( v51 <= 0 )
      {
        v78 = WdLogNewEntry5_WdAssertion(v47, v46);
        *(_QWORD *)(v78 + 24) = 705LL;
        WdLogEvent5_WdAssertion(v78);
        v51 = *((_DWORD *)v50 + 6);
      }
      v52 = v51 - 1;
      *((_DWORD *)v50 + 6) = v52;
      if ( !v52 )
      {
        *((_QWORD *)v50 + 2) = 0LL;
        ExReleasePushLockExclusiveEx(v50, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    goto LABEL_68;
  }
  v39 = *(unsigned int **)a1;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 277LL) )
    goto LABEL_43;
  DxgAdapterSyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 16LL)
                                                        + 4240LL),
                           (struct DXGPROCESS *)v11,
                           (struct DXGCONTEXT *)v18,
                           a1[2],
                           v88[0]);
LABEL_68:
  if ( v87 )
  {
    v87 = 0;
    ExReleaseResourceLite(v86[65]);
    KeLeaveCriticalRegion();
  }
LABEL_70:
  v53 = v104;
  if ( v104 )
  {
    if ( v105 )
    {
      COREACCESS::Release((COREACCESS *)v102);
      v53 = v104;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v53 + 2), v53);
  }
  v54 = v99;
  if ( v99 )
  {
    if ( v100 )
    {
      v100 = 0;
      v54 = v99;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v99 + 23) )
      {
        DXGADAPTER::ReleaseCoreResource(v99, v101);
        v54 = v99;
      }
      v101 = 0LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v54 + 2), v54);
  }
  if ( v23 && v83 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v23 + 136));
    KeLeaveCriticalRegion();
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v79 = *(_QWORD *)(v18 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v95,
      (struct DXGDEVICE *)v79);
    v80 = *(_QWORD *)(v18 + 16);
    v94 = 0;
    v93 = *(_QWORD *)(*(_QWORD *)(v80 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v109, v79, 2, v81, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v109, v82);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v79 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v79, (struct DXGCONTEXT *)v18, (struct COREDEVICEACCESS *)v109);
    COREACCESS::~COREACCESS((COREACCESS *)v111);
    COREACCESS::~COREACCESS((COREACCESS *)v110);
    if ( v94 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
    if ( v95[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v95);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v79 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v79 + 16), (struct DXGDEVICE *)v79);
  }
  return (unsigned int)DxgAdapterSyncObject;
}
