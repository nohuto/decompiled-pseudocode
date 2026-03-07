__int64 __fastcall AllocateAndPopulateHDRMetadataFromDisplay(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        unsigned __int8 **a2,
        enum _D3DDDI_HDR_METADATA_TYPE *a3,
        unsigned int *a4)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v7; // rdi
  struct DXGPROCESS *v8; // r14
  D3DKMT_HANDLE v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdi
  int v14; // ecx
  _QWORD *v15; // rdi
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 VidPnSourceId; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  struct _KTHREAD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rsi
  DXGFASTMUTEX *v39; // rbx
  struct _ERESOURCE *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // rax
  char *v48; // rcx
  __int64 v49; // rbx
  void *v50; // r14
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int v55; // r9d
  __int64 v56; // rax
  int v57; // r9d
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  int AdvancedColorMetadataOverride; // eax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // r9
  char *v68; // rdx
  DXGFASTMUTEX *v69; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v70; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v72[2]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v73; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v74; // [rsp+90h] [rbp-78h]
  char v75; // [rsp+98h] [rbp-70h]
  __int64 v76; // [rsp+A0h] [rbp-68h] BYREF
  struct DXGADAPTER *v77; // [rsp+A8h] [rbp-60h]
  char v78; // [rsp+B0h] [rbp-58h]
  enum _D3DDDI_HDR_METADATA_TYPE *v79; // [rsp+B8h] [rbp-50h]
  unsigned int *v80; // [rsp+C0h] [rbp-48h]
  _BYTE v81[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v82; // [rsp+D0h] [rbp-38h]
  char v83; // [rsp+D8h] [rbp-30h]
  __int128 v84; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v85[8]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v86[64]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v87[88]; // [rsp+140h] [rbp+38h] BYREF

  v80 = a4;
  v79 = a3;
  v72[0] = a2;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v8 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v8 )
        goto LABEL_8;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v8 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v8 )
        goto LABEL_8;
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v8 = v7;
LABEL_8:
  v9 = *a1->pContextList;
  if ( v8 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v8 + 32) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v8 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v55 = *((_DWORD *)v8 + 68);
      if ( v55 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (const EVENT_DESCRIPTOR *)"g", v11, v55);
    }
    ExAcquirePushLockSharedEx((char *)v8 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v8 + 66);
  v12 = (v9 >> 6) & 0xFFFFFF;
  if ( v12 >= *((_DWORD *)v8 + 74) )
    goto LABEL_23;
  v13 = *((_QWORD *)v8 + 35) + 16LL * v12;
  if ( ((v9 >> 25) & 0x60) != (*(_BYTE *)(v13 + 8) & 0x60) )
    goto LABEL_23;
  if ( (*(_DWORD *)(v13 + 8) & 0x2000) != 0 )
    goto LABEL_23;
  v14 = *(_DWORD *)(v13 + 8) & 0x1F;
  if ( !v14 )
    goto LABEL_23;
  if ( v14 != 7 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_23;
  }
  v15 = *(_QWORD **)v13;
  if ( !v15 )
    goto LABEL_24;
  _m_prefetchw(v15 + 4);
  v16 = v15[4];
  if ( !v16 )
  {
LABEL_23:
    v15 = 0LL;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v17 = v16;
    v16 = _InterlockedCompareExchange64(v15 + 4, v16 + 1, v16);
    if ( v17 == v16 )
      break;
    if ( !v16 )
      goto LABEL_23;
  }
