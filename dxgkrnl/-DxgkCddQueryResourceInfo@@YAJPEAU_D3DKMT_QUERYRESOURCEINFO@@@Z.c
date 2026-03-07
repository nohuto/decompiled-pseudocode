__int64 __fastcall DxgkCddQueryResourceInfo(struct _D3DKMT_QUERYRESOURCEINFO *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v6; // rbx
  __int64 v7; // r9
  int Resource; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGDEVICE *v13; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v14; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v15[2]; // [rsp+68h] [rbp-A0h] BYREF
  char v16; // [rsp+78h] [rbp-90h]
  _BYTE v17[24]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v18[8]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v19[64]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v20[88]; // [rsp+E0h] [rbp-28h] BYREF

  LODWORD(v15[0]) = -1;
  v15[1] = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v16 = 1;
    LODWORD(v15[0]) = 3035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3035);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v15, 3035);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    hDevice = a1->hDevice;
    v13 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v14, hDevice, Current, &v13);
    v6 = v13;
    if ( v13 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v17, v13);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v18, (__int64)v6, 0, v7, 0);
      Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v18, 0LL);
      if ( Resource >= 0 )
        Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v6, a1, a1->hGlobalShare);
      v9 = Resource;
      COREACCESS::~COREACCESS((COREACCESS *)v20);
      COREACCESS::~COREACCESS((COREACCESS *)v19);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v17);
    }
    else
    {
      v9 = -1073741811;
      WdLogSingleEntry2(2LL, a1->hDevice, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        a1->hDevice,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v14 && _InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v14 + 2), v14);
  }
  else
  {
    v9 = -1073741811;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v15);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v15[0]);
  return v9;
}
