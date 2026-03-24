/*
 * XREFs of ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C00E26F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E43CC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C00E5970 (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EFD60 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0125434 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026D644 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        _DWORD *a2,
        const struct _DXGKWIN32KENG_INTERFACE *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct _CDDDXGK_DRIVERINFO *a7,
        struct _CDDDXGK_DRIVERINFO *a8,
        struct _LUID *a9,
        struct _OBJECT_TYPE **a10)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // rbx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  _DWORD *v20; // rsi
  _DWORD *v21; // rbx
  void *v22; // r12
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r9
  char *v36; // rdx
  signed __int64 v37; // rcx
  _QWORD *v38; // rax
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h]
  char v42; // [rsp+68h] [rbp-98h]
  _QWORD v43[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v44; // [rsp+80h] [rbp-80h]
  unsigned int *v45; // [rsp+90h] [rbp-70h]
  _DWORD *v46; // [rsp+A0h] [rbp-60h]
  struct _LUID *v47; // [rsp+A8h] [rbp-58h]
  char v48[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-18h]
  char v50; // [rsp+F0h] [rbp-10h]
  char v51[8]; // [rsp+240h] [rbp+140h] BYREF
  char v52[64]; // [rsp+248h] [rbp+148h] BYREF
  char v53[88]; // [rsp+288h] [rbp+188h] BYREF

  v40 = -1;
  v45 = a6;
  v43[0] = a4;
  v46 = a2;
  v47 = a9;
  v44 = a5;
  v41 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 3000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(0LL, &EventProfilerEnter, (__int64)a3, 3000);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 3000LL);
  if ( !a4 || !a5 || !a7 || !a8 || !a9 )
    goto LABEL_42;
  *a4 = 0;
  *(_OWORD *)a7 = 0LL;
  *((_QWORD *)a7 + 2) = 0LL;
  *(_OWORD *)a8 = 0LL;
  *((_QWORD *)a8 + 2) = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v15 = Current;
  if ( !Current )
  {
    v26 = DXGPROCESS::CreateDxgProcess(&Current, 0LL, 0LL, 0, 0LL, 0LL);
    v19 = v26;
    if ( v26 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
      v29[3] = v19;
      v29[4] = a1;
      v29[5] = PsGetCurrentProcess();
      v30 = v29;
LABEL_44:
      WdLogEvent5_WdError(v30);
      goto LABEL_21;
    }
    v15 = Current;
  }
  DXGPROCESS::SetWin32kInterface(v15, a3);
  *((_BYTE *)v15 + 344) = 1;
  if ( !a1 )
  {
LABEL_42:
    v31 = WdLogNewEntry5_WdError(v14, v13);
    v19 = -1073741811LL;
    goto LABEL_43;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(a1 + 316), 0);
  v19 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v18, v17);
LABEL_43:
    *(_QWORD *)(v31 + 24) = v19;
    v30 = (_QWORD *)v31;
    goto LABEL_44;
  }
  v20 = *(_DWORD **)(MEMORY[0x10] + 16LL);
  if ( !*((_QWORD *)v20 + 338) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v32 + 24) = 238LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v21 = (_DWORD *)MEMORY[0x738];
  if ( MEMORY[0x738] && !*(_QWORD *)(MEMORY[0x738] + 2696LL) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v33 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v22 = v46;
  if ( v46 == v20 )
  {
    *(_DWORD *)a8 = v20[81];
    *((_DWORD *)a8 + 1) = v20[82];
    *((_DWORD *)a8 + 2) = v20[83];
    *((_DWORD *)a8 + 3) = v20[84];
    *((_DWORD *)a8 + 4) = v20[85];
    *((_DWORD *)a8 + 5) = v20[649];
    if ( v21 )
    {
      *(_DWORD *)a7 = v21[81];
      *((_DWORD *)a7 + 1) = v21[82];
      *((_DWORD *)a7 + 2) = v21[83];
      *((_DWORD *)a7 + 3) = v21[84];
      *((_DWORD *)a7 + 4) = v21[85];
      *((_DWORD *)a7 + 5) = v21[649];
      if ( (v21[87] & 0x100) == 0 )
        v20 = v21;
    }
    else
    {
      *(_OWORD *)a7 = *(_OWORD *)a8;
      *((_QWORD *)a7 + 2) = *((_QWORD *)a8 + 2);
    }
    *v47 = *(struct _LUID *)(v20 + 79);
    *(_DWORD *)v43[0] = MEMORY[0x1B4];
    *v44 = MEMORY[0x18];
    *v45 = 0;
    *a10 = g_pDxgkSharedAllocationObjectType;
  }
  else
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x20, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v34 = MEMORY[0x10];
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43, MEMORY[0x10]);
      v50 = 0;
      v49 = *(_QWORD *)(*(_QWORD *)(MEMORY[0x10] + 16LL) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, v34, 2, v35, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v51, v36);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v34, 0LL, (struct COREDEVICEACCESS *)v51);
      COREACCESS::~COREACCESS((COREACCESS *)v53);
      COREACCESS::~COREACCESS((COREACCESS *)v52);
      if ( v50 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
      if ( v43[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v34 + 16), (struct DXGDEVICE *)v34);
    }
    v37 = _InterlockedDecrement64((volatile signed __int64 *)0x40);
    if ( !v37 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v37, v17);
    LODWORD(v19) = -1073741130;
    v38[3] = v22;
    v38[4] = v20;
    v38[5] = -1073741130LL;
    WdLogEvent5_WdError(v38);
  }
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v17);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v40);
  return (unsigned int)v19;
}
