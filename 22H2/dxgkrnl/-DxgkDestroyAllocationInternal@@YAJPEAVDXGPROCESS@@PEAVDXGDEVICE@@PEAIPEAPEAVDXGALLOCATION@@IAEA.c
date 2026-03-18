/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B8EF0
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B85E0 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0004690 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046C0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0005288 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00052BC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0007158 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000A958 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000AF80 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001651C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0016E64 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C001BA24 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0023F34 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024E8C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0024EB4 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C0047D88 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173118 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017664C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0186B84 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0188608 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C018893C (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0188A34 (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0188AA4 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C018AF08 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0194BE8 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0194C28 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01952F8 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0195B14 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01B9800 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C01C7EA0 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB6E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01E76F8 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C01EA5E4 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BC360 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02BC74C (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     DxgkDestroyClientAllocation @ 0x1C02D9980 (DxgkDestroyClientAllocation.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C02EC8D8 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C031266C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C033D898 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0387C78 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

__int64 __fastcall DxgkDestroyAllocationInternal(
        struct DXGPROCESS *a1,
        struct DXGDEVICE *a2,
        unsigned int *a3,
        struct DXGALLOCATION **a4,
        unsigned int a5,
        const unsigned int **a6,
        unsigned int a7,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a8,
        const unsigned int *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10,
        unsigned __int8 a11)
{
  struct DXGALLOCATION **v11; // r11
  DXG_GUEST_VIRTUALGPU_VMBUS *v13; // r13
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned int *v17; // rdx
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int8 v27; // di
  __int64 v28; // r9
  struct DXGRESOURCE *v29; // rax
  unsigned int j; // edi
  unsigned __int8 v31; // dl
  unsigned int v32; // ecx
  __int64 v33; // r13
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rcx
  struct DXGRESOURCE *v37; // r13
  struct DXGALLOCATION **v38; // r10
  struct DXGALLOCATION **v39; // rdi
  struct DXGRESOURCE *v40; // r14
  struct DXGALLOCATION **v41; // r9
  unsigned __int8 v42; // al
  char *v43; // rcx
  char v44; // bl
  struct DXGALLOCATION *v46; // r13
  unsigned int v47; // r8d
  struct DXGALLOCATION *i; // rdi
  unsigned int v49; // r8d
  unsigned int v50; // r8d
  __int64 v51; // r9
  ADAPTER_DISPLAY *v52; // rcx
  char v53; // r9
  unsigned int v54; // r8d
  int v55; // eax
  __int64 v56; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  unsigned int v58; // edi
  __int64 v59; // rdx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v61; // r10
  __int64 v62; // r8
  unsigned int v63; // r9d
  ADAPTER_DISPLAY *v64; // r10
  unsigned __int8 v65; // r8
  struct DXGDEVICE *v66; // rbx
  unsigned int v67; // edx
  char *v68; // rdx
  __int64 v69; // rcx
  const struct DXGALLOCATION *v70; // rdi
  unsigned int v71; // edx
  __int64 v72; // rcx
  unsigned int v73; // edx
  unsigned int v74; // r8d
  ADAPTER_DISPLAY *v75; // rcx
  unsigned __int8 IsVidPnSourceVisible; // al
  unsigned int v77; // edi
  unsigned int v78; // r8d
  __int64 v79; // rcx
  struct DXGDEVICE *v80; // rbx
  int v81; // eax
  __int64 v82; // rdi
  char *v83; // rdx
  DXGDODPRESENT *v84; // rcx
  unsigned int v85; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION **v87; // rcx
  __int64 v88; // rdx
  struct DXGALLOCATION **v89; // r9
  __int64 v90; // rax
  char v91; // [rsp+50h] [rbp-3B8h]
  unsigned __int8 v92; // [rsp+51h] [rbp-3B7h] BYREF
  char v93; // [rsp+52h] [rbp-3B6h] BYREF
  bool v94; // [rsp+53h] [rbp-3B5h]
  unsigned __int8 v95; // [rsp+54h] [rbp-3B4h]
  unsigned __int8 v96; // [rsp+55h] [rbp-3B3h]
  char v97; // [rsp+56h] [rbp-3B2h]
  unsigned __int8 v98; // [rsp+57h] [rbp-3B1h] BYREF
  unsigned int v99; // [rsp+58h] [rbp-3B0h]
  unsigned int v100; // [rsp+5Ch] [rbp-3ACh]
  struct DXGALLOCATION **v101; // [rsp+60h] [rbp-3A8h] BYREF
  __int64 v102; // [rsp+68h] [rbp-3A0h]
  struct DXGALLOCATION *v103; // [rsp+70h] [rbp-398h]
  struct DXGRESOURCE *v104; // [rsp+78h] [rbp-390h] BYREF
  __int64 v105; // [rsp+80h] [rbp-388h]
  struct DXGDEVICE *v106; // [rsp+88h] [rbp-380h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v107; // [rsp+90h] [rbp-378h]
  __int64 v108; // [rsp+98h] [rbp-370h] BYREF
  struct DXGADAPTER *v109; // [rsp+A0h] [rbp-368h]
  char v110; // [rsp+A8h] [rbp-360h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v111; // [rsp+B0h] [rbp-358h]
  unsigned int v112; // [rsp+B8h] [rbp-350h]
  _BYTE v113[16]; // [rsp+C0h] [rbp-348h] BYREF
  _BYTE v114[8]; // [rsp+D0h] [rbp-338h] BYREF
  _BYTE v115[16]; // [rsp+D8h] [rbp-330h] BYREF
  DXGADAPTER *v116; // [rsp+E8h] [rbp-320h]
  char v117; // [rsp+F0h] [rbp-318h]
  __int64 v118; // [rsp+F8h] [rbp-310h]
  _BYTE v119[88]; // [rsp+118h] [rbp-2F0h] BYREF
  _QWORD v120[2]; // [rsp+170h] [rbp-298h] BYREF
  int v121; // [rsp+180h] [rbp-288h]
  _BYTE v122[400]; // [rsp+188h] [rbp-280h] BYREF
  _BYTE v123[160]; // [rsp+320h] [rbp-E8h] BYREF

  v11 = a4;
  v101 = a4;
  v13 = a1;
  v107 = a1;
  v14.0 = a8.0;
  v111 = a10;
  if ( a11 )
  {
    v15 = 0;
    v16 = a7;
    while ( 1 )
    {
      v112 = v15;
      if ( v15 >= a7 )
        break;
      v17 = (unsigned int *)&a9[v15];
      if ( (unsigned __int64)v17 >= MmUserProbeAddress )
        v17 = (unsigned int *)MmUserProbeAddress;
      a3[v15++] = *v17;
    }
    *a6 = a3;
    v11 = v101;
  }
  else
  {
    v67 = 0;
    v16 = a7;
    while ( v67 < a7 )
    {
      a3[v67] = a9[v67];
      ++v67;
    }
  }
  v104 = 0LL;
  v18 = ValidateDestroyAllocation(a1, a2, a5, *a6, v16, v11, &v104);
  if ( v18 == 255 )
    return 0LL;
  if ( v18 < 0 )
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    return 3221225485LL;
  }
  v20 = *((_QWORD *)a2 + 235);
  v102 = v20;
  v92 = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v123, (__int64)a2, 2, v19, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v123, v68);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL))
      && *((_DWORD *)a2 + 116) == 1
      && (*((_DWORD *)DXGPROCESS::GetCurrent(v69) + 106) & 4) != 0 )
    {
      if ( v104 )
      {
        v70 = (const struct DXGALLOCATION *)*((_QWORD *)v104 + 3);
        v92 = 1;
        while ( v70 )
        {
          v71 = *(_DWORD *)(*((_QWORD *)v70 + 6) + 4LL);
          if ( (v71 & 1) == 0
            || *((_QWORD *)a2 + 235) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL)
            || v70 == DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)a2, (v71 >> 6) & 0xF) )
          {
            v92 = 0;
          }
          v70 = (const struct DXGALLOCATION *)*((_QWORD *)v70 + 8);
        }
      }
      v20 = v102;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v123);
  }
  if ( v20 )
    v21 = *(_QWORD *)(v20 + 2920);
  else
    v21 = 0LL;
  v120[0] = v21;
  v120[1] = v13;
  if ( v21 )
    v22 = *(_DWORD *)(v21 + 96);
  else
    v22 = 0;
  v121 = 4 * v22;
  memset(v122, 0, sizeof(v122));
  v23 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v109 = (struct DXGADAPTER *)v23;
  _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
  v108 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v23 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v23 + 152));
  v110 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v114, (__int64)a2, 2, v24, 0);
  if ( v119[72] )
    COREACCESS::AcquireShared((COREACCESS *)v119, 0LL);
  if ( v117 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v115, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v116 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v116 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v26, 72);
      KeWaitForSingleObject((char *)v116 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v116, 0LL);
  }
  v118 = 0LL;
  v117 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) == 4 )
  {
    WdLogSingleEntry1(4LL, a2);
LABEL_137:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
LABEL_138:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v108);
LABEL_139:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v120);
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 152) == 4 )
  {
    WdLogSingleEntry1(4LL, a2);
    DxgkDestroyClientAllocation(v72, a2, v16, v101, v104);
    goto LABEL_137;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 216LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v14.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v96 = 0;
  v97 = 0;
  v27 = 0;
  v91 = 0;
  v95 = 0;
  v94 = 0;
  v100 = 0;
  v103 = 0LL;
  v99 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v93);
  v106 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v113, v13);
  v28 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v105 = v28;
  v29 = v104;
  if ( v104 )
  {
    if ( *((struct DXGDEVICE **)v104 + 1) != a2 )
    {
      WdLogSingleEntry1(1LL, 9819LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pResource->m_pDevice == pDevice",
        9819LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v29 = v104;
    }
    for ( i = (struct DXGALLOCATION *)*((_QWORD *)v29 + 3); i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
    {
      if ( ((*(_DWORD *)(*((_QWORD *)i + 6) + 4LL) & 2) != 0)
         + ((*(_DWORD *)(*((_QWORD *)i + 6) + 4LL) & 0x2000) != 0)
         + (*(_DWORD *)(*((_QWORD *)i + 6) + 4LL) & 1u) > 1 )
      {
        WdLogSingleEntry1(1LL, 9828LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pCurrentAlloc->m_pAllocation->m_Primary ? 1 : 0) + (pCurrentAlloc->m_pAllocation->m_CddPrimary ? 1 :"
                    " 0) + (pCurrentAlloc->m_pAllocation->m_DirectFlip ? 1 : 0) <= 1",
          9828LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v49 = *(_DWORD *)(*((_QWORD *)i + 6) + 4LL);
      if ( (v49 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(a2, (v49 >> 6) & 0xF)
         || v51 && (v52 = *(ADAPTER_DISPLAY **)(v51 + 2920)) != 0LL && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v52, v50))
        && !v92 )
      {
        v91 = 1;
        v103 = i;
        v99 = (*(_DWORD *)(*((_QWORD *)i + 6) + 4LL) >> 6) & 0xF;
        v100 = 1 << v99;
        break;
      }
      if ( (*(_DWORD *)(*((_QWORD *)i + 6) + 4LL) & 2) != 0 )
      {
        v95 = 1;
        break;
      }
    }
    v94 = 0;
LABEL_31:
    v27 = v91;
    goto LABEL_32;
  }
  if ( !v16 )
  {
LABEL_32:
    v31 = 0;
    v32 = v99;
    goto LABEL_33;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= v16 )
      goto LABEL_30;
    v46 = v101[j];
    if ( !v46 )
    {
      WdLogSingleEntry1(1LL, 9858LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pCurrentAlloc != NULL", 9858LL, 0LL, 0LL, 0LL, 0LL);
      v28 = v105;
    }
    if ( *((struct DXGDEVICE **)v46 + 1) != a2 )
    {
      WdLogSingleEntry1(1LL, 9859LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentAlloc->m_pDevice == pDevice",
        9859LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v28 = v105;
    }
    if ( *(_DWORD *)(v28 + 412) == 1297040209 )
    {
      v73 = *(_DWORD *)(*((_QWORD *)v46 + 6) + 4LL);
      if ( (v73 & 8) != 0 )
        break;
    }
    v47 = *(_DWORD *)(*((_QWORD *)v46 + 6) + 4LL);
    if ( (v47 & 1) != 0 )
    {
      if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, (v47 >> 6) & 0xF)
        || (v75 = *(ADAPTER_DISPLAY **)(v28 + 2920)) != 0LL
        && (IsVidPnSourceVisible = ADAPTER_DISPLAY::IsVidPnSourceVisible(v75, v74), v28 = v105, !IsVidPnSourceVisible) )
      {
        v91 = 1;
        v94 = v103 != 0LL;
        v103 = v46;
        v99 = (*(_DWORD *)(*((_QWORD *)v46 + 6) + 4LL) >> 6) & 0xF;
        v100 |= 1 << v99;
      }
    }
  }
  v96 = 1;
  if ( !DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)a2, (v73 >> 6) & 0xF, v46) )
  {
LABEL_30:
    v13 = v107;
    goto LABEL_31;
  }
  v31 = 1;
  v97 = 1;
  v27 = 1;
  v91 = 1;
  v94 = v103 != 0LL;
  v103 = v46;
  v32 = (*(_DWORD *)(*((_QWORD *)v46 + 6) + 4LL) >> 6) & 0xF;
  v99 = v32;
  v100 |= 1 << v32;
  v13 = v107;
