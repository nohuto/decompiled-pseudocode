/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A990 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0002C10 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0002CE8 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00046DC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0009440 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B3E4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C001B7C4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0024440 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025280 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00252A8 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C0046D28 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01738D4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176048 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C01787D0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0178B04 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0178BFC (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0178CDC (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0178D4C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C017B0DC (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017E400 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C018BBC0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0192C30 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01957D0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C01C7204 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C7400 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C01CACC4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01DAB74 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C01DD468 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02B7460 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02B7824 (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     DxgkDestroyClientAllocation @ 0x1C02D4BF0 (DxgkDestroyClientAllocation.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C02E7B48 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0338E58 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0383408 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
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
  ADAPTER_DISPLAY *v13; // r13
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
  __int64 v53; // r8
  int v54; // eax
  __int64 v55; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  unsigned int v57; // edi
  __int64 v58; // rdx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  unsigned int v60; // edi
  DXGADAPTER *v61; // rcx
  unsigned __int8 v62; // r8
  struct DXGDEVICE *v63; // rbx
  unsigned int v64; // edx
  char *v65; // rdx
  const struct DXGALLOCATION *v66; // rdi
  unsigned int v67; // edx
  __int64 v68; // rcx
  unsigned int v69; // edx
  unsigned int v70; // r8d
  ADAPTER_DISPLAY *v71; // rcx
  unsigned __int8 IsVidPnSourceVisible; // al
  unsigned int v73; // edi
  unsigned int v74; // r8d
  __int64 v75; // rcx
  struct DXGDEVICE *v76; // rbx
  int v77; // eax
  __int64 v78; // rdi
  char *v79; // rdx
  DXGDODPRESENT *v80; // rcx
  unsigned int v81; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION **v83; // rcx
  __int64 v84; // rdx
  struct DXGALLOCATION **v85; // r9
  __int64 v86; // rax
  char v87; // [rsp+50h] [rbp-3B8h]
  unsigned __int8 v88; // [rsp+51h] [rbp-3B7h] BYREF
  char v89; // [rsp+52h] [rbp-3B6h] BYREF
  bool v90; // [rsp+53h] [rbp-3B5h]
  unsigned __int8 v91; // [rsp+54h] [rbp-3B4h]
  unsigned __int8 v92; // [rsp+55h] [rbp-3B3h]
  char v93; // [rsp+56h] [rbp-3B2h]
  unsigned __int8 v94; // [rsp+57h] [rbp-3B1h] BYREF
  unsigned int v95; // [rsp+58h] [rbp-3B0h]
  unsigned int v96; // [rsp+5Ch] [rbp-3ACh]
  __int64 v97; // [rsp+60h] [rbp-3A8h]
  struct DXGALLOCATION **v98; // [rsp+68h] [rbp-3A0h] BYREF
  struct DXGALLOCATION *v99; // [rsp+70h] [rbp-398h]
  struct DXGRESOURCE *v100; // [rsp+78h] [rbp-390h] BYREF
  ADAPTER_DISPLAY *v101; // [rsp+80h] [rbp-388h]
  __int64 v102; // [rsp+88h] [rbp-380h]
  struct DXGDEVICE *v103; // [rsp+90h] [rbp-378h] BYREF
  __int64 v104; // [rsp+98h] [rbp-370h] BYREF
  struct DXGADAPTER *v105; // [rsp+A0h] [rbp-368h]
  char v106; // [rsp+A8h] [rbp-360h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v107; // [rsp+B0h] [rbp-358h]
  unsigned int v108; // [rsp+B8h] [rbp-350h]
  _BYTE v109[16]; // [rsp+C0h] [rbp-348h] BYREF
  _BYTE v110[8]; // [rsp+D0h] [rbp-338h] BYREF
  _BYTE v111[16]; // [rsp+D8h] [rbp-330h] BYREF
  DXGADAPTER *v112; // [rsp+E8h] [rbp-320h]
  char v113; // [rsp+F0h] [rbp-318h]
  __int64 v114; // [rsp+F8h] [rbp-310h]
  _BYTE v115[88]; // [rsp+118h] [rbp-2F0h] BYREF
  _QWORD v116[2]; // [rsp+170h] [rbp-298h] BYREF
  int v117; // [rsp+180h] [rbp-288h]
  _BYTE v118[400]; // [rsp+188h] [rbp-280h] BYREF
  _BYTE v119[160]; // [rsp+320h] [rbp-E8h] BYREF

  v11 = a4;
  v98 = a4;
  v13 = a1;
  v101 = a1;
  v14.0 = a8.0;
  v107 = a10;
  if ( a11 )
  {
    v15 = 0;
    v16 = a7;
    while ( 1 )
    {
      v108 = v15;
      if ( v15 >= a7 )
        break;
      v17 = (unsigned int *)&a9[v15];
      if ( (unsigned __int64)v17 >= MmUserProbeAddress )
        v17 = (unsigned int *)MmUserProbeAddress;
      a3[v15++] = *v17;
    }
    *a6 = a3;
    v11 = v98;
  }
  else
  {
    v64 = 0;
    v16 = a7;
    while ( v64 < a7 )
    {
      a3[v64] = a9[v64];
      ++v64;
    }
  }
  v100 = 0LL;
  v18 = ValidateDestroyAllocation(a1, a2, a5, *a6, v16, v11, &v100);
  if ( v18 == 255 )
    return 0LL;
  if ( v18 < 0 )
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    return 3221225485LL;
  }
  v20 = *((_QWORD *)a2 + 235);
  v97 = v20;
  v88 = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v119, (__int64)a2, 2, v19, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v119, v65);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL))
      && *((_DWORD *)a2 + 116) == 1
      && (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 4) != 0 )
    {
      if ( v100 )
      {
        v66 = (const struct DXGALLOCATION *)*((_QWORD *)v100 + 3);
        v88 = 1;
        while ( v66 )
        {
          v67 = *(_DWORD *)(*((_QWORD *)v66 + 6) + 4LL);
          if ( (v67 & 1) == 0
            || *((_QWORD *)a2 + 235) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL)
            || v66 == DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)a2, (v67 >> 6) & 0xF) )
          {
            v88 = 0;
          }
          v66 = (const struct DXGALLOCATION *)*((_QWORD *)v66 + 8);
        }
      }
      v20 = v97;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
  }
  if ( v20 )
    v21 = *(_QWORD *)(v20 + 2920);
  else
    v21 = 0LL;
  v116[0] = v21;
  v116[1] = v13;
  if ( v21 )
    v22 = *(_DWORD *)(v21 + 96);
  else
    v22 = 0;
  v117 = 4 * v22;
  memset(v118, 0, sizeof(v118));
  v23 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v105 = (struct DXGADAPTER *)v23;
  _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
  v104 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v23 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v23 + 152));
  v106 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v110, (__int64)a2, 2, v24, 0);
  if ( v115[72] )
    COREACCESS::AcquireShared((COREACCESS *)v115, 0LL);
  if ( v113 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v111, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v112 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v112 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (const EVENT_DESCRIPTOR *)"g", v26, 72);
      KeWaitForSingleObject((char *)v112 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v112, 0LL);
  }
  v114 = 0LL;
  v113 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) == 4 )
  {
    WdLogSingleEntry1(4LL, a2);
LABEL_138:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
LABEL_139:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
LABEL_140:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v116);
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 152) == 4 )
  {
    WdLogSingleEntry1(4LL, a2);
    DxgkDestroyClientAllocation(v68, a2, v16, v98, v100);
    goto LABEL_138;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 216LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v14.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v92 = 0;
  v93 = 0;
  v27 = 0;
  v87 = 0;
  v91 = 0;
  v90 = 0;
  v96 = 0;
  v99 = 0LL;
  v95 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v89);
  v103 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109, v13);
  v28 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v102 = v28;
  v29 = v100;
  if ( v100 )
  {
    if ( *((struct DXGDEVICE **)v100 + 1) != a2 )
    {
      WdLogSingleEntry1(1LL, 9779LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pResource->m_pDevice == pDevice",
        9779LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v29 = v100;
    }
    for ( i = (struct DXGALLOCATION *)*((_QWORD *)v29 + 3); i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
    {
      if ( ((*(_DWORD *)(*((_QWORD *)i + 6) + 4LL) & 2) != 0)
         + ((*(_DWORD *)(*((_QWORD *)i + 6) + 4LL) & 0x2000) != 0)
         + (*(_DWORD *)(*((_QWORD *)i + 6) + 4LL) & 1u) > 1 )
      {
        WdLogSingleEntry1(1LL, 9788LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pCurrentAlloc->m_pAllocation->m_Primary ? 1 : 0) + (pCurrentAlloc->m_pAllocation->m_CddPrimary ? 1 :"
                    " 0) + (pCurrentAlloc->m_pAllocation->m_DirectFlip ? 1 : 0) <= 1",
          9788LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v49 = *(_DWORD *)(*((_QWORD *)i + 6) + 4LL);
      if ( (v49 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(a2, (v49 >> 6) & 0xF)
         || v51 && (v52 = *(ADAPTER_DISPLAY **)(v51 + 2920)) != 0LL && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v52, v50))
        && !v88 )
      {
        v87 = 1;
        v99 = i;
        v95 = (*(_DWORD *)(*((_QWORD *)i + 6) + 4LL) >> 6) & 0xF;
        v96 = 1 << v95;
        break;
      }
      if ( (*(_DWORD *)(*((_QWORD *)i + 6) + 4LL) & 2) != 0 )
      {
        v91 = 1;
        break;
      }
    }
    v90 = 0;
LABEL_31:
    v27 = v87;
  }
  else if ( v16 )
  {
    for ( j = 0; ; ++j )
    {
      if ( j >= v16 )
        goto LABEL_30;
      v46 = v98[j];
      if ( !v46 )
      {
        WdLogSingleEntry1(1LL, 9818LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pCurrentAlloc != NULL", 9818LL, 0LL, 0LL, 0LL, 0LL);
        v28 = v102;
      }
      if ( *((struct DXGDEVICE **)v46 + 1) != a2 )
      {
        WdLogSingleEntry1(1LL, 9819LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCurrentAlloc->m_pDevice == pDevice",
          9819LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v28 = v102;
      }
      if ( *(_DWORD *)(v28 + 412) == 1297040209 )
      {
        v69 = *(_DWORD *)(*((_QWORD *)v46 + 6) + 4LL);
        if ( (v69 & 8) != 0 )
          break;
      }
      v47 = *(_DWORD *)(*((_QWORD *)v46 + 6) + 4LL);
      if ( (v47 & 1) != 0 )
      {
        if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, (v47 >> 6) & 0xF)
          || (v71 = *(ADAPTER_DISPLAY **)(v28 + 2920)) != 0LL
          && (IsVidPnSourceVisible = ADAPTER_DISPLAY::IsVidPnSourceVisible(v71, v70), v28 = v102, !IsVidPnSourceVisible) )
        {
          v87 = 1;
          v90 = v99 != 0LL;
          v99 = v46;
          v95 = (*(_DWORD *)(*((_QWORD *)v46 + 6) + 4LL) >> 6) & 0xF;
          v96 |= 1 << v95;
        }
      }
    }
    v92 = 1;
    if ( !DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)a2, (v69 >> 6) & 0xF, v46) )
    {
LABEL_30:
      v13 = v101;
      goto LABEL_31;
    }
    v31 = 1;
    v93 = 1;
    v27 = 1;
    v87 = 1;
    v90 = v99 != 0LL;
    v99 = v46;
    v32 = (*(_DWORD *)(*((_QWORD *)v46 + 6) + 4LL) >> 6) & 0xF;
    v95 = v32;
    v96 |= 1 << v32;
    v13 = v101;
    goto LABEL_33;
  }
  v31 = 0;
  v32 = v95;
LABEL_33:
  if ( (*((_DWORD *)v13 + 106) & 0x100) != 0 )
  {
    v27 = 0;
    v87 = 0;
  }
  v33 = v32;
  WdLogSingleEntry5(8LL, v27, v92, v31, v91, v32);
  if ( !v27 )
  {
    v34 = v97;
    if ( v88 )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v97 + 2920),
        a2,
        *((struct DXGALLOCATION **)v100 + 3),
        (struct COREDEVICEACCESS *)v110);
    goto LABEL_38;
  }
  if ( !v97 || !*(_QWORD *)(v97 + 2920) )
  {
    WdLogSingleEntry1(1LL, 9873LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
      9873LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v110);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2820LL) <= 2200 || ((v96 - 1) & v96) != 0 )
    v53 = 4294967293LL;
  else
    v53 = v95;
  DXGDEVICE::FlushScheduler(a2, 5LL, v53);
  v14.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v14.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v116);
  v54 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v89, 1);
  v55 = v54;
  if ( v54 >= 0 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v97 + 404),
                                             &v103,
                                             0LL,
                                             0LL,
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
      WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
    if ( v103 )
    {
      if ( *((_QWORD *)v103 + 2) == *((_QWORD *)a2 + 2) )
      {
        *((_BYTE *)v103 + 1937) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v109);
      }
      else
      {
        v103 = 0LL;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v110);
    if ( *((_DWORD *)a2 + 152) != 4 )
    {
      v57 = v96;
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v116, (struct _KTHREAD **)a2, v96);
      v58 = *((_QWORD *)a2 + 2);
      if ( *((_QWORD *)a2 + 235) == *(_QWORD *)(v58 + 16) )
      {
        if ( ((v57 - 1) & v57) == 0 )
        {
          if ( v90 )
          {
            v73 = v95;
            if ( v95 == -1 )
            {
              WdLogSingleEntry1(1LL, 10046LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"VidpnSourceInvolved != D3DDDI_ID_UNINITIALIZED",
                10046LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v74 = v73;
            v34 = v97;
            ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v97 + 2920), a2, v74, 0);
            goto LABEL_38;
          }
          v34 = v97;
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                               *(ADAPTER_DISPLAY **)(v97 + 2920),
                               (*(_DWORD *)(*((_QWORD *)v99 + 6) + 4LL) >> 6) & 0xF);
          if ( VidPnSourceOwner && VidPnSourceOwner != a2 )
            goto LABEL_106;
          v101 = *(ADAPTER_DISPLAY **)(v34 + 2920);
          v60 = (*(_DWORD *)(*((_QWORD *)v99 + 6) + 4LL) >> 6) & 0xF;
          v61 = (DXGADAPTER *)*((_QWORD *)v101 + 2);
          if ( *((_QWORD *)v61 + 366) )
          {
            if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(v61) )
            {
              if ( *(_DWORD *)(*((_QWORD *)v101 + 2) + 2820LL) != 2200 )
                goto LABEL_105;
              v62 = 0;
            }
            else
            {
              v62 = 1;
            }
            ADAPTER_DISPLAY::DisableMPOPlanes(v101, v60, v62);
          }
