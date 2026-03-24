/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1C022B610
 * Callers:
 *     ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02510A0 (-VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037C0 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008DD8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0015390 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019DC8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0025CA8 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C003F674 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01252E8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01550DC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C022F410 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C022F47C (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C024E0EC (-VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v3; // rsi
  bool v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **Current; // r14
  __int64 v13; // rax
  unsigned int updated; // esi
  __int64 v15; // rdx
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGDEVICE *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  DXGCONTEXT *v25; // rsi
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  signed __int64 v29; // rdx
  bool v30; // zf
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned __int64 NumOperations; // rdx
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  SIZE_T v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  char *v56; // r9
  __int64 v57; // rax
  size_t v58; // r8
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  ULONG64 v60; // rcx
  char *v61; // rcx
  int v62; // r9d
  __int64 v63; // rdx
  unsigned int v64; // r10d
  unsigned __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // rax
  bool v70; // cf
  SIZE_T v71; // rax
  char *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  unsigned int v77; // edx
  DXGALLOCATIONREFERENCE *v78; // rax
  void *v79; // rcx
  __int64 v80; // rax
  SIZE_T v81; // rax
  char *v82; // rax
  __int64 v83; // rdx
  __int64 OperationType; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  unsigned int v88; // r8d
  int v89; // r9d
  __int64 v90; // rdx
  char *v91; // r10
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v92; // rax
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rdx
  PERESOURCE *Global; // rax
  __int64 v100; // rdx
  unsigned int v101; // ecx
  __int64 v102; // r8
  struct _KTHREAD *v103; // r9
  int v104; // ecx
  __int64 v105; // r8
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  NTSTATUS v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  _QWORD *v127; // rax
  _QWORD *v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  _QWORD *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  struct DXGDEVICE *v139; // [rsp+40h] [rbp-218h] BYREF
  void *v140; // [rsp+48h] [rbp-210h]
  int v141; // [rsp+50h] [rbp-208h] BYREF
  __int64 v142; // [rsp+58h] [rbp-200h]
  char v143; // [rsp+60h] [rbp-1F8h]
  bool v144; // [rsp+68h] [rbp-1F0h]
  _DWORD v145[3]; // [rsp+6Ch] [rbp-1ECh]
  char *v146; // [rsp+78h] [rbp-1E0h]
  unsigned int Size; // [rsp+80h] [rbp-1D8h]
  unsigned int Size_4; // [rsp+84h] [rbp-1D4h]
  DXGALLOCATIONREFERENCE *v149; // [rsp+88h] [rbp-1D0h]
  char v150[8]; // [rsp+90h] [rbp-1C8h] BYREF
  char v151; // [rsp+98h] [rbp-1C0h]
  __int64 v152; // [rsp+A0h] [rbp-1B8h] BYREF
  char v153; // [rsp+A8h] [rbp-1B0h]
  DXGPUSHLOCK *v154; // [rsp+B0h] [rbp-1A8h]
  struct _KTHREAD **v155; // [rsp+B8h] [rbp-1A0h]
  _BYTE v156[16]; // [rsp+C0h] [rbp-198h] BYREF
  struct DXGDEVICE *v157; // [rsp+D0h] [rbp-188h] BYREF
  _BYTE v158[16]; // [rsp+D8h] [rbp-180h] BYREF
  char *v159; // [rsp+E8h] [rbp-170h]
  PVOID Object; // [rsp+F0h] [rbp-168h] BYREF
  void **p_Operations; // [rsp+F8h] [rbp-160h]
  char *v162; // [rsp+100h] [rbp-158h]
  DXGCONTEXT *v163; // [rsp+108h] [rbp-150h] BYREF
  _BYTE v164[24]; // [rsp+110h] [rbp-148h] BYREF
  int v165; // [rsp+128h] [rbp-130h]
  struct _EX_RUNDOWN_REF *v166; // [rsp+130h] [rbp-128h] BYREF
  signed __int64 v167; // [rsp+138h] [rbp-120h]
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v168; // [rsp+140h] [rbp-118h]
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v169; // [rsp+148h] [rbp-110h] BYREF
  _BYTE v170[160]; // [rsp+180h] [rbp-D8h] BYREF

  v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)a1;
  v141 = -1;
  v142 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v143 = 1;
    v141 = 2106;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2106);
  }
  else
  {
    v143 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v141, 2106LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v144 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v155 = Current;
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9);
    updated = -1073741811;
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_25:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v141, v15);
    if ( v143 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v141);
    }
    return updated;
  }
  memset(&v169, 0, sizeof(v169));
  v16 = &v169;
  v140 = &v169;
  if ( v4 )
  {
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v169 = *v3;
  }
  else
  {
    v16 = v3;
    v140 = v3;
  }
  if ( !v16->NumOperations )
  {
    v17 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    updated = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    *(_QWORD *)(v17 + 32) = 12975LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_25;
  }
  v157 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v139, v16->hDevice, Current, &v157);
  v20 = v157;
  if ( !v157 )
  {
    v21 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v21 + 24) = v16->hDevice;
    updated = -1073741811;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_45:
    if ( !v139 )
      goto LABEL_25;
    v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)v139 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_23;
  }
  v163 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v156,
    v16->hContext,
    (struct DXGPROCESS *)Current,
    &v163,
    0);
  v25 = v163;
  if ( !v163 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    v26[3] = Current;
    v26[4] = v16->hContext;
    updated = -1073741811;
    v26[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
LABEL_44:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
    goto LABEL_45;
  }
  if ( *((struct DXGDEVICE **)v163 + 2) != v20 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v27[3] = *((_QWORD *)v25 + 2);
    v27[4] = v20;
    updated = -1073741811;
    v27[5] = -1073741811LL;
    WdLogEvent5_WdError(v27);
    goto LABEL_44;
  }
  v159 = (char *)v20 + 16;
  v28 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL);
  if ( *(_BYTE *)(v28 + 209) )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v28 + 4240),
                (struct DXGPROCESS *)Current,
                *((_DWORD *)v20 + 110),
                *((_DWORD *)v163 + 7),
                v16);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
    if ( !v139 )
      goto LABEL_25;
    v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)v139 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v30 = v29 == 1;
    v15 = v29 - 1;
