/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C0188420
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000778C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0007850 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018C900 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C01C5980 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C01CB650 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rsi
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // r15
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 CurrentProcess; // rax
  __int64 v19; // rax
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // ecx
  struct DXGALLOCATION *v26; // rdx
  struct DXGDEVICE *v27; // rbx
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v29; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  char v33; // [rsp+78h] [rbp-88h]
  _BYTE v34[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h]
  char v36; // [rsp+90h] [rbp-70h]
  _BYTE v37[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v38[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v39[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v40[88]; // [rsp+F8h] [rbp-8h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 3006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3006);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 3006);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v5 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess();
    v14 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v19 = PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v19,
      0LL,
      0LL,
      0LL);
    goto LABEL_14;
  }
  hDevice = a1->hDevice;
  v29 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30, hDevice, Current, &v29);
  v7 = v29;
  if ( v29 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37, v29);
    v8 = *((_QWORD *)v7 + 2);
    v36 = 0;
    v35 = *(_QWORD *)(v8 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, (__int64)v7, 2, v9, 0);
    v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v38, 0LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry3(4LL, v10, v7, v5);
      v14 = v11;
      goto LABEL_8;
    }
    v12 = DXGDEVICE::Lock(v7, a1, (struct COREDEVICEACCESS *)v38);
    v13 = v12;
    if ( v12 >= 0 )
    {
LABEL_7:
      v14 = v13;
LABEL_8:
      COREACCESS::~COREACCESS((COREACCESS *)v40);
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      if ( v36 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37);
      goto LABEL_11;
    }
    hAllocation = a1->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v5 + 248));
    v21 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v21 < *(_DWORD *)(v5 + 296) )
    {
      v22 = *(_QWORD *)(v5 + 280);
      v23 = 2LL * v21;
      v24 = *(_DWORD *)(v22 + 16LL * v21 + 8);
      if ( ((hAllocation >> 25) & 0x60) == (v24 & 0x60) && (v24 & 0x2000) == 0 )
      {
        v25 = v24 & 0x1F;
        if ( v25 )
        {
          if ( v25 == 5 )
          {
            v26 = *(struct DXGALLOCATION **)(v22 + 8 * v23);
            goto LABEL_28;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v26 = 0LL;
LABEL_28:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28, v26);
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 264));
    ExReleasePushLockSharedEx(v5 + 248, 0LL);
    KeLeaveCriticalRegion();
    v27 = v29;
    WdLogSingleEntry5(2LL, v13, v29, v5, a1->hAllocation, v28);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Lock failed 0x%I64x 0x%I64x 0x%I64x 0x%I64x",
      v13,
      (__int64)v27,
      v5,
      a1->hAllocation,
      v28);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28);
    goto LABEL_7;
  }
  v14 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, a1->hDevice, v5);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
    -1073741811LL,
    a1->hDevice,
    v5,
    0LL,
    0LL);
LABEL_11:
  if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 )
  {
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v31);
  }
  return v14;
}