LABEL_24:
  v70 = v15;
  _InterlockedDecrement((volatile signed __int32 *)v8 + 66);
  ExReleasePushLockSharedEx((char *)v8 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v15
    || (v18 = v70[2]) == 0
    || (v19 = *(_QWORD *)(v18 + 1880)) == 0
    || (v20 = *(_QWORD *)(v19 + 2920),
        VidPnSourceId = a1->VidPnSourceId,
        *(_DWORD *)(v20 + 96) <= (unsigned int)VidPnSourceId)
    || !*(_BYTE *)(4000 * VidPnSourceId + *(_QWORD *)(v20 + 128) + 760) )
  {
LABEL_70:
    LODWORD(v49) = 0;
    v50 = 0LL;
    goto LABEL_71;
  }
  v77 = *(struct DXGADAPTER **)(*(_QWORD *)(v70[2] + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v77 + 3);
  v76 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v77 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v77 + 38);
  v71 = 0LL;
  v78 = 1;
  v22 = 4000LL * a1->VidPnSourceId;
  v23 = *(_QWORD *)(v70[2] + 1880LL);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 2920) + 128LL);
  v25 = *(unsigned int *)(v22 + v24 + 1088);
  v28 = WdLogNewEntry5_WdTrace(v24, v22, v26, v27);
  *(_QWORD *)(v28 + 24) = v25;
  *(_QWORD *)(v28 + 32) = v23;
  if ( !v23 || (_DWORD)v25 == -1 )
    goto LABEL_87;
  if ( !*(_QWORD *)(v23 + 2920) )
    WdLogSingleEntry0(1LL);
  v30 = *(_QWORD *)(*(_QWORD *)(v23 + 2920) + 112LL);
  if ( !v30 )
  {
    WdLogSingleEntry1(2LL, v23);
LABEL_87:
    LODWORD(v49) = -1073741811;
LABEL_88:
    v56 = PsGetCurrentProcess(v29);
    WdLogSingleEntry2(3LL, (int)v49, v56);
    v50 = 0LL;
    goto LABEL_89;
  }
  v69 = (DXGFASTMUTEX *)(v30 + 80);
  if ( v30 == -80 )
    WdLogSingleEntry0(1LL);
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v30 + 104) == KeGetCurrentThread() )
  {
    if ( *(int *)(v30 + 112) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v30 + 112);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v30 + 88, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v57 = *(_DWORD *)(v30 + 116);
        if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, (const EVENT_DESCRIPTOR *)"g", v32, v57);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v69 + 2);
      ExAcquirePushLockExclusiveEx(v30 + 88, 0LL);
    }
    if ( *(_QWORD *)(v30 + 104) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v69 + 8) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    v35 = KeGetCurrentThread();
    *((_DWORD *)v69 + 8) = 1;
    *(_QWORD *)(v30 + 104) = v35;
  }
  v36 = *(_QWORD *)(v30 + 40);
  v37 = v30 + 40;
  if ( v36 == v30 + 40 )
    goto LABEL_102;
  v38 = v36 - 152;
  if ( !v36 )
    v38 = 0LL;
  if ( !v38 )
    goto LABEL_102;
  while ( *(_DWORD *)(v38 + 180) != (_DWORD)v25 )
  {
    v58 = *(_QWORD *)(v38 + 152);
    if ( v58 != v37 )
    {
      v38 = v58 - 152;
      if ( !v58 )
        v38 = 0LL;
      if ( v38 )
        continue;
    }
    goto LABEL_102;
  }
  if ( *(_DWORD *)(v38 + 312) != 1 )
    v38 = *(_QWORD *)(v38 + 320);
  if ( !v38 )
  {
LABEL_102:
    v59 = WdLogNewEntry5_WdTrace(v37, v31, v32, v33);
    *(_QWORD *)(v59 + 24) = v25;
    *(_QWORD *)(v59 + 32) = v30;
    MUTEX_LOCK::~MUTEX_LOCK(&v69);
    WdLogSingleEntry2(7LL, v25, v30);
    LODWORD(v49) = -1073741275;
    goto LABEL_88;
  }
  v39 = v69;
  if ( *(struct _KTHREAD **)(v30 + 104) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v69, 0LL, 0LL);
  if ( *((int *)v69 + 8) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)v69 + 8))-- == 1 )
  {
    *(_QWORD *)(v30 + 104) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v39 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v38 + 280), AllocateAndPopulateHDRMetadataFromDisplay, File, 1u, 0x20u) < 0 )
    WdLogSingleEntry0(1LL);
  v71 = v38;
  *(_QWORD *)&v84 = &v70;
  *((_QWORD *)&v84 + 1) = &v71;
  DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9_((__int64)&v73, &v84);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v38 + 24), 1u);
  v41 = (struct _ERESOURCE *)(v38 + 24);
  if ( !*(_BYTE *)(*(_QWORD *)(v38 + 224) + 428LL) )
  {
    ExReleaseResourceLite(v41);
    KeLeaveCriticalRegion();
    goto LABEL_61;
  }
  ExReleaseResourceLite(v41);
  KeLeaveCriticalRegion();
  v60 = operator new[](0x1CuLL, 0x4B677844u, 256LL);
  v50 = (void *)v60;
  if ( v60 )
  {
    AdvancedColorMetadataOverride = MonitorGetAdvancedColorMetadataOverride(v71, v60);
    v49 = AdvancedColorMetadataOverride;
    if ( AdvancedColorMetadataOverride >= 0 )
    {
      *v79 = D3DDDI_HDR_METADATA_TYPE_HDR10;
      *v80 = 28;
      *(_QWORD *)v72[0] = v50;
LABEL_61:
      if ( v75 )
      {
        v45 = *v74;
        v46 = *(_QWORD *)(*(_QWORD *)(*v73 + 16LL) + 1880LL);
        v47 = WdLogNewEntry5_WdTrace(*v73, v42, v43, v44);
        *(_QWORD *)(v47 + 24) = v45;
        *(_QWORD *)(v47 + 32) = v46;
        if ( v46 )
        {
          if ( v45 )
          {
            if ( !*(_QWORD *)(v46 + 2920) )
              WdLogSingleEntry0(1LL);
            if ( *(_QWORD *)(*(_QWORD *)(v46 + 2920) + 112LL) )
              IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v45 + 280), AllocateAndPopulateHDRMetadataFromDisplay, 0x20u);
            else
              WdLogSingleEntry1(2LL, v46);
          }
        }
      }
      v48 = (char *)v77 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v77 + 38);
      ExReleasePushLockSharedEx(v48, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v77 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v77 + 2), v77);
      goto LABEL_70;
    }
    v64 = PsGetCurrentProcess(v63);
  }
  else
  {
    v64 = PsGetCurrentProcess(v61);
    v49 = -1073741801LL;
  }
  WdLogSingleEntry2(3LL, v49, v64);
  if ( v75 )
    MonitorReleaseMonitorHandle(
      *(_QWORD *)(*(_QWORD *)(*v73 + 16LL) + 1880LL),
      *v74,
      AllocateAndPopulateHDRMetadataFromDisplay);
LABEL_89:
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v76);
LABEL_71:
  if ( v15 && _InterlockedExchangeAdd64(v15 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v65 = v15[2];
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v72,
      (struct DXGDEVICE *)v65);
    v66 = v15[2];
    v83 = 0;
    v82 = *(_QWORD *)(*(_QWORD *)(v66 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v85, v65, 2, v67, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v85, v68);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v65 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v65, (struct DXGCONTEXT *)v15, (struct COREDEVICEACCESS *)v85);
    COREACCESS::~COREACCESS((COREACCESS *)v87);
    COREACCESS::~COREACCESS((COREACCESS *)v86);
    if ( v83 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
    if ( v72[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v65 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v65 + 16), (struct DXGDEVICE *)v65);
  }
  if ( v50 )
    operator delete(v50);
  return (unsigned int)v49;
}