LABEL_23:
    if ( v30 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v139 + 2), v139);
    goto LABEL_25;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v152, v20);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v164,
    (DXGCONTEXT *)((char *)v25 + 464));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v170, (__int64)v20, 0, v34, 0);
  v35 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v170, 0LL);
  v39 = v35;
  if ( v35 < 0 )
  {
    v40 = WdLogNewEntry5_WdWarning(v37, v36, v38);
    *(_QWORD *)(v40 + 24) = v39;
    *(_QWORD *)(v40 + 32) = 13026LL;
    WdLogEvent5_WdWarning(v40);
    goto LABEL_143;
  }
  v41 = *(_QWORD *)(*(_QWORD *)v159 + 16LL);
  if ( (*(_DWORD *)(v41 + 2060) & 0x40) == 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v36, v38);
    updated = -1073741811;
    v42[3] = -1073741811LL;
    v42[4] = 13032LL;
LABEL_41:
    WdLogEvent5_WdWarning(v42);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v170);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v164);
    if ( v152 && v153 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v152 + 136));
      KeLeaveCriticalRegion();
    }
    goto LABEL_44;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v25) )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
    v42[3] = v155;
    v42[4] = v16->hContext;
    updated = -1073741811;
    v42[5] = -1073741811LL;
    goto LABEL_41;
  }
  *(_QWORD *)&v145[1] = DXGCONTEXT::GetVidMmCompanionContext(v25);
  if ( !*(_QWORD *)&v145[1] )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48);
    v42[3] = v155;
    v42[4] = v16->hContext;
    updated = -1073741811;
    v42[5] = -1073741811LL;
    v42[6] = 13048LL;
    goto LABEL_41;
  }
  updated = -1073741811;
  LODWORD(v39) = -1073741811;
  Size_4 = -1073741811;
  v149 = 0LL;
  v145[0] = 0;
  NumOperations = v16->NumOperations;
  v50 = NumOperations << 6;
  v51 = 0xFFFFFFFFLL;
  if ( NumOperations << 6 <= 0xFFFFFFFF )
    v51 = (unsigned int)v50;
  Size = v51;
  v165 = v51;
  if ( v50 > 0xFFFFFFFF )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, NumOperations, 0xFFFFFFFFLL);
    v42[3] = v16->NumOperations;
    goto LABEL_41;
  }
  v52 = NumOperations << 6;
  if ( !is_mul_ok(NumOperations, 0x40uLL) )
    v52 = -1LL;
  v56 = (char *)operator new[](v52, 0x4B677844u, PagedPool);
  v146 = v56;
  if ( !v56 )
  {
    v57 = WdLogNewEntry5_WdLowResource(v54, v53, v55, 0LL);
    LODWORD(v39) = -1073741801;
    *(_QWORD *)(v57 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v57);
    goto LABEL_143;
  }
  if ( v144 )
  {
    v58 = Size;
    p_Operations = (void **)&v16->Operations;
    Operations = v16->Operations;
    v60 = (ULONG64)Operations + Size;
    if ( v60 < (unsigned __int64)Operations || v60 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v56, Operations, v58);
  }
  else
  {
    p_Operations = (void **)&v16->Operations;
    memmove(v56, v16->Operations, Size);
  }
  v61 = v146;
  v16->Operations = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)v146;
  v62 = 0;
  v63 = 0LL;
  v64 = v16->NumOperations;
  if ( v64 )
  {
    do
    {
      v65 = (unsigned __int64)(unsigned int)v63 << 6;
      v66 = *(unsigned int *)&v61[v65];
      if ( !(_DWORD)v66 || (_DWORD)v66 == 3 )
      {
        v68 = *(unsigned int *)&v61[v65 + 24];
        if ( !(_DWORD)v68 )
        {
          v67 = WdLogNewEntry5_WdWarning(v61, v63, v68);
          *(_QWORD *)(v67 + 32) = 13108LL;
LABEL_73:
          *(_QWORD *)(v67 + 24) = -1073741811LL;
          WdLogEvent5_WdWarning(v67);
LABEL_74:
          v79 = 0LL;
          goto LABEL_141;
        }
        if ( v62 != (_DWORD)v68 )
        {
          ++v145[0];
          v62 = v68;
        }
      }
      else if ( (unsigned int)(v66 - 1) > 1 )
      {
        v67 = WdLogNewEntry5_WdWarning(v61, v63, v66);
        *(_QWORD *)(v67 + 32) = 13121LL;
        goto LABEL_73;
      }
      v63 = (unsigned int)(v63 + 1);
    }
    while ( (unsigned int)v63 < v64 );
  }
  v69 = 8LL * v145[0];
  if ( !is_mul_ok(v145[0], 8uLL) )
    v69 = -1LL;
  v70 = __CFADD__(v69, 8LL);
  v71 = v69 + 8;
  if ( v70 )
    v71 = -1LL;
  v72 = (char *)operator new[](v71, 0x4B677844u, PagedPool);
  if ( v72 )
  {
    v77 = v145[0];
    *(_QWORD *)v72 = v145[0];
    v149 = (DXGALLOCATIONREFERENCE *)(v72 + 8);
    `vector constructor iterator'(
      v72 + 8,
      8LL,
      v77,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    v78 = v149;
  }
  else
  {
    v78 = 0LL;
    v149 = 0LL;
  }
  if ( !v78 )
  {
    v80 = WdLogNewEntry5_WdLowResource(v74, v73, v75, v76);
    LODWORD(v39) = -1073741801;
    *(_QWORD *)(v80 + 24) = -1073741801LL;
    *(_QWORD *)(v80 + 32) = 13130LL;
    WdLogEvent5_WdLowResource(v80);
    goto LABEL_74;
  }
  v81 = 8LL * v145[0];
  if ( !is_mul_ok(v145[0], 8uLL) )
    v81 = -1LL;
  v82 = (char *)operator new[](v81, 0x4B677844u, PagedPool);
  v140 = v82;
  if ( !v82 )
  {
    v87 = WdLogNewEntry5_WdLowResource(OperationType, v83, v85, v86);
    LODWORD(v39) = -1073741801;
    *(_QWORD *)(v87 + 24) = -1073741801LL;
    *(_QWORD *)(v87 + 32) = 13138LL;
    WdLogEvent5_WdLowResource(v87);
    goto LABEL_140;
  }
  v88 = 0;
  v89 = -1;
  v90 = 0LL;
  Size = 0;
  if ( v16->NumOperations )
  {
    v91 = v82 - 8;
    v167 = v149 - (DXGALLOCATIONREFERENCE *)v82;
    do
    {
      v92 = &v16->Operations[(unsigned __int64)(unsigned int)v90];
      v168 = v92;
      OperationType = (unsigned int)v92->OperationType;
      if ( !(_DWORD)OperationType || (_DWORD)OperationType == 3 )
      {
        OperationType = v92->Map.hAllocation;
        if ( v88 != (_DWORD)OperationType )
        {
          Size_4 = v92->Map.hAllocation;
          LODWORD(v146) = v89 + 1;
          v162 = v91 + 8;
          v154 = (DXGPUSHLOCK *)(v89 + 1);
          AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                        (__int64)v155,
                                                        (DXGALLOCATIONREFERENCE *)&v166,
                                                        OperationType);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v149 + (_QWORD)v154, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v166, v94);
          v91 = v162;
          v97 = *(_QWORD *)&v162[v167];
          if ( !v97 )
          {
            v128 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, v95, 0LL);
            v128[3] = Size_4;
            v128[4] = -1073741811LL;
            v128[5] = 13169LL;
            WdLogEvent5_WdWarning(v128);
LABEL_140:
            v79 = v140;
LABEL_141:
            operator delete[](v79);
            operator delete[](*p_Operations);
            if ( v149 )
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v149);
LABEL_143:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v170);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v164);
            if ( v152 && v153 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v152 + 136));
              KeLeaveCriticalRegion();
            }
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
            if ( v139 && _InterlockedExchangeAdd64((volatile signed __int64 *)v139 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v139 + 2), v139);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v141, v136);
            if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v137, &EventProfilerExit, v138, v141);
            return (unsigned int)v39;
          }
          v98 = *(_QWORD *)(*(_QWORD *)(v97 + 8) + 16LL);
          OperationType = *(_QWORD *)(*(_QWORD *)v159 + 16LL);
          if ( *(_QWORD *)(v98 + 16) != OperationType )
          {
            v127 = (_QWORD *)WdLogNewEntry5_WdError(OperationType, v98);
            v127[3] = v20;
            v127[4] = *((_QWORD *)v149 + (_QWORD)v154);
            v127[5] = -1073741811LL;
            WdLogEvent5_WdError(v127);
            goto LABEL_140;
          }
          *(_QWORD *)v162 = *(_QWORD *)(v97 + 24);
          v92 = v168;
          LODWORD(v90) = Size;
          v88 = Size_4;
          v89 = (int)v146;
        }
        v92->Map.hAllocation = v89;
      }
      v90 = (unsigned int)(v90 + 1);
      Size = v90;
    }
    while ( (unsigned int)v90 < v16->NumOperations );
  }
  v154 = (DXGPUSHLOCK *)(v155 + 26);
  while ( 1 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(OperationType, v90);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v150, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v150, v100);
    LODWORD(v146) = v16->hFenceObject;
    DXGPUSHLOCK::AcquireShared(v154);
    v101 = ((unsigned int)v146 >> 6) & 0xFFFFFF;
    if ( v101 >= *((_DWORD *)v155 + 64) )
      goto LABEL_99;
    v102 = v101;
    v103 = v155[30];
    v104 = *((_DWORD *)v103 + 4 * v101 + 2);
    if ( (((unsigned int)v146 >> 25) & 0x60) != (v104 & 0x60) || (v104 & 0x2000) != 0 || (v104 & 0x1F) == 0 )
      goto LABEL_99;
    v105 = 2 * v102;
    v106 = v104 & 0x1F;
    if ( (_BYTE)v106 != 11 )
    {
      v107 = WdLogNewEntry5_WdError(v106, ((unsigned int)v146 >> 25) & 0x60);
      *(_QWORD *)(v107 + 24) = 316LL;
      WdLogEvent5_WdError(v107);
LABEL_99:
      v146 = 0LL;
      goto LABEL_100;
    }
    v146 = (char *)*((_QWORD *)v103 + v105);
LABEL_100:
    ExReleasePushLockSharedEx(v154, 0LL);
    KeLeaveCriticalRegion();
    if ( !v146 )
    {
      v135 = WdLogNewEntry5_WdWarning(v109, v108, v110);
      *(_QWORD *)(v135 + 24) = v16->hFenceObject;
      *(_QWORD *)(v135 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v135);
      goto LABEL_138;
    }
    if ( *((struct DXGDEVICE **)v146 + 2) != v20 )
    {
      v134 = (_QWORD *)WdLogNewEntry5_WdError(v109, v108);
      v134[3] = *((_QWORD *)v146 + 2);
      v134[4] = v20;
      v134[5] = -1073741811LL;
      WdLogEvent5_WdError(v134);
      goto LABEL_138;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v158, *((struct DXGSYNCOBJECT **)v146 + 4));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v158);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)v146 + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)v146 + 2) + 16LL));
    Object = 0LL;
    v112 = (*(__int64 (__fastcall **)(_QWORD, _D3DKMT_UPDATEGPUVIRTUALADDRESS *, _QWORD, _QWORD, void *, struct _VIDSCH_SYNC_OBJECT *, PVOID *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v159 + 640LL) + 8LL) + 1016LL))(
             *(_QWORD *)(*(_QWORD *)v159 + 648LL),
             v16,
             *(_QWORD *)&v145[1],
             v145[0],
             v140,
             VidSchSyncObject,
             &Object);
    v39 = v112;
    if ( v112 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v170, v113);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v158, v116);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v150);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v117, &EventBlockThread, v118, 68);
    v119 = KeWaitForSingleObject(Object, UserRequest, 0, 1u, 0LL);
    v39 = v119;
    if ( !v119 )
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      v130 = WdLogNewEntry5_WdWarning(v121, v120, v122);
      *(_QWORD *)(v130 + 24) = 13266LL;
      WdLogEvent5_WdWarning(v130);
      LODWORD(v39) = -1073741130;
LABEL_119:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v158);
LABEL_138:
      if ( v151 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v150);
      goto LABEL_140;
    }
    if ( (_DWORD)v39 )
    {
      v129 = WdLogNewEntry5_WdWarning(v121, v120, v122);
      *(_QWORD *)(v129 + 32) = 13273LL;
      goto LABEL_118;
    }
    v123 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v170, 0LL);
    v39 = v123;
    if ( v123 < 0 )
    {
      v129 = WdLogNewEntry5_WdWarning(v125, v124, v126);
      *(_QWORD *)(v129 + 32) = 13283LL;
LABEL_118:
      *(_QWORD *)(v129 + 24) = v39;
      WdLogEvent5_WdWarning(v129);
      goto LABEL_119;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v158);
    if ( v151 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v150);
    v20 = v157;
  }
  if ( v112 < 0 )
  {
    v129 = WdLogNewEntry5_WdWarning(v114, v113, v115);
    *(_QWORD *)(v129 + 32) = 13290LL;
    goto LABEL_118;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v158);
  if ( v151 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v150);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v149);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v170);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v164);
  if ( v152 && v153 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v152 + 136));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
  if ( v139 && _InterlockedExchangeAdd64((volatile signed __int64 *)v139 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v139 + 2), v139);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v141, v131);
  if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v132, &EventProfilerExit, v133, v141);
  return 0LL;
}
