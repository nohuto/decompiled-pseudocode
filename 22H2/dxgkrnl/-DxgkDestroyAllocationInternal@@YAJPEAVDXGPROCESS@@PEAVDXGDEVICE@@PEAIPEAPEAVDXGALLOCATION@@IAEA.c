/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0112FB0
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0114E00 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C00020A0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00023AC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C00026F4 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000A39C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A478 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001E740 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025B3C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0025B64 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C003F854 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00E0664 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E09A4 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E316C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00E432C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00E435C (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E43CC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00E46BC (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00EA8F4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00EB6DC (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00EB788 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF2E8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C01126F0 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01140D0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120374 (DxgkReleaseSessionModeChangeLock.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0164490 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C016D7B8 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C016E6B4 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C02120F0 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0212318 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C021261C (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     DxgkDestroyClientAllocation @ 0x1C022A124 (DxgkDestroyClientAllocation.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0248608 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0280184 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationInternal(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2,
        unsigned int *a3,
        struct DXGALLOCATION **a4,
        unsigned int a5,
        const unsigned int **a6,
        unsigned int a7,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a8,
        char *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10,
        unsigned __int8 a11)
{
  unsigned int *v12; // r9
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v15; // ebx
  unsigned int v16; // r10d
  unsigned int v17; // r12d
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v27; // rdi
  char *v28; // rdx
  const struct DXGALLOCATION *v29; // rdi
  unsigned int v30; // edx
  __int64 v31; // rax
  int v32; // eax
  volatile signed __int64 *v33; // rdi
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // r13d
  __int64 v45; // rdx
  ADAPTER_DISPLAY *v46; // rcx
  __int64 v47; // r14
  struct DXGRESOURCE *v48; // rdi
  __int64 v49; // rax
  struct DXGALLOCATION *v50; // rdi
  char v51; // r12
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // r8d
  unsigned int v56; // r8d
  ADAPTER_DISPLAY *v57; // rcx
  __int64 v58; // rax
  bool v59; // r14
  unsigned int v60; // r12d
  struct DXGALLOCATION **v61; // r14
  struct DXGALLOCATION *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // r8d
  unsigned int v66; // r8d
  __int64 v67; // r9
  int v68; // r12d
  __int64 v69; // rax
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v76; // rdi
  __int64 v77; // rax
  unsigned int v78; // edi
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // r14
  __int64 v82; // rax
  struct DXGALLOCATION *v83; // rdi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v85; // rdx
  __int64 v86; // r10
  __int64 v87; // r8
  unsigned int v88; // r9d
  ADAPTER_DISPLAY *v89; // r10
  unsigned __int8 v90; // r8
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  struct DXGDEVICE *v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdx
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdi
  __int64 v105; // rax
  char *v106; // rdx
  DXGDODPRESENT *v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // r13
  struct DXGRESOURCE *v113; // r14
  unsigned int v114; // r12d
  unsigned int v115; // edi
  struct DXGPROCESS *Current; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v117; // rcx
  unsigned int v118; // r13d
  struct DXGALLOCATION **v119; // r10
  struct DXGALLOCATION **v120; // rcx
  __int64 v121; // rdx
  struct DXGALLOCATION *v122; // rdi
  struct DXGRESOURCE *v123; // r14
  struct DXGALLOCATION *v124; // r9
  _QWORD *v125; // rax
  struct DXGALLOCATION *v126; // r9
  _QWORD *v127; // rax
  unsigned __int8 v128; // al
  struct DXGDEVICE *v129; // rbx
  __int64 v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  struct DXGADAPTER *v135; // rbx
  char v136; // bl
  __int64 v137; // rax
  char v138; // [rsp+40h] [rbp-3C8h] BYREF
  unsigned __int8 v139; // [rsp+41h] [rbp-3C7h]
  char i; // [rsp+42h] [rbp-3C6h]
  bool v141; // [rsp+43h] [rbp-3C5h]
  char v142; // [rsp+44h] [rbp-3C4h]
  unsigned __int8 v143; // [rsp+45h] [rbp-3C3h] BYREF
  char v144; // [rsp+46h] [rbp-3C2h]
  char v145; // [rsp+47h] [rbp-3C1h]
  unsigned __int8 v146[4]; // [rsp+48h] [rbp-3C0h] BYREF
  unsigned int v147; // [rsp+4Ch] [rbp-3BCh]
  __int64 v148; // [rsp+50h] [rbp-3B8h]
  struct DXGRESOURCE *v149; // [rsp+58h] [rbp-3B0h] BYREF
  struct DXGDEVICE *v150; // [rsp+60h] [rbp-3A8h] BYREF
  struct DXGALLOCATION *v151; // [rsp+68h] [rbp-3A0h]
  struct DXGALLOCATION **v152; // [rsp+70h] [rbp-398h]
  __int64 v153; // [rsp+78h] [rbp-390h]
  struct DXGALLOCATION *v154; // [rsp+80h] [rbp-388h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v155; // [rsp+88h] [rbp-380h]
  __int64 v156; // [rsp+90h] [rbp-378h] BYREF
  struct DXGADAPTER *v157; // [rsp+98h] [rbp-370h]
  char v158; // [rsp+A0h] [rbp-368h]
  unsigned int v159; // [rsp+A8h] [rbp-360h]
  _BYTE v160[16]; // [rsp+B0h] [rbp-358h] BYREF
  struct _KTHREAD **v161; // [rsp+C0h] [rbp-348h]
  _BYTE v162[8]; // [rsp+D0h] [rbp-338h] BYREF
  char v163; // [rsp+D8h] [rbp-330h] BYREF
  DXGADAPTER *v164; // [rsp+E8h] [rbp-320h]
  char v165; // [rsp+F0h] [rbp-318h]
  __int64 v166; // [rsp+F8h] [rbp-310h]
  _BYTE v167[88]; // [rsp+118h] [rbp-2F0h] BYREF
  _QWORD v168[2]; // [rsp+170h] [rbp-298h] BYREF
  int v169; // [rsp+180h] [rbp-288h]
  _BYTE v170[400]; // [rsp+188h] [rbp-280h] BYREF
  _BYTE v171[160]; // [rsp+320h] [rbp-E8h] BYREF

  v152 = a4;
  v12 = a3;
  v161 = a1;
  v15.0 = a8.0;
  v155 = a10;
  if ( a11 )
  {
    v16 = 0;
    v159 = 0;
    v17 = a7;
    while ( v16 < a7 )
    {
      v18 = (unsigned int *)&a9[4 * v16];
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (unsigned int *)MmUserProbeAddress;
      a3[v16++] = *v18;
      v159 = v16;
    }
    *a6 = a3;
  }
  else
  {
    v17 = a7;
    if ( a7 )
    {
      v19 = a7;
      do
      {
        *v12 = *(unsigned int *)((char *)v12 + a9 - (char *)a3);
        ++v12;
        --v19;
      }
      while ( v19 );
    }
  }
  v149 = 0LL;
  v20 = ValidateDestroyAllocation(a1, a2, a5, (struct _EX_RUNDOWN_REF *)*a6, v17, (struct _EX_RUNDOWN_REF **)a4, &v149);
  if ( v20 == 255 )
    return 0LL;
  if ( v20 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = a2;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    return 3221225485LL;
  }
  v27 = *((_QWORD *)a2 + 231);
  v148 = v27;
  i = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v171, (__int64)a2, 2, v24, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v171, v28);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL))
      && *((_DWORD *)a2 + 108) == 1
      && *((_BYTE *)DXGPROCESS::GetCurrent() + 346) )
    {
      if ( v149 )
      {
        v29 = (const struct DXGALLOCATION *)*((_QWORD *)v149 + 3);
        for ( i = 1; v29; v29 = (const struct DXGALLOCATION *)*((_QWORD *)v29 + 8) )
        {
          v30 = *(_DWORD *)(*((_QWORD *)v29 + 6) + 4LL);
          if ( (v30 & 1) == 0
            || *((_QWORD *)a2 + 231) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL)
            || v29 == DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)a2, (v30 >> 6) & 0xF) )
          {
            i = 0;
          }
        }
      }
      v27 = v148;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v171);
  }
  if ( v27 )
    v31 = *(_QWORD *)(v27 + 2696);
  else
    v31 = 0LL;
  v168[0] = v31;
  v168[1] = a1;
  if ( v31 )
    v32 = *(_DWORD *)(v31 + 80);
  else
    v32 = 0;
  v169 = 4 * v32;
  memset(v170, 0, sizeof(v170));
  v33 = *(volatile signed __int64 **)(*((_QWORD *)a2 + 2) + 16LL);
  v157 = (struct DXGADAPTER *)v33;
  _InterlockedIncrement64(v33 + 3);
  v156 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v33 + 17, 0LL);
  v158 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v162, (__int64)a2, 2, v34, 0);
  if ( v167[72] )
    COREACCESS::AcquireShared((COREACCESS *)v167, 0LL);
  if ( v165 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35);
    v37[3] = 275LL;
    v37[4] = 4LL;
    v37[5] = &v163;
    v37[6] = 0LL;
    v37[7] = 0LL;
    WdLogEvent5_WdCriticalError(v37);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v164 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v164 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, 72);
      KeWaitForSingleObject((char *)v164 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v164, 0LL);
  }
  v166 = 0LL;
  v165 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) == 4 )
  {
    v40 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v40 + 24) = a2;
    WdLogEvent5_WdEvent(v40);
