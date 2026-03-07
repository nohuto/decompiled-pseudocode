__int64 __fastcall DxgkCddUnlock(struct _D3DKMT_UNLOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  D3DKMT_HANDLE hDevice; // edx
  DXGDEVICE *v9; // rdi
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r14
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 CurrentProcess; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DXGDEVICE *v20; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v21; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-A0h] BYREF
  char v23; // [rsp+78h] [rbp-90h]
  _BYTE v24[24]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v25[8]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v26[64]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v27[88]; // [rsp+E0h] [rbp-28h] BYREF

  LODWORD(v22[0]) = -1;
  v22[1] = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    LODWORD(v22[0]) = 3007;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3007);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v22, 3007);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  v7 = (__int64)Current;
  if ( Current )
  {
    hDevice = a1->hDevice;
    v20 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, hDevice, Current, &v20);
    v9 = v20;
    if ( v20 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v24, v20);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, (__int64)v9, 2, v10, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v25, 0LL) < 0 )
      {
        v13 = 0;
      }
      else
      {
        v11 = DXGDEVICE::Unlock(v9, a1, 0);
        v12 = v11;
        if ( v11 < 0 )
        {
          WdLogSingleEntry3(2LL, v11, v9, v7);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%I64x DxgkCddUnlock failed 0x%I64x 0x%I64x",
            v12,
            (__int64)v9,
            v7,
            0LL,
            0LL);
        }
        v13 = v12;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v27);
      COREACCESS::~COREACCESS((COREACCESS *)v26);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v24);
    }
    else
    {
      v13 = -1073741811;
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
    }
    if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    v13 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v19 = PsGetCurrentProcess(v18);
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v22);
  if ( v23 )
  {
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v22[0]);
  }
  return v13;
}
