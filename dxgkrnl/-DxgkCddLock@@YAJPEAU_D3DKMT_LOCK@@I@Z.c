__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // r15
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 CurrentProcess; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // ecx
  struct _EX_RUNDOWN_REF *v29; // rdx
  struct DXGDEVICE *v30; // rbx
  struct _EX_RUNDOWN_REF *v31; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v32; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h]
  char v36; // [rsp+78h] [rbp-88h]
  _BYTE v37[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+88h] [rbp-78h]
  char v39; // [rsp+90h] [rbp-70h]
  _BYTE v40[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v41[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v42[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v43[88]; // [rsp+F8h] [rbp-8h] BYREF

  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v36 = 1;
    v34 = 3006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3006);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 3006);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  v7 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    v16 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v22 = PsGetCurrentProcess(v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v22,
      0LL,
      0LL,
      0LL);
    goto LABEL_14;
  }
  hDevice = a1->hDevice;
  v32 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, hDevice, Current, &v32);
  v9 = v32;
  if ( v32 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40, v32);
    v10 = *((_QWORD *)v9 + 2);
    v39 = 0;
    v38 = *(_QWORD *)(v10 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v9, 2, v11, 0);
    v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v41, 0LL);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry3(4LL, v12, v9, v7);
      v16 = v13;
      goto LABEL_8;
    }
    v14 = DXGDEVICE::Lock(v9, a1, (struct COREDEVICEACCESS *)v41);
    v15 = v14;
    if ( v14 >= 0 )
    {
LABEL_7:
      v16 = v15;
LABEL_8:
      COREACCESS::~COREACCESS((COREACCESS *)v43);
      COREACCESS::~COREACCESS((COREACCESS *)v42);
      if ( v39 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40);
      goto LABEL_11;
    }
    hAllocation = a1->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 248));
    v24 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v24 < *(_DWORD *)(v7 + 296) )
    {
      v25 = *(_QWORD *)(v7 + 280);
      v26 = 2LL * v24;
      v27 = *(_DWORD *)(v25 + 16LL * v24 + 8);
      if ( ((hAllocation >> 25) & 0x60) == (v27 & 0x60) && (v27 & 0x2000) == 0 )
      {
        v28 = v27 & 0x1F;
        if ( v28 )
        {
          if ( v28 == 5 )
          {
            v29 = *(struct _EX_RUNDOWN_REF **)(v25 + 8 * v26);
            goto LABEL_28;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v29 = 0LL;
LABEL_28:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31, v29);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 264));
    ExReleasePushLockSharedEx(v7 + 248, 0LL);
    KeLeaveCriticalRegion();
    v30 = v32;
    WdLogSingleEntry5(2LL, v15, v32, v7, a1->hAllocation, v31);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Lock failed 0x%I64x 0x%I64x 0x%I64x 0x%I64x",
      v15,
      (__int64)v30,
      v7,
      a1->hAllocation,
      (__int64)v31);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
    goto LABEL_7;
  }
  v16 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, a1->hDevice, v7);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
    -1073741811LL,
    a1->hDevice,
    v7,
    0LL,
    0LL);
LABEL_11:
  if ( v33 && _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 )
  {
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v34);
  }
  return v16;
}