LABEL_46:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v162);
LABEL_47:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v156);
LABEL_48:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v168, v41);
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 144) == 4 )
  {
    v42 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v42 + 24) = a2;
    WdLogEvent5_WdEvent(v42);
    DxgkDestroyClientAllocation(v43, a2, v17, a4, v149);
    goto LABEL_46;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 216LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v144 = 0;
  v145 = 0;
  v139 = 0;
  v142 = 0;
  v141 = 0;
  v147 = 0;
  v151 = 0LL;
  v44 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v138);
  v150 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v160, a1);
  v47 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v153 = v47;
  v48 = v149;
  if ( v149 )
  {
    if ( *((struct DXGDEVICE **)v149 + 1) != a2 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v46, v45);
      *(_QWORD *)(v49 + 24) = 9609LL;
      WdLogEvent5_WdAssertion(v49);
    }
    v50 = (struct DXGALLOCATION *)*((_QWORD *)v48 + 3);
    if ( v50 )
    {
      v51 = i;
      while ( 1 )
      {
        v52 = *((_QWORD *)v50 + 6);
        v45 = *(_DWORD *)(v52 + 4) & 1;
        v53 = (unsigned int)v45 + ((*(_DWORD *)(v52 + 4) >> 1) & 1) + ((*(_DWORD *)(v52 + 4) >> 13) & 1);
        if ( (unsigned int)v53 > 1 )
        {
          v54 = WdLogNewEntry5_WdAssertion(v53, v45);
          *(_QWORD *)(v54 + 24) = 9618LL;
          WdLogEvent5_WdAssertion(v54);
          v52 = *((_QWORD *)v50 + 6);
        }
        v55 = *(_DWORD *)(v52 + 4);
        if ( (v55 & 1) != 0
          && (DXGDEVICE::IsVidPnSourcePrimaryValid(a2, (v55 >> 6) & 0xF)
           || v47
           && (v57 = *(ADAPTER_DISPLAY **)(v47 + 2696)) != 0LL
           && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v57, v56))
          && !v51 )
        {
          v139 = 1;
          v151 = v50;
          v58 = *((_QWORD *)v50 + 6);
          v44 = (*(_DWORD *)(v58 + 4) >> 6) & 0xF;
          v46 = (ADAPTER_DISPLAY *)v44;
          v147 = 1 << ((*(_DWORD *)(v58 + 4) >> 6) & 0xF);
          v59 = 0;
          goto LABEL_87;
        }
        v46 = (ADAPTER_DISPLAY *)*(unsigned int *)(*((_QWORD *)v50 + 6) + 4LL);
        if ( ((unsigned __int8)v46 & 2) != 0 )
          break;
        v50 = (struct DXGALLOCATION *)*((_QWORD *)v50 + 8);
        if ( !v50 )
          goto LABEL_71;
      }
      v142 = 1;
    }