LABEL_33:
  if ( (*((_DWORD *)v13 + 106) & 0x100) != 0 )
  {
    v27 = 0;
    v91 = 0;
  }
  v33 = v32;
  WdLogSingleEntry5(8LL, v27, v96, v31, v95, v32);
  if ( !v27 )
  {
    v34 = v102;
    if ( v92 )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v102 + 2920),
        a2,
        *((struct DXGALLOCATION **)v104 + 3),
        (struct COREDEVICEACCESS *)v114);
    goto LABEL_38;
  }
  if ( !v102 || !*(_QWORD *)(v102 + 2920) )
  {
    WdLogSingleEntry1(1LL, 9913LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
      9913LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v114);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v108);
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2820LL) <= 2200 )
  {
    v53 = 0;
    goto LABEL_150;
  }
  v53 = 1;
  if ( ((v100 - 1) & v100) != 0 )
  {
LABEL_150:
    v54 = -3;
    goto LABEL_92;
  }
  v54 = v99;
LABEL_92:
  DXGDEVICE::FlushScheduler(a2, 5u, v54, v53);
  v14.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v14.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v120);
  v55 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v93, 1);
  v56 = v55;
  if ( v55 >= 0 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v102 + 404),
                                             &v106,
                                             0LL,
                                             0LL,
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
      WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
    if ( v106 )
    {
      if ( *((_QWORD *)v106 + 2) == *((_QWORD *)a2 + 2) )
      {
        *((_BYTE *)v106 + 1937) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v113);
      }
      else
      {
        v106 = 0LL;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v108);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v114);
    if ( *((_DWORD *)a2 + 152) != 4 )
    {
      v58 = v100;
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v120, (struct _KTHREAD **)a2, v100);
      v59 = *((_QWORD *)a2 + 2);
      if ( *((_QWORD *)a2 + 235) == *(_QWORD *)(v59 + 16) )
      {
        if ( ((v58 - 1) & v58) == 0 )
        {
          if ( v94 )
          {
            v77 = v99;
            if ( v99 == -1 )
            {
              WdLogSingleEntry1(1LL, 10086LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"VidpnSourceInvolved != D3DDDI_ID_UNINITIALIZED",
                10086LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v78 = v77;
            v34 = v102;
            ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v102 + 2920), a2, v78, 0);
            goto LABEL_38;
          }
          v34 = v102;
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                               *(ADAPTER_DISPLAY **)(v102 + 2920),
                               (*(_DWORD *)(*((_QWORD *)v103 + 6) + 4LL) >> 6) & 0xF);
          if ( VidPnSourceOwner && VidPnSourceOwner != a2 )
            goto LABEL_105;
          v61 = *(_QWORD *)(v34 + 2920);
          if ( !*(_QWORD *)(*(_QWORD *)(v61 + 16) + 2928LL) )
            goto LABEL_105;
          if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v61 + 16)) )
          {
            if ( *(_DWORD *)(v62 + 2820) != 2200 )
              goto LABEL_105;
            v65 = 0;
          }
          else
          {
            v65 = 1;
          }
          ADAPTER_DISPLAY::DisableMPOPlanes(v64, v63, v65);