LABEL_105:
          v34 = v97;
LABEL_106:
          if ( (*(_DWORD *)(*((_QWORD *)v99 + 6) + 4LL) & 1) == 0 )
          {
            WdLogSingleEntry1(1LL, 10073LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"PrimaryAllocation->m_pAllocation->m_Primary",
              10073LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( ((*(_DWORD *)(*((_QWORD *)v99 + 6) + 4LL) >> 6) & 0xF) != v95 )
          {
            WdLogSingleEntry1(1LL, 10074LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"PrimaryAllocation->m_pAllocation->m_VidPnSourceId == VidpnSourceInvolved",
              10074LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          ADAPTER_DISPLAY::DisablePrimaryAllocation(*(ADAPTER_DISPLAY **)(v34 + 2920), a2, v99);
          goto LABEL_38;
        }
        v34 = v97;
        ADAPTER_DISPLAY::DisableAllPrimaries(*(PERESOURCE ***)(v97 + 2920), (PERESOURCE **)v58);
      }
      else
      {
        v34 = v97;
      }
LABEL_38:
      if ( v91 || v92 )
      {
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v112) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v110);
        if ( v93 )
        {
          v77 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v34 + 2920), v95, 0, 16, 0);
          if ( v77 < 0 )
          {
            v78 = v77;
            WdLogSingleEntry2(2LL, v33, v77);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"SetVidPnSourceVisibility(0x%I64x) failed with status 0x%I64x",
              v33,
              v78,
              0LL,
              0LL,
              0LL);
            v34 = v97;
          }
        }
        DXGDEVICE::FlushScheduler(a2, 6LL, 4294967293LL);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v112) )
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v110, v79);
        if ( v34 )
        {
          if ( !*(_QWORD *)(v34 + 2928) )
          {
            v80 = *(DXGDODPRESENT **)(*(_QWORD *)(v34 + 2920) + 448LL);
            if ( v80 )
              DXGDODPRESENT::Flush(v80);
          }
        }
      }
      v35 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v35 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v35 + 168)) )
      {
        WdLogSingleEntry1(1LL, 6546LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"GetRenderAdapter()->IsCoreResourceSharedOwner()",
          6546LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v36 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      v37 = v100;
      if ( *(_BYTE *)(v36 + 209) )
      {
        v101 = (ADAPTER_DISPLAY *)(v36 + 4472);
        if ( v100 )
          v96 = *((_DWORD *)v100 + 5);
        else
          v96 = 0;
        v81 = *((_DWORD *)a2 + 118);
        Current = DXGPROCESS::GetCurrent();
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
          v101,
          *((_DWORD *)Current + 126),
          v81,
          v96,
          v16,
          v98,
          v14);
        if ( v37 )
          *((_DWORD *)v37 + 5) = 0;
        v38 = v98;
        if ( v16 )
        {
          v83 = v98;
          v84 = v16;
          do
          {
            *((_BYTE *)*v83++ + 128) &= ~4u;
            --v84;
          }
          while ( v84 );
        }
      }
      else
      {
        v38 = v98;
      }
      if ( v37 )
      {
        DXGDEVICE::TerminateAllocations(
          a2,
          v37,
          1,
          *((struct DXGALLOCATION **)v37 + 3),
          (struct COREDEVICEACCESS *)v110,
          v14);
      }
      else
      {
        v98 = 0LL;
        DXGDEVICE::RemoveAllocationsAndTransferToList(a2, v38, v16, (struct DXGALLOCATION **)&v98);
        v39 = v98;
        if ( v98 )
        {
          v40 = v98[5];
          if ( v40 )
          {
            do
            {
              v85 = v39;
              v39 = (struct DXGALLOCATION **)v39[8];
              v85[8] = 0LL;
              DXGDEVICE::TerminateAllocations(
                a2,
                v40,
                0,
                (struct DXGALLOCATION *)v85,
                (struct COREDEVICEACCESS *)v110,
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
                (struct COREDEVICEACCESS *)v110,
                v14);
            }
            while ( v39 );
          }
          v98 = v39;
        }
      }
      if ( v91 )
        DXGDEVICE::CloseInternalCddPrimaryHandle(a2, (struct COREDEVICEACCESS *)v110);
      v42 = 0;
      v88 = 0;
      v94 = 0;
      if ( v87 )
      {
        v63 = v103;
        if ( v103 )
        {
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v97 + 2920),
            v103,
            (struct COREDEVICEACCESS *)v110,
            &v88,
            &v94,
            v107);
          v42 = v88;
        }
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v116, v42);
        if ( v63 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v110);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v109);
          *((_BYTE *)v63 + 1937) = 0;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v63 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
          if ( v89 )
          {
            v89 = 0;
            DxgkReleaseSessionModeChangeLock();
          }
          if ( v88 )
          {
            if ( v94 )
            {
              v86 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL);
              if ( v86 )
                (*(void (**)(void))(v86 + 192))();
            }
          }
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v89);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
      if ( v106 )
      {
        v43 = (char *)v105 + 136;
        _InterlockedDecrement((volatile signed __int32 *)v105 + 38);
        ExReleasePushLockSharedEx(v43, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v105 + 2), v105);
      }
      v44 = v117;
      if ( (v117 & 2) != 0 )
      {
        WdLogSingleEntry1(1LL, 217LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(FALSE == m_bStateSaved)", 217LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (v44 & 1) != 0 )
        MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v116);
      return 0LL;
    }
    WdLogSingleEntry1(4LL, a2);
    v76 = v103;
    if ( v103 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v109);
      *((_BYTE *)v76 + 1937) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
    }
    DxgkDestroyClientAllocation(v75, a2, v16, v98, v100);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v89);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
    if ( !v106 )
      goto LABEL_140;
    goto LABEL_139;
  }
  WdLogSingleEntry1(2LL, v54);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
    v55,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v89);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
  if ( v106 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v116);
  return (unsigned int)v55;
}
