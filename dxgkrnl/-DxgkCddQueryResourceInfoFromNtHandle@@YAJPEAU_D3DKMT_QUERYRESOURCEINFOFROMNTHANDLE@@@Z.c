__int64 __fastcall DxgkCddQueryResourceInfoFromNtHandle(
        struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rax
  int Resource; // ebx
  D3DKMT_HANDLE hDevice; // edx
  __int64 v8; // r9
  HANDLE hNtHandle; // rcx
  NTSTATUS v10; // eax
  __int64 v11; // r8
  PVOID v12; // r14
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGDEVICE *v17; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v18; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v20[2]; // [rsp+70h] [rbp-98h] BYREF
  char v21; // [rsp+80h] [rbp-88h]
  _BYTE v22[16]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v23[8]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v24[64]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v25[88]; // [rsp+E0h] [rbp-28h] BYREF

  LODWORD(v20[0]) = -1;
  v20[1] = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    LODWORD(v20[0]) = 3056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3056);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v20, 3056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    Resource = -1073741811;
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
    goto LABEL_24;
  }
  hDevice = a1->hDevice;
  v18 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v17, hDevice, Current, &v18);
  if ( !v18 )
  {
    Resource = -1073741811;
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
    if ( !v17 )
      goto LABEL_24;
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v22, v18);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v18, 0, v8, 0);
  Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23, 0LL);
  if ( Resource < 0 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v25);
    COREACCESS::~COREACCESS((COREACCESS *)v24);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v22);
    if ( !v17 )
      goto LABEL_24;
LABEL_9:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v17 + 2), v17);
    goto LABEL_24;
  }
  hNtHandle = a1->hNtHandle;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(hNtHandle, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v12 = Object;
  v13 = -1073741788LL;
  Resource = v10;
  if ( v10 != -1073741788 )
  {
    if ( v10 >= 0 )
    {
      Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
                   (__int64)v18,
                   a1,
                   v11,
                   (__int64)Object);
      COREACCESS::~COREACCESS((COREACCESS *)v25);
      COREACCESS::~COREACCESS((COREACCESS *)v24);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v22);
      if ( v17 )
        goto LABEL_20;
      goto LABEL_22;
    }
    v13 = v10;
  }
  WdLogSingleEntry3(3LL, v18, a1->hNtHandle, v13);
  COREACCESS::~COREACCESS((COREACCESS *)v25);
  COREACCESS::~COREACCESS((COREACCESS *)v24);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v22);
  if ( v17 )
  {
LABEL_20:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v17 + 2), v17);
  }
LABEL_22:
  if ( v12 )
    ObfDereferenceObject(v12);
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v20);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v20[0]);
  return (unsigned int)Resource;
}
