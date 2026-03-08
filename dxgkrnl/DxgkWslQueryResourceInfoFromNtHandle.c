/*
 * XREFs of DxgkWslQueryResourceInfoFromNtHandle @ 0x1C02D86D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006A6C (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001573C (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0022A58 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C018555C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWslQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  unsigned int v6; // r14d
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v8; // rsi
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // r15
  struct DXGGLOBAL *Global; // rax
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // edx
  int v20; // edx
  __int64 v21; // r14
  int Resource; // esi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGDEVICE *v29; // [rsp+50h] [rbp-148h] BYREF
  struct DXGDEVICE *v30; // [rsp+58h] [rbp-140h] BYREF
  int v31; // [rsp+60h] [rbp-138h] BYREF
  __int64 v32; // [rsp+68h] [rbp-130h]
  char v33; // [rsp+70h] [rbp-128h]
  __int64 v34; // [rsp+78h] [rbp-120h] BYREF
  char v35; // [rsp+80h] [rbp-118h]
  _BYTE v36[16]; // [rsp+88h] [rbp-110h] BYREF
  _BYTE v37[40]; // [rsp+98h] [rbp-100h] BYREF
  _BYTE v38[160]; // [rsp+C0h] [rbp-D8h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2073;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2073);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2073);
  memset(&v37[8], 0, 32);
  v5 = (_QWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v37 = *v5;
  v6 = *(_DWORD *)v37;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress);
  v30 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29, v6, Current, &v30);
  v8 = v30;
  if ( !v30 )
  {
    WdLogSingleEntry1(3LL, v6);
    if ( !v29 )
    {
LABEL_50:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v31);
      }
      return 3221225485LL;
    }
LABEL_48:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    goto LABEL_50;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v36, v30);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, (__int64)v8, 0, v9, 0);
  v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v38, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(3LL, v8, v10);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v36);
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v31);
    return v11;
  }
  v15 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 4);
  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
    (DXGAUTOPUSHLOCKFASTSHARED *)&v34,
    (struct DXGGLOBAL *)((char *)Global + 40));
  v17 = ((unsigned int)a2 >> 6) & 0xFFFFFF;
  if ( v17 >= *(_DWORD *)(v15 + 16) )
    goto LABEL_45;
  v18 = *(_QWORD *)v15;
  v19 = *(_DWORD *)(*(_QWORD *)v15 + 16LL * v17 + 8);
  if ( (unsigned int)a2 >> 30 != ((v19 >> 5) & 3) )
    goto LABEL_45;
  if ( (v19 & 0x2000) != 0 )
    goto LABEL_45;
  v20 = v19 & 0x1F;
  if ( !v20 )
    goto LABEL_45;
  if ( v20 != 4 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_45;
  }
  v21 = *(_QWORD *)(v18 + 16LL * v17);
  if ( !v21 )
  {
LABEL_45:
    WdLogSingleEntry1(3LL, a2);
    if ( v35 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v34 + 16));
      ExReleasePushLockSharedEx(v34, 0LL);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v36);
    if ( !v29 )
      goto LABEL_50;
    goto LABEL_48;
  }
  if ( v35 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v34 + 16));
    ExReleasePushLockSharedEx(v34, 0LL);
    KeLeaveCriticalRegion();
    v35 = 0;
    v8 = v30;
  }
  Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)v8, v37, v18, v21);
  if ( Resource >= 0 )
  {
    if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a1 = *(_OWORD *)v37;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v37[16];
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v37[32];
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v36);
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v31);
    return 0LL;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v36);
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v31);
    return (unsigned int)Resource;
  }
}