LABEL_71:
    v59 = 0;
LABEL_87:
    v48 = v149;
    goto LABEL_88;
  }
  if ( v17 )
  {
    v60 = 0;
    v61 = v152;
    while ( 1 )
    {
      v62 = *v61;
      if ( !*v61 )
      {
        v63 = WdLogNewEntry5_WdAssertion(v46, v45);
        *(_QWORD *)(v63 + 24) = 9648LL;
        WdLogEvent5_WdAssertion(v63);
      }
      if ( *((struct DXGDEVICE **)v62 + 1) != a2 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v46, v45);
        *(_QWORD *)(v64 + 24) = 9649LL;
        WdLogEvent5_WdAssertion(v64);
      }
      if ( *(_DWORD *)(v153 + 324) == 1297040209 )
      {
        v45 = *(unsigned int *)(*((_QWORD *)v62 + 6) + 4LL);
        if ( (v45 & 8) != 0 )
          break;
      }
      v65 = *(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL);
      if ( (v65 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(a2, (v65 >> 6) & 0xF)
         || (v46 = *(ADAPTER_DISPLAY **)(v67 + 2696)) != 0LL && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v46, v66)) )
      {
        v139 = 1;
        v141 = v151 != 0LL;
        v151 = v62;
        v44 = (*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF;
        v46 = (ADAPTER_DISPLAY *)v44;
        v147 |= 1 << ((*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF);
      }
      ++v60;
      ++v61;
      if ( v60 >= a7 )
        goto LABEL_86;
    }
    v144 = 1;
    if ( !DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)a2, ((unsigned int)v45 >> 6) & 0xF, v62) )
    {
LABEL_86:
      v59 = v141;
      goto LABEL_87;
    }
    v145 = 1;
    v139 = 1;
    v59 = v151 != 0LL;
    v151 = v62;
    v44 = (*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF;
    v46 = (ADAPTER_DISPLAY *)v44;
    v147 |= 1 << ((*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF);
    goto LABEL_87;
  }
  v59 = 0;
LABEL_88:
  v68 = 0;
  if ( (*((_BYTE *)v161 + 347) & 0x20) == 0 )
    v68 = v139;
  LODWORD(v153) = v68;
  if ( !(_BYTE)v68 )
  {
    v81 = v148;
    if ( i )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v148 + 2696),
        a2,
        *((struct DXGALLOCATION **)v48 + 3),
        (struct COREDEVICEACCESS *)v162);
    goto LABEL_136;
  }
  if ( !v148 || !*(_QWORD *)(v148 + 2696) )
  {
    v69 = WdLogNewEntry5_WdAssertion(v46, v45);
    *(_QWORD *)(v69 + 24) = 9701LL;
    WdLogEvent5_WdAssertion(v69);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v162, v45);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v156);
  DXGDEVICE::FlushScheduler(a2, 5u);
  v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v15.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v168, v70);
  v71 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v138, 1);
  v74 = v71;
  if ( v71 >= 0 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v148 + 316),
                                             &v150,
                                             0LL,
                                             0LL,
                                             0);
    v76 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v77 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v77 + 24) = v76;
      WdLogEvent5_WdEvent(v77);
    }
    if ( v150 )
    {
      if ( *((_QWORD *)v150 + 2) == *((_QWORD *)a2 + 2) )
      {
        *((_BYTE *)v150 + 1905) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v160);
      }
      else
      {
        v150 = 0LL;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v156);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v162);
    if ( *((_DWORD *)a2 + 144) == 4 )
    {
      v94 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v94 + 24) = a2;
      WdLogEvent5_WdEvent(v94);
      v97 = v150;
      if ( v150 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v160, v95);
        *((_BYTE *)v97 + 1905) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v97 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v150 + 2), v150);
      }
      DxgkDestroyClientAllocation(v96, a2, a7, v152, v149);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v160);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v138);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v162);
      if ( !v158 )
        goto LABEL_48;
      goto LABEL_47;
    }
    v78 = v147;
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v168, (struct _KTHREAD **)a2, v147);
    v80 = *((_QWORD *)a2 + 2);
    if ( *((_QWORD *)a2 + 231) != *(_QWORD *)(v80 + 16) )
    {
      v81 = v148;
LABEL_136:
      if ( v142 || v144 )
      {
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v164) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v162, v100);
        if ( v145 )
        {
          v101 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v81 + 2696), v44, 0, 16, 0);
          v104 = v101;
          if ( v101 < 0 )
          {
            v105 = WdLogNewEntry5_WdError(v103, v102);
            *(_QWORD *)(v105 + 24) = v44;
            *(_QWORD *)(v105 + 32) = v104;
            WdLogEvent5_WdError(v105);
          }
        }
        DXGDEVICE::FlushScheduler(a2, 6u);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v164) )
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v162, v106);
        if ( !*(_QWORD *)(v81 + 2704) )
        {
          v107 = *(DXGDODPRESENT **)(*(_QWORD *)(v81 + 2696) + 384LL);
          if ( v107 )
            DXGDODPRESENT::Flush(v107);
        }
      }
      v108 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v108 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v108 + 168)) )
      {
        v111 = WdLogNewEntry5_WdAssertion(v110, v109);
        *(_QWORD *)(v111 + 24) = 6354LL;
        WdLogEvent5_WdAssertion(v111);
      }
      v112 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      v113 = v149;
      if ( *(_BYTE *)(v112 + 209) )
      {
        if ( v149 )
          v114 = *((_DWORD *)v149 + 5);
        else
          v114 = 0;
        v115 = *((_DWORD *)a2 + 110);
        Current = DXGPROCESS::GetCurrent();
        v117 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v112 + 4240);
        v118 = a7;
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
          v117,
          *((_DWORD *)Current + 106),
          v115,
          v114,
          a7,
          v152,
          v15);
        if ( v113 )
          *((_DWORD *)v113 + 5) = 0;
        v119 = v152;
        if ( a7 )
        {
          v120 = v152;
          v121 = a7;
          do
          {
            *((_DWORD *)*v120++ + 24) = 0;
            --v121;
          }
          while ( v121 );
        }
        LOBYTE(v68) = v153;
      }
      else
      {
        v118 = a7;
        v119 = v152;
      }
      if ( v113 )
      {
        DXGDEVICE::TerminateAllocations(
          a2,
          v113,
          1,
          *((struct DXGALLOCATION **)v113 + 3),
          (struct COREDEVICEACCESS *)v162,
          v15);
      }
      else
      {
        v154 = 0LL;
        DXGDEVICE::RemoveAllocationsAndTransferToList(a2, v119, v118, &v154);
        v122 = v154;
        if ( v154 )
        {
          v123 = (struct DXGRESOURCE *)*((_QWORD *)v154 + 5);
          if ( v123 )
          {
            do
            {
              v124 = v122;
              v125 = (_QWORD *)((char *)v122 + 64);
              v122 = (struct DXGALLOCATION *)*((_QWORD *)v122 + 8);
              *v125 = 0LL;
              DXGDEVICE::TerminateAllocations(a2, v123, 0, v124, (struct COREDEVICEACCESS *)v162, v15);
            }
            while ( v122 );
          }
          else
          {
            do
            {
              v126 = v122;
              v127 = (_QWORD *)((char *)v122 + 64);
              v122 = (struct DXGALLOCATION *)*((_QWORD *)v122 + 8);
              *v127 = 0LL;
              DXGDEVICE::TerminateAllocations(a2, 0LL, 0, v126, (struct COREDEVICEACCESS *)v162, v15);
            }
            while ( v122 );
          }
          v154 = v122;
        }
      }
      if ( v142 )
        DXGDEVICE::CloseInternalCddPrimaryHandle(a2, (struct COREDEVICEACCESS *)v162);
      v128 = 0;
      v143 = 0;
      v146[0] = 0;
      if ( (_BYTE)v68 )
      {
        v129 = v150;
        if ( v150 )
        {
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v148 + 2696),
            v150,
            (struct COREDEVICEACCESS *)v162,
            &v143,
            v146,
            v155);
          v128 = v143;
        }
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v168, v128);
        if ( v129 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v162, v130);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v156);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v160, v131);
          *((_BYTE *)v129 + 1905) = 0;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v129 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v150 + 2), v150);
          if ( v138 )
          {
            v138 = 0;
            DxgkReleaseSessionModeChangeLock();
          }
          if ( v143 )
          {
            if ( v146[0] )
            {
              v132 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL);
              if ( v132 )
                (*(void (**)(void))(v132 + 192))();
            }
          }
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v160);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v138);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v162);
      if ( v158 )
      {
        v135 = v157;
        ExReleasePushLockSharedEx((char *)v157 + 136, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v135 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v157 + 2), v157);
      }
      v136 = v169;
      if ( (v169 & 2) != 0 )
      {
        v137 = WdLogNewEntry5_WdAssertion(v134, v133);
        *(_QWORD *)(v137 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v137);
      }
      if ( (v136 & 1) != 0 )
        MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v168);
      return 0LL;
    }
    if ( ((v78 - 1) & v78) != 0 )
    {
      v81 = v148;
      ADAPTER_DISPLAY::DisableAllPrimaries(*(PERESOURCE ***)(v148 + 2696), (PERESOURCE **)v80);
      goto LABEL_136;
    }
    if ( v59 )
    {
      if ( v44 == -1 )
      {
        v82 = WdLogNewEntry5_WdAssertion(v79, v80);
        *(_QWORD *)(v82 + 24) = 9851LL;
        WdLogEvent5_WdAssertion(v82);
      }
      v81 = v148;
      ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v148 + 2696), a2, v44, 0);
      goto LABEL_136;
    }
    v81 = v148;
    v83 = v151;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                         *(ADAPTER_DISPLAY **)(v148 + 2696),
                         (*(_DWORD *)(*((_QWORD *)v151 + 6) + 4LL) >> 6) & 0xF);
    if ( !VidPnSourceOwner || VidPnSourceOwner == a2 )
    {
      v86 = *(_QWORD *)(v81 + 2696);
      if ( *(_QWORD *)(*(_QWORD *)(v86 + 16) + 2704LL) )
      {
        if ( !DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v86 + 16)) )
        {
          v90 = 1;
LABEL_119:
          ADAPTER_DISPLAY::DisableMPOPlanes(v89, v88, v90);
          goto LABEL_120;
        }
        if ( *(_DWORD *)(v87 + 2596) == 2200 )
        {
          v90 = 0;
          goto LABEL_119;
        }
      }
    }
LABEL_120:
    v91 = *((_QWORD *)v83 + 6);
    if ( (*(_DWORD *)(v91 + 4) & 1) == 0 )
    {
      v92 = WdLogNewEntry5_WdAssertion(v91, v85);
      *(_QWORD *)(v92 + 24) = 9878LL;
      WdLogEvent5_WdAssertion(v92);
      v91 = *((_QWORD *)v83 + 6);
    }
    if ( ((*(_DWORD *)(v91 + 4) >> 6) & 0xF) != v44 )
    {
      v93 = WdLogNewEntry5_WdAssertion(v91, v85);
      *(_QWORD *)(v93 + 24) = 9879LL;
      WdLogEvent5_WdAssertion(v93);
    }
    ADAPTER_DISPLAY::DisablePrimaryAllocation(*(PERESOURCE ***)(v81 + 2696), a2, v83);
    goto LABEL_136;
  }
  v98 = WdLogNewEntry5_WdError(v73, v72);
  *(_QWORD *)(v98 + 24) = v74;
  WdLogEvent5_WdError(v98);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v160);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v138);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v162);
  if ( v158 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v156);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v168, v99);
  return (unsigned int)v74;
}
