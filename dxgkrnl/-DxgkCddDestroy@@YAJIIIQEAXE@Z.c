/*
 * XREFs of ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C01DA0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkShutdownBootGraphics @ 0x1C0178460 (DxgkShutdownBootGraphics.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8B78 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03128E4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0351EE0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, unsigned int a2, __int64 a3, char *a4, char a5)
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r15
  unsigned int v11; // eax
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // r14
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // r8
  const wchar_t *v19; // r9
  __int64 v20; // rbx
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // r8
  int v25; // edx
  bool v26; // zf
  unsigned int v27; // eax
  __int64 v28; // r8
  int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r9
  char *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r15
  struct DXGDEVICE *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r9
  char *v40; // rdx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r9
  char *v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // r9
  char *v48; // rdx
  int v49; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A0h]
  char v51; // [rsp+68h] [rbp-98h]
  char v52[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+78h] [rbp-88h]
  char v54; // [rsp+80h] [rbp-80h]
  char v55[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v56; // [rsp+90h] [rbp-70h]
  char v57; // [rsp+98h] [rbp-68h]
  char v58[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-58h]
  char v60; // [rsp+B0h] [rbp-50h]
  char v61[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-40h]
  char v63; // [rsp+C8h] [rbp-38h]
  _QWORD v64[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v65[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v66[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v67[2]; // [rsp+100h] [rbp+0h] BYREF
  char v68[8]; // [rsp+110h] [rbp+10h] BYREF
  char v69[64]; // [rsp+118h] [rbp+18h] BYREF
  char v70[88]; // [rsp+158h] [rbp+58h] BYREF
  char v71[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v72[64]; // [rsp+1B8h] [rbp+B8h] BYREF
  char v73[88]; // [rsp+1F8h] [rbp+F8h] BYREF
  char v74[8]; // [rsp+250h] [rbp+150h] BYREF
  char v75[64]; // [rsp+258h] [rbp+158h] BYREF
  char v76[88]; // [rsp+298h] [rbp+198h] BYREF
  char v77[8]; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v78[64]; // [rsp+2F8h] [rbp+1F8h] BYREF
  char v79[88]; // [rsp+338h] [rbp+238h] BYREF

  v49 = -1;
  v50 = 0LL;
  v6 = (unsigned int)a3;
  v7 = a2;
  v8 = (unsigned int)a1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v51 = 1;
    v49 = 3001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3001);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 3001);
  if ( !a4 )
  {
    v15 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v19 = L"No pAdapter specified, returning 0x%I64x";
    v20 = 0LL;
    Current = 0LL;
LABEL_31:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, -1073741811LL, v20, (__int64)Current, 0LL, 0LL);
    goto LABEL_19;
  }
  Current = DXGPROCESS::GetCurrent(v9);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 341LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pProcess", 341LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v11 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v11 < *((_DWORD *)Current + 74)
    && (v21 = *((_QWORD *)Current + 35), (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16LL * v11 + 8) & 0x60))
    && (*(_DWORD *)(v21 + 16LL * v11 + 8) & 0x2000) == 0
    && (v22 = *(_DWORD *)(v21 + 16LL * v11 + 8) & 0x1F) != 0 )
  {
    if ( v22 == 3 )
    {
      v12 = *(_QWORD *)(v21 + 16LL * v11);
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      v12 = 0LL;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v12 = 0LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v12 )
  {
    v23 = v8;
    v20 = v8;
    v15 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v23, Current);
    v19 = L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x";
    goto LABEL_31;
  }
  DxgkShutdownBootGraphics((struct DXGDEVICE *)v12, 0);
  if ( a5 )
    DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(a4 + 404), (struct DXGDEVICE *)v12);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v13 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v13 >= *((_DWORD *)Current + 74) )
    goto LABEL_12;
  v24 = *((_QWORD *)Current + 35);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v24 + 16LL * v13 + 8) & 0x60) )
    goto LABEL_12;
  if ( (*(_DWORD *)(v24 + 16LL * v13 + 8) & 0x2000) != 0 )
    goto LABEL_12;
  v25 = *(_DWORD *)(v24 + 16LL * v13 + 8) & 0x1F;
  if ( !v25 )
    goto LABEL_12;
  if ( v25 != 7 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_12:
    v14 = 0LL;
    goto LABEL_13;
  }
  v14 = *(_QWORD *)(v24 + 16LL * v13);
LABEL_13:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v14 )
  {
    v15 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v7, Current);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid hContext=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v7,
      (__int64)Current,
      0LL,
      0LL);
    v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_57;
  }
  if ( !(_DWORD)v6 )
  {
LABEL_15:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v45 = *(_QWORD *)(v14 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v67,
        (struct DXGDEVICE *)v45);
      v46 = *(_QWORD *)(v14 + 16);
      v63 = 0;
      v62 = *(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v77, v45, 2, v47, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v77, v48);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v45, (struct DXGCONTEXT *)v14, (struct COREDEVICEACCESS *)v77);
      COREACCESS::~COREACCESS((COREACCESS *)v79);
      COREACCESS::~COREACCESS((COREACCESS *)v78);
      if ( v63 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
      if ( v67[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v67);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v45 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v45 + 16), (struct DXGDEVICE *)v45);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v12 + 16), (struct DXGDEVICE *)v12);
    v15 = 0;
    goto LABEL_19;
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v27 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v27 < *((_DWORD *)Current + 74) )
  {
    v28 = *((_QWORD *)Current + 35);
    if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16LL * v27 + 8) & 0x60)
      && (*(_DWORD *)(v28 + 16LL * v27 + 8) & 0x2000) == 0 )
    {
      v29 = *(_DWORD *)(v28 + 16LL * v27 + 8) & 0x1F;
      if ( v29 )
      {
        if ( v29 == 15 )
        {
          v30 = *(_QWORD *)(v28 + 16LL * v27);
          goto LABEL_46;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v30 = 0LL;
LABEL_46:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v30 )
  {
    v35 = _InterlockedDecrement64((volatile signed __int64 *)(v30 + 104));
    if ( v35 >= 0 )
    {
      if ( !v35 )
      {
        v36 = *(_QWORD *)(v30 + 16);
        v37 = *(struct DXGDEVICE **)(v36 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v65, v37);
        v38 = *((_QWORD *)v37 + 2);
        v57 = 0;
        v56 = *(_QWORD *)(v38 + 16);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v71, (__int64)v37, 2, v39, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v71, v40);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 2) + 16LL) + 200LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v36, (struct DXGHWQUEUE *)v30, (struct COREDEVICEACCESS *)v71);
        COREACCESS::~COREACCESS((COREACCESS *)v73);
        COREACCESS::~COREACCESS((COREACCESS *)v72);
        if ( v57 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
        if ( v65[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v65);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v41 = *(_QWORD *)(v36 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v66,
            (struct DXGDEVICE *)v41);
          v42 = *(_QWORD *)(v36 + 16);
          v60 = 0;
          v59 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, v41, 2, v43, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v74, v44);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v41, (struct DXGCONTEXT *)v36, (struct COREDEVICEACCESS *)v74);
          COREACCESS::~COREACCESS((COREACCESS *)v76);
          COREACCESS::~COREACCESS((COREACCESS *)v75);
          if ( v60 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
          if ( v66[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v66);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v41 + 16), (struct DXGDEVICE *)v41);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 141LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NewReferenceCount >= 0", 141LL, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_15;
  }
  v15 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, v6, Current);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Invalid hHwQueue=0x%I64x specified DXGPROCESS=0x%I64x",
    -1073741811LL,
    v6,
    (__int64)Current,
    0LL,
    0LL);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v31 = *(_QWORD *)(v14 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v64,
      (struct DXGDEVICE *)v31);
    v32 = *(_QWORD *)(v14 + 16);
    v54 = 0;
    v53 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, v31, 2, v33, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v68, v34);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v31, (struct DXGCONTEXT *)v14, (struct COREDEVICEACCESS *)v68);
    COREACCESS::~COREACCESS((COREACCESS *)v70);
    COREACCESS::~COREACCESS((COREACCESS *)v69);
    if ( v54 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
    if ( v64[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v31 + 16), (struct DXGDEVICE *)v31);
  }
  v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_57:
  if ( v26 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v12 + 16), (struct DXGDEVICE *)v12);
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v51 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v49);
  }
  return v15;
}
