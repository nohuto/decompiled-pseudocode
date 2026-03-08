/*
 * XREFs of NtDxgkUnpinResources @ 0x1C02EE6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E8F40 (-UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall NtDxgkUnpinResources(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  char v9; // si
  __int64 v10; // r13
  DXGDEVICE *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // r14d
  unsigned int v22; // eax
  unsigned int *v23; // rdx
  __int64 v24; // r12
  int v25; // eax
  struct DXGDEVICE *v26; // [rsp+50h] [rbp-128h] BYREF
  int v27; // [rsp+58h] [rbp-120h] BYREF
  __int64 v28; // [rsp+60h] [rbp-118h]
  char v29; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v30; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v31[2]; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v32; // [rsp+88h] [rbp-F0h]
  unsigned int v33[4]; // [rsp+90h] [rbp-E8h]
  __int64 v34; // [rsp+A0h] [rbp-D8h]
  unsigned int v35; // [rsp+A8h] [rbp-D0h]
  _BYTE v36[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v3 = a1;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2080;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2080);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2080);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_7;
  }
  v9 = (*((_DWORD *)Current + 106) & 4) == 0;
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v33 = *(_OWORD *)v3;
  v34 = *(_QWORD *)(v3 + 16);
  v10 = *(_QWORD *)&v33[2];
  if ( !*(_QWORD *)&v33[2] || !v33[1] )
  {
    WdLogSingleEntry2(3LL, v33[0], -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_54:
      if ( v8 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v27);
    }
    return 3221225485LL;
  }
  v30 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26, v33[0], (struct _KTHREAD **)Current, &v30);
  v11 = v30;
  if ( !v30 )
  {
    v12 = v33[0];
    WdLogSingleEntry2(2LL, v33[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_54;
    }
    return 3221225485LL;
  }
  if ( (*((_BYTE *)v30 + 1901) & 1) != 0 )
  {
    if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v27);
    return 0LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31, v30);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v11, 2, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v21 = 0;
    v22 = v33[1];
    v32 = v33[1];
    while ( v21 < v22 )
    {
      v23 = (unsigned int *)(v10 + 4LL * v21);
      if ( v23 + 1 < v23 || (unsigned __int64)(v23 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v35 = *v23;
      v24 = v35;
      v25 = DXGDEVICE::UnpinResource(v11, v35, v9, (struct COREDEVICEACCESS *)v36);
      v18 = v25;
      if ( v25 < 0 )
      {
        WdLogSingleEntry2(3LL, v24, v25);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
        if ( v31[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
        if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
        goto LABEL_31;
      }
      ++v21;
      v22 = v32;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    if ( v31[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    if ( !v26 )
      goto LABEL_31;
  }
  else
  {
    WdLogSingleEntry2(3LL, v11, v17);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    if ( v31[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    if ( !v26 )
      goto LABEL_31;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v27);
  return v18;
}