LABEL_105:
          if ( (*(_DWORD *)(*((_QWORD *)v103 + 6) + 4LL) & 1) == 0 )
          {
            WdLogSingleEntry1(1LL, 10113LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"PrimaryAllocation->m_pAllocation->m_Primary",
              10113LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( ((*(_DWORD *)(*((_QWORD *)v103 + 6) + 4LL) >> 6) & 0xF) != v99 )
          {
            WdLogSingleEntry1(1LL, 10114LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"PrimaryAllocation->m_pAllocation->m_VidPnSourceId == VidpnSourceInvolved",
              10114LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          ADAPTER_DISPLAY::DisablePrimaryAllocation(*(PERESOURCE ***)(v34 + 2920), a2, v103);
          goto LABEL_38;
        }
        v34 = v102;
        ADAPTER_DISPLAY::DisableAllPrimaries(*(PERESOURCE ***)(v102 + 2920), (PERESOURCE **)v59);
      }
      else
      {
        v34 = v102;
      }
LABEL_38:
      if ( v95 || v96 )
      {
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v116) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v114);
        if ( v97 )
        {
          v81 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v34 + 2920), v99, 0, 16, 0);
          if ( v81 < 0 )
          {
            v82 = v81;
            WdLogSingleEntry2(2LL, v33, v81);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"SetVidPnSourceVisibility(0x%I64x) failed with status 0x%I64x",
              v33,
              v82,
              0LL,
              0LL,
              0LL);
            v34 = v102;
          }
        }
        DXGDEVICE::FlushScheduler(a2, 6u, 0xFFFFFFFD, 0);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v116) )
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v114, v83);
        if ( v34 )
        {
          if ( !*(_QWORD *)(v34 + 2928) )
          {
            v84 = *(DXGDODPRESENT **)(*(_QWORD *)(v34 + 2920) + 448LL);
            if ( v84 )
              DXGDODPRESENT::Flush(v84);
          }
        }
      }
      v35 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v35 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v35 + 168)) )
      {
        WdLogSingleEntry1(1LL, 6562LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"GetRenderAdapter()->IsCoreResourceSharedOwner()",
          6562LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v36 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      v37 = v104;
      if ( *(_BYTE *)(v36 + 209) )
      {
        v107 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v36 + 4472);
        if ( v104 )
          v100 = *((_DWORD *)v104 + 5);
        else
          v100 = 0;
        v85 = *((_DWORD *)a2 + 118);
        Current = DXGPROCESS::GetCurrent(v36);
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
          v107,
          *((_DWORD *)Current + 126),
          v85,
          v100,
          v16,
          v101,
          v14);
        if ( v37 )
          *((_DWORD *)v37 + 5) = 0;
        v38 = v101;
        if ( v16 )
        {
          v87 = v101;
          v88 = v16;
          do
          {
            *((_BYTE *)*v87++ + 128) &= ~4u;
            --v88;
          }
          while ( v88 );
        }
      }
      else
      {
        v38 = v101;
      }
      if ( v37 )
      {
        DXGDEVICE::TerminateAllocations(
          a2,
          v37,
          1,
          *((struct DXGALLOCATION **)v37 + 3),
          (struct COREDEVICEACCESS *)v114,
          v14);
      }
      else
      {
        v101 = 0LL;
        DXGDEVICE::RemoveAllocationsAndTransferToList(a2, v38, v16, (struct DXGALLOCATION **)&v101);
        v39 = v101;
        if ( v101 )
        {
          v40 = v101[5];
          if ( v40 )
          {
            do
            {
              v89 = v39;
              v39 = (struct DXGALLOCATION **)v39[8];
              v89[8] = 0LL;
              DXGDEVICE::TerminateAllocations(
                a2,
                v40,
                0,
                (struct DXGALLOCATION *)v89,
                (struct COREDEVICEACCESS *)v114,
                v14);
            }
            while ( v39 );
          }
          else
          {
            do
            {
              v41 = v39;
              v39 = (struct DXGALLOCATION **)v39[8];
              v41[8] = 0LL;
              DXGDEVICE::TerminateAllocations(
                a2,
                0LL,
                0,
                (struct DXGALLOCATION *)v41,
                (struct COREDEVICEACCESS *)v114,
                v14);
            }
            while ( v39 );
          }
          v101 = v39;
        }
      }
      if ( v95 )
        DXGDEVICE::CloseInternalCddPrimaryHandle(a2, (struct COREDEVICEACCESS *)v114);
      v42 = 0;
      v92 = 0;
      v98 = 0;
      if ( v91 )
      {
        v66 = v106;
        if ( v106 )
        {
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v102 + 2920),
            v106,
            (struct COREDEVICEACCESS *)v114,
            &v92,
            &v98,
            v111);
          v42 = v92;
        }
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v120, v42);
        if ( v66 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v114);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v108);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v113);
          *((_BYTE *)v66 + 1937) = 0;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v106 + 2), v106);
          if ( v93 )
          {
            v93 = 0;
            DxgkReleaseSessionModeChangeLock();
          }
          if ( v92 )
          {
            if ( v98 )
            {
              v90 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL);
              if ( v90 )
                (*(void (**)(void))(v90 + 192))();
            }
          }
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v113);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v93);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
      if ( v110 )
      {
        v43 = (char *)v109 + 136;
        _InterlockedDecrement((volatile signed __int32 *)v109 + 38);
        ExReleasePushLockSharedEx(v43, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v109 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v109 + 2), v109);
      }
      v44 = v121;
      if ( (v121 & 2) != 0 )
      {
        WdLogSingleEntry1(1LL, 217LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(FALSE == m_bStateSaved)", 217LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (v44 & 1) != 0 )
        MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v120);
      return 0LL;
    }
    WdLogSingleEntry1(4LL, a2);
    v80 = v106;
    if ( v106 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v113);
      *((_BYTE *)v80 + 1937) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v80 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v106 + 2), v106);
    }
    DxgkDestroyClientAllocation(v79, a2, v16, v101, v104);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v113);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v93);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
    if ( !v110 )
      goto LABEL_139;
    goto LABEL_138;
  }
  WdLogSingleEntry1(2LL, v55);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
    v56,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v113);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v93);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
  if ( v110 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v108);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v120);
  return (unsigned int)v56;
}
