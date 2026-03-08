/*
 * XREFs of ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C01C6520
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C01787D0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C01A7864 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8B78 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C01C67E4 (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03128E4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        __int64 a2,
        const struct _DXGKWIN32KENG_INTERFACE *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct _CDDDXGK_DRIVERINFO *a7,
        struct _CDDDXGK_DRIVERINFO *a8,
        struct _LUID *a9,
        struct _OBJECT_TYPE **a10)
{
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // rbx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v17; // rbx
  struct DXGDEVICE *v18; // r13
  char *v19; // rsi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 CurrentProcess; // rax
  const wchar_t *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  struct DXGDEVICE *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r9
  char *v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r9
  char *v39; // rdx
  struct DXGCONTEXT *v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // r9
  char *v44; // rdx
  struct DXGCONTEXT *v45; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGHWQUEUE *v46; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGDEVICE *v47; // [rsp+68h] [rbp-98h] BYREF
  struct DXGPROCESS *Current; // [rsp+70h] [rbp-90h] BYREF
  struct _LUID *v49; // [rsp+78h] [rbp-88h]
  int v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h]
  char v52; // [rsp+90h] [rbp-70h]
  _QWORD v53[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v54[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v55[2]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v56[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-30h]
  char v58; // [rsp+D8h] [rbp-28h]
  _BYTE v59[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v60; // [rsp+E8h] [rbp-18h]
  char v61; // [rsp+F0h] [rbp-10h]
  _BYTE v62[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v63; // [rsp+100h] [rbp+0h]
  char v64; // [rsp+108h] [rbp+8h]
  _BYTE v65[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v66[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v67[88]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v68[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v69[64]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v70[88]; // [rsp+1F8h] [rbp+F8h] BYREF
  _BYTE v71[8]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v72[64]; // [rsp+258h] [rbp+158h] BYREF
  _BYTE v73[88]; // [rsp+298h] [rbp+198h] BYREF

  v50 = -1;
  v55[0] = a6;
  v49 = a9;
  v53[0] = a4;
  v54[0] = a5;
  v47 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v51 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v52 = 1;
    v50 = 3000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(0LL, &EventProfilerEnter, (__int64)a3, 3000);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 3000);
  if ( !a4 || !a5 || !a7 || !a8 || !v49 )
  {
    LODWORD(v17) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v27 = L"Invalid paramters, returning 0x%I64x.";
    goto LABEL_66;
  }
  *a4 = 0;
  *(_OWORD *)a7 = 0LL;
  *((_QWORD *)a7 + 2) = 0LL;
  *(_OWORD *)a8 = 0LL;
  *((_QWORD *)a8 + 2) = 0LL;
  Current = DXGPROCESS::GetCurrent(v14);
  v15 = Current;
  if ( !Current )
  {
    v24 = DXGPROCESS::CreateDxgProcess(&Current, 0LL, 0LL, 0, 0LL);
    v17 = v24;
    if ( v24 < 0 )
    {
      a2 = v24;
      CurrentProcess = PsGetCurrentProcess(v25);
      WdLogSingleEntry3(2LL, v17, a1, CurrentProcess);
      v27 = L"0x%I64x DXGPROCESS::CreateDxgProcess() failed 0x%I64x 0x%I64x";
      v29 = PsGetCurrentProcess(v28);
LABEL_68:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, a2, (__int64)a1, v29, 0LL, 0LL);
      goto LABEL_23;
    }
    v15 = Current;
  }
  DXGPROCESS::SetWin32kInterface(v15, a3);
  *((_DWORD *)v15 + 106) |= 1u;
  if ( !a1 )
  {
    LODWORD(v17) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v27 = L"No pAdapter specified, returning 0x%I64x";
LABEL_66:
    a2 = -1073741811LL;
    goto LABEL_67;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(a1 + 404),
                                           &v47,
                                           &v45,
                                           &v46,
                                           0);
  LODWORD(v17) = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    a2 = CddDeviceAndContextForCurrentSession;
    WdLogSingleEntry1(2LL, CddDeviceAndContextForCurrentSession);
    v27 = L"Failed to get CDD device and context for current session (Status = 0x%I64x).";
LABEL_67:
    a1 = 0LL;
    v29 = 0LL;
    goto LABEL_68;
  }
  v18 = v47;
  a1 = *(char **)(*((_QWORD *)v47 + 2) + 16LL);
  if ( !*((_QWORD *)a1 + 366) )
  {
    WdLogSingleEntry1(1LL, 238LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      238LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v19 = (char *)*((_QWORD *)v18 + 235);
  if ( v19 && !*((_QWORD *)v19 + 365) )
  {
    WdLogSingleEntry1(1LL, 240LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
      240LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (char *)a2 != a1 )
  {
    if ( v46 )
    {
      v30 = _InterlockedDecrement64((volatile signed __int64 *)v46 + 13);
      if ( v30 >= 0 )
      {
        if ( !v30 )
        {
          v31 = *((_QWORD *)v46 + 2);
          v32 = *(struct DXGDEVICE **)(v31 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55, v32);
          v33 = *((_QWORD *)v32 + 2);
          v58 = 0;
          v57 = *(_QWORD *)(v33 + 16);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v32, 2, v34, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v65, v35);
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 2) + 16LL) + 200LL) != 4 )
            DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v31, v46, (struct COREDEVICEACCESS *)v65);
          COREACCESS::~COREACCESS((COREACCESS *)v67);
          COREACCESS::~COREACCESS((COREACCESS *)v66);
          if ( v58 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
          if ( v55[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          {
            v36 = *(_QWORD *)(v31 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v54,
              (struct DXGDEVICE *)v36);
            v37 = *(_QWORD *)(v31 + 16);
            v61 = 0;
            v60 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, v36, 2, v38, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v68, v39);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 200LL) != 4 )
              DXGDEVICE::DestroyContext((DXGDEVICE *)v36, (struct DXGCONTEXT *)v31, (struct COREDEVICEACCESS *)v68);
            COREACCESS::~COREACCESS((COREACCESS *)v70);
            COREACCESS::~COREACCESS((COREACCESS *)v69);
            if ( v61 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
            if ( v54[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v36 + 16), (struct DXGDEVICE *)v36);
          }
        }
      }
      else
      {
        WdLogSingleEntry1(1LL, 141LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NewReferenceCount >= 0", 141LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v40 = v45;
      v41 = *((_QWORD *)v45 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v53,
        (struct DXGDEVICE *)v41);
      v42 = *((_QWORD *)v40 + 2);
      v64 = 0;
      v63 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v71, v41, 2, v43, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v71, v44);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v41, v45, (struct COREDEVICEACCESS *)v71);
      COREACCESS::~COREACCESS((COREACCESS *)v73);
      COREACCESS::~COREACCESS((COREACCESS *)v72);
      if ( v64 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
      if ( v53[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v53);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v41 + 16), (struct DXGDEVICE *)v41);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    LODWORD(v17) = -1073741130;
    WdLogSingleEntry3(2LL, a2, a1, -1073741130LL);
    v29 = -1073741130LL;
    v27 = L"Paired Render adapter has been changed from 0x%I64x to 0x%I64x for current session (Status = 0x%I64x).";
    goto LABEL_68;
  }
  *(_DWORD *)a8 = *((_DWORD *)a1 + 103);
  *((_DWORD *)a8 + 1) = *((_DWORD *)a1 + 104);
  *((_DWORD *)a8 + 2) = *((_DWORD *)a1 + 105);
  *((_DWORD *)a8 + 3) = *((_DWORD *)a1 + 106);
  *((_DWORD *)a8 + 4) = *((_DWORD *)a1 + 107);
  *((_DWORD *)a8 + 5) = *((_DWORD *)a1 + 705);
  if ( v19 )
  {
    *(_DWORD *)a7 = *((_DWORD *)v19 + 103);
    *((_DWORD *)a7 + 1) = *((_DWORD *)v19 + 104);
    *((_DWORD *)a7 + 2) = *((_DWORD *)v19 + 105);
    *((_DWORD *)a7 + 3) = *((_DWORD *)v19 + 106);
    *((_DWORD *)a7 + 4) = *((_DWORD *)v19 + 107);
    *((_DWORD *)a7 + 5) = *((_DWORD *)v19 + 705);
    if ( (*((_DWORD *)v19 + 109) & 0x100) == 0 )
      a1 = v19;
  }
  else
  {
    *(_OWORD *)a7 = *(_OWORD *)a8;
    *((_QWORD *)a7 + 2) = *((_QWORD *)a8 + 2);
  }
  *v49 = *(struct _LUID *)(a1 + 404);
  *(_DWORD *)v53[0] = *((_DWORD *)v18 + 117);
  *(_DWORD *)v54[0] = *((_DWORD *)v45 + 6);
  if ( v46 )
    v20 = *((_DWORD *)v46 + 6);
  else
    v20 = 0;
  *(_DWORD *)v55[0] = v20;
  *a10 = g_pDxgkSharedAllocationObjectType;
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v50);
  return (unsigned int)v17;
}
