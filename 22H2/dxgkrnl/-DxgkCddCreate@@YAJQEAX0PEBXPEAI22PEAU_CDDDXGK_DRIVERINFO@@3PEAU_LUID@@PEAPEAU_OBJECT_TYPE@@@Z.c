/*
 * XREFs of ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0186620
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00042E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0004690 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0008088 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0188608 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018C168 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C01AA014 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C01EA7F4 (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03178C0 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
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
  struct DXGPROCESS *v14; // rbx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v16; // rbx
  char *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // eax
  __int64 CurrentProcess; // rax
  const wchar_t *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r9
  char *v27; // rdx
  struct DXGPROCESS *Current; // [rsp+70h] [rbp-90h] BYREF
  struct _LUID *v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h]
  char v32; // [rsp+90h] [rbp-70h]
  _QWORD v33[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v34; // [rsp+A8h] [rbp-58h]
  unsigned int *v35; // [rsp+B8h] [rbp-48h]
  char v36[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v37; // [rsp+100h] [rbp+0h]
  char v38; // [rsp+108h] [rbp+8h]
  char v39[8]; // [rsp+250h] [rbp+150h] BYREF
  char v40[64]; // [rsp+258h] [rbp+158h] BYREF
  char v41[88]; // [rsp+298h] [rbp+198h] BYREF

  v30 = -1;
  v35 = a6;
  v29 = a9;
  v33[0] = a4;
  v34 = a5;
  v31 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 3000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(0LL, &EventProfilerEnter, (__int64)a3, 3000);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 3000);
  if ( !a4 || !a5 || !a7 || !a8 || !v29 )
  {
    LODWORD(v16) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v23 = L"Invalid paramters, returning 0x%I64x.";
    goto LABEL_44;
  }
  *a4 = 0;
  *(_OWORD *)a7 = 0LL;
  *((_QWORD *)a7 + 2) = 0LL;
  *(_OWORD *)a8 = 0LL;
  *((_QWORD *)a8 + 2) = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v14 = Current;
  if ( !Current )
  {
    v21 = DXGPROCESS::CreateDxgProcess(&Current, 0LL, 0LL, 0, 0LL);
    v16 = v21;
    if ( v21 < 0 )
    {
      a2 = v21;
      CurrentProcess = PsGetCurrentProcess();
      WdLogSingleEntry3(2LL, v16, a1, CurrentProcess);
      v23 = L"0x%I64x DXGPROCESS::CreateDxgProcess() failed 0x%I64x 0x%I64x";
      v24 = PsGetCurrentProcess();
LABEL_46:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, a2, (__int64)a1, v24, 0LL, 0LL);
      goto LABEL_21;
    }
    v14 = Current;
  }
  DXGPROCESS::SetWin32kInterface(v14, a3);
  *((_DWORD *)v14 + 106) |= 1u;
  if ( !a1 )
  {
    LODWORD(v16) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v23 = L"No pAdapter specified, returning 0x%I64x";
LABEL_44:
    a2 = -1073741811LL;
    goto LABEL_45;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(a1 + 404), 0);
  LODWORD(v16) = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    a2 = CddDeviceAndContextForCurrentSession;
    WdLogSingleEntry1(2LL, CddDeviceAndContextForCurrentSession);
    v23 = L"Failed to get CDD device and context for current session (Status = 0x%I64x).";
LABEL_45:
    a1 = 0LL;
    v24 = 0LL;
    goto LABEL_46;
  }
  a1 = *(char **)(MEMORY[0x10] + 16LL);
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
  v17 = (char *)MEMORY[0x758];
  if ( MEMORY[0x758] && !*(_QWORD *)(MEMORY[0x758] + 2920LL) )
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
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x20, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v25 = MEMORY[0x10];
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33, MEMORY[0x10]);
      v38 = 0;
      v37 = *(_QWORD *)(*(_QWORD *)(MEMORY[0x10] + 16LL) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, v25, 2, v26, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v39, v27);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v25, 0LL, (struct COREDEVICEACCESS *)v39);
      COREACCESS::~COREACCESS((COREACCESS *)v41);
      COREACCESS::~COREACCESS((COREACCESS *)v40);
      if ( v38 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
      if ( v33[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v25 + 16), (struct DXGDEVICE *)v25);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
    LODWORD(v16) = -1073741130;
    WdLogSingleEntry3(2LL, a2, a1, -1073741130LL);
    v24 = -1073741130LL;
    v23 = L"Paired Render adapter has been changed from 0x%I64x to 0x%I64x for current session (Status = 0x%I64x).";
    goto LABEL_46;
  }
  *(_DWORD *)a8 = *((_DWORD *)a1 + 103);
  *((_DWORD *)a8 + 1) = *((_DWORD *)a1 + 104);
  *((_DWORD *)a8 + 2) = *((_DWORD *)a1 + 105);
  *((_DWORD *)a8 + 3) = *((_DWORD *)a1 + 106);
  *((_DWORD *)a8 + 4) = *((_DWORD *)a1 + 107);
  *((_DWORD *)a8 + 5) = *((_DWORD *)a1 + 705);
  if ( v17 )
  {
    *(_DWORD *)a7 = *((_DWORD *)v17 + 103);
    *((_DWORD *)a7 + 1) = *((_DWORD *)v17 + 104);
    *((_DWORD *)a7 + 2) = *((_DWORD *)v17 + 105);
    *((_DWORD *)a7 + 3) = *((_DWORD *)v17 + 106);
    *((_DWORD *)a7 + 4) = *((_DWORD *)v17 + 107);
    *((_DWORD *)a7 + 5) = *((_DWORD *)v17 + 705);
    if ( (*((_DWORD *)v17 + 109) & 0x100) == 0 )
      a1 = v17;
  }
  else
  {
    *(_OWORD *)a7 = *(_OWORD *)a8;
    *((_QWORD *)a7 + 2) = *((_QWORD *)a8 + 2);
  }
  *v29 = *(struct _LUID *)(a1 + 404);
  *(_DWORD *)v33[0] = MEMORY[0x1D4];
  *v34 = MEMORY[0x18];
  *v35 = 0;
  *a10 = g_pDxgkSharedAllocationObjectType;
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v30);
  return (unsigned int)v16;
}
